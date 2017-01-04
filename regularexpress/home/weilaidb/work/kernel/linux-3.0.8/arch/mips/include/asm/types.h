#define _ASM_TYPES_H
#if (_MIPS_SZLONG == 64) && !defined(__KERNEL__)
# include <asm-generic/int-l64.h>
# include <asm-generic/int-ll64.h>
typedef unsigned short umode_t;
typedef unsigned long long phys_t;
typedef unsigned long phys_t;
