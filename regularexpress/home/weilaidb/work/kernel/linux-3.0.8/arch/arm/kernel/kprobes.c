#define MIN_STACK_SIZE(addr) 				\
min((unsigned long)MAX_STACK_SIZE,		\
(unsigned long)current_thread_info() + THREAD_START_SP - (addr))
#define flush_insns(addr, cnt) 				\
flush_icache_range((unsigned long)(addr),	\
(unsigned long)(addr) +	\
sizeof(kprobe_opcode_t) * (cnt))
#define JPROBE_MAGIC_ADDR		0xffffffff
DEFINE_PER_CPU(struct kprobe *, current_kprobe) = NULL;
DEFINE_PER_CPU(struct kprobe_ctlblk, kprobe_ctlblk);
int __kprobes arch_prepare_kprobe(struct kprobe *p)
void __kprobes arch_arm_kprobe(struct kprobe *p)
int __kprobes __arch_disarm_kprobe(void *p)
void __kprobes arch_disarm_kprobe(struct kprobe *p)
void __kprobes arch_remove_kprobe(struct kprobe *p)
static void __kprobes save_previous_kprobe(struct kprobe_ctlblk *kcb)
static void __kprobes restore_previous_kprobe(struct kprobe_ctlblk *kcb)
static void __kprobes set_current_kprobe(struct kprobe *p)
static void __kprobes singlestep(struct kprobe *p, struct pt_regs *regs,
struct kprobe_ctlblk *kcb)
void __kprobes kprobe_handler(struct pt_regs *regs)
static int __kprobes kprobe_trap_handler(struct pt_regs *regs, unsigned int instr)
int __kprobes kprobe_fault_handler(struct pt_regs *regs, unsigned int fsr)
int __kprobes kprobe_exceptions_notify(struct notifier_block *self,
unsigned long val, void *data)
void __naked __kprobes kretprobe_trampoline(void)
static __used __kprobes void *trampoline_handler(struct pt_regs *regs)
void __kprobes arch_prepare_kretprobe(struct kretprobe_instance *ri,
struct pt_regs *regs)
int __kprobes setjmp_pre_handler(struct kprobe *p, struct pt_regs *regs)
void __kprobes jprobe_return(void)
int __kprobes longjmp_break_handler(struct kprobe *p, struct pt_regs *regs)
int __kprobes arch_trampoline_kprobe(struct kprobe *p)
static struct undef_hook kprobes_break_hook = ;
int __init arch_init_kprobes()
