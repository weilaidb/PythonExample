#if HAVE_YASM
cpuid        \
ff_cpu_cpuid(index, &eax, &ebx, &ecx, &edx)
xgetbv                 \
ff_cpu_xgetbv(index, &eax, &edx)
#elif HAVE_INLINE_ASM
cpuid                        \
__asm__ volatile (                                          \
\
\
FF_REG_S                       \
:  (edx)        \
: (0))
xgetbv                                 \
__asm__ ( (index))
get_eflags                           \
__asm__ volatile (           \
\
: (x))
set_eflags                           \
__asm__ volatile (           \
\
:: (x))
#if ARCH_X86_64
cpuid_test 1
#elif HAVE_YASM
#define cpuid_test ff_cpu_cpuid_test
#elif HAVE_INLINE_ASM
cpuid_test
ff_get_cpu_flags_x86
