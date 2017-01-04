DEFINE_PER_CPU(struct kprobe *, current_kprobe) = NULL;
DEFINE_PER_CPU(struct kprobe_ctlblk, kprobe_ctlblk);
static DEFINE_PER_CPU(struct kprobe, saved_current_opcode);
static DEFINE_PER_CPU(struct kprobe, saved_next_opcode);
static DEFINE_PER_CPU(struct kprobe, saved_next_opcode2);
#define OPCODE_JMP(x)	(((x) & 0xF0FF) == 0x402b)
#define OPCODE_JSR(x)	(((x) & 0xF0FF) == 0x400b)
#define OPCODE_BRA(x)	(((x) & 0xF000) == 0xa000)
#define OPCODE_BRAF(x)	(((x) & 0xF0FF) == 0x0023)
#define OPCODE_BSR(x)	(((x) & 0xF000) == 0xb000)
#define OPCODE_BSRF(x)	(((x) & 0xF0FF) == 0x0003)
#define OPCODE_BF_S(x)	(((x) & 0xFF00) == 0x8f00)
#define OPCODE_BT_S(x)	(((x) & 0xFF00) == 0x8d00)
#define OPCODE_BF(x)	(((x) & 0xFF00) == 0x8b00)
#define OPCODE_BT(x)	(((x) & 0xFF00) == 0x8900)
#define OPCODE_RTS(x)	(((x) & 0x000F) == 0x000b)
#define OPCODE_RTE(x)	(((x) & 0xFFFF) == 0x002b)
int __kprobes arch_prepare_kprobe(struct kprobe *p)
void __kprobes arch_copy_kprobe(struct kprobe *p)
void __kprobes arch_arm_kprobe(struct kprobe *p)
void __kprobes arch_disarm_kprobe(struct kprobe *p)
int __kprobes arch_trampoline_kprobe(struct kprobe *p)
int __kprobes kprobe_handle_illslot(unsigned long pc)
void __kprobes arch_remove_kprobe(struct kprobe *p)
static void __kprobes save_previous_kprobe(struct kprobe_ctlblk *kcb)
static void __kprobes restore_previous_kprobe(struct kprobe_ctlblk *kcb)
static void __kprobes set_current_kprobe(struct kprobe *p, struct pt_regs *regs,
struct kprobe_ctlblk *kcb)
static void __kprobes prepare_singlestep(struct kprobe *p, struct pt_regs *regs)
void __kprobes arch_prepare_kretprobe(struct kretprobe_instance *ri,
struct pt_regs *regs)
static int __kprobes kprobe_handler(struct pt_regs *regs)
static void __used kretprobe_trampoline_holder(void)
int __kprobes trampoline_probe_handler(struct kprobe *p, struct pt_regs *regs)
static int __kprobes post_kprobe_handler(struct pt_regs *regs)
int __kprobes kprobe_fault_handler(struct pt_regs *regs, int trapnr)
int __kprobes kprobe_exceptions_notify(struct notifier_block *self,
unsigned long val, void *data)
int __kprobes setjmp_pre_handler(struct kprobe *p, struct pt_regs *regs)
void __kprobes jprobe_return(void)
int __kprobes longjmp_break_handler(struct kprobe *p, struct pt_regs *regs)
static struct kprobe trampoline_p = ;
int __init arch_init_kprobes(void)
