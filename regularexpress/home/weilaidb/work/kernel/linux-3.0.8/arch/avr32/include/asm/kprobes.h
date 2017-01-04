#define __ASM_AVR32_KPROBES_H
typedef u16	kprobe_opcode_t;
#define BREAKPOINT_INSTRUCTION	0xd673
#define MAX_INSN_SIZE		2
#define kretprobe_blacklist_size 0
#define arch_remove_kprobe(p)	do  while (0)
struct arch_specific_insn ;
extern int kprobe_fault_handler(struct pt_regs *regs, int trapnr);
extern int kprobe_exceptions_notify(struct notifier_block *self,
unsigned long val, void *data);
#define flush_insn_slot(p)	do  while (0)
