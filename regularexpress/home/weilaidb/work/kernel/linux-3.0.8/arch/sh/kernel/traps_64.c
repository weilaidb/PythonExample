#undef DEBUG_EXCEPTION
extern void show_excp_regs(char *fname, int trapnr, int signr,
struct pt_regs *regs);
#define show_excp_regs(a, b, c, d)
static void do_unhandled_exception(int trapnr, int signr, char *str, char *fn_name,
unsigned long error_code, struct pt_regs *regs, struct task_struct *tsk);
#define DO_ERROR(trapnr, signr, str, name, tsk) \
asmlinkage void do_##name(unsigned long error_code, struct pt_regs *regs) \
static DEFINE_SPINLOCK(die_lock);
void die(const char * str, struct pt_regs * regs, long err)
static inline void die_if_kernel(const char * str, struct pt_regs * regs, long err)
static void die_if_no_fixup(const char * str, struct pt_regs * regs, long err)
DO_ERROR(13, SIGILL,  "illegal slot instruction", illegal_slot_inst, current)
DO_ERROR(87, SIGSEGV, "address error (exec)", address_error_exec, current)
static int misaligned_fixup(struct pt_regs *regs);
asmlinkage void do_address_error_load(unsigned long error_code, struct pt_regs *regs)
asmlinkage void do_address_error_store(unsigned long error_code, struct pt_regs *regs)
#if defined(CONFIG_SH64_ID2815_WORKAROUND)
#define OPCODE_INVALID      0
#define OPCODE_USER_VALID   1
#define OPCODE_PRIV_VALID   2
#define OPCODE_CTRL_REG     3
static unsigned long shmedia_opcode_table[64] = ;
void do_reserved_inst(unsigned long error_code, struct pt_regs *regs)
DO_ERROR(12, SIGILL,  "reserved instruction", reserved_inst, current)
asmlinkage void do_exception_error(unsigned long ex, struct pt_regs *regs)
int do_unknown_trapa(unsigned long scId, struct pt_regs *regs)
void show_stack(struct task_struct *tsk, unsigned long *sp)
void show_task(unsigned long *sp)
void dump_stack(void)
EXPORT_SYMBOL(dump_stack);
static void do_unhandled_exception(int trapnr, int signr, char *str, char *fn_name,
unsigned long error_code, struct pt_regs *regs, struct task_struct *tsk)
static int read_opcode(unsigned long long pc, unsigned long *result_opcode, int from_user_mode)
static int address_is_sign_extended(__u64 a)
static int generate_and_check_address(struct pt_regs *regs,
__u32 opcode,
int displacement_not_indexed,
int width_shift,
__u64 *address)
static int user_mode_unaligned_fixup_count = 10;
static int user_mode_unaligned_fixup_enable = 1;
static int kernel_mode_unaligned_fixup_count = 32;
static void misaligned_kernel_word_load(__u64 address, int do_sign_extend, __u64 *result)
static void misaligned_kernel_word_store(__u64 address, __u64 value)
static int misaligned_load(struct pt_regs *regs,
__u32 opcode,
int displacement_not_indexed,
int width_shift,
int do_sign_extend)
static int misaligned_store(struct pt_regs *regs,
__u32 opcode,
int displacement_not_indexed,
int width_shift)
static int misaligned_fpu_load(struct pt_regs *regs,
__u32 opcode,
int displacement_not_indexed,
int width_shift,
int do_paired_load)
static int misaligned_fpu_store(struct pt_regs *regs,
__u32 opcode,
int displacement_not_indexed,
int width_shift,
int do_paired_load)
static int misaligned_fixup(struct pt_regs *regs)
static ctl_table unaligned_table[] = ;
static ctl_table unaligned_root[] = ;
static ctl_table sh64_root[] = ;
static struct ctl_table_header *sysctl_header;
static int __init init_sysctl(void)
__initcall(init_sysctl);
asmlinkage void do_debug_interrupt(unsigned long code, struct pt_regs *regs)
void __cpuinit per_cpu_trap_init(void)
