#define AVCODEC_X86_MATHOPS_H
#if HAVE_INLINE_ASM
#if ARCH_X86_32
#define MULL MULL
static av_always_inline av_const int MULL(int a, int b, unsigned shift)
#define MULH MULH
static av_always_inline av_const int MULH(int a, int b)
#define MUL64 MUL64
static av_always_inline av_const int64_t MUL64(int a, int b)
#if HAVE_I686
#define mid_pred mid_pred
static inline av_const int mid_pred(int a, int b, int c)
#if HAVE_6REGS
#define COPY3_IF_LT(x, y, a, b, c, d)\
__asm__ volatile(\
"cmpl  %0, %3       \n\t"\
"cmovl %3, %0       \n\t"\
"cmovl %4, %1       \n\t"\
"cmovl %5, %2       \n\t"\
: "+&r" (x), "+&r" (a), "+r" (c)\
: "r" (y), "r" (b), "r" (d)\
);
#define MASK_ABS(mask, level)                   \
__asm__ ("cdq                    \n\t"      \
"xorl %1, %0            \n\t"      \
"subl %1, %0            \n\t"      \
: "+a"(level), "=&d"(mask))
#define NEG_SSR32 NEG_SSR32
static inline  int32_t NEG_SSR32( int32_t a, int8_t s)
#define NEG_USR32 NEG_USR32
static inline uint32_t NEG_USR32(uint32_t a, int8_t s)
