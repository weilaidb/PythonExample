#define _ASM_POWERPC_KPROBES_H
#define  __ARCH_WANT_KPROBES_INSN_SLOT
struct pt_regs;
struct kprobe;
typedef unsigned int kprobe_opcode_t;
#define BREAKPOINT_INSTRUCTION	0x7fe00008
#define MAX_INSN_SIZE 1
#define IS_TW(instr)		(((instr) & 0xfc0007fe) == 0x7c000008)
#define IS_TD(instr)		(((instr) & 0xfc0007fe) == 0x7c000088)
#define IS_TDI(instr)		(((instr) & 0xfc000000) == 0x08000000)
#define IS_TWI(instr)		(((instr) & 0xfc000000) == 0x0c000000)
#define kprobe_lookup_name(name, addr)					\
#define is_trap(instr)	(IS_TW(instr) || IS_TD(instr) || \
IS_TWI(instr) || IS_TDI(instr))
#define is_trap(instr)	(IS_TW(instr) || IS_TWI(instr))
#define flush_insn_slot(p)	do  while (0)
#define kretprobe_blacklist_size 0
void kretprobe_trampoline(void);
extern void arch_remove_kprobe(struct kprobe *p);
struct arch_specific_insn ;
struct prev_kprobe ;
struct kprobe_ctlblk ;
extern int kprobe_exceptions_notify(struct notifier_block *self,
unsigned long val, void *data);
extern int kprobe_fault_handler(struct pt_regs *regs, int trapnr);
