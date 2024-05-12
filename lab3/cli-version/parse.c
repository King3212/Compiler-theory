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
static TreeNode *stmt_sequence(void);
static TreeNode *statement(void);
static TreeNode *if_stmt(void);
static TreeNode *repeat_stmt(void);
static TreeNode *assign_stmt(void);
static TreeNode *read_stmt(void);
static TreeNode *write_stmt(void);
static TreeNode *exp(void);
static TreeNode *simple_exp(void);
static TreeNode *term(void);
static TreeNode *factor(void);
static TreeNode *for_stmt(void);
static TreeNode *while_stmt(void);
static TreeNode *re_exp(void);
static TreeNode *simple_re_exp(void);
static TreeNode *closure(void);
static TreeNode *re_factor(void);
static TreeNode *power_exp(void);
static void syntaxError(char *message)
{
  fprintf(listing, "\n>>> ");
  fprintf(listing, "Syntax error at line %d: %s", lineno, message);
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
  while ((token != ENDFILE) && (token != END) &&
         (token != ELSE) && (token != UNTIL))
  {
    TreeNode *q;
    match(SEMI);
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
  // match(IF);
  // if (t!=NULL) t->child[0] = exp();
  // match(THEN);
  // if (t!=NULL) t->child[1] = stmt_sequence();
  // if (token==ELSE) {
  //   match(ELSE);
  //   if (t!=NULL) t->child[2] = stmt_sequence();
  // }
  // match(END);

  /**todo: 重写if_stmt
   * if_stmt-->if(exp) stmt-sequence else stmt-sequence | if(exp) stmt-sequence
   * 用括号来标识exp的范围
   *
   * finish?
   */
  match(IF);
  match(LPAREN);
  if (t != NULL) t->child[0] = exp();
  match(RPAREN);
  if (t != NULL) t->child[1] = stmt_sequence();
  if (token == ELSE) {
    match(ELSE);
    if (t != NULL) t->child[2] = stmt_sequence();
  }
  return t;
}

TreeNode *for_stmt(void) /*while语句*/
{
  TreeNode *t = newStmtNode(WhileK);
  match(WhileK);
  match(LPAREN);
  if (t != NULL) t->child[0] = assign_stmt();
  if (t != NULL) t->child[1] = exp();
  if (t != NULL) t->child[2] = exp();
  match(RPAREN);
  if (t != NULL) t->child[3] = stmt_sequence();
  return t;
}

TreeNode *while_stmt(void) /*while语句*/
{
  TreeNode *t = newStmtNode(WhileK);
  match(WhileK);
  match(LPAREN);
  if (t != NULL) t->child[0] = exp();
  match(RPAREN);
  if (t != NULL) t->child[3] = stmt_sequence();
  match(ENDWHILE);
  return t;
}

// P394
// lineno:991
TreeNode *repeat_stmt(void)
{
  TreeNode *t = newStmtNode(RepeatK);
  match(REPEAT);
  if (t != NULL)
    t->child[0] = stmt_sequence();
  match(UNTIL);
  if (t != NULL)
    t->child[1] = exp();
  return t;
}

TreeNode *assign_stmt(void)
{
  TreeNode *t = newStmtNode(AssignK);
  if ((t != NULL) && (token == ID))
    t->attr.name = copyString(tokenString);
  match(ID);
  if (token == ASSIGN){
    printf("here!\n");
    t->attr.op = ASSIGN;
    match(ASSIGN);
    if (t != NULL)
      t->child[0] = exp();
  }else if(token == REASSIGN){
    printf("here RE!\n");
    t->attr.op = REASSIGN;
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
    t->child[0] = exp();
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
}

TreeNode *closure(void){
  TreeNode* t = re_factor();
  while (token == CLOSURE || token == CHOOSE)
  {
    TreeNode *p = newExpNode(OpK);
    p->attr.op = token;
    p->child[0] = t;
    t = p;
  }
  return t;
}

TreeNode *re_factor(void)
{
  TreeNode *t = NULL;
  switch (token)
  {
  case LPAREN:
    match(LPAREN);
    t = re_exp();
    match(RPAREN);
    break;
  case NUM:
  case ID:
    t = newExpNode(ConstK);
    if (t != NULL)
      t->attr.val = copyString(tokenString);
    match(token);
    break;
  default:
    syntaxError("unexpected token -> ");
    printToken(token, tokenString);
    token = getToken();
    break;
  }
  return t;
}

TreeNode *exp(void)
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
    t = exp();
    match(RPAREN);
    break;
  case INCREASE:
  case DECREASE:
    TreeNode *p = newExpNode(OpK);
    if (p != NULL)
    {
      p->attr.op = token;
      match(token);
      p->child[1] = factor();
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

/****************************************/
/* the primary function of the parser   */
/****************************************/
/* Function parse returns the newly
 * constructed syntax tree
 */
TreeNode *parse(void)
{
  TreeNode *t;
  token = getToken();
  t = stmt_sequence();
  if (token != ENDFILE)
    syntaxError("Code ends before file\n");
  return t;
}
