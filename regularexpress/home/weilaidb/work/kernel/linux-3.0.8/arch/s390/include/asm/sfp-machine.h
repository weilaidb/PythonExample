#define _SFP_MACHINE_H
#define _FP_W_TYPE_SIZE		32
#define _FP_W_TYPE		unsigned int
#define _FP_WS_TYPE		signed int
#define _FP_I_TYPE		int
#define _FP_MUL_MEAT_S(R,X,Y)					\
_FP_MUL_MEAT_1_wide(_FP_WFRACBITS_S,R,X,Y,umul_ppmm)
#define _FP_MUL_MEAT_D(R,X,Y)					\
_FP_MUL_MEAT_2_wide(_FP_WFRACBITS_D,R,X,Y,umul_ppmm)
#define _FP_MUL_MEAT_Q(R,X,Y)					\
_FP_MUL_MEAT_4_wide(_FP_WFRACBITS_Q,R,X,Y,umul_ppmm)
#define _FP_DIV_MEAT_S(R,X,Y)	_FP_DIV_MEAT_1_udiv(S,R,X,Y)
#define _FP_DIV_MEAT_D(R,X,Y)	_FP_DIV_MEAT_2_udiv(D,R,X,Y)
#define _FP_DIV_MEAT_Q(R,X,Y)	_FP_DIV_MEAT_4_udiv(Q,R,X,Y)
#define _FP_NANFRAC_S		((_FP_QNANBIT_S << 1) - 1)
#define _FP_NANFRAC_D		((_FP_QNANBIT_D << 1) - 1), -1
#define _FP_NANFRAC_Q		((_FP_QNANBIT_Q << 1) - 1), -1, -1, -1
#define _FP_NANSIGN_S		0
#define _FP_NANSIGN_D		0
#define _FP_NANSIGN_Q		0
#define _FP_KEEPNANFRACP 1
#define _FP_CHOOSENAN(fs, wc, R, X, Y, OP)                      \
do  while (0)
#define __FP_FRAC_ADD_3(r2,r1,r0,x2,x1,x0,y2,y1,y0) ()
#define __FP_FRAC_SUB_3(r2,r1,r0,x2,x1,x0,y2,y1,y0) ()
#define __FP_FRAC_DEC_3(x2,x1,x0,y2,y1,y0) __FP_FRAC_SUB_3(x2,x1,x0,x2,x1,x0,y2,y1,y0)
#define FP_ROUNDMODE	mode
#define FP_EX_INVALID		0x800000
#define FP_EX_DIVZERO		0x400000
#define FP_EX_OVERFLOW		0x200000
#define FP_EX_UNDERFLOW		0x100000
#define FP_EX_INEXACT		0x080000
#define FP_INHIBIT_RESULTS 0
