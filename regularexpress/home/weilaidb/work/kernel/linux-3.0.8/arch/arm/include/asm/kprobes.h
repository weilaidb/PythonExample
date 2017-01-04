#define _ARM_KPROBES_H
#define __ARCH_WANT_KPROBES_INSN_SLOT
#define MAX_INSN_SIZE			2
#define MAX_STACK_SIZE			64
#define KPROBE_BREAKPOINT_INSTRUCTION	0xe7f001f8
#define regs_return_value(regs)		((regs)->ARM_r0)
#define flush_insn_slot(p)		do  while (0)
#define kretprobe_blacklist_size	0
typedef u32 kprobe_opcode_t;
struct kprobe;
typedef void (kprobe_insn_handler_t)(struct kprobe *, struct pt_regs *);
typedef unsigned long (kprobe_check_cc)(unsigned long);
struct arch_specific_insn ;
struct prev_kprobe ;
struct kprobe_ctlblk ;
void arch_remove_kprobe(struct kprobe *);
void kretprobe_trampoline(void);
int kprobe_fault_handler(struct pt_regs *regs, unsigned int fsr);
int kprobe_exceptions_notify(struct notifier_block *self,
unsigned long val, void *data);
enum kprobe_insn ;
enum kprobe_insn arm_kprobe_decode_insn(kprobe_opcode_t,
struct arch_specific_insn *);
void __init arm_kprobe_decode_init(void);
