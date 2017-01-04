#define _LINUX_FTRACE_IRQ_H
extern void ftrace_nmi_enter(void);
extern void ftrace_nmi_exit(void);
static inline void ftrace_nmi_enter(void)
static inline void ftrace_nmi_exit(void)
