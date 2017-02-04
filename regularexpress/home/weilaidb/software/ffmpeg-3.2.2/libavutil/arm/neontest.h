#define AVUTIL_ARM_NEONTEST_H
storeneonregs                \
volatile
testneonclobbers                        \
uint64_t neon[2][8];                                        \
int ret;                                                    \
storeneonregs(neon[0]);                                     \
ret = __real_ ## func(ctx, __VA_ARGS__);                    \
storeneonregs(neon[1]);                                     \
if (memcmp(neon[0], neon[1], sizeof(neon[0])))                                                            \
return ret
wrap      \
int __real_ ## func;    \
int __wrap_ ## func;    \
int __wrap_ ## func
