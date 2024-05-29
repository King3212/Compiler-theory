/****************************************************/
/* File: parse.c                                    */
/* The parser implementation for the TINY compiler  */
/* Compiler Construction: Principles and Practice   */
/* Kenneth C. Louden                                */
/****************************************************/

#include "globals.h"
#include "util.h"
#include "scan.h"
#include "parse.h"

static TokenType token; /* holds current token */

/* function prototypes for recursive calls */
TreeNode *stmt_sequence(void);
TreeNode *statement(void);
TreeNode *if_stmt(void);
TreeNode *repeat_stmt(void);
TreeNode *assign_stmt(void);
TreeNode *read_stmt(void);
TreeNode *write_stmt(void);
TreeNode *Exp(void);
TreeNode *simple_exp(void);
TreeNode *term(void);
TreeNode *factor(void);
TreeNode *for_stmt(void);
TreeNode *while_stmt(void);
TreeNode *re_exp(void);
TreeNode *simple_re_exp(void);
TreeNode *closure(void);
TreeNode *re_factor(void);
TreeNode *power_exp(void);
void syntaxError(char *message)
{
  fprintf(listing, "\n>>> Syntax error at line %d: %s", lineno, message);
  Error = TRUE;
}

static void match(TokenType expected)
{
  if (token == expected)
    token = getToken();
  else
  {
    syntaxError("unexpected token -> ");
    printToken(token, tokenString);
    fprintf(listing, "      ");
  }
}

TreeNode *stmt_sequence(void) /*语句*/
{
  TreeNode *t = statement();
  TreeNode *p = t;
  while ((token != ENDFILE) && (token != ENDWHILE) &&
         (token != ELSE) && (token != UNTIL))
  {
    TreeNode *q;
    match(SEMI);
    if (token == SEMI)
    {
      return t;
    }

    q = statement();
    if (q != NULL)
    {
      if (t == NULL)
        t = p = q;
      else /* now p cannot be NULL either */
      {
        p->sibling = q;
        p = q;
      }
    }
  }
  return t;
}

// P394
// lineno: 961
TreeNode *statement(void) /*指令类型*/
{
  TreeNode *t = NULL;
  switch (token)
  {
  case IF:
    t = if_stmt();
    break;
  case REPEAT:
    t = repeat_stmt();
    break;
  case ID:
    t = assign_stmt();
    break;
  case READ:
    t = read_stmt();
    break;
  case WRITE:
    t = write_stmt();
    break;
  case WHILE:
    t = while_stmt();
    break;
  case FOR:
    t = for_stmt();
    break;
  default:
    syntaxError("unexpected token -> ");
    printToken(token, tokenString);
    token = getToken();
    break;
  } /* end case */
  return t;
}

// P394
// lineno: 977
TreeNode *if_stmt(void) /*if语句*/
{
  TreeNode *t = newStmtNode(IfK);
  match(IF);
  match(LPAREN);
  if (t != NULL) t->child[0] = Exp();
  match(RPAREN);
  if (t != NULL) t->child[1] = stmt_sequence();
  if (token == ELSE) {
    match(ELSE);
    TreeNode *p = newStmtNode(ElseK);
    p->child[0] = stmt_sequence();
    t->child[2] = p;
  }
  return t;
}

TreeNode *for_stmt(void) /*while语句*/
{
  TreeNode *t = newStmtNode(ForK);
  match(FOR);
  match(LPAREN);
  if (t == NULL)
    return NULL;
  t->child[0] = assign_stmt();
  match(SEMI);
  t->child[1] = Exp();
  match(SEMI);
  t->child[2] = Exp();
  match(RPAREN);
  t->child[3] = stmt_sequence();
  return t;
}

TreeNode * repeat_stmt(void)
{ TreeNode * t = newStmtNode(RepeatK);
    match(REPEAT);
    if (t!=NULL) t->child[0] = stmt_sequence();
    match(UNTIL);
    if (t!=NULL) t->child[1] = Exp();
    return t;
}

TreeNode *while_stmt(void) /*while语句*/
{
    TreeNode *t = newStmtNode(WhileK);
    match(WHILE);
    match(LPAREN);
    if (t != NULL) t->child[0] = Exp();
    match(RPAREN);
    if (t != NULL) t->child[1] = stmt_sequence();
    match(ENDWHILE);
    return t;
}

TreeNode *assign_stmt(void)
{
  TreeNode *t = newStmtNode(AssignK);
  if ((t != NULL) && (token == ID))
    t->attr.name = copyString(tokenString);
  match(ID);
  if (token == ASSIGN){
    match(ASSIGN);
    if (t != NULL)
      t->child[0] = Exp();
  }else if(token == REASSIGN){
    match(REASSIGN);
    if (t != NULL)
      t->child[0] = re_exp();
  }
  
  return t;
}

TreeNode *read_stmt(void)
{
  TreeNode *t = newStmtNode(ReadK);
  match(READ);
  if ((t != NULL) && (token == ID))
    t->attr.name = copyString(tokenString);
  match(ID);
  return t;
}

TreeNode *write_stmt(void)
{
  TreeNode *t = newStmtNode(WriteK);
  match(WRITE);
  if (t != NULL)
    t->child[0] = Exp();
  return t;
}

TreeNode *re_exp(void){
  TreeNode *t = simple_re_exp();
  while (token == OR)
  {
    TreeNode *p = newExpNode(OpK);
    if (p != NULL)
    {
      p->child[0] = t;
      p->attr.op = token;
      t = p;
      match(token);
      t->child[1] = simple_re_exp();
    }
  }
  return t;
}

