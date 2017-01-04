static long jdo_fork(unsigned long clone_flags, unsigned long stack_start,
struct pt_regs *regs, unsigned long stack_size,
int __user *parent_tidptr, int __user *child_tidptr)
static struct jprobe my_jprobe = ;
static int __init jprobe_init(void)
static void __exit jprobe_exit(void)
module_init(jprobe_init)
module_exit(jprobe_exit)
MODULE_LICENSE("GPL");
