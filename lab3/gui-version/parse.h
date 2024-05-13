#ifndef _PARSE_H_
#define _PARSE_H_

#include "globals.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Function parse returns the newly
 * constructed syntax tree
 */
TreeNode * parse(void);

#ifdef __cplusplus
}
#endif

#endif // _PARSE_H_
