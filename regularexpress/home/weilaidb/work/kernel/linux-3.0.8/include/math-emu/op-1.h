#define    __MATH_EMU_OP_1_H__
#define _FP_FRAC_DECL_1(X)	_FP_W_TYPE X##_f=0
#define _FP_FRAC_COPY_1(D,S)	(D##_f = S##_f)
#define _FP_FRAC_SET_1(X,I)	(X##_f = I)
#define _FP_FRAC_HIGH_1(X)	(X##_f)
#define _FP_FRAC_LOW_1(X)	(X##_f)
#define _FP_FRAC_WORD_1(X,w)	(X##_f)
#define _FP_FRAC_ADDI_1(X,I)	(X##_f += I)
#define _FP_FRAC_SLL_1(X,N)			\
do  while (0)
#define _FP_FRAC_SRL_1(X,N)	(X##_f >>= N)
#define _FP_FRAC_SRS_1(X,N,sz)	__FP_FRAC_SRS_1(X##_f, N, sz)
#define __FP_FRAC_SRS_1(X,N,sz)						\
(X = (X >> (N) | (__builtin_constant_p(N) && (N) == 1		\
? X & 1 : (X << (_FP_W_TYPE_SIZE - (N))) != 0)))
#define _FP_FRAC_ADD_1(R,X,Y)	(R##_f = X##_f + Y##_f)
#define _FP_FRAC_SUB_1(R,X,Y)	(R##_f = X##_f - Y##_f)
#define _FP_FRAC_DEC_1(X,Y)	(X##_f -= Y##_f)
#define _FP_FRAC_CLZ_1(z, X)	__FP_CLZ(z, X##_f)
#define _FP_FRAC_NEGP_1(X)	((_FP_WS_TYPE)X##_f < 0)
#define _FP_FRAC_ZEROP_1(X)	(X##_f == 0)
#define _FP_FRAC_OVERP_1(fs,X)	(X##_f & _FP_OVERFLOW_##fs)
#define _FP_FRAC_CLEAR_OVERP_1(fs,X)	(X##_f &= ~_FP_OVERFLOW_##fs)
#define _FP_FRAC_EQ_1(X, Y)	(X##_f == Y##_f)
#define _FP_FRAC_GE_1(X, Y)	(X##_f >= Y##_f)
#define _FP_FRAC_GT_1(X, Y)	(X##_f > Y##_f)
#define _FP_ZEROFRAC_1		0
#define _FP_MINFRAC_1		1
#define _FP_MAXFRAC_1		(~(_FP_WS_TYPE)0)
#define _FP_UNPACK_RAW_1(fs, X, val)				\
do  while (0)
#define _FP_UNPACK_RAW_1_P(fs, X, val)				\
do  while (0)
#define _FP_PACK_RAW_1(fs, val, X)				\
do  while (0)
#define _FP_PACK_RAW_1_P(fs, val, X)				\
do  while (0)
#define _FP_MUL_MEAT_1_imm(wfracbits, R, X, Y)				\
do  while (0)
#define _FP_MUL_MEAT_1_wide(wfracbits, R, X, Y, doit)			\
do  while (0)
#define _FP_MUL_MEAT_1_hard(wfracbits, R, X, Y)				\
do  while (0)
#define _FP_DIV_MEAT_1_imm(fs, R, X, Y, doit)		\
do  while (0)
#define _FP_DIV_MEAT_1_udiv_norm(fs, R, X, Y)				\
do  while (0)
#define _FP_DIV_MEAT_1_udiv(fs, R, X, Y)		\
do  while (0)
#define _FP_SQRT_MEAT_1(R, S, T, X, q)			\
do  while (0)
#define _FP_FRAC_ASSEMBLE_1(r, X, rsize)	(r = X##_f)
#define _FP_FRAC_DISASSEMBLE_1(X, r, rsize)	(X##_f = r)
#define _FP_FRAC_CONV_1_1(dfs, sfs, D, S)				\
do  while (0)
