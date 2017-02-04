#define AVCODEC_X86_MATHOPS_H
#if HAVE_INLINE_ASM
#if ARCH_X86_32
#define MULL MULL
MULL
#define MULH MULH
MULH
#define MUL64 MUL64
MUL64
#if HAVE_I686
#define mid_pred mid_pred
mid_pred
#if HAVE_6REGS
COPY3_IF_LT\
volatile\
:  (d)\
);
MASK_ABS                   \
__asm__ (      \
\
\
: (mask))
#define NEG_SSR32 NEG_SSR32
NEG_SSR32
#define NEG_USR32 NEG_USR32
NEG_USR32
