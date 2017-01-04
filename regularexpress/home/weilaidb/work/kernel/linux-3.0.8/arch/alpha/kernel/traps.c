static int opDEC_fix;
static void __cpuinit
opDEC_check(void)
void
dik_show_regs(struct pt_regs *regs, unsigned long *r9_15)
static void
dik_show_code(unsigned int *pc)
static void
dik_show_trace(unsigned long *sp)
static int kstack_depth_to_print = 24;
void show_stack(struct task_struct *task, unsigned long *sp)
void dump_stack(void)
EXPORT_SYMBOL(dump_stack);
void
die_if_kernel(char * str, struct pt_regs *regs, long err, unsigned long *r9_15)
static long dummy_emul(void)
long (*alpha_fp_emul_imprecise)(struct pt_regs *regs, unsigned long writemask)
= (void *)dummy_emul;
long (*alpha_fp_emul) (unsigned long pc)
= (void *)dummy_emul;
long alpha_fp_emul_imprecise(struct pt_regs *regs, unsigned long writemask);
long alpha_fp_emul (unsigned long pc);
asmlinkage void
do_entArith(unsigned long summary, unsigned long write_mask,
struct pt_regs *regs)
asmlinkage void
do_entIF(unsigned long type, struct pt_regs *regs)
asmlinkage void
do_entDbg(struct pt_regs *regs)
struct allregs ;
struct unaligned_stat  unaligned[2];
#define una_reg(r)  (_regs[(r) >= 16 && (r) <= 18 ? (r)+19 : (r)])
asmlinkage void
do_entUna(void * va, unsigned long opcode, unsigned long reg,
struct allregs *regs)
static inline unsigned long
s_mem_to_reg (unsigned long s_mem)
static inline unsigned long
s_reg_to_mem (unsigned long s_reg)
#define OP_INT_MASK	( 1L << 0x28 | 1L << 0x2c	\
| 1L << 0x29 | 1L << 0x2d	\
| 1L << 0x0c | 1L << 0x0d	\
| 1L << 0x0a | 1L << 0x0e )
#define OP_WRITE_MASK	( 1L << 0x26 | 1L << 0x27	\
| 1L << 0x2c | 1L << 0x2d	\
| 1L << 0x0d | 1L << 0x0e )
#define R(x)	((size_t) &((struct pt_regs *)0)->x)
static int unauser_reg_offsets[32] = ;
#undef R
asmlinkage void
do_entUnaUser(void __user * va, unsigned long opcode,
unsigned long reg, struct pt_regs *regs)
void __cpuinit
trap_init(void)
