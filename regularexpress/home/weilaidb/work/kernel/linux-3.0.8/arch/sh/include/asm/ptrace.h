#define __ASM_SH_PTRACE_H
#define PTRACE_GETREGS		12
#define PTRACE_SETREGS		13
#define PTRACE_GETFPREGS	14
#define PTRACE_SETFPREGS	15
#define PTRACE_GETFDPIC		31
#define PTRACE_GETFDPIC_EXEC	0
#define PTRACE_GETFDPIC_INTERP	1
#define	PTRACE_GETDSPREGS	55
#define	PTRACE_SETDSPREGS	56
#define PT_TEXT_END_ADDR	240
#define PT_TEXT_ADDR		244
#define PT_DATA_ADDR		248
#define PT_TEXT_LEN		252
#if defined(__SH5__) || defined(CONFIG_CPU_SH5)
#define user_mode(regs)			(((regs)->sr & 0x40000000)==0)
#define kernel_stack_pointer(_regs)	((unsigned long)(_regs)->regs[15])
#define GET_FP(regs)	((regs)->regs[14])
#define GET_USP(regs)	((regs)->regs[15])
extern void show_regs(struct pt_regs *);
#define arch_has_single_step()	(1)
struct pt_regs_offset ;
#define REG_OFFSET_NAME(r)
#define REGS_OFFSET_NAME(num)	\
#define TREGS_OFFSET_NAME(num)	\
#define REG_OFFSET_END
extern int regs_query_register_offset(const char *name);
extern const char *regs_query_register_name(unsigned int offset);
extern const struct pt_regs_offset regoffset_table[];
static inline unsigned long regs_get_register(struct pt_regs *regs,
unsigned int offset)
static inline int regs_within_kernel_stack(struct pt_regs *regs,
unsigned long addr)
static inline unsigned long regs_get_kernel_stack_nth(struct pt_regs *regs,
unsigned int n)
struct perf_event;
struct perf_sample_data;
extern void ptrace_triggered(struct perf_event *bp, int nmi,
struct perf_sample_data *data, struct pt_regs *regs);
#define task_pt_regs(task) \
((struct pt_regs *) (task_stack_page(task) + THREAD_SIZE) - 1)
static inline unsigned long profile_pc(struct pt_regs *regs)
#define profile_pc profile_pc
