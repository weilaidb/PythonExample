#define _ASMARM_BUG_H
extern void __bug(const char *file, int line) __attribute__((noreturn));
#define BUG()		__bug(__FILE__, __LINE__)
#define BUG()		do  while (1)
#define HAVE_ARCH_BUG
