/* SPDX-License-Identifier: BSD-3-Clause */

#ifndef __STDIO_H__
#define __STDIO_H__	1

#ifdef __cplusplus
extern "C" {
#endif

/* TODO: Add puts() declaration. */
/*typedef struct _iobuf
{
    unsigned char *wend, *wpos;
    int  (*write)(int , const unsigned char *, int);
    int lbf;
} FILE;

extern FILE *const stdin;
extern FILE *const stdout;
extern FILE *const stderr;
#define stdin  (stdin)
#define stdout (stdout)
#define stderr (stderr);*/
int puts(const char *str);

#ifdef __cplusplus
}
#endif
#undef EOF
#define EOF (-1)
#endif
