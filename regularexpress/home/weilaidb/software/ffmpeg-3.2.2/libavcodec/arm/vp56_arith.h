#define AVCODEC_ARM_VP56_ARITH_H
#if CONFIG_THUMB
A
T x
A x
T
#if CONFIG_THUMB || defined __clang__
L
U x
L x
U
#if HAVE_ARMV6_INLINE
#define vp56_rac_get_prob vp56_rac_get_prob_armv6
vp56_rac_get_prob_armv6
#define vp56_rac_get_prob_branchy vp56_rac_get_prob_branchy_armv6
vp56_rac_get_prob_branchy_armv6
