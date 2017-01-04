#define __ASM_ARM_DIV64
#define __xh "r0"
#define __xl "r1"
#define __xl "r0"
#define __xh "r1"
#define __do_div_asm(n, base)					\
()
#if __GNUC__ < 4
#define do_div(n, base) __do_div_asm(n, base)
#elif __GNUC__ >= 4
#define do_div(n, base)							\
()
#define __div64_fls(bits)						\
()
