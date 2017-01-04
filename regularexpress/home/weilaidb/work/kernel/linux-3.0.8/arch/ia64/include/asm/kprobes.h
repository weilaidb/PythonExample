#define _ASM_KPROBES_H
#define __ARCH_WANT_KPROBES_INSN_SLOT
#define MAX_INSN_SIZE   2
#define BREAK_INST	(long)(__IA64_BREAK_KPROBE << 6)
#define NOP_M_INST	(long)(1<<27)
#define BRL_INST(i1, i2) ((long)((0xcL << 37) | \
(0x1L << 12) | \
(((i1) & 1) << 36) | ((i2) << 13)))
typedef union cmp_inst  cmp_inst_t;
struct kprobe;
typedef struct _bundle  __attribute__((__aligned__(16)))  bundle_t;
struct prev_kprobe ;
#define	MAX_PARAM_RSE_SIZE	(0x60+0x60/0x3f)
#define ARCH_PREV_KPROBE_SZ 2
struct kprobe_ctlblk ;
#define kretprobe_blacklist_size 0
#define SLOT0_OPCODE_SHIFT	(37)
#define SLOT1_p1_OPCODE_SHIFT	(37 - (64-46))
#define SLOT2_OPCODE_SHIFT 	(37)
#define INDIRECT_CALL_OPCODE		(1)
#define IP_RELATIVE_CALL_OPCODE		(5)
#define IP_RELATIVE_BRANCH_OPCODE	(4)
#define IP_RELATIVE_PREDICT_OPCODE	(7)
#define LONG_BRANCH_OPCODE		(0xC)
#define LONG_CALL_OPCODE		(0xD)
#define flush_insn_slot(p)		do  while (0)
typedef struct kprobe_opcode  kprobe_opcode_t;
struct arch_specific_insn ;
extern int kprobe_fault_handler(struct pt_regs *regs, int trapnr);
extern int kprobe_exceptions_notify(struct notifier_block *self,
unsigned long val, void *data);
extern void invalidate_stacked_regs(void);
extern void flush_register_stack(void);
extern void arch_remove_kprobe(struct kprobe *p);
