#define __MATH_EMU_OP_COMMON_H__
#define _FP_DECL(wc, X)			\
_FP_I_TYPE X##_c=0, X##_s=0, X##_e=0;	\
_FP_FRAC_DECL_##wc(X)
#define _FP_UNPACK_CANONICAL(fs, wc, X)					\
do  while (0)
#define _FP_PACK_CANONICAL(fs, wc, X)				\
do  while (0)
#define _FP_ISSIGNAN(fs, wc, X)					\
()
#define _FP_ADD_INTERNAL(fs, wc, R, X, Y, OP)				     \
do  while (0)
#define _FP_ADD(fs, wc, R, X, Y) _FP_ADD_INTERNAL(fs, wc, R, X, Y, '+')
#define _FP_SUB(fs, wc, R, X, Y)					     \
do  while (0)
#define _FP_NEG(fs, wc, R, X)		\
do  while (0)
#define _FP_MUL(fs, wc, R, X, Y)			\
do  while (0)
#define _FP_DIV(fs, wc, R, X, Y)			\
do  while (0)
#define _FP_CMP(fs, wc, ret, X, Y, un)					\
do  while (0)
#define _FP_CMP_EQ(fs, wc, ret, X, Y)					  \
do  while (0)
#define _FP_SQRT(fs, wc, R, X)						\
do  while (0)
#define _FP_TO_INT(fs, wc, r, X, rsize, rsigned)				\
do  while (0)
#define _FP_TO_INT_ROUND(fs, wc, r, X, rsize, rsigned)				\
do  while (0)
#define _FP_FROM_INT(fs, wc, X, r, rsize, rtype)			\
do  while (0)
#define FP_CONV(dfs,sfs,dwc,swc,D,S)			\
do  while (0)
#if _FP_W_TYPE_SIZE < 64
#define __FP_CLZ(r, x)				\
do  while (0)
#define __FP_CLZ(r, x)				\
do  while (0)
#define _FP_DIV_HELP_imm(q, r, n, d)		\
do  while (0)
