extern int __syscall_stub_start;
static int init_stub_pte(struct mm_struct *mm, unsigned long proc,
unsigned long kernel)
int init_new_context(struct task_struct *task, struct mm_struct *mm)
void arch_dup_mmap(struct mm_struct *oldmm, struct mm_struct *mm)
void arch_exit_mmap(struct mm_struct *mm)
void destroy_context(struct mm_struct *mm)
