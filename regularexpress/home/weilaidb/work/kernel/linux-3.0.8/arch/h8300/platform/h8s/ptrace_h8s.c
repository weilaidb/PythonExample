#define CCR_MASK  0x6f
#define EXR_TRACE 0x80
static const int h8300_register_offset[] = ;
long h8300_get_reg(struct task_struct *task, int regno)
int h8300_put_reg(struct task_struct *task, int regno, unsigned long data)
void user_disable_single_step(struct task_struct *child)
void user_enable_single_step(struct task_struct *child)
asmlinkage void trace_trap(unsigned long bp)
