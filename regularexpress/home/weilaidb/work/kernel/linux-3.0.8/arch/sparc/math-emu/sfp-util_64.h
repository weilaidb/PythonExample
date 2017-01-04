#define add_ssaaaa(sh, sl, ah, al, bh, bl) 	\
__asm__ ("addcc %4,%5,%1\n\t"			\
"add %2,%3,%0\n\t"			\
"bcs,a,pn %%xcc, 1f\n\t"		\
"add %0, 1, %0\n"			\
"1:"					\
: "=r" ((UDItype)(sh)),		\
"=&r" ((UDItype)(sl))		\
: "r" ((UDItype)(ah)),		\
"r" ((UDItype)(bh)),		\
"r" ((UDItype)(al)),		\
"r" ((UDItype)(bl))		\
: "cc")
#define sub_ddmmss(sh, sl, ah, al, bh, bl) 	\
__asm__ ("subcc %4,%5,%1\n\t"			\
"sub %2,%3,%0\n\t"			\
"bcs,a,pn %%xcc, 1f\n\t"		\
"sub %0, 1, %0\n"			\
"1:"					\
: "=r" ((UDItype)(sh)),		\
"=&r" ((UDItype)(sl))		\
: "r" ((UDItype)(ah)),		\
"r" ((UDItype)(bh)),		\
"r" ((UDItype)(al)),		\
"r" ((UDItype)(bl))		\
: "cc")
#define umul_ppmm(wh, wl, u, v)				\
do  while (0)
#define udiv_qrnnd(q, r, n1, n0, d) 			\
do  while (0)
#define UDIV_NEEDS_NORMALIZATION 1
#define abort() \
return 0
#define __BYTE_ORDER __BIG_ENDIAN
#define __BYTE_ORDER __LITTLE_ENDIAN
