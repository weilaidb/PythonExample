#define __MATH_EMU_OP_4_H__
#define _FP_FRAC_DECL_4(X)	_FP_W_TYPE X##_f[4]
#define _FP_FRAC_COPY_4(D,S)			\
(D##_f[0] = S##_f[0], D##_f[1] = S##_f[1],	\
D##_f[2] = S##_f[2], D##_f[3] = S##_f[3])
#define _FP_FRAC_SET_4(X,I)	__FP_FRAC_SET_4(X, I)
#define _FP_FRAC_HIGH_4(X)	(X##_f[3])
#define _FP_FRAC_LOW_4(X)	(X##_f[0])
#define _FP_FRAC_WORD_4(X,w)	(X##_f[w])
#define _FP_FRAC_SLL_4(X,N)						\
do  while (0)
#define _FP_FRAC_SRL_4(X,N)						\
do  while (0)
#define _FP_FRAC_SRS_4(X,N,size)					\
do  while (0)
#define _FP_FRAC_ADD_4(R,X,Y)						\
__FP_FRAC_ADD_4(R##_f[3], R##_f[2], R##_f[1], R##_f[0],		\
X##_f[3], X##_f[2], X##_f[1], X##_f[0],		\
Y##_f[3], Y##_f[2], Y##_f[1], Y##_f[0])
#define _FP_FRAC_SUB_4(R,X,Y)						\
__FP_FRAC_SUB_4(R##_f[3], R##_f[2], R##_f[1], R##_f[0],		\
X##_f[3], X##_f[2], X##_f[1], X##_f[0],		\
Y##_f[3], Y##_f[2], Y##_f[1], Y##_f[0])
#define _FP_FRAC_DEC_4(X,Y)						\
__FP_FRAC_DEC_4(X##_f[3], X##_f[2], X##_f[1], X##_f[0],		\
Y##_f[3], Y##_f[2], Y##_f[1], Y##_f[0])
#define _FP_FRAC_ADDI_4(X,I)						\
__FP_FRAC_ADDI_4(X##_f[3], X##_f[2], X##_f[1], X##_f[0], I)
#define _FP_ZEROFRAC_4  0,0,0,0
#define _FP_MINFRAC_4   0,0,0,1
#define _FP_MAXFRAC_4	(~(_FP_WS_TYPE)0), (~(_FP_WS_TYPE)0), (~(_FP_WS_TYPE)0), (~(_FP_WS_TYPE)0)
#define _FP_FRAC_ZEROP_4(X)     ((X##_f[0] | X##_f[1] | X##_f[2] | X##_f[3]) == 0)
#define _FP_FRAC_NEGP_4(X)      ((_FP_WS_TYPE)X##_f[3] < 0)
#define _FP_FRAC_OVERP_4(fs,X)  (_FP_FRAC_HIGH_##fs(X) & _FP_OVERFLOW_##fs)
#define _FP_FRAC_CLEAR_OVERP_4(fs,X)  (_FP_FRAC_HIGH_##fs(X) &= ~_FP_OVERFLOW_##fs)
#define _FP_FRAC_EQ_4(X,Y)				\
(X##_f[0] == Y##_f[0] && X##_f[1] == Y##_f[1]		\
&& X##_f[2] == Y##_f[2] && X##_f[3] == Y##_f[3])
#define _FP_FRAC_GT_4(X,Y)				\
(X##_f[3] > Y##_f[3] ||				\
(X##_f[3] == Y##_f[3] && (X##_f[2] > Y##_f[2] ||	\
(X##_f[2] == Y##_f[2] && (X##_f[1] > Y##_f[1] ||	\
(X##_f[1] == Y##_f[1] && X##_f[0] > Y##_f[0])	\
))							\
))							\
)
#define _FP_FRAC_GE_4(X,Y)				\
(X##_f[3] > Y##_f[3] ||				\
(X##_f[3] == Y##_f[3] && (X##_f[2] > Y##_f[2] ||	\
(X##_f[2] == Y##_f[2] && (X##_f[1] > Y##_f[1] ||	\
(X##_f[1] == Y##_f[1] && X##_f[0] >= Y##_f[0])	\
))							\
))							\
)
#define _FP_FRAC_CLZ_4(R,X)		\
do  while(0)
#define _FP_UNPACK_RAW_4(fs, X, val)				\
do  while (0)
#define _FP_UNPACK_RAW_4_P(fs, X, val)				\
do  while (0)
#define _FP_PACK_RAW_4(fs, val, X)				\
do  while (0)
#define _FP_PACK_RAW_4_P(fs, val, X)				\
do  while (0)
#define _FP_MUL_MEAT_4_wide(wfracbits, R, X, Y, doit)			    \
do  while (0)
#define _FP_MUL_MEAT_4_gmp(wfracbits, R, X, Y)				    \
do  while (0)
#define umul_ppppmnnn(p3,p2,p1,p0,m,n2,n1,n0)				    \
do  while (0)
#define _FP_DIV_MEAT_4_udiv(fs, R, X, Y)				    \
do  while (0)
#define _FP_SQRT_MEAT_4(R, S, T, X, q)				\
do  while (0)
#define __FP_FRAC_SET_4(X,I3,I2,I1,I0)					\
(X##_f[3] = I3, X##_f[2] = I2, X##_f[1] = I1, X##_f[0] = I0)
#define __FP_FRAC_ADD_3(r2,r1,r0,x2,x1,x0,y2,y1,y0)		\
do  while (0)
#define __FP_FRAC_ADD_4(r3,r2,r1,r0,x3,x2,x1,x0,y3,y2,y1,y0)	\
do  while (0)
#define __FP_FRAC_SUB_3(r2,r1,r0,x2,x1,x0,y2,y1,y0)		\
do  while (0)
#define __FP_FRAC_SUB_4(r3,r2,r1,r0,x3,x2,x1,x0,y3,y2,y1,y0)	\
do  while (0)
#define __FP_FRAC_DEC_3(x2,x1,x0,y2,y1,y0)				\
do  while (0)
#define __FP_FRAC_DEC_4(x3,x2,x1,x0,y3,y2,y1,y0)			\
do  while (0)
#define __FP_FRAC_ADDI_4(x3,x2,x1,x0,i)					\
do  while (0)
#define _FP_FRAC_CONV_1_4(dfs, sfs, D, S)				\
do  while (0)
#define _FP_FRAC_CONV_2_4(dfs, sfs, D, S)				\
do  while (0)
#define _FP_FRAC_ASSEMBLE_4(r, X, rsize)				\
do  while (0)
#define _FP_FRAC_DISASSEMBLE_4(X, r, rsize)				\
do  while (0)
#define _FP_FRAC_CONV_4_1(dfs, sfs, D, S)				\
do  while (0)
#define _FP_FRAC_CONV_4_2(dfs, sfs, D, S)				\
do  while (0)
