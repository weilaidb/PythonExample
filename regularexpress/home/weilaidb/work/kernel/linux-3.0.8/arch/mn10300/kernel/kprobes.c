struct kretprobe_blackpoint kretprobe_blacklist[] = ;
const int kretprobe_blacklist_size = ARRAY_SIZE(kretprobe_blacklist);
#define KPROBE_HIT_ACTIVE	0x00000001
#define KPROBE_HIT_SS		0x00000002
static struct kprobe *cur_kprobe;
static unsigned long cur_kprobe_orig_pc;
static unsigned long cur_kprobe_next_pc;
static int cur_kprobe_ss_flags;
static unsigned long kprobe_status;
static kprobe_opcode_t cur_kprobe_ss_buf[MAX_INSN_SIZE + 2];
static unsigned long cur_kprobe_bp_addr;
DEFINE_PER_CPU(struct kprobe *, current_kprobe) = NULL;
#define SINGLESTEP_BRANCH 1
#define SINGLESTEP_PCREL  2
#define READ_BYTE(p, valp) \
do  while (0)
#define READ_WORD16(p, valp)					\
do  while (0)
#define READ_WORD32(p, valp)					\
do  while (0)
static const u8 mn10300_insn_sizes[256] =
;
#define LT (1 << 0)
#define GT (1 << 1)
#define GE (1 << 2)
#define LE (1 << 3)
#define CS (1 << 4)
#define HI (1 << 5)
#define CC (1 << 6)
#define LS (1 << 7)
#define EQ (1 << 8)
#define NE (1 << 9)
#define RA (1 << 10)
#define VC (1 << 11)
#define VS (1 << 12)
#define NC (1 << 13)
#define NS (1 << 14)
static const u16 cond_table[] = ;
static unsigned find_nextpc(struct pt_regs *regs, int *flags)
static unsigned __kprobes singlestep_branch_setup(struct pt_regs *regs)
int __kprobes arch_prepare_kprobe(struct kprobe *p)
void __kprobes arch_copy_kprobe(struct kprobe *p)
void __kprobes arch_arm_kprobe(struct kprobe *p)
void __kprobes arch_disarm_kprobe(struct kprobe *p)
void arch_remove_kprobe(struct kprobe *p)
static inline
void __kprobes disarm_kprobe(struct kprobe *p, struct pt_regs *regs)
static inline
void __kprobes prepare_singlestep(struct kprobe *p, struct pt_regs *regs)
static inline int __kprobes kprobe_handler(struct pt_regs *regs)
static void __kprobes resume_execution(struct kprobe *p, struct pt_regs *regs)
static inline int __kprobes post_kprobe_handler(struct pt_regs *regs)
static inline
int __kprobes kprobe_fault_handler(struct pt_regs *regs, int trapnr)
int __kprobes kprobe_exceptions_notify(struct notifier_block *self,
unsigned long val, void *data)
static struct pt_regs jprobe_saved_regs;
static struct pt_regs *jprobe_saved_regs_location;
static kprobe_opcode_t jprobe_saved_stack[MAX_STACK_SIZE];
int __kprobes setjmp_pre_handler(struct kprobe *p, struct pt_regs *regs)
void __kprobes jprobe_return(void)
extern void jprobe_return_bp_addr(void);
int __kprobes longjmp_break_handler(struct kprobe *p, struct pt_regs *regs)
int __init arch_init_kprobes(void)
