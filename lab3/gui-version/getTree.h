#ifndef GET_TREE_H
#define GET_TREE_H

#include "globals.h"
#include "util.h"
#include "parse.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Function getTree returns the syntax tree */
TreeNode *getSyntaxTree(char *filename);

#ifdef __cplusplus
}
#endif

#endif // GET_TREE_H
