#define _ASM_X86_KPROBES_H
#define  __ARCH_WANT_KPROBES_INSN_SLOT
struct pt_regs;
struct kprobe;
typedef u8 kprobe_opcode_t;
#define BREAKPOINT_INSTRUCTION	0xcc
#define RELATIVEJUMP_OPCODE 0xe9
#define RELATIVEJUMP_SIZE 5
#define RELATIVECALL_OPCODE 0xe8
#define RELATIVE_ADDR_SIZE 4
#define MAX_STACK_SIZE 64
#define MIN_STACK_SIZE(ADDR)					       \
(((MAX_STACK_SIZE) < (((unsigned long)current_thread_info()) + \
THREAD_SIZE - (unsigned long)(ADDR)))    \
? (MAX_STACK_SIZE)					       \
: (((unsigned long)current_thread_info()) +		       \
THREAD_SIZE - (unsigned long)(ADDR)))
#define flush_insn_slot(p)	do  while (0)
extern kprobe_opcode_t optprobe_template_entry;
extern kprobe_opcode_t optprobe_template_val;
extern kprobe_opcode_t optprobe_template_call;
extern kprobe_opcode_t optprobe_template_end;
#define MAX_OPTIMIZED_LENGTH (MAX_INSN_SIZE + RELATIVE_ADDR_SIZE)
#define MAX_OPTINSN_SIZE 				\
(((unsigned long)&optprobe_template_end -	\
(unsigned long)&optprobe_template_entry) +	\
MAX_OPTIMIZED_LENGTH + RELATIVEJUMP_SIZE)
extern const int kretprobe_blacklist_size;
void arch_remove_kprobe(struct kprobe *p);
void kretprobe_trampoline(void);
struct arch_specific_insn ;
struct arch_optimized_insn ;
static inline int arch_prepared_optinsn(struct arch_optimized_insn *optinsn)
struct prev_kprobe ;
struct kprobe_ctlblk ;
extern int kprobe_fault_handler(struct pt_regs *regs, int trapnr);
extern int kprobe_exceptions_notify(struct notifier_block *self,
unsigned long val, void *data);
