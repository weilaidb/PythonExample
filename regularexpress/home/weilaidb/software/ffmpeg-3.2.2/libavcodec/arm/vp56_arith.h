#define AVCODEC_ARM_VP56_ARITH_H
#if CONFIG_THUMB
#   define A(x)
#   define T(x) x
#   define A(x) x
#   define T(x)
#if CONFIG_THUMB || defined __clang__
#   define L(x)
#   define U(x) x
#   define L(x) x
#   define U(x)
#if HAVE_ARMV6_INLINE
#define vp56_rac_get_prob vp56_rac_get_prob_armv6
static inline int vp56_rac_get_prob_armv6(VP56RangeCoder *c, int pr)
#define vp56_rac_get_prob_branchy vp56_rac_get_prob_branchy_armv6
static inline int vp56_rac_get_prob_branchy_armv6(VP56RangeCoder *c, int pr)
