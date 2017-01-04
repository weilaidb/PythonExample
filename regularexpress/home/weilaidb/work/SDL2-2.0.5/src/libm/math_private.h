#define _MATH_PRIVATE_H_
#define attribute_hidden
#define libm_hidden_proto(x)
#define libm_hidden_def(x)
typedef unsigned int u_int32_t;
#define atan            SDL_uclibc_atan
#define __ieee754_atan2 SDL_uclibc_atan2
#define copysign        SDL_uclibc_copysign
#define cos             SDL_uclibc_cos
#define fabs            SDL_uclibc_fabs
#define floor           SDL_uclibc_floor
#define __ieee754_log   SDL_uclibc_log
#define __ieee754_pow   SDL_uclibc_pow
#define scalbn          SDL_uclibc_scalbn
#define sin             SDL_uclibc_sin
#define __ieee754_sqrt  SDL_uclibc_sqrt
#define tan             SDL_uclibc_tan
#if (SDL_BYTEORDER == SDL_BIG_ENDIAN)
typedef union
ieee_double_shape_type;
typedef union
ieee_double_shape_type;
#define EXTRACT_WORDS(ix0,ix1,d)				\
do  while (0)
#define GET_HIGH_WORD(i,d)					\
do  while (0)
#define GET_LOW_WORD(i,d)					\
do  while (0)
#define INSERT_WORDS(d,ix0,ix1)					\
do  while (0)
#define SET_HIGH_WORD(d,v)					\
do  while (0)
#define SET_LOW_WORD(d,v)					\
do  while (0)
typedef union
ieee_float_shape_type;
#define GET_FLOAT_WORD(i,d)					\
do  while (0)
#define SET_FLOAT_WORD(d,i)					\
do  while (0)
extern double
__ieee754_sqrt(double)
attribute_hidden;
extern double __ieee754_acos(double) attribute_hidden;
extern double __ieee754_acosh(double) attribute_hidden;
extern double __ieee754_log(double) attribute_hidden;
extern double __ieee754_atanh(double) attribute_hidden;
extern double __ieee754_asin(double) attribute_hidden;
extern double __ieee754_atan2(double, double) attribute_hidden;
extern double __ieee754_exp(double) attribute_hidden;
extern double __ieee754_cosh(double) attribute_hidden;
extern double __ieee754_fmod(double, double) attribute_hidden;
extern double __ieee754_pow(double, double) attribute_hidden;
extern double __ieee754_lgamma_r(double, int *) attribute_hidden;
extern double __ieee754_gamma_r(double, int *) attribute_hidden;
extern double __ieee754_lgamma(double) attribute_hidden;
extern double __ieee754_gamma(double) attribute_hidden;
extern double __ieee754_log10(double) attribute_hidden;
extern double __ieee754_sinh(double) attribute_hidden;
extern double __ieee754_hypot(double, double) attribute_hidden;
extern double __ieee754_j0(double) attribute_hidden;
extern double __ieee754_j1(double) attribute_hidden;
extern double __ieee754_y0(double) attribute_hidden;
extern double __ieee754_y1(double) attribute_hidden;
extern double __ieee754_jn(int, double) attribute_hidden;
extern double __ieee754_yn(int, double) attribute_hidden;
extern double __ieee754_remainder(double, double) attribute_hidden;
extern int __ieee754_rem_pio2(double, double *) attribute_hidden;
#if defined(_SCALB_INT)
extern double __ieee754_scalb(double, int) attribute_hidden;
extern double __ieee754_scalb(double, double) attribute_hidden;
extern double __kernel_standard(double, double, int) attribute_hidden;
extern double __kernel_sin(double, double, int) attribute_hidden;
extern double __kernel_cos(double, double) attribute_hidden;
extern double __kernel_tan(double, double, int) attribute_hidden;
extern int __kernel_rem_pio2(double *, double *, int, int, int,
const int *) attribute_hidden;
