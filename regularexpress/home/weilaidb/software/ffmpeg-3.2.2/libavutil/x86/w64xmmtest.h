#define AVUTIL_X86_W64XMMTEST_H
#define storexmmregs(mem)               \
__asm__ volatile(                   \
"movups %%xmm6 , 0x00(%0)\n\t"  \
"movups %%xmm7 , 0x10(%0)\n\t"  \
"movups %%xmm8 , 0x20(%0)\n\t"  \
"movups %%xmm9 , 0x30(%0)\n\t"  \
"movups %%xmm10, 0x40(%0)\n\t"  \
"movups %%xmm11, 0x50(%0)\n\t"  \
"movups %%xmm12, 0x60(%0)\n\t"  \
"movups %%xmm13, 0x70(%0)\n\t"  \
"movups %%xmm14, 0x80(%0)\n\t"  \
"movups %%xmm15, 0x90(%0)\n\t"  \
:: "r"(mem) : "memory")
#define testxmmclobbers(func, ctx, ...)                         \
uint64_t xmm[2][10][2];                                     \
int ret;                                                    \
storexmmregs(xmm[0]);                                       \
ret = __real_ ## func(ctx, __VA_ARGS__);                    \
storexmmregs(xmm[1]);                                       \
if (memcmp(xmm[0], xmm[1], sizeof(xmm[0])))                                                            \
return ret
#define wrap(func)      \
int __real_ ## func;    \
int __wrap_ ## func;    \
int __wrap_ ## func
