#define _ASM_DEBUGGER_H
#if defined(CONFIG_KERNEL_DEBUGGER)
extern int debugger_intercept(enum exception_code, int, int, struct pt_regs *);
extern int at_debugger_breakpoint(struct pt_regs *);
extern void debugger_local_cache_flushinv(void);
extern void debugger_local_cache_flushinv_one(u8 *);
static inline void debugger_local_cache_flushinv(void)
static inline void debugger_local_cache_flushinv_one(u8 *addr)
static inline int debugger_intercept(enum exception_code excep,
int signo, int si_code,
struct pt_regs *regs)
static inline int at_debugger_breakpoint(struct pt_regs *regs)
