static const union mips_instruction breakpoint_insn = ;
static const union mips_instruction breakpoint2_insn = ;
DEFINE_PER_CPU(struct kprobe *, current_kprobe);
DEFINE_PER_CPU(struct kprobe_ctlblk, kprobe_ctlblk);
static int __kprobes insn_has_delayslot(union mips_instruction insn)
int __kprobes arch_prepare_kprobe(struct kprobe *p)
void __kprobes arch_arm_kprobe(struct kprobe *p)
void __kprobes arch_disarm_kprobe(struct kprobe *p)
void __kprobes arch_remove_kprobe(struct kprobe *p)
static void save_previous_kprobe(struct kprobe_ctlblk *kcb)
static void restore_previous_kprobe(struct kprobe_ctlblk *kcb)
static void set_current_kprobe(struct kprobe *p, struct pt_regs *regs,
struct kprobe_ctlblk *kcb)
static void prepare_singlestep(struct kprobe *p, struct pt_regs *regs)
static int __kprobes kprobe_handler(struct pt_regs *regs)
static void __kprobes resume_execution(struct kprobe *p,
struct pt_regs *regs,
struct kprobe_ctlblk *kcb)
static inline int post_kprobe_handler(struct pt_regs *regs)
static inline int kprobe_fault_handler(struct pt_regs *regs, int trapnr)
int __kprobes kprobe_exceptions_notify(struct notifier_block *self,
unsigned long val, void *data)
int __kprobes setjmp_pre_handler(struct kprobe *p, struct pt_regs *regs)
void jprobe_return_end(void);
void __kprobes jprobe_return(void)
int __kprobes longjmp_break_handler(struct kprobe *p, struct pt_regs *regs)
static void __used kretprobe_trampoline_holder(void)
void kretprobe_trampoline(void);
void __kprobes arch_prepare_kretprobe(struct kretprobe_instance *ri,
struct pt_regs *regs)
static int __kprobes trampoline_probe_handler(struct kprobe *p,
struct pt_regs *regs)
int __kprobes arch_trampoline_kprobe(struct kprobe *p)
static struct kprobe trampoline_p = ;
int __init arch_init_kprobes(void)
