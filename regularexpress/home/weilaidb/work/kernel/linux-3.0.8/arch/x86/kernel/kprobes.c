void jprobe_return_end(void);
DEFINE_PER_CPU(struct kprobe *, current_kprobe) = NULL;
DEFINE_PER_CPU(struct kprobe_ctlblk, kprobe_ctlblk);
#define stack_addr(regs) ((unsigned long *)kernel_stack_pointer(regs))
#define W(row, b0, b1, b2, b3, b4, b5, b6, b7, b8, b9, ba, bb, bc, bd, be, bf)\
(((b0##UL << 0x0)|(b1##UL << 0x1)|(b2##UL << 0x2)|(b3##UL << 0x3) |   \
(b4##UL << 0x4)|(b5##UL << 0x5)|(b6##UL << 0x6)|(b7##UL << 0x7) |   \
(b8##UL << 0x8)|(b9##UL << 0x9)|(ba##UL << 0xa)|(bb##UL << 0xb) |   \
(bc##UL << 0xc)|(bd##UL << 0xd)|(be##UL << 0xe)|(bf##UL << 0xf))    \
<< (row % 32))
static const u32 twobyte_is_boostable[256 / 32] = ;
#undef W
struct kretprobe_blackpoint kretprobe_blacklist[] = ;
const int kretprobe_blacklist_size = ARRAY_SIZE(kretprobe_blacklist);
static void __kprobes __synthesize_relative_insn(void *from, void *to, u8 op)
static void __kprobes synthesize_reljump(void *from, void *to)
static kprobe_opcode_t *__kprobes skip_prefixes(kprobe_opcode_t *insn)
static int __kprobes can_boost(kprobe_opcode_t *opcodes)
static int recover_probed_instruction(kprobe_opcode_t *buf, unsigned long addr)
static int __kprobes can_probe(unsigned long paddr)
static int __kprobes is_IF_modifier(kprobe_opcode_t *insn)
static int __kprobes __copy_instruction(u8 *dest, u8 *src, int recover)
static void __kprobes arch_copy_kprobe(struct kprobe *p)
int __kprobes arch_prepare_kprobe(struct kprobe *p)
void __kprobes arch_arm_kprobe(struct kprobe *p)
void __kprobes arch_disarm_kprobe(struct kprobe *p)
void __kprobes arch_remove_kprobe(struct kprobe *p)
static void __kprobes save_previous_kprobe(struct kprobe_ctlblk *kcb)
static void __kprobes restore_previous_kprobe(struct kprobe_ctlblk *kcb)
static void __kprobes set_current_kprobe(struct kprobe *p, struct pt_regs *regs,
struct kprobe_ctlblk *kcb)
static void __kprobes clear_btf(void)
static void __kprobes restore_btf(void)
void __kprobes arch_prepare_kretprobe(struct kretprobe_instance *ri,
struct pt_regs *regs)
static int  __kprobes setup_detour_execution(struct kprobe *p,
struct pt_regs *regs,
int reenter);
#define setup_detour_execution(p, regs, reenter) (0)
static void __kprobes setup_singlestep(struct kprobe *p, struct pt_regs *regs,
struct kprobe_ctlblk *kcb, int reenter)
static int __kprobes reenter_kprobe(struct kprobe *p, struct pt_regs *regs,
struct kprobe_ctlblk *kcb)
static int __kprobes kprobe_handler(struct pt_regs *regs)
#define SAVE_REGS_STRING		\	\
"	subq $24, %rsp\n"	\
"	pushq %rdi\n"		\
"	pushq %rsi\n"		\
"	pushq %rdx\n"		\
"	pushq %rcx\n"		\
"	pushq %rax\n"		\
"	pushq %r8\n"		\
"	pushq %r9\n"		\
"	pushq %r10\n"		\
"	pushq %r11\n"		\
"	pushq %rbx\n"		\
"	pushq %rbp\n"		\
"	pushq %r12\n"		\
"	pushq %r13\n"		\
"	pushq %r14\n"		\
"	pushq %r15\n"
#define RESTORE_REGS_STRING		\
"	popq %r15\n"		\
"	popq %r14\n"		\
"	popq %r13\n"		\
"	popq %r12\n"		\
"	popq %rbp\n"		\
"	popq %rbx\n"		\
"	popq %r11\n"		\
"	popq %r10\n"		\
"	popq %r9\n"		\
"	popq %r8\n"		\
"	popq %rax\n"		\
"	popq %rcx\n"		\
"	popq %rdx\n"		\
"	popq %rsi\n"		\
"	popq %rdi\n"		\	\
"	addq $24, %rsp\n"
#define SAVE_REGS_STRING		\	\
"	subl $16, %esp\n"	\
"	pushl %fs\n"		\
"	pushl %es\n"		\
"	pushl %ds\n"		\
"	pushl %eax\n"		\
"	pushl %ebp\n"		\
"	pushl %edi\n"		\
"	pushl %esi\n"		\
"	pushl %edx\n"		\
"	pushl %ecx\n"		\
"	pushl %ebx\n"
#define RESTORE_REGS_STRING		\
"	popl %ebx\n"		\
"	popl %ecx\n"		\
"	popl %edx\n"		\
"	popl %esi\n"		\
"	popl %edi\n"		\
"	popl %ebp\n"		\
"	popl %eax\n"		\\
"	addl $24, %esp\n"
static void __used __kprobes kretprobe_trampoline_holder(void)
static __used __kprobes void *trampoline_handler(struct pt_regs *regs)
static void __kprobes resume_execution(struct kprobe *p,
struct pt_regs *regs, struct kprobe_ctlblk *kcb)
static int __kprobes post_kprobe_handler(struct pt_regs *regs)
int __kprobes kprobe_fault_handler(struct pt_regs *regs, int trapnr)
int __kprobes kprobe_exceptions_notify(struct notifier_block *self,
unsigned long val, void *data)
int __kprobes setjmp_pre_handler(struct kprobe *p, struct pt_regs *regs)
void __kprobes jprobe_return(void)
int __kprobes longjmp_break_handler(struct kprobe *p, struct pt_regs *regs)
static void __kprobes synthesize_relcall(void *from, void *to)
static void __kprobes synthesize_set_arg1(kprobe_opcode_t *addr,
unsigned long val)
static void __used __kprobes kprobes_optinsn_template_holder(void)
#define TMPL_MOVE_IDX \
((long)&optprobe_template_val - (long)&optprobe_template_entry)
#define TMPL_CALL_IDX \
((long)&optprobe_template_call - (long)&optprobe_template_entry)
#define TMPL_END_IDX \
((long)&optprobe_template_end - (long)&optprobe_template_entry)
#define INT3_SIZE sizeof(kprobe_opcode_t)
static void __kprobes optimized_callback(struct optimized_kprobe *op,
struct pt_regs *regs)
static int __kprobes copy_optimized_instructions(u8 *dest, u8 *src)
static int __kprobes insn_is_indirect_jump(struct insn *insn)
static int insn_jump_into_range(struct insn *insn, unsigned long start, int len)
static int __kprobes can_optimize(unsigned long paddr)
int __kprobes arch_check_optimized_kprobe(struct optimized_kprobe *op)
int __kprobes arch_within_optimized_kprobe(struct optimized_kprobe *op,
unsigned long addr)
static __kprobes
void __arch_remove_optimized_kprobe(struct optimized_kprobe *op, int dirty)
void __kprobes arch_remove_optimized_kprobe(struct optimized_kprobe *op)
int __kprobes arch_prepare_optimized_kprobe(struct optimized_kprobe *op)
#define MAX_OPTIMIZE_PROBES 256
static struct text_poke_param *jump_poke_params;
static struct jump_poke_buffer  *jump_poke_bufs;
static void __kprobes setup_optimize_kprobe(struct text_poke_param *tprm,
u8 *insn_buf,
struct optimized_kprobe *op)
void __kprobes arch_optimize_kprobes(struct list_head *oplist)
static void __kprobes setup_unoptimize_kprobe(struct text_poke_param *tprm,
u8 *insn_buf,
struct optimized_kprobe *op)
extern void arch_unoptimize_kprobes(struct list_head *oplist,
struct list_head *done_list)
void __kprobes arch_unoptimize_kprobe(struct optimized_kprobe *op)
static int  __kprobes setup_detour_execution(struct kprobe *p,
struct pt_regs *regs,
int reenter)
static int __kprobes init_poke_params(void)
static int __kprobes init_poke_params(void)
int __init arch_init_kprobes(void)
int __kprobes arch_trampoline_kprobe(struct kprobe *p)
