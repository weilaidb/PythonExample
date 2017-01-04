#define AVUTIL_ARM_NEONTEST_H
#define storeneonregs(mem)                \
__asm__ volatile(                     \
"vstm %0, \n\t"           \
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
