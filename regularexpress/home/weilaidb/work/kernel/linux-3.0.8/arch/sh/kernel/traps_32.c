# define TRAP_RESERVED_INST	4
# define TRAP_ILLEGAL_SLOT_INST	6
# define TRAP_ADDRESS_ERROR	9
# ifdef CONFIG_CPU_SH2A
#  define TRAP_UBC		12
#  define TRAP_FPU_ERROR	13
#  define TRAP_DIVZERO_ERROR	17
#  define TRAP_DIVOVF_ERROR	18
# endif
#define TRAP_RESERVED_INST	12
#define TRAP_ILLEGAL_SLOT_INST	13
static void dump_mem(const char *str, unsigned long bottom, unsigned long top)
static DEFINE_SPINLOCK(die_lock);
void die(const char * str, struct pt_regs * regs, long err)
static inline void die_if_kernel(const char *str, struct pt_regs *regs,
long err)
static void die_if_no_fixup(const char * str, struct pt_regs * regs, long err)
static inline void sign_extend(unsigned int count, unsigned char *dst)
static struct mem_access user_mem_access = ;
static int handle_unaligned_ins(insn_size_t instruction, struct pt_regs *regs,
struct mem_access *ma)
static inline int handle_delayslot(struct pt_regs *regs,
insn_size_t old_instruction,
struct mem_access *ma)
#define SH_PC_8BIT_OFFSET(instr) ((((signed char)(instr))*2) + 4)
#define SH_PC_12BIT_OFFSET(instr) ((((signed short)(instr<<4))>>3) + 4)
int handle_unaligned_access(insn_size_t instruction, struct pt_regs *regs,
struct mem_access *ma, int expected,
unsigned long address)
asmlinkage void do_address_error(struct pt_regs *regs,
unsigned long writeaccess,
unsigned long address)
int is_dsp_inst(struct pt_regs *regs)
#define is_dsp_inst(regs)	(0)
asmlinkage void do_divide_error(unsigned long r4, unsigned long r5,
unsigned long r6, unsigned long r7,
struct pt_regs __regs)
asmlinkage void do_reserved_inst(unsigned long r4, unsigned long r5,
unsigned long r6, unsigned long r7,
struct pt_regs __regs)
static int emulate_branch(unsigned short inst, struct pt_regs *regs)
asmlinkage void do_illegal_slot_inst(unsigned long r4, unsigned long r5,
unsigned long r6, unsigned long r7,
struct pt_regs __regs)
asmlinkage void do_exception_error(unsigned long r4, unsigned long r5,
unsigned long r6, unsigned long r7,
struct pt_regs __regs)
void __cpuinit per_cpu_trap_init(void)
void *set_exception_table_vec(unsigned int vec, void *handler)
void __init trap_init(void)
void show_stack(struct task_struct *tsk, unsigned long *sp)
void dump_stack(void)
EXPORT_SYMBOL(dump_stack);
