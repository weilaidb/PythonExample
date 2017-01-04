#define _ASM_COMPILER_H
#if __GNUC__ > 3 || (__GNUC__ == 3 && __GNUC_MINOR__ >= 4)
#define GCC_IMM_ASM() "n"
#define GCC_REG_ACCUM "$0"
#define GCC_IMM_ASM() "rn"
#define GCC_REG_ACCUM "accum"
