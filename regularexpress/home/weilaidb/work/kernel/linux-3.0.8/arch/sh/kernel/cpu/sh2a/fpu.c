#define FPSCR_RCHG 0x00000000
void save_fpu(struct task_struct *tsk)
void restore_fpu(struct task_struct *tsk)
static int denormal_mulf(int hx, int hy)
static void mult64(unsigned long long x, unsigned long long y,
unsigned long long *highp, unsigned long long *lowp)
static inline long long rshift64(unsigned long long mh,
unsigned long long ml, int n)
static long long denormal_muld(long long hx, long long hy)
static int denormal_subf1(unsigned int ix, unsigned int iy)
static int denormal_addf1(unsigned int ix, unsigned int iy)
static int denormal_addf(int hx, int hy)
static long long denormal_subd1(unsigned long long ix, unsigned long long iy)
static long long denormal_addd1(unsigned long long ix, unsigned long long iy)
static long long denormal_addd(long long hx, long long hy)
static void
denormal_to_double (struct sh_fpu_hard_struct *fpu, int n)
static int
ieee_fpe_handler (struct pt_regs *regs)
BUILD_TRAP_HANDLER(fpu_error)
