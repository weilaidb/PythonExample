static void rem_kernel(unsigned long long st0, unsigned long long *y,
unsigned long long st1, unsigned long long q, int n);
#define BETTER_THAN_486
#define FCOS  4
static int trig_arg(FPU_REG *st0_ptr, int even)
static void convert_l2reg(long const *arg, int deststnr)
static void single_arg_error(FPU_REG *st0_ptr, u_char st0_tag)
static void single_arg_2_error(FPU_REG *st0_ptr, u_char st0_tag)
static void f2xm1(FPU_REG *st0_ptr, u_char tag)
static void fptan(FPU_REG *st0_ptr, u_char st0_tag)
static void fxtract(FPU_REG *st0_ptr, u_char st0_tag)
static void fdecstp(void)
static void fincstp(void)
static void fsqrt_(FPU_REG *st0_ptr, u_char st0_tag)
static void frndint_(FPU_REG *st0_ptr, u_char st0_tag)
static int fsin(FPU_REG *st0_ptr, u_char tag)
static int f_cos(FPU_REG *st0_ptr, u_char tag)
static void fcos(FPU_REG *st0_ptr, u_char st0_tag)
static void fsincos(FPU_REG *st0_ptr, u_char st0_tag)
static void rem_kernel(unsigned long long st0, unsigned long long *y,
unsigned long long st1, unsigned long long q, int n)
static void do_fprem(FPU_REG *st0_ptr, u_char st0_tag, int round)
static void fyl2x(FPU_REG *st0_ptr, u_char st0_tag)
static void fpatan(FPU_REG *st0_ptr, u_char st0_tag)
static void fprem(FPU_REG *st0_ptr, u_char st0_tag)
static void fprem1(FPU_REG *st0_ptr, u_char st0_tag)
static void fyl2xp1(FPU_REG *st0_ptr, u_char st0_tag)
static void fscale(FPU_REG *st0_ptr, u_char st0_tag)
static FUNC_ST0 const trig_table_a[] = ;
void FPU_triga(void)
static FUNC_ST0 const trig_table_b[] = ;
void FPU_trigb(void)
