#define add_ssaaaa(sh, sl, ah, al, bh, bl) \
do  while (0)
#define sub_ddmmss(sh, sl, ah, al, bh, bl) \
do  while (0)
#define umul_ppmm(w1, w0, u, v) \
__asm__ ("dmulu.l %2,%3\n\tsts    macl,%1\n\tsts  mach,%0"	\
: "=r" ((u32)(w1)), "=r" ((u32)(w0))	\
:  "r" ((u32)(u)),   "r" ((u32)(v))	\
: "macl", "mach")
#define __ll_B ((UWtype) 1 << (W_TYPE_SIZE / 2))
#define __ll_lowpart(t) ((UWtype) (t) & (__ll_B - 1))
#define __ll_highpart(t) ((UWtype) (t) >> (W_TYPE_SIZE / 2))
#define udiv_qrnnd(q, r, n1, n0, d) \
do  while (0)
#define abort()	return 0
#define __BYTE_ORDER __LITTLE_ENDIAN
