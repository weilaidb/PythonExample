#if BITS_PER_LONG == 32
uint32_t __attribute__((weak)) __div64_32(uint64_t *n, uint32_t base)
EXPORT_SYMBOL(__div64_32);
s64 div_s64_rem(s64 dividend, s32 divisor, s32 *remainder)
EXPORT_SYMBOL(div_s64_rem);
u64 div64_u64(u64 dividend, u64 divisor)
EXPORT_SYMBOL(div64_u64);
s64 div64_s64(s64 dividend, s64 divisor)
EXPORT_SYMBOL(div64_s64);
u32 iter_div_u64_rem(u64 dividend, u32 divisor, u64 *remainder)
EXPORT_SYMBOL(iter_div_u64_rem);
