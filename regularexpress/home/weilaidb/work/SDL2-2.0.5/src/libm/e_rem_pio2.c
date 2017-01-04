#if defined(LIBM_SCCS) && !defined(lint)
static const char rcsid[] =
"$NetBSD: e_rem_pio2.c,v 1.8 1995/05/10 20:46:02 jtc Exp $";
libm_hidden_proto(fabs)
static const int32_t two_over_pi[] = {
static int32_t two_over_pi[] = ;
static const int32_t npio2_hw[] = {
static int32_t npio2_hw[] = ;
static const double
static double
zero = 0.00000000000000000000e+00,
half = 5.00000000000000000000e-01,
two24 = 1.67772160000000000000e+07,
invpio2 = 6.36619772367581382433e-01,
pio2_1 = 1.57079632673412561417e+00,
pio2_1t = 6.07710050650619224932e-11,
pio2_2 = 6.07710050630396597660e-11,
pio2_2t = 2.02226624879595063154e-21,
pio2_3 = 2.02226624871116645580e-21,
pio2_3t = 8.47842766036889956997e-32;
int32_t attribute_hidden
__ieee754_rem_pio2(double x, double *y)
int32_t attribute_hidden
__ieee754_rem_pio2(x, y)
double x, y[];
