#define JAL 0x0c000000
#define ADDR_MASK 0x03ffffff
#define JUMP_RANGE_MASK ((1UL << 28) - 1)
#define INSN_NOP 0x00000000
#define INSN_JAL(addr)	\
((unsigned int)(JAL | (((addr) >> 2) & ADDR_MASK)))
static unsigned int insn_jal_ftrace_caller __read_mostly;
static unsigned int insn_lui_v1_hi16_mcount __read_mostly;
static unsigned int insn_j_ftrace_graph_caller __maybe_unused __read_mostly;
static inline void ftrace_dyn_arch_init_insns(void)
static inline int in_kernel_space(unsigned long ip)
static int ftrace_modify_code(unsigned long ip, unsigned int new_code)
#if defined(KBUILD_MCOUNT_RA_ADDRESS) && defined(CONFIG_32BIT)
#define MCOUNT_OFFSET_INSNS 5
#define MCOUNT_OFFSET_INSNS 4
#define INSN_B_1F (0x10000000 | MCOUNT_OFFSET_INSNS)
int ftrace_make_nop(struct module *mod,
struct dyn_ftrace *rec, unsigned long addr)
int ftrace_make_call(struct dyn_ftrace *rec, unsigned long addr)
#define FTRACE_CALL_IP ((unsigned long)(&ftrace_call))
int ftrace_update_ftrace_func(ftrace_func_t func)
int __init ftrace_dyn_arch_init(void *data)
extern void ftrace_graph_call(void);
#define FTRACE_GRAPH_CALL_IP	((unsigned long)(&ftrace_graph_call))
int ftrace_enable_ftrace_graph_caller(void)
int ftrace_disable_ftrace_graph_caller(void)
#define S_RA_SP	(0xafbf << 16)
#define S_R_SP	(0xafb0 << 16)
#define OFFSET_MASK	0xffff
unsigned long ftrace_get_parent_ra_addr(unsigned long self_ra, unsigned long
old_parent_ra, unsigned long parent_ra_addr, unsigned long fp)
void prepare_ftrace_return(unsigned long *parent_ra_addr, unsigned long self_ra,
unsigned long fp)
