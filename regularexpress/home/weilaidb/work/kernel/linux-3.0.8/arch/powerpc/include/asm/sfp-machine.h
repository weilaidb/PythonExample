#define _FP_W_TYPE_SIZE		32
#define _FP_W_TYPE		unsigned int
#define _FP_WS_TYPE		signed int
#define _FP_I_TYPE		int
#define __ll_B			((UWtype) 1 << (W_TYPE_SIZE / 2))
#define __ll_lowpart(t)		((UWtype) (t) & (__ll_B - 1))
#define __ll_highpart(t)	((UWtype) (t) >> (W_TYPE_SIZE / 2))
#define _FP_MUL_MEAT_S(R,X,Y)   _FP_MUL_MEAT_1_wide(_FP_WFRACBITS_S,R,X,Y,umul_ppmm)
#define _FP_MUL_MEAT_D(R,X,Y)   _FP_MUL_MEAT_2_wide(_FP_WFRACBITS_D,R,X,Y,umul_ppmm)
#define _FP_DIV_MEAT_S(R,X,Y)	_FP_DIV_MEAT_1_udiv_norm(S,R,X,Y)
#define _FP_DIV_MEAT_D(R,X,Y)	_FP_DIV_MEAT_2_udiv(D,R,X,Y)
#define _FP_NANFRAC_S		((_FP_QNANBIT_S << 1) - 1)
#define _FP_NANFRAC_D		((_FP_QNANBIT_D << 1) - 1), -1
#define _FP_NANFRAC_Q		((_FP_QNANBIT_Q << 1) - 1), -1, -1, -1
#define _FP_NANSIGN_S		0
#define _FP_NANSIGN_D		0
#define _FP_NANSIGN_Q		0
#define _FP_KEEPNANFRACP 1
#define FP_EX_INEXACT		(1 << 21)
#define FP_EX_INVALID		(1 << 20)
#define FP_EX_DIVZERO		(1 << 19)
#define FP_EX_UNDERFLOW		(1 << 18)
#define FP_EX_OVERFLOW		(1 << 17)
#define FP_INHIBIT_RESULTS	0
#define __FPU_FPSCR	(current->thread.spefscr)
#define __FPU_ENABLED_EXC		\
()
#define FP_EX_INVALID         (1 << (31 - 2))
#define FP_EX_INVALID_SNAN	EFLAG_VXSNAN
#define FP_EX_INVALID_ISI	EFLAG_VXISI
#define FP_EX_INVALID_IDI	EFLAG_VXIDI
#define FP_EX_INVALID_ZDZ	EFLAG_VXZDZ
#define FP_EX_INVALID_IMZ	EFLAG_VXIMZ
#define FP_EX_OVERFLOW        (1 << (31 - 3))
#define FP_EX_UNDERFLOW       (1 << (31 - 4))
#define FP_EX_DIVZERO         (1 << (31 - 5))
#define FP_EX_INEXACT         (1 << (31 - 6))
#define __FPU_FPSCR	(current->thread.fpscr.val)
#define __FPU_ENABLED_EXC \
()
#define _FP_CHOOSENAN(fs, wc, R, X, Y, OP)			\
do  while (0)
#define __FPU_TRAP_P(bits) \
((__FPU_ENABLED_EXC & (bits)) != 0)
#define __FP_PACK_S(val,X)			\
()
#define __FP_PACK_D(val,X)			\
do  while (0)
#define __FP_PACK_DS(val,X)							\
do  while (0)
#define FP_ROUNDMODE			\
()
#define add_ssaaaa(sh, sl, ah, al, bh, bl)				\
do  while (0)
#define sub_ddmmss(sh, sl, ah, al, bh, bl)				\
do  while (0)
#define umul_ppmm(ph, pl, m0, m1)					\
do  while (0)
#define udiv_qrnnd(q, r, n1, n0, d)					\
do  while (0)
#define UDIV_NEEDS_NORMALIZATION 1
#define abort()								\
return 0
#define __BYTE_ORDER __BIG_ENDIAN
#define __BYTE_ORDER __LITTLE_ENDIAN
#define EFLAG_INVALID		(1 << (31 - 2))
#define EFLAG_OVERFLOW		(1 << (31 - 3))
#define EFLAG_UNDERFLOW		(1 << (31 - 4))
#define EFLAG_DIVZERO		(1 << (31 - 5))
#define EFLAG_INEXACT		(1 << (31 - 6))
#define EFLAG_VXSNAN		(1 << (31 - 7))
#define EFLAG_VXISI		(1 << (31 - 8))
#define EFLAG_VXIDI		(1 << (31 - 9))
#define EFLAG_VXZDZ		(1 << (31 - 10))
#define EFLAG_VXIMZ		(1 << (31 - 11))
#define EFLAG_VXVC		(1 << (31 - 12))
#define EFLAG_VXSOFT		(1 << (31 - 21))
#define EFLAG_VXSQRT		(1 << (31 - 22))
#define EFLAG_VXCVI		(1 << (31 - 23))
