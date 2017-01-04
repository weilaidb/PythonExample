static long compat_ptrace_old(struct task_struct *child, long request,
long addr, long data)
#define FPRNUMBER(i) (((i) - PT_FPR0) >> 1)
#define FPRHALF(i) (((i) - PT_FPR0) & 1)
#define FPRINDEX(i) TS_FPRWIDTH * FPRNUMBER(i) * 2 + FPRHALF(i)
#define FPRINDEX_3264(i) (TS_FPRWIDTH * ((i) - PT_FPR0))
long compat_arch_ptrace(struct task_struct *child, compat_long_t request,
compat_ulong_t caddr, compat_ulong_t cdata)
