#define AVUTIL_AARCH64_NEONTEST_H
#define storeneonregs(mem)                \
__asm__ volatile(                     \
"stp d8,  d9,  [%0]\n\t"          \
"stp d10, d11, [%0, #16]\n\t"     \
"stp d12, d13, [%0, #32]\n\t"     \
"stp d14, d15, [%0, #48]\n\t"     \
:: "r"(mem) : "memory")
#define testneonclobbers(func, ctx, ...)                        \
uint64_t neon[2][8];                                        \
int ret;                                                    \
storeneonregs(neon[0]);                                     \
ret = __real_ ## func(ctx, __VA_ARGS__);                    \
storeneonregs(neon[1]);                                     \
if (memcmp(neon[0], neon[1], sizeof(neon[0])))                                                            \
return ret
#define wrap(func)      \
int __real_ ## func;    \
int __wrap_ ## func;    \
int __wrap_ ## func
