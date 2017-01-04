static struct kprobe kp = ;
static int handler_pre(struct kprobe *p, struct pt_regs *regs)
static void handler_post(struct kprobe *p, struct pt_regs *regs,
unsigned long flags)
static int handler_fault(struct kprobe *p, struct pt_regs *regs, int trapnr)
static int __init kprobe_init(void)
static void __exit kprobe_exit(void)
module_init(kprobe_init)
module_exit(kprobe_exit)
MODULE_LICENSE("GPL");
