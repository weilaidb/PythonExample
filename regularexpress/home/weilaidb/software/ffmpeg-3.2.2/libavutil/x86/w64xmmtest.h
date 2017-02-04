#define AVUTIL_X86_W64XMMTEST_H
storexmmregs               \
volatile
testxmmclobbers                         \
uint64_t xmm[2][10][2];                                     \
int ret;                                                    \
storexmmregs(xmm[0]);                                       \
ret = __real_ ## func(ctx, __VA_ARGS__);                    \
storexmmregs(xmm[1]);                                       \
if (memcmp(xmm[0], xmm[1], sizeof(xmm[0])))                                                            \
return ret
wrap      \
int __real_ ## func;    \
int __wrap_ ## func;    \
int __wrap_ ## func
