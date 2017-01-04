#if HAVE_IO_H
#if HAVE_SETCONSOLETEXTATTRIBUTE
#define COLOR_RED    FOREGROUND_RED
#define COLOR_GREEN  FOREGROUND_GREEN
#define COLOR_YELLOW (FOREGROUND_RED|FOREGROUND_GREEN)
#define COLOR_RED    1
#define COLOR_GREEN  2
#define COLOR_YELLOW 3
#if HAVE_UNISTD_H
#if !HAVE_ISATTY
#define isatty(fd) 1
#if ARCH_ARM && HAVE_ARMV5TE_EXTERNAL
void (*checkasm_checked_call)(void *func, int dummy, ...) = checkasm_checked_call_novfp;
static const struct  tests[] = ;
static const struct  cpus[] = ;
typedef struct CheckasmFuncVersion  CheckasmFuncVersion;
typedef struct CheckasmFunc  CheckasmFunc;
static struct  state;
AVLFG checkasm_lfg;
static int is_negative(union av_intfloat32 u)
int float_near_ulp(float a, float b, unsigned max_ulp)
int float_near_ulp_array(const float *a, const float *b, unsigned max_ulp,
unsigned len)
int float_near_abs_eps(float a, float b, float eps)
int float_near_abs_eps_array(const float *a, const float *b, float eps,
unsigned len)
int float_near_abs_eps_ulp(float a, float b, float eps, unsigned max_ulp)
int float_near_abs_eps_array_ulp(const float *a, const float *b, float eps,
unsigned max_ulp, unsigned len)
static void color_printf(int color, const char *fmt, ...)
static void destroy_func_tree(CheckasmFunc *f)
static void *checkasm_malloc(size_t size)
static const char *cpu_suffix(int cpu)
static int cmp_nop(const void *a, const void *b)
static int measure_nop_time(void)
static void print_benchs(CheckasmFunc *f)
static int cmp_func_names(const char *a, const char *b)
static CheckasmFunc *rotate_tree(CheckasmFunc *f, int dir)
#define is_red(f) ((f) && !(f)->color)
static void balance_tree(CheckasmFunc **root)
static CheckasmFunc *get_func(CheckasmFunc **root, const char *name)
static void check_cpu_flag(const char *name, int flag)
static void print_cpu_name(void)
int main(int argc, char *argv[])
void *checkasm_check_func(void *func, const char *name, ...)
int checkasm_bench_func(void)
void checkasm_fail_func(const char *msg, ...)
void checkasm_update_bench(int iterations, uint64_t cycles)
void checkasm_report(const char *name, ...)
