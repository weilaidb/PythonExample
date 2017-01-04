#define __SYS_SIGCONTEXT_I386_H
#define IP_RESTART_SYSCALL(ip) ((ip) -= 2)
#define GET_FAULTINFO_FROM_SC(fi, sc) \
#define SEGV_IS_FIXABLE(fi)	((fi)->trap_no == 14)
#define SEGV_MAYBE_FIXABLE(fi)	((fi)->trap_no == 0 && ptrace_faultinfo)
