#define _ASM_IA64_BUG_H
#define ia64_abort()	__builtin_trap()
#define BUG() do  while (0)
#define HAVE_ARCH_BUG
