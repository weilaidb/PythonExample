#define __SYSDEP_X86_64_SIGCONTEXT_H
#define IP_RESTART_SYSCALL(ip) ((ip) -= 2)
#define GET_FAULTINFO_FROM_SC(fi, sc) \
#define SEGV_IS_FIXABLE(fi)	((fi)->trap_no == 14)
#define SEGV_MAYBE_FIXABLE(fi)	0
