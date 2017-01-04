#define _XTENSA_TYPES_H
# define __XTENSA_UL(x)		(x)
# define __XTENSA_UL_CONST(x)	x
# define __XTENSA_UL(x)		((unsigned long)(x))
# define __XTENSA_UL_CONST(x)	x##UL
typedef unsigned short umode_t;
#define BITS_PER_LONG 32
