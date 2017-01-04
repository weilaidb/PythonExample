DEFINE_PER_CPU(struct kprobe *, current_kprobe);
DEFINE_PER_CPU(struct kprobe_ctlblk, kprobe_ctlblk);
struct kretprobe_blackpoint kretprobe_blacklist[] = ;
static int __kprobes is_prohibited_opcode(kprobe_opcode_t *insn)
static int __kprobes get_fixup_type(kprobe_opcode_t *insn)
int __kprobes arch_prepare_kprobe(struct kprobe *p)
struct ins_replace_args ;
static int __kprobes swap_instruction(void *aref)
void __kprobes arch_arm_kprobe(struct kprobe *p)
void __kprobes arch_disarm_kprobe(struct kprobe *p)
void __kprobes arch_remove_kprobe(struct kprobe *p)
static void __kprobes enable_singlestep(struct kprobe_ctlblk *kcb,
struct pt_regs *regs,
unsigned long ip)
static void __kprobes disable_singlestep(struct kprobe_ctlblk *kcb,
struct pt_regs *regs,
unsigned long ip)
static void __kprobes push_kprobe(struct kprobe_ctlblk *kcb, struct kprobe *p)
static void __kprobes pop_kprobe(struct kprobe_ctlblk *kcb)
void __kprobes arch_prepare_kretprobe(struct kretprobe_instance *ri,
struct pt_regs *regs)
static void __kprobes kprobe_reenter_check(struct kprobe_ctlblk *kcb,
struct kprobe *p)
static int __kprobes kprobe_handler(struct pt_regs *regs)
static void __used kretprobe_trampoline_holder(void)
static int __kprobes trampoline_probe_handler(struct kprobe *p,
struct pt_regs *regs)
static void __kprobes resume_execution(struct kprobe *p, struct pt_regs *regs)
static int __kprobes post_kprobe_handler(struct pt_regs *regs)
static int __kprobes kprobe_trap_handler(struct pt_regs *regs, int trapnr)
int __kprobes kprobe_fault_handler(struct pt_regs *regs, int trapnr)
int __kprobes kprobe_exceptions_notify(struct notifier_block *self,
unsigned long val, void *data)
int __kprobes setjmp_pre_handler(struct kprobe *p, struct pt_regs *regs)
void __kprobes jprobe_return(void)
void __kprobes jprobe_return_end(void)
int __kprobes longjmp_break_handler(struct kprobe *p, struct pt_regs *regs)
static struct kprobe trampoline = ;
int __init arch_init_kprobes(void)
int __kprobes arch_trampoline_kprobe(struct kprobe *p)
