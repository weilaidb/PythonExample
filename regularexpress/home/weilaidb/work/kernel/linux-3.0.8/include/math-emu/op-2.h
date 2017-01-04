#define __MATH_EMU_OP_2_H__
#define _FP_FRAC_DECL_2(X)	_FP_W_TYPE X##_f0 = 0, X##_f1 = 0
#define _FP_FRAC_COPY_2(D,S)	(D##_f0 = S##_f0, D##_f1 = S##_f1)
#define _FP_FRAC_SET_2(X,I)	__FP_FRAC_SET_2(X, I)
#define _FP_FRAC_HIGH_2(X)	(X##_f1)
#define _FP_FRAC_LOW_2(X)	(X##_f0)
#define _FP_FRAC_WORD_2(X,w)	(X##_f##w)
#define _FP_FRAC_SLL_2(X,N)						\
do  while (0)
#define _FP_FRAC_SRL_2(X,N)						\
do  while (0)
#define _FP_FRAC_SRS_2(X,N,sz)						\
do  while (0)
#define _FP_FRAC_ADDI_2(X,I)	\
__FP_FRAC_ADDI_2(X##_f1, X##_f0, I)
#define _FP_FRAC_ADD_2(R,X,Y)	\
__FP_FRAC_ADD_2(R##_f1, R##_f0, X##_f1, X##_f0, Y##_f1, Y##_f0)
#define _FP_FRAC_SUB_2(R,X,Y)	\
__FP_FRAC_SUB_2(R##_f1, R##_f0, X##_f1, X##_f0, Y##_f1, Y##_f0)
#define _FP_FRAC_DEC_2(X,Y)	\
__FP_FRAC_DEC_2(X##_f1, X##_f0, Y##_f1, Y##_f0)
#define _FP_FRAC_CLZ_2(R,X)	\
do  while(0)
#define _FP_FRAC_NEGP_2(X)	((_FP_WS_TYPE)X##_f1 < 0)
#define _FP_FRAC_ZEROP_2(X)	((X##_f1 | X##_f0) == 0)
#define _FP_FRAC_OVERP_2(fs,X)	(_FP_FRAC_HIGH_##fs(X) & _FP_OVERFLOW_##fs)
#define _FP_FRAC_CLEAR_OVERP_2(fs,X)	(_FP_FRAC_HIGH_##fs(X) &= ~_FP_OVERFLOW_##fs)
#define _FP_FRAC_EQ_2(X, Y)	(X##_f1 == Y##_f1 && X##_f0 == Y##_f0)
#define _FP_FRAC_GT_2(X, Y)	\
(X##_f1 > Y##_f1 || (X##_f1 == Y##_f1 && X##_f0 > Y##_f0))
#define _FP_FRAC_GE_2(X, Y)	\
(X##_f1 > Y##_f1 || (X##_f1 == Y##_f1 && X##_f0 >= Y##_f0))
#define _FP_ZEROFRAC_2		0, 0
#define _FP_MINFRAC_2		0, 1
#define _FP_MAXFRAC_2		(~(_FP_WS_TYPE)0), (~(_FP_WS_TYPE)0)
#define __FP_FRAC_SET_2(X,I1,I0)	(X##_f0 = I0, X##_f1 = I1)
#define __FP_CLZ_2(R, xh, xl)	\
do  while(0)
#define __FP_FRAC_ADD_2(rh, rl, xh, xl, yh, yl)	\
(rh = xh + yh + ((rl = xl + yl) < xl))
#define __FP_FRAC_SUB_2(rh, rl, xh, xl, yh, yl)	\
(rh = xh - yh - ((rl = xl - yl) > xl))
#define __FP_FRAC_DEC_2(xh, xl, yh, yl)	\
do  while (0)
#undef __FP_FRAC_ADDI_2
#define __FP_FRAC_ADDI_2(xh, xl, i)	add_ssaaaa(xh, xl, xh, xl, 0, i)
#undef __FP_FRAC_ADD_2
#define __FP_FRAC_ADD_2			add_ssaaaa
#undef __FP_FRAC_SUB_2
#define __FP_FRAC_SUB_2			sub_ddmmss
#undef __FP_FRAC_DEC_2
#define __FP_FRAC_DEC_2(xh, xl, yh, yl)	sub_ddmmss(xh, xl, xh, xl, yh, yl)
#define _FP_UNPACK_RAW_2(fs, X, val)			\
do  while (0)
#define _FP_UNPACK_RAW_2_P(fs, X, val)			\
do  while (0)
#define _FP_PACK_RAW_2(fs, val, X)			\
do  while (0)
#define _FP_PACK_RAW_2_P(fs, val, X)			\
do  while (0)
#define _FP_MUL_MEAT_2_wide(wfracbits, R, X, Y, doit)			\
do  while (0)
#define _FP_MUL_MEAT_2_wide_3mul(wfracbits, R, X, Y, doit)		\
do  while (0)
#define _FP_MUL_MEAT_2_gmp(wfracbits, R, X, Y)				\
do  while (0)
#define _FP_MUL_MEAT_2_120_240_double(wfracbits, R, X, Y, setfetz, resetfe)	\
do  while (0)
#define _FP_DIV_MEAT_2_udiv(fs, R, X, Y)				\
do  while (0)
#define _FP_DIV_MEAT_2_gmp(fs, R, X, Y)					\
do  while (0)
#define _FP_SQRT_MEAT_2(R, S, T, X, q)			\
do  while (0)
#define _FP_FRAC_ASSEMBLE_2(r, X, rsize)	\
do  while (0)
#define _FP_FRAC_DISASSEMBLE_2(X, r, rsize)				\
do  while (0)
#define _FP_FRAC_CONV_1_2(dfs, sfs, D, S)				\
do  while (0)
#define _FP_FRAC_CONV_2_1(dfs, sfs, D, S)				\
do  while (0)
