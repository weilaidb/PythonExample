#if HAVE_YASM
#define cpuid(index, eax, ebx, ecx, edx)        \
ff_cpu_cpuid(index, &eax, &ebx, &ecx, &edx)
#define xgetbv(index, eax, edx)                 \
ff_cpu_xgetbv(index, &eax, &edx)
#elif HAVE_INLINE_ASM
#define cpuid(index, eax, ebx, ecx, edx)                        \
__asm__ volatile (                                          \
"mov    %%"FF_REG_b", %%"FF_REG_S" \n\t"                \
"cpuid                       \n\t"                      \
"xchg   %%"FF_REG_b", %%"FF_REG_S                       \
: "=a" (eax), "=S" (ebx), "=c" (ecx), "=d" (edx)        \
: "0" (index), "2"(0))
#define xgetbv(index, eax, edx)                                 \
__asm__ (".byte 0x0f, 0x01, 0xd0" : "=a"(eax), "=d"(edx) : "c" (index))
#define get_eflags(x)                           \
__asm__ volatile ("pushfl     \n"           \
"pop    %0  \n"           \
: "=r"(x))
#define set_eflags(x)                           \
__asm__ volatile ("push    %0 \n"           \
"popfl      \n"           \
:: "r"(x))
#if ARCH_X86_64
#define cpuid_test() 1
#elif HAVE_YASM
#define cpuid_test ff_cpu_cpuid_test
#elif HAVE_INLINE_ASM
static int cpuid_test(void)
int ff_get_cpu_flags_x86(void)
