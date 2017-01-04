#define _ASM_KPROBES_H
#define  __ARCH_WANT_KPROBES_INSN_SLOT
struct kprobe;
struct pt_regs;
typedef union mips_instruction kprobe_opcode_t;
#define MAX_INSN_SIZE 2
#define flush_insn_slot(p)						\
do  while (0)
#define kretprobe_blacklist_size 0
void arch_remove_kprobe(struct kprobe *p);
struct arch_specific_insn ;
struct prev_kprobe ;
#define MAX_JPROBES_STACK_SIZE 128
#define MAX_JPROBES_STACK_ADDR \
(((unsigned long)current_thread_info()) + THREAD_SIZE - 32 - sizeof(struct pt_regs))
#define MIN_JPROBES_STACK_SIZE(ADDR)					\
((((ADDR) + MAX_JPROBES_STACK_SIZE) > MAX_JPROBES_STACK_ADDR)	\
? MAX_JPROBES_STACK_ADDR - (ADDR)			\
: MAX_JPROBES_STACK_SIZE)
struct kprobe_ctlblk ;
extern int kprobe_exceptions_notify(struct notifier_block *self,
unsigned long val, void *data);
