#define __ASM_SH_KPROBES_H
typedef insn_size_t kprobe_opcode_t;
#define BREAKPOINT_INSTRUCTION	0xc33a
#define MAX_INSN_SIZE 16
#define MAX_STACK_SIZE 64
#define MIN_STACK_SIZE(ADDR) (((MAX_STACK_SIZE) < \
(((unsigned long)current_thread_info()) + THREAD_SIZE - (ADDR))) \
? (MAX_STACK_SIZE) \
: (((unsigned long)current_thread_info()) + THREAD_SIZE - (ADDR)))
#define flush_insn_slot(p)		do  while (0)
#define kretprobe_blacklist_size	0
struct kprobe;
void arch_remove_kprobe(struct kprobe *);
void kretprobe_trampoline(void);
void jprobe_return_end(void);
struct arch_specific_insn ;
struct prev_kprobe ;
struct kprobe_ctlblk ;
extern int kprobe_fault_handler(struct pt_regs *regs, int trapnr);
extern int kprobe_exceptions_notify(struct notifier_block *self,
unsigned long val, void *data);
extern int kprobe_handle_illslot(unsigned long pc);
#define kprobe_handle_illslot(pc)	(-1)
