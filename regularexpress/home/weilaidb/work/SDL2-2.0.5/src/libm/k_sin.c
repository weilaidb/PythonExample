#if defined(LIBM_SCCS) && !defined(lint)
static const char rcsid[] =
"$NetBSD: k_sin.c,v 1.8 1995/05/10 20:46:31 jtc Exp $";
static const double
static double
half = 5.00000000000000000000e-01,
S1 = -1.66666666666666324348e-01,
S2 = 8.33333333332248946124e-03,
S3 = -1.98412698298579493134e-04,
S4 = 2.75573137070700676789e-06,
S5 = -2.50507602534068634195e-08,
S6 = 1.58969099521155010221e-10;
double attribute_hidden
__kernel_sin(double x, double y, int iy)
double attribute_hidden
__kernel_sin(x, y, iy)
double x, y;
int iy;
