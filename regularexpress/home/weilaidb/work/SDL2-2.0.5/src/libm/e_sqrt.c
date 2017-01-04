#if defined(LIBM_SCCS) && !defined(lint)
static const char rcsid[] =
"$NetBSD: e_sqrt.c,v 1.8 1995/05/10 20:46:17 jtc Exp $";
static const double one = 1.0, tiny = 1.0e-300;
static double one = 1.0, tiny = 1.0e-300;
double attribute_hidden
__ieee754_sqrt(double x)
double attribute_hidden
__ieee754_sqrt(x)
double x;
