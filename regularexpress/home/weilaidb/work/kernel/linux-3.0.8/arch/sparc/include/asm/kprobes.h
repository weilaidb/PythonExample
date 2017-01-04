#define _SPARC64_KPROBES_H
typedef u32 kprobe_opcode_t;
#define BREAKPOINT_INSTRUCTION   0x91d02070
#define BREAKPOINT_INSTRUCTION_2 0x91d02071
#define MAX_INSN_SIZE 2
#define kretprobe_blacklist_size 0
#define arch_remove_kprobe(p)	do  while (0)
#define flush_insn_slot(p)		\
do  while (0)
void kretprobe_trampoline(void);
struct arch_specific_insn ;
struct prev_kprobe ;
struct kprobe_ctlblk ;
extern int kprobe_exceptions_notify(struct notifier_block *self,
unsigned long val, void *data);
extern int kprobe_fault_handler(struct pt_regs *regs, int trapnr);
