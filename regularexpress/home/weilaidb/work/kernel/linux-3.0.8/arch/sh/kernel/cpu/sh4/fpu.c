#define FPSCR_RCHG 0x00000000
extern unsigned long long float64_div(unsigned long long a,
unsigned long long b);
extern unsigned long int float32_div(unsigned long int a, unsigned long int b);
extern unsigned long long float64_mul(unsigned long long a,
unsigned long long b);
extern unsigned long int float32_mul(unsigned long int a, unsigned long int b);
extern unsigned long long float64_add(unsigned long long a,
unsigned long long b);
extern unsigned long int float32_add(unsigned long int a, unsigned long int b);
extern unsigned long long float64_sub(unsigned long long a,
unsigned long long b);
extern unsigned long int float32_sub(unsigned long int a, unsigned long int b);
extern unsigned long int float64_to_float32(unsigned long long a);
static unsigned int fpu_exception_flags;
void save_fpu(struct task_struct *tsk)
void restore_fpu(struct task_struct *tsk)
static void denormal_to_double(struct sh_fpu_hard_struct *fpu, int n)
static int ieee_fpe_handler(struct pt_regs *regs)
void float_raise(unsigned int flags)
int float_rounding_mode(void)
BUILD_TRAP_HANDLER(fpu_error)
