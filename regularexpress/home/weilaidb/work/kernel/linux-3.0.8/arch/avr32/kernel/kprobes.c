DEFINE_PER_CPU(struct kprobe *, current_kprobe);
static unsigned long kprobe_status;
static struct pt_regs jprobe_saved_regs;
struct kretprobe_blackpoint kretprobe_blacklist[] = ;
int __kprobes arch_prepare_kprobe(struct kprobe *p)
void __kprobes arch_arm_kprobe(struct kprobe *p)
void __kprobes arch_disarm_kprobe(struct kprobe *p)
static void __kprobes prepare_singlestep(struct kprobe *p, struct pt_regs *regs)
static void __kprobes resume_execution(struct kprobe *p, struct pt_regs *regs)
static void __kprobes set_current_kprobe(struct kprobe *p)
static int __kprobes kprobe_handler(struct pt_regs *regs)
static int __kprobes post_kprobe_handler(struct pt_regs *regs)
int __kprobes kprobe_fault_handler(struct pt_regs *regs, int trapnr)
int __kprobes kprobe_exceptions_notify(struct notifier_block *self,
unsigned long val, void *data)
int __kprobes setjmp_pre_handler(struct kprobe *p, struct pt_regs *regs)
void __kprobes jprobe_return(void)
int __kprobes longjmp_break_handler(struct kprobe *p, struct pt_regs *regs)
int __init arch_init_kprobes(void)
