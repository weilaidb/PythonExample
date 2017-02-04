#define TESTS_CHECKASM_CHECKASM_H
checkasm_check_alacdsp;
checkasm_check_blend;
checkasm_check_bswapdsp;
checkasm_check_colorspace;
checkasm_check_flacdsp;
checkasm_check_fmtconvert;
checkasm_check_h264dsp;
checkasm_check_h264pred;
checkasm_check_h264qpel;
checkasm_check_jpeg2000dsp;
checkasm_check_pixblockdsp;
checkasm_check_synth_filter;
checkasm_check_v210enc;
checkasm_check_vp9dsp;
checkasm_check_videodsp;
*checkasm_check_func av_printf_format(2, 3);
checkasm_bench_func;
checkasm_fail_func av_printf_format(1, 2);
checkasm_update_bench;
checkasm_report av_printf_format(1, 2);
float_near_ulp;
float_near_abs_eps;
float_near_abs_eps_ulp;
float_near_ulp_array;
float_near_abs_eps_array;
float_near_abs_eps_array_ulp;
extern AVLFG checkasm_lfg;
rnd av_lfg_get(&checkasm_lfg)
static av_unused void *func_ref, *func_new;
#define BENCH_RUNS 1000
check_func (func_ref = checkasm_check_func((func_new = func), __VA_ARGS__))
func_type
func_type
fail checkasm_fail_func(, av_basename(__FILE__), __LINE__)
#define report checkasm_report
call_ref ((func_type *)func_ref)(__VA_ARGS__)
#if ARCH_X86 && HAVE_YASM
checkasm_checked_call;
checkasm_checked_call_emms;
#if ARCH_X86_64
checkasm_stack_clobber;
declare_new ret (*checked_call)(void *, int, int, int, int, int, __VA_ARGS__)\
= (void *)checkasm_checked_call;
declare_new_emms \
ret (*checked_call)(void *, int, int, int, int, int, __VA_ARGS__) = \
av_get_cpu_flags) ? (void *)checkasm_checked_call_emms : \
(void *)checkasm_checked_call;
#define CLOB (UINT64_C(0xdeadbeefdeadbeef))
call_new (checkasm_stack_clobber(CLOB,CLOB,CLOB,CLOB,CLOB,CLOB,CLOB,CLOB,CLOB,CLOB,CLOB,\
CLOB,CLOB,CLOB,CLOB,CLOB,CLOB,CLOB,CLOB,CLOB,CLOB),\
checked_call(func_new, 0, 0, 0, 0, 0, __VA_ARGS__))
#elif ARCH_X86_32
declare_new ret (*checked_call)(void *, __VA_ARGS__) = (void *)checkasm_checked_call;
declare_new_emms ret (*checked_call)(void *, __VA_ARGS__) = \
av_get_cpu_flags) ? (void *)checkasm_checked_call_emms :        \
(void *)checkasm_checked_call;
call_new checked_call(func_new, __VA_ARGS__)
#elif ARCH_ARM && HAVE_ARMV5TE_EXTERNAL
checkasm_checked_call_vfp;
checkasm_checked_call_novfp;
extern void (*checkasm_checked_call)(void *func, int dummy, ...);
declare_new ret (*checked_call)(void *, int dummy, __VA_ARGS__) = (void *)checkasm_checked_call;
call_new checked_call(func_new, 0, __VA_ARGS__)
#elif ARCH_AARCH64 && !defined(__APPLE__)
checkasm_checked_call;
declare_new ret (*checked_call)(void *, __VA_ARGS__) = (void *)checkasm_checked_call;
call_new checked_call(func_new, __VA_ARGS__)
declare_new
declare_new_emms
call_new ((func_type *)func_new)(__VA_ARGS__)
declare_new_emms declare_new(ret, __VA_ARGS__)
bench_new\
do  while (0)
bench_new while(0)
