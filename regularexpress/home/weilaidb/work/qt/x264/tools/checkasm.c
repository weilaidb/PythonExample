#if ARCH_ARM
#undef ALIGNED_16
#define ALIGNED_16( var ) DECLARE_ALIGNED( static var, 16 )
uint8_t *buf1, *buf2;
uint8_t *buf3, *buf4;
pixel *pbuf1, *pbuf2;
pixel *pbuf3, *pbuf4;
int quiet = 0;
#define report( name )
#define BENCH_RUNS 100
#define BENCH_ALIGNS 16
#define MAX_FUNCS 1000
#define MAX_CPUS 30
typedef struct
bench_t;
typedef struct
bench_func_t;
int do_bench = 0;
int bench_pattern_len = 0;
const char *bench_pattern = "";
char func_name[100];
static bench_func_t benchs[MAX_FUNCS];
static const char *pixel_names[12] = ;
static const char *intra_predict_16x16_names[7] = ;
static const char *intra_predict_8x8c_names[7] = ;
static const char *intra_predict_4x4_names[12] = ;
static const char **intra_predict_8x8_names = intra_predict_4x4_names;
static const char **intra_predict_8x16c_names = intra_predict_8x8c_names;
#define set_func_name(...) snprintf( func_name, sizeof(func_name), __VA_ARGS__ )
static inline uint32_t read_time(void)
static bench_t* get_bench( const char *name, int cpu )
static int cmp_nop( const void *a, const void *b )
static int cmp_bench( const void *a, const void *b )
static void print_bench(void)
#if ARCH_X86 || ARCH_X86_64
int x264_stack_pagealign( int (*func)(), int align );
intptr_t x264_checkasm_call( intptr_t (*func)(), int *ok, ... );
#define x264_stack_pagealign( func, align ) func()
#if ARCH_AARCH64
intptr_t x264_checkasm_call( intptr_t (*func)(), int *ok, ... );
#if ARCH_ARM
intptr_t x264_checkasm_call_neon( intptr_t (*func)(), int *ok, ... );
intptr_t x264_checkasm_call_noneon( intptr_t (*func)(), int *ok, ... );
intptr_t (*x264_checkasm_call)( intptr_t (*func)(), int *ok, ... ) = x264_checkasm_call_noneon;
#define call_c1(func,...) func(__VA_ARGS__)
#if ARCH_X86_64
void x264_checkasm_stack_clobber( uint64_t clobber, ... );
#define call_a1(func,...) ()
#elif ARCH_AARCH64 && !defined(__APPLE__)
void x264_checkasm_stack_clobber( uint64_t clobber, ... );
#define call_a1(func,...) ()
#elif ARCH_X86 || ARCH_ARM
#define call_a1(func,...) x264_checkasm_call( (intptr_t(*)())func, &ok, __VA_ARGS__ )
#define call_a1 call_c1
#if ARCH_ARM
#define call_a1_64(func,...) ((uint64_t (*)(intptr_t(*)(), int*, ...))x264_checkasm_call)( (intptr_t(*)())func, &ok, __VA_ARGS__ )
#define call_a1_64 call_a1
#define call_bench(func,cpu,...)\
if( do_bench && !strncmp(func_name, bench_pattern, bench_pattern_len) )\
#define call_a(func,...) ()
#define call_c(func,...) ()
#define call_a2(func,...) ()
#define call_c2(func,...) ()
#define call_a64(func,...) ()
static int check_pixel( int cpu_ref, int cpu_new )
static int check_dct( int cpu_ref, int cpu_new )
static int check_mc( int cpu_ref, int cpu_new )
static int check_deblock( int cpu_ref, int cpu_new )
static int check_quant( int cpu_ref, int cpu_new )
static int check_intra( int cpu_ref, int cpu_new )
#define DECL_CABAC(cpu) \
static void run_cabac_decision_##cpu( x264_t *h, uint8_t *dst )\
\
static void run_cabac_bypass_##cpu( x264_t *h, uint8_t *dst )\
\
static void run_cabac_terminal_##cpu( x264_t *h, uint8_t *dst )\
DECL_CABAC(c)
#if HAVE_MMX
DECL_CABAC(asm)
#elif defined(ARCH_AARCH64)
DECL_CABAC(asm)
#define run_cabac_decision_asm run_cabac_decision_c
#define run_cabac_bypass_asm run_cabac_bypass_c
#define run_cabac_terminal_asm run_cabac_terminal_c
extern const uint8_t x264_count_cat_m1[14];
void x264_cabac_block_residual_c( x264_t *h, x264_cabac_t *cb, int ctx_block_cat, dctcoef *l );
void x264_cabac_block_residual_8x8_rd_c( x264_t *h, x264_cabac_t *cb, int ctx_block_cat, dctcoef *l );
void x264_cabac_block_residual_rd_c( x264_t *h, x264_cabac_t *cb, int ctx_block_cat, dctcoef *l );
static int check_cabac( int cpu_ref, int cpu_new )
static int check_bitstream( int cpu_ref, int cpu_new )
static int check_all_funcs( int cpu_ref, int cpu_new )
static int add_flags( int *cpu_ref, int *cpu_new, int flags, const char *name )
static int check_all_flags( void )
int main(int argc, char *argv[])
