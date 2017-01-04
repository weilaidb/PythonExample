#define _ASM_IA64_PTRACE_H
#if defined(CONFIG_IA64_PAGE_SIZE_4KB)
# define KERNEL_STACK_SIZE_ORDER		3
#elif defined(CONFIG_IA64_PAGE_SIZE_8KB)
# define KERNEL_STACK_SIZE_ORDER		2
#elif defined(CONFIG_IA64_PAGE_SIZE_16KB)
# define KERNEL_STACK_SIZE_ORDER		1
# define KERNEL_STACK_SIZE_ORDER		0
#define IA64_RBS_OFFSET			((IA64_TASK_SIZE + IA64_THREAD_INFO_SIZE + 31) & ~31)
#define IA64_STK_OFFSET			((1 << KERNEL_STACK_SIZE_ORDER)*PAGE_SIZE)
#define KERNEL_STACK_SIZE		IA64_STK_OFFSET
struct pt_regs ;
struct switch_stack ;
# define instruction_pointer(regs) ((regs)->cr_iip + ia64_psr(regs)->ri)
static inline unsigned long user_stack_pointer(struct pt_regs *regs)
#define regs_return_value(regs) ((regs)->r8)
#define profile_pc(regs)						\
()
# define task_pt_regs(t)		(((struct pt_regs *) ((char *) (t) + IA64_STK_OFFSET)) - 1)
# define ia64_psr(regs)			((struct ia64_psr *) &(regs)->cr_ipsr)
# define user_mode(regs)		(((struct ia64_psr *) &(regs)->cr_ipsr)->cpl != 0)
# define user_stack(task,regs)	((long) regs - (long) task == IA64_STK_OFFSET - sizeof(*regs))
# define fsys_mode(task,regs)					\
()
# define force_successful_syscall_return()	(task_pt_regs(current)->r8 = 0)
struct task_struct;
struct unw_frame_info;
extern void show_regs (struct pt_regs *);
extern void ia64_do_show_stack (struct unw_frame_info *, void *);
extern unsigned long ia64_get_user_rbs_end (struct task_struct *, struct pt_regs *,
unsigned long *);
extern long ia64_peek (struct task_struct *, struct switch_stack *, unsigned long,
unsigned long, long *);
extern long ia64_poke (struct task_struct *, struct switch_stack *, unsigned long,
unsigned long, long);
extern void ia64_flush_fph (struct task_struct *);
extern void ia64_sync_fph (struct task_struct *);
extern void ia64_sync_krbs(void);
extern long ia64_sync_user_rbs (struct task_struct *, struct switch_stack *,
unsigned long, unsigned long);
extern unsigned long ia64_get_scratch_nat_bits (struct pt_regs *pt, unsigned long scratch_unat);
extern unsigned long ia64_put_scratch_nat_bits (struct pt_regs *pt, unsigned long nat);
extern void ia64_increment_ip (struct pt_regs *pt);
extern void ia64_decrement_ip (struct pt_regs *pt);
extern void ia64_ptrace_stop(void);
#define arch_ptrace_stop(code, info) \
ia64_ptrace_stop()
#define arch_ptrace_stop_needed(code, info) \
(!test_thread_flag(TIF_RESTORE_RSE))
extern void ptrace_attach_sync_user_rbs (struct task_struct *);
#define arch_ptrace_attach(child) \
ptrace_attach_sync_user_rbs(child)
#define arch_has_single_step()  (1)
#define arch_has_block_step()   (1)
struct pt_all_user_regs ;
#define PT_AUR_RSC	16
#define PT_AUR_BSP	17
#define PT_AUR_BSPSTORE	18
#define PT_AUR_RNAT	19
#define PT_AUR_CCV	32
#define PT_AUR_UNAT	36
#define PT_AUR_FPSR	40
#define PT_AUR_PFS	64
#define PT_AUR_LC	65
#define PT_AUR_EC	66
#define PTRACE_SINGLEBLOCK	12
#define PTRACE_OLD_GETSIGINFO	13
#define PTRACE_OLD_SETSIGINFO	14
#define PTRACE_GETREGS		18
#define PTRACE_SETREGS		19
#define PTRACE_OLDSETOPTIONS	21
