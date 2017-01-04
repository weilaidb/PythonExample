void __noreturn cpu_idle(void)
asmlinkage void ret_from_fork(void);
void start_thread(struct pt_regs * regs, unsigned long pc, unsigned long sp)
void exit_thread(void)
void flush_thread(void)
int copy_thread(unsigned long clone_flags, unsigned long usp,
unsigned long unused, struct task_struct *p, struct pt_regs *regs)
int dump_fpu(struct pt_regs *regs, elf_fpregset_t *r)
void elf_dump_regs(elf_greg_t *gp, struct pt_regs *regs)
int dump_task_regs(struct task_struct *tsk, elf_gregset_t *regs)
int dump_task_fpu(struct task_struct *t, elf_fpregset_t *fpr)
static void __noreturn kernel_thread_helper(void *arg, int (*fn)(void *))
long kernel_thread(int (*fn)(void *), void *arg, unsigned long flags)
struct mips_frame_info ;
static inline int is_ra_save_ins(union mips_instruction *ip)
static inline int is_jal_jalr_jr_ins(union mips_instruction *ip)
static inline int is_sp_move_ins(union mips_instruction *ip)
static int get_frame_info(struct mips_frame_info *info)
static struct mips_frame_info schedule_mfi __read_mostly;
static int __init frame_info_init(void)
arch_initcall(frame_info_init);
unsigned long thread_saved_pc(struct task_struct *tsk)
unsigned long unwind_stack(struct task_struct *task, unsigned long *sp,
unsigned long pc, unsigned long *ra)
unsigned long get_wchan(struct task_struct *task)
unsigned long arch_align_stack(unsigned long sp)
