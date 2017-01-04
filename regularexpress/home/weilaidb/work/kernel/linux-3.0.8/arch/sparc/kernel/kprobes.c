DEFINE_PER_CPU(struct kprobe *, current_kprobe) = NULL;
DEFINE_PER_CPU(struct kprobe_ctlblk, kprobe_ctlblk);
struct kretprobe_blackpoint kretprobe_blacklist[] = ;
int __kprobes arch_prepare_kprobe(struct kprobe *p)
void __kprobes arch_arm_kprobe(struct kprobe *p)
void __kprobes arch_disarm_kprobe(struct kprobe *p)
static void __kprobes save_previous_kprobe(struct kprobe_ctlblk *kcb)
static void __kprobes restore_previous_kprobe(struct kprobe_ctlblk *kcb)
static void __kprobes set_current_kprobe(struct kprobe *p, struct pt_regs *regs,
struct kprobe_ctlblk *kcb)
static void __kprobes prepare_singlestep(struct kprobe *p, struct pt_regs *regs,
struct kprobe_ctlblk *kcb)
static int __kprobes kprobe_handler(struct pt_regs *regs)
static unsigned long __kprobes relbranch_fixup(u32 insn, struct kprobe *p,
struct pt_regs *regs)
static void __kprobes retpc_fixup(struct pt_regs *regs, u32 insn,
unsigned long real_pc)
static void __kprobes resume_execution(struct kprobe *p,
struct pt_regs *regs, struct kprobe_ctlblk *kcb)
static int __kprobes post_kprobe_handler(struct pt_regs *regs)
int __kprobes kprobe_fault_handler(struct pt_regs *regs, int trapnr)
int __kprobes kprobe_exceptions_notify(struct notifier_block *self,
unsigned long val, void *data)
asmlinkage void __kprobes kprobe_trap(unsigned long trap_level,
struct pt_regs *regs)
int __kprobes setjmp_pre_handler(struct kprobe *p, struct pt_regs *regs)
void __kprobes jprobe_return(void)
extern void jprobe_return_trap_instruction(void);
int __kprobes longjmp_break_handler(struct kprobe *p, struct pt_regs *regs)
void __kprobes arch_prepare_kretprobe(struct kretprobe_instance *ri,
struct pt_regs *regs)
int __kprobes trampoline_probe_handler(struct kprobe *p, struct pt_regs *regs)
void kretprobe_trampoline_holder(void)
static struct kprobe trampoline_p = ;
int __init arch_init_kprobes(void)
int __kprobes arch_trampoline_kprobe(struct kprobe *p)
