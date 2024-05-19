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
{
    EchoSource = FALSE;
    TraceScan = FALSE;
    TraceParse = TRUE;
    TraceAnalyze = FALSE;
    TraceCode = FALSE;
    lineno = 0;

    TreeNode * syntaxTree;
  char pgm[120]; /* source code file name */
  strcpy(pgm,filename) ;
  if (strchr (pgm, '.') == NULL)
     strcat(pgm,".tny");
  source = fopen(pgm,"r");
  char *errorlogfile = "error.log";
  listing = fopen(errorlogfile, "w");

  if (source==NULL)
  { fprintf(stderr,"File %s not found\n",pgm);
    exit(1);
  }
  if (listing==NULL)
  { fprintf(stderr,"File %s not found\n",errorlogfile);
      exit(1);
  }

  syntaxTree = parse(); /*这里进行分析，得到分析树*/
  fclose(listing);
  fclose(source);

  return syntaxTree;/*这里返回树*/

}


