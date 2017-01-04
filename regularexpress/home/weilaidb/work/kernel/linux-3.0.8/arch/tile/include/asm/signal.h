#define _ASM_TILE_SIGNAL_H
#define SA_NOPTRACE 0x02000000u
#define SA_RESTORER 0x04000000u
#if defined(__KERNEL__) && !defined(__ASSEMBLY__)
struct pt_regs;
int restore_sigcontext(struct pt_regs *, struct sigcontext __user *);
int setup_sigcontext(struct sigcontext __user *, struct pt_regs *);
void do_signal(struct pt_regs *regs);
void signal_fault(const char *type, struct pt_regs *,
void __user *frame, int sig);
void trace_unhandled_signal(const char *type, struct pt_regs *regs,
unsigned long address, int signo);
