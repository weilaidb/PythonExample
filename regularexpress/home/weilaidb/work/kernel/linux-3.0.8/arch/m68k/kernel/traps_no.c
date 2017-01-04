static char const * const vec_names[] = ;
void __init trap_init(void)
void die_if_kernel(char *str, struct pt_regs *fp, int nr)
asmlinkage void buserr_c(struct frame *fp)
static void print_this_address(unsigned long addr, int i)
int kstack_depth_to_print = 48;
static void __show_stack(struct task_struct *task, unsigned long *stack)
void bad_super_trap(struct frame *fp)
asmlinkage void trap_c(struct frame *fp)
asmlinkage void set_esp0(unsigned long ssp)
void dump_stack(void)
EXPORT_SYMBOL(dump_stack);
void show_stack(struct task_struct *task, unsigned long *stack)
