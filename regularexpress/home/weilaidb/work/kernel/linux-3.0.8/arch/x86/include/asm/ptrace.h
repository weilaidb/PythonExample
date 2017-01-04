#define _ASM_X86_PTRACE_H
struct pt_regs ;
struct pt_regs ;
struct pt_regs ;
struct pt_regs ;
struct cpuinfo_x86;
struct task_struct;
extern unsigned long profile_pc(struct pt_regs *regs);
#define profile_pc profile_pc
extern unsigned long
convert_ip_to_linear(struct task_struct *child, struct pt_regs *regs);
extern void send_sigtrap(struct task_struct *tsk, struct pt_regs *regs,
int error_code, int si_code);
void signal_fault(struct pt_regs *regs, void __user *frame, char *where);
extern long syscall_trace_enter(struct pt_regs *);
extern void syscall_trace_leave(struct pt_regs *);
static inline unsigned long regs_return_value(struct pt_regs *regs)
static inline int user_mode(struct pt_regs *regs)
static inline int user_mode_vm(struct pt_regs *regs)
static inline int v8086_mode(struct pt_regs *regs)
static inline unsigned long kernel_stack_pointer(struct pt_regs *regs)
#define GET_IP(regs) ((regs)->ip)
#define GET_FP(regs) ((regs)->bp)
#define GET_USP(regs) ((regs)->sp)
extern int regs_query_register_offset(const char *name);
extern const char *regs_query_register_name(unsigned int offset);
#define MAX_REG_OFFSET (offsetof(struct pt_regs, ss))
static inline unsigned long regs_get_register(struct pt_regs *regs,
unsigned int offset)
static inline int regs_within_kernel_stack(struct pt_regs *regs,
unsigned long addr)
static inline unsigned long regs_get_kernel_stack_nth(struct pt_regs *regs,
unsigned int n)
#define arch_has_single_step()	(1)
#define arch_has_block_step()	(1)
#define arch_has_block_step()	(boot_cpu_data.x86 >= 6)
#define ARCH_HAS_USER_SINGLE_STEP_INFO
struct user_desc;
extern int do_get_thread_area(struct task_struct *p, int idx,
struct user_desc __user *info);
extern int do_set_thread_area(struct task_struct *p, int idx,
struct user_desc __user *info, int can_allocate);
