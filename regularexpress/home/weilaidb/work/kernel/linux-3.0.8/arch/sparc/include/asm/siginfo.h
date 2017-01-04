#define __SPARC_SIGINFO_H
#if defined(__sparc__) && defined(__arch64__)
#define SI_PAD_SIZE32	((SI_MAX_SIZE/sizeof(int)) - 3)
#define __ARCH_SI_PREAMBLE_SIZE	(4 * sizeof(int))
#define __ARCH_SI_BAND_T int
#define __ARCH_SI_TRAPNO
struct compat_siginfo;
#define SI_NOINFO	32767
#define EMT_TAGOVF	(__SI_FAULT|1)
#define NSIGEMT		1
