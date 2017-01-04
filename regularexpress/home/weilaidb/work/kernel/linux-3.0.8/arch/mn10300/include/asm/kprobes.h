#define _ASM_KPROBES_H
struct kprobe;
typedef unsigned char kprobe_opcode_t;
#define BREAKPOINT_INSTRUCTION	0xff
#define MAX_INSN_SIZE 8
#define MAX_STACK_SIZE 128
struct arch_specific_insn ;
extern const int kretprobe_blacklist_size;
extern int kprobe_exceptions_notify(struct notifier_block *self,
unsigned long val, void *data);
#define flush_insn_slot(p)  do  while (0)
extern void arch_remove_kprobe(struct kprobe *p);
