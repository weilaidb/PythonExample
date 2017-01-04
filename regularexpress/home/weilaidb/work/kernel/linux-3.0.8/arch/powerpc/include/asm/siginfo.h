#define _ASM_POWERPC_SIGINFO_H
#    define __ARCH_SI_PREAMBLE_SIZE	(4 * sizeof(int))
#    define SI_PAD_SIZE32		((SI_MAX_SIZE/sizeof(int)) - 3)
#undef NSIGTRAP
#define NSIGTRAP	4
