#define _ASM_MICROBLAZE_ASM_COMPAT_H
#  define stringify_in_c(...)	__VA_ARGS__
#  define ASM_CONST(x)		x
#  define __stringify_in_c(...)	#__VA_ARGS__
#  define stringify_in_c(...)	__stringify_in_c(__VA_ARGS__) " "
#  define __ASM_CONST(x)	x##UL
#  define ASM_CONST(x)		__ASM_CONST(x)
