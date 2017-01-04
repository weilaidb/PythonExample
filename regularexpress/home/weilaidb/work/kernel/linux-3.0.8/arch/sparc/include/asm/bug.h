#define _SPARC_BUG_H
extern void do_BUG(const char *file, int line);
#define BUG() do  while (0)
#define BUG()		__builtin_trap()
#define HAVE_ARCH_BUG
