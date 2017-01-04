#define _ASM_PTRACE_H
#define FPR_BASE	32
#define PC		64
#define CAUSE		65
#define BADVADDR	66
#define MMHI		67
#define MMLO		68
#define FPC_CSR		69
#define FPC_EIR		70
#define DSP_BASE	71
#define DSP_CONTROL	77
#define ACX		78
struct pt_regs  __attribute__ ((aligned (8)));
#define PTRACE_GETREGS		12
#define PTRACE_SETREGS		13
#define PTRACE_GETFPREGS		14
#define PTRACE_SETFPREGS		15
#define PTRACE_OLDSETOPTIONS	21
#define PTRACE_GET_THREAD_AREA	25
#define PTRACE_SET_THREAD_AREA	26
#define PTRACE_PEEKTEXT_3264	0xc0
#define PTRACE_PEEKDATA_3264	0xc1
#define PTRACE_POKETEXT_3264	0xc2
#define PTRACE_POKEDATA_3264	0xc3
#define PTRACE_GET_THREAD_AREA_3264	0xc4
enum pt_watch_style ;
struct mips32_watch_regs  __attribute__((aligned(8)));
struct mips64_watch_regs  __attribute__((aligned(8)));
struct pt_watch_regs ;
#define PTRACE_GET_WATCH_REGS	0xd0
#define PTRACE_SET_WATCH_REGS	0xd1
struct task_struct;
extern int ptrace_getregs(struct task_struct *child, __s64 __user *data);
extern int ptrace_setregs(struct task_struct *child, __s64 __user *data);
extern int ptrace_getfpregs(struct task_struct *child, __u32 __user *data);
extern int ptrace_setfpregs(struct task_struct *child, __u32 __user *data);
extern int ptrace_get_watch_regs(struct task_struct *child,
struct pt_watch_regs __user *addr);
extern int ptrace_set_watch_regs(struct task_struct *child,
struct pt_watch_regs __user *addr);
#define user_mode(regs) (((regs)->cp0_status & KU_MASK) == KU_USER)
#define regs_return_value(_regs) ((_regs)->regs[2])
#define instruction_pointer(regs) ((regs)->cp0_epc)
#define profile_pc(regs) instruction_pointer(regs)
extern asmlinkage void syscall_trace_enter(struct pt_regs *regs);
extern asmlinkage void syscall_trace_leave(struct pt_regs *regs);
extern NORET_TYPE void die(const char *, struct pt_regs *) ATTRIB_NORET;
static inline void die_if_kernel(const char *str, struct pt_regs *regs)
