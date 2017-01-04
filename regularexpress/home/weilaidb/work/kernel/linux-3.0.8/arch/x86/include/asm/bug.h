#define _ASM_X86_BUG_H
#define HAVE_ARCH_BUG
# define __BUG_C0	"2:\t.long 1b, %c0\n"
# define __BUG_C0	"2:\t.long 1b - 2b, %c0 - 2b\n"
#define BUG()							\
do  while (0)
#define BUG()							\
do  while (0)
