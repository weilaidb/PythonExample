fpswa_interface_t *fpswa_interface;
EXPORT_SYMBOL(fpswa_interface);
void __init
trap_init (void)
int
die (const char *str, struct pt_regs *regs, long err)
int
die_if_kernel (char *str, struct pt_regs *regs, long err)
void
__kprobes ia64_bad_break (unsigned long break_num, struct pt_regs *regs)
static inline void
disabled_fph_fault (struct pt_regs *regs)
static inline int
fp_emulate (int fp_fault, void *bundle, long *ipsr, long *fpsr, long *isr, long *pr, long *ifs,
struct pt_regs *regs)
struct fpu_swa_msg ;
static DEFINE_PER_CPU(struct fpu_swa_msg, cpulast);
DECLARE_PER_CPU(struct fpu_swa_msg, cpulast);
static struct fpu_swa_msg last __cacheline_aligned;
static int
handle_fpu_swa (int fp_fault, struct pt_regs *regs, unsigned long isr)
struct illegal_op_return ;
struct illegal_op_return
ia64_illegal_op_fault (unsigned long ec, long arg1, long arg2, long arg3,
long arg4, long arg5, long arg6, long arg7,
struct pt_regs regs)
void __kprobes
ia64_fault (unsigned long vector, unsigned long isr, unsigned long ifa,
unsigned long iim, unsigned long itir, long arg5, long arg6,
long arg7, struct pt_regs regs)
