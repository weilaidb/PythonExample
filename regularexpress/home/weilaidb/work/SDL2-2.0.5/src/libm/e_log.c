#if defined(LIBM_SCCS) && !defined(lint)
static const char rcsid[] =
"$NetBSD: e_log.c,v 1.8 1995/05/10 20:45:49 jtc Exp $";
static const double
static double
ln2_hi = 6.93147180369123816490e-01,
ln2_lo = 1.90821492927058770002e-10,
two54 = 1.80143985094819840000e+16,
Lg1 = 6.666666666666735130e-01,
Lg2 = 3.999999999940941908e-01,
Lg3 = 2.857142874366239149e-01,
Lg4 = 2.222219843214978396e-01,
Lg5 = 1.818357216161805012e-01,
Lg6 = 1.531383769920937332e-01,
Lg7 = 1.479819860511658591e-01;
static const double zero = 0.0;
static double zero = 0.0;
double attribute_hidden
__ieee754_log(double x)
double attribute_hidden
__ieee754_log(x)
double x;
