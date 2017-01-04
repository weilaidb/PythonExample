#define _ASM_TILE_SIGINFO_H
#define __ARCH_SI_TRAPNO
# define __ARCH_SI_PREAMBLE_SIZE	(4 * sizeof(int))
#define ILL_DBLFLT	(__SI_FAULT|9)
#define ILL_HARDWALL	(__SI_FAULT|10)
#undef NSIGILL
#define NSIGILL		10
