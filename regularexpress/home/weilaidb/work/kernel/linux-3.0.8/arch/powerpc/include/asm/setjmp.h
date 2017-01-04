#define _ASM_POWERPC_SETJMP_H
#define JMP_BUF_LEN    23
extern long setjmp(long *);
extern void longjmp(long *, long);