TreeNode *simple_re_exp(void){
  TreeNode *t = closure();
  while (token == CONNECT)
  {
    TreeNode *p = newExpNode(OpK);
    if (p != NULL)
    {
      p->child[0] = t;
      p->attr.op = token;
      t = p;
      match(token);
      t->child[1] = closure();
    }
  }
  return t;
}


TreeNode *closure(void){
  TreeNode* t = re_factor();
  if (token == CLOSURE || token == CHOOSE)
  {
    TreeNode *p = newExpNode(OpK);
    p->attr.op = token;
    p->child[0] = t;
    t = p;
    match(token);
  }
  return t;
}

TreeNode *re_factor(void)
{
    TreeNode *t = NULL;

    if (token == NUM || token == LPAREN || token == ID){
      switch (token)
      {
      case LPAREN:
        match(LPAREN);
        t = re_exp();
        match(RPAREN);
        break;
      case NUM:
      case ID:
            while(token == NUM|| token == ID){
              if(t == NULL){
                t = newExpNode(ReK);
                t->attr.reBaseExp = new char[1]; // 分配一个字符用于空字符串
                t->attr.reBaseExp[0] = '\0'; // 初始化为空字符串
              }
              int len1 = strlen(t->attr.reBaseExp);
              int len2 = strlen(tokenString);
              // 计算新字符串的长度
              size_t newLength = len1 + len2 + 1; // +1 for null terminator

              // 分配新字符串
              char* newStr = new char[newLength];

              // 初始化并连接字符串
              strcpy(newStr, t->attr.reBaseExp);
              strcat(newStr, "");
              strcat(newStr, tokenString);

              // 释放旧字符串
              delete[] t->attr.reBaseExp;

              // 更新指针
              t->attr.reBaseExp = newStr;
              match(token);
            }
        break;
      }
    }
    return t;
}

TreeNode *Exp(void)
{
  TreeNode *t = simple_exp();
  if ((token == LT) || (token == EQ) || (token == RT) || (token == LTEQ) || (token == RTEQ) || (token == NEQ))
  {
    TreeNode *p = newExpNode(OpK);
    if (p != NULL)
    {
      p->child[0] = t;
      p->attr.op = token;
      t = p;
    }
    match(token);
    if (t != NULL)
      t->child[1] = simple_exp();
  }
  return t;
}

TreeNode *simple_exp(void)
{
  TreeNode *t = term();
  while ((token == PLUS) || (token == MINUS))
  {
    TreeNode *p = newExpNode(OpK);
    if (p != NULL)
    {
      p->child[0] = t;
      p->attr.op = token;
      t = p;
      match(token);
      t->child[1] = term();
    }
  }
  return t;
}


TreeNode *term(void)
{
  /*todo: insert % operation here*/
  TreeNode *t = power_exp();
  while ((token == TIMES) || (token == OVER) || (token == MOD))
  {
    TreeNode *p = newExpNode(OpK);
    if (p != NULL)
    {
      p->child[0] = t;
      p->attr.op = token;
      t = p;
      match(token);
      p->child[1] = power_exp();
    }
  }
  return t;
}

    /*todo: add ^operation*/
TreeNode *power_exp(void){
  TreeNode *t = factor();
  while ((token == POWER))
  {
    TreeNode *p = newExpNode(OpK);
    if (p != NULL)
    {
      p->child[0] = t;
      p->attr.op = token;
      t = p;
      match(token);
      p->child[1] = factor();
    }
  }
  return t;
}

TreeNode *factor(void)
{
  TreeNode *t = NULL;
  switch (token)
  {
  case NUM:
    t = newExpNode(ConstK);
    if ((t != NULL) && (token == NUM))
      t->attr.val = atoi(tokenString);
    match(NUM);
    break;
  case ID:
    t = newExpNode(IdK);
    if ((t != NULL) && (token == ID))
      t->attr.name = copyString(tokenString);
    match(ID);
    break;
  case LPAREN:
    match(LPAREN);
    t = Exp();
    match(RPAREN);
    break;
  case INCREASE:
  case DECREASE:
    {
      t = newExpNode(OpK);
      if (t != NULL)
      {
        t->attr.op = token;
        match(token);
        if(token == ID){
            t->child[0] = factor();
        }else{
            syntaxError("expected ID, but got: ");
            printToken(token, tokenString);
            token = getToken();
        }
      }
    }
    break;
  default:
    syntaxError("unexpected token -> ");
    printToken(token, tokenString);
    token = getToken();
    break;
  }
  return t;
}
/* BUFLEN = length of the input buffer for
   source code lines */
char lineBuf[BUFLEN]; /* holds the current line */
int linepos = 0; /* current position in LineBuf */
int bufsize = 0; /* current size of buffer string */
int EOF_flag = FALSE; /* corrects ungetNextChar behavior on EOF */
/****************************************/
/* the primary function of the parser   */
/****************************************/
/* Function parse returns the newly
 * constructed syntax tree
 */
TreeNode *parse(void)
{
    lineBuf[BUFLEN]; /* holds the current line */
    linepos = 0; /* current position in LineBuf */
    bufsize = 0; /* current size of buffer string */
    EOF_flag = FALSE; /* corrects ungetNextChar behavior on EOF */
    linepos = 0;
    bufsize = 0;
    EOF_flag = FALSE;
    lineno = 0;
    Error = FALSE;

    // 重新定位文件指针到开头
    fseek(source, 0, SEEK_SET);
  TreeNode *t;
  token = getToken();
  t = stmt_sequence();
  if (token != ENDFILE)
    syntaxError("Code ends before file\n");
  return t;
}
