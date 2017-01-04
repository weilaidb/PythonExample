#define _ASM_SIGINFO_H
#define __ARCH_SIGEV_PREAMBLE_SIZE (sizeof(long) + 2*sizeof(int))
#undef __ARCH_SI_TRAPNO
#define HAVE_ARCH_SIGINFO_T
#define HAVE_ARCH_COPY_SIGINFO
struct siginfo;
#define __ARCH_SI_PREAMBLE_SIZE (3 * sizeof(int))
#define __ARCH_SI_PREAMBLE_SIZE (4 * sizeof(int))
typedef struct siginfo  siginfo_t;
#undef SI_ASYNCIO
#undef SI_TIMER
#undef SI_MESGQ
#define SI_ASYNCIO	-2
#define SI_TIMER __SI_CODE(__SI_TIMER, -3)
#define SI_MESGQ __SI_CODE(__SI_MESGQ, -4)
static inline void copy_siginfo(struct siginfo *to, struct siginfo *from)
