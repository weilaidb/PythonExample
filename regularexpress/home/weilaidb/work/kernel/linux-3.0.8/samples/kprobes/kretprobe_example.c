static char func_name[NAME_MAX] = "do_fork";
module_param_string(func, func_name, NAME_MAX, S_IRUGO);
MODULE_PARM_DESC(func, "Function to kretprobe; this module will report the"
" function's execution time");
struct my_data ;
static int entry_handler(struct kretprobe_instance *ri, struct pt_regs *regs)
static int ret_handler(struct kretprobe_instance *ri, struct pt_regs *regs)
static struct kretprobe my_kretprobe = ;
static int __init kretprobe_init(void)
static void __exit kretprobe_exit(void)
module_init(kretprobe_init)
module_exit(kretprobe_exit)
MODULE_LICENSE("GPL");
