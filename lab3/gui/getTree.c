#include"getTree.h"

/* allocate global variables */
int lineno = 0;
FILE * source;
FILE * listing;
FILE * code;

/* allocate and set tracing flags */
int EchoSource = FALSE;
int TraceScan = FALSE;
int TraceParse = TRUE;
int TraceAnalyze = FALSE;
int TraceCode = FALSE;

int Error = FALSE;

TreeNode *getSyntaxTree(char *filename)
{ TreeNode * syntaxTree;
  char pgm[120]; /* source code file name */
  strcpy(pgm,filename) ;
  if (strchr (pgm, '.') == NULL)
     strcat(pgm,".tny");
  source = fopen(pgm,"r");
  if (source==NULL)
  { fprintf(stderr,"File %s not found\n",pgm);
    exit(1);
  }
  listing = stdout; /* send listing to screen */
  fprintf(listing,"\nTINY COMPILATION: %s\n",pgm);

  syntaxTree = parse(); /*这里进行分析，得到分析树*/
  if (TraceParse) {
    fprintf(listing,"\nSyntax tree:\n");
    return syntaxTree;/*这里打印树*/
    
    //Todo: 从这里返回语法分析树

  }
}


