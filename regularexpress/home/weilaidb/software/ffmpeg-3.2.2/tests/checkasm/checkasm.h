#define TESTS_CHECKASM_CHECKASM_H
void checkasm_check_alacdsp(void);
void checkasm_check_blend(void);
void checkasm_check_bswapdsp(void);
void checkasm_check_colorspace(void);
void checkasm_check_flacdsp(void);
void checkasm_check_fmtconvert(void);
void checkasm_check_h264dsp(void);
void checkasm_check_h264pred(void);
void checkasm_check_h264qpel(void);
void checkasm_check_jpeg2000dsp(void);
void checkasm_check_pixblockdsp(void);
void checkasm_check_synth_filter(void);
void checkasm_check_v210enc(void);
void checkasm_check_vp9dsp(void);
void checkasm_check_videodsp(void);
void *checkasm_check_func(void *func, const char *name, ...) av_printf_format(2, 3);
int checkasm_bench_func(void);
void checkasm_fail_func(const char *msg, ...) av_printf_format(1, 2);
void checkasm_update_bench(int iterations, uint64_t cycles);
void checkasm_report(const char *name, ...) av_printf_format(1, 2);
int float_near_ulp(float a, float b, unsigned max_ulp);
int float_near_abs_eps(float a, float b, float eps);
int float_near_abs_eps_ulp(float a, float b, float eps, unsigned max_ulp);
int float_near_ulp_array(const float *a, const float *b, unsigned max_ulp,
unsigned len);
int float_near_abs_eps_array(const float *a, const float *b, float eps,
unsigned len);
int float_near_abs_eps_array_ulp(const float *a, const float *b, float eps,
unsigned max_ulp, unsigned len);
extern AVLFG checkasm_lfg;
#define rnd() av_lfg_get(&checkasm_lfg)
static av_unused void *func_ref, *func_new;
#define BENCH_RUNS 1000
#define check_func(func, ...) (func_ref = checkasm_check_func((func_new = func), __VA_ARGS__))
#define declare_func(ret, ...) declare_new(ret, __VA_ARGS__) typedef ret func_type(__VA_ARGS__)
#define declare_func_emms(cpu_flags, ret, ...) declare_new_emms(cpu_flags, ret, __VA_ARGS__) typedef ret func_type(__VA_ARGS__)
#define fail() checkasm_fail_func("%s:%d", av_basename(__FILE__), __LINE__)
#define report checkasm_report
#define call_ref(...) ((func_type *)func_ref)(__VA_ARGS__)
#if ARCH_X86 && HAVE_YASM
void checkasm_checked_call(void *func, ...);
void checkasm_checked_call_emms(void *func, ...);
#if ARCH_X86_64
void checkasm_stack_clobber(uint64_t clobber, ...);
#define declare_new(ret, ...) ret (*checked_call)(void *, int, int, int, int, int, __VA_ARGS__)\
= (void *)checkasm_checked_call;
#define declare_new_emms(cpu_flags, ret, ...) \
ret (*checked_call)(void *, int, int, int, int, int, __VA_ARGS__) = \
((cpu_flags) & av_get_cpu_flags()) ? (void *)checkasm_checked_call_emms : \
(void *)checkasm_checked_call;
#define CLOB (UINT64_C(0xdeadbeefdeadbeef))
#define call_new(...) (checkasm_stack_clobber(CLOB,CLOB,CLOB,CLOB,CLOB,CLOB,CLOB,CLOB,CLOB,CLOB,CLOB,\
CLOB,CLOB,CLOB,CLOB,CLOB,CLOB,CLOB,CLOB,CLOB,CLOB),\
checked_call(func_new, 0, 0, 0, 0, 0, __VA_ARGS__))
#elif ARCH_X86_32
#define declare_new(ret, ...) ret (*checked_call)(void *, __VA_ARGS__) = (void *)checkasm_checked_call;
#define declare_new_emms(cpu_flags, ret, ...) ret (*checked_call)(void *, __VA_ARGS__) = \
((cpu_flags) & av_get_cpu_flags()) ? (void *)checkasm_checked_call_emms :        \
(void *)checkasm_checked_call;
#define call_new(...) checked_call(func_new, __VA_ARGS__)
#elif ARCH_ARM && HAVE_ARMV5TE_EXTERNAL
void checkasm_checked_call_vfp(void *func, int dummy, ...);
void checkasm_checked_call_novfp(void *func, int dummy, ...);
extern void (*checkasm_checked_call)(void *func, int dummy, ...);
#define declare_new(ret, ...) ret (*checked_call)(void *, int dummy, __VA_ARGS__) = (void *)checkasm_checked_call;
#define call_new(...) checked_call(func_new, 0, __VA_ARGS__)
#elif ARCH_AARCH64 && !defined(__APPLE__)
void checkasm_checked_call(void *func, ...);
#define declare_new(ret, ...) ret (*checked_call)(void *, __VA_ARGS__) = (void *)checkasm_checked_call;
#define call_new(...) checked_call(func_new, __VA_ARGS__)
#define declare_new(ret, ...)
#define declare_new_emms(cpu_flags, ret, ...)
#define call_new(...) ((func_type *)func_new)(__VA_ARGS__)
#define declare_new_emms(cpu_flags, ret, ...) declare_new(ret, __VA_ARGS__)
#define bench_new(...)\
do  while (0)
#define bench_new(...) while(0)
