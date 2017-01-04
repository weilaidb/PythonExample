#define _ASM_S390_KPROBES_H
struct pt_regs;
struct kprobe;
typedef u16 kprobe_opcode_t;
#define BREAKPOINT_INSTRUCTION	0x0002
#define MAX_INSN_SIZE		0x0003
#define MAX_STACK_SIZE		64
#define MIN_STACK_SIZE(ADDR) (((MAX_STACK_SIZE) < \
(((unsigned long)current_thread_info()) + THREAD_SIZE - (ADDR))) \
? (MAX_STACK_SIZE) \
: (((unsigned long)current_thread_info()) + THREAD_SIZE - (ADDR)))
#define kretprobe_blacklist_size 0
#define KPROBE_SWAP_INST	0x10
#define FIXUP_PSW_NORMAL	0x08
#define FIXUP_BRANCH_NOT_TAKEN	0x04
#define FIXUP_RETURN_REGISTER	0x02
#define FIXUP_NOT_REQUIRED	0x01
struct arch_specific_insn ;
struct prev_kprobe ;
struct kprobe_ctlblk ;
void arch_remove_kprobe(struct kprobe *p);
void kretprobe_trampoline(void);
int kprobe_fault_handler(struct pt_regs *regs, int trapnr);
int kprobe_exceptions_notify(struct notifier_block *self,
unsigned long val, void *data);
#define flush_insn_slot(p)	do  while (0)
