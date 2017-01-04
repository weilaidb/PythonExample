#if defined(__WIN32__)
#if defined(__MACOSX__) && (defined(__ppc__) || defined(__ppc64__))
#elif defined(__OpenBSD__) && defined(__powerpc__)
#elif SDL_ALTIVEC_BLITTERS && HAVE_SETJMP
#define CPU_HAS_RDTSC   0x00000001
#define CPU_HAS_ALTIVEC 0x00000002
#define CPU_HAS_MMX     0x00000004
#define CPU_HAS_3DNOW   0x00000008
#define CPU_HAS_SSE     0x00000010
#define CPU_HAS_SSE2    0x00000020
#define CPU_HAS_SSE3    0x00000040
#define CPU_HAS_SSE41   0x00000100
#define CPU_HAS_SSE42   0x00000200
#define CPU_HAS_AVX     0x00000400
#define CPU_HAS_AVX2    0x00000800
#if SDL_ALTIVEC_BLITTERS && HAVE_SETJMP && !__MACOSX__ && !__OpenBSD__
static jmp_buf jmpbuf;
static void
illegal_instruction(int sig)
static int
CPU_haveCPUID(void)
#if defined(__GNUC__) && defined(i386)
#define cpuid(func, a, b, c, d) \
__asm__ __volatile__ ( \
"        pushl %%ebx        \n" \
"        xorl %%ecx,%%ecx   \n" \
"        cpuid              \n" \
"        movl %%ebx, %%esi  \n" \
"        popl %%ebx         \n" : \
"=a" (a), "=S" (b), "=c" (c), "=d" (d) : "a" (func))
#elif defined(__GNUC__) && defined(__x86_64__)
#define cpuid(func, a, b, c, d) \
__asm__ __volatile__ ( \
"        pushq %%rbx        \n" \
"        xorq %%rcx,%%rcx   \n" \
"        cpuid              \n" \
"        movq %%rbx, %%rsi  \n" \
"        popq %%rbx         \n" : \
"=a" (a), "=S" (b), "=c" (c), "=d" (d) : "a" (func))
#elif (defined(_MSC_VER) && defined(_M_IX86)) || defined(__WATCOMC__)
#define cpuid(func, a, b, c, d) \
__asm
#elif defined(_MSC_VER) && defined(_M_X64)
#define cpuid(func, a, b, c, d) \
#define cpuid(func, a, b, c, d) \
a = b = c = d = 0
static int
CPU_getCPUIDFeatures(void)
static SDL_bool
CPU_OSSavesYMM(void)
static int
CPU_haveRDTSC(void)
static int
CPU_haveAltiVec(void)
static int
CPU_haveMMX(void)
static int
CPU_have3DNow(void)
static int
CPU_haveSSE(void)
static int
CPU_haveSSE2(void)
static int
CPU_haveSSE3(void)
static int
CPU_haveSSE41(void)
static int
CPU_haveSSE42(void)
static int
CPU_haveAVX(void)
static int
CPU_haveAVX2(void)
static int SDL_CPUCount = 0;
int
SDL_GetCPUCount(void)
static const char *
SDL_GetCPUType(void)
static const char *
SDL_GetCPUName(void)
int
SDL_GetCPUCacheLineSize(void)
static Uint32 SDL_CPUFeatures = 0xFFFFFFFF;
static Uint32
SDL_GetCPUFeatures(void)
SDL_bool
SDL_HasRDTSC(void)
SDL_bool
SDL_HasAltiVec(void)
SDL_bool
SDL_HasMMX(void)
SDL_bool
SDL_Has3DNow(void)
SDL_bool
SDL_HasSSE(void)
SDL_bool
SDL_HasSSE2(void)
SDL_bool
SDL_HasSSE3(void)
SDL_bool
SDL_HasSSE41(void)
SDL_bool
SDL_HasSSE42(void)
SDL_bool
SDL_HasAVX(void)
SDL_bool
SDL_HasAVX2(void)
static int SDL_SystemRAM = 0;
int
SDL_GetSystemRAM(void)
int
main()
