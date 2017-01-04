extern void jprobe_inst_return(void);
DEFINE_PER_CPU(struct kprobe *, current_kprobe) = NULL;
DEFINE_PER_CPU(struct kprobe_ctlblk, kprobe_ctlblk);
struct kretprobe_blackpoint kretprobe_blacklist[] = ;
enum instruction_type ;
static enum instruction_type bundle_encoding[32][3] = ;
static void __kprobes set_brl_inst(void *from, void *to)
static void __kprobes update_kprobe_inst_flag(uint template, uint  slot,
uint major_opcode,
unsigned long kprobe_inst,
struct kprobe *p)
static uint __kprobes is_cmp_ctype_unc_inst(uint template, uint slot,
uint major_opcode,
unsigned long kprobe_inst)
static int __kprobes unsupported_inst(uint template, uint  slot,
uint major_opcode,
unsigned long kprobe_inst,
unsigned long addr)
static void __kprobes prepare_break_inst(uint template, uint  slot,
uint major_opcode,
unsigned long kprobe_inst,
struct kprobe *p,
int qp)
static void __kprobes get_kprobe_inst(bundle_t *bundle, uint slot,
unsigned long *kprobe_inst, uint *major_opcode)
static int __kprobes in_ivt_functions(unsigned long addr)
static int __kprobes valid_kprobe_addr(int template, int slot,
unsigned long addr)
static void __kprobes save_previous_kprobe(struct kprobe_ctlblk *kcb)
static void __kprobes restore_previous_kprobe(struct kprobe_ctlblk *kcb)
static void __kprobes set_current_kprobe(struct kprobe *p,
struct kprobe_ctlblk *kcb)
static void kretprobe_trampoline(void)
int __kprobes trampoline_probe_handler(struct kprobe *p, struct pt_regs *regs)
void __kprobes arch_prepare_kretprobe(struct kretprobe_instance *ri,
struct pt_regs *regs)
static int __kprobes __is_ia64_break_inst(bundle_t *bundle, uint slot)
static int __kprobes can_boost(bundle_t *bundle, uint slot,
unsigned long bundle_addr)
static void __kprobes prepare_booster(struct kprobe *p)
int __kprobes arch_prepare_kprobe(struct kprobe *p)
void __kprobes arch_arm_kprobe(struct kprobe *p)
void __kprobes arch_disarm_kprobe(struct kprobe *p)
void __kprobes arch_remove_kprobe(struct kprobe *p)
static void __kprobes resume_execution(struct kprobe *p, struct pt_regs *regs)
static void __kprobes prepare_ss(struct kprobe *p, struct pt_regs *regs)
static int __kprobes is_ia64_break_inst(struct pt_regs *regs)
static int __kprobes pre_kprobes_handler(struct die_args *args)
static int __kprobes post_kprobes_handler(struct pt_regs *regs)
int __kprobes kprobe_fault_handler(struct pt_regs *regs, int trapnr)
int __kprobes kprobe_exceptions_notify(struct notifier_block *self,
unsigned long val, void *data)
struct param_bsp_cfm ;
static void ia64_get_bsp_cfm(struct unw_frame_info *info, void *arg)
unsigned long arch_deref_entry_point(void *entry)
int __kprobes setjmp_pre_handler(struct kprobe *p, struct pt_regs *regs)
void __kprobes jprobe_return(void)
int __kprobes longjmp_break_handler(struct kprobe *p, struct pt_regs *regs)
static struct kprobe trampoline_p = ;
int __init arch_init_kprobes(void)
int __kprobes arch_trampoline_kprobe(struct kprobe *p)
