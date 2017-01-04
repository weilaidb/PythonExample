#define _ASM_BUG_H
extern asmlinkage void __debug_bug_trap(int signr);
#define	_debug_bug_printk()
extern void __debug_bug_printk(const char *file, unsigned line);
#define	_debug_bug_printk() __debug_bug_printk(__FILE__, __LINE__)
#define _debug_bug_trap(signr)			\
do  while(1)
#define HAVE_ARCH_BUG
#define BUG()					\
do  while (0)
#define HAVE_ARCH_KGDB_RAISE
#define kgdb_raise(signr) do  while(0)
#define HAVE_ARCH_KGDB_BAD_PAGE
#define kgdb_bad_page(page) do  while(0)
