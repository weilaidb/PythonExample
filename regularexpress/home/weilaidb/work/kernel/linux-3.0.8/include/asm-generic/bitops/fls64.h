#define _ASM_GENERIC_BITOPS_FLS64_H_
#if BITS_PER_LONG == 32
static __always_inline int fls64(__u64 x)
#elif BITS_PER_LONG == 64
static __always_inline int fls64(__u64 x)
#error BITS_PER_LONG not 32 or 64
