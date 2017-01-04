#define _ASM_IA64_TYPES_H
# define __IA64_UL(x)		(x)
# define __IA64_UL_CONST(x)	x
# define __IA64_UL(x)		((unsigned long)(x))
# define __IA64_UL_CONST(x)	x##UL
typedef unsigned int umode_t;
# ifdef __KERNEL__
struct fnptr ;
# endif
