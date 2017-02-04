#define AVCODEC_X86_H264_I386_H
#if HAVE_INLINE_ASM
#if ARCH_X86_64
#define REG64
#define REG64
#if HAVE_7REGS && !BROKEN_COMPILER
#define decode_significance decode_significance_x86
decode_significance_x86
#define decode_significance_8x8 decode_significance_8x8_x86
decode_significance_8x8_x86
