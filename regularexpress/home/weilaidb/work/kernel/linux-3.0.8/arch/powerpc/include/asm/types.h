#define _ASM_POWERPC_TYPES_H
#if defined(__powerpc64__) && !defined(__KERNEL__)
# include <asm-generic/int-l64.h>
# include <asm-generic/int-ll64.h>
typedef unsigned int umode_t;
typedef unsigned short umode_t;
typedef struct  __attribute__((aligned(16))) __vector128;
typedef __vector128 vector128;
typedef struct  func_descr_t;
