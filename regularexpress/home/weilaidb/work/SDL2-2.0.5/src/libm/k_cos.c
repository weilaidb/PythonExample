#if defined(LIBM_SCCS) && !defined(lint)
static const char rcsid[] =
"$NetBSD: k_cos.c,v 1.8 1995/05/10 20:46:22 jtc Exp $";
static const double
static double
one = 1.00000000000000000000e+00,
C1 = 4.16666666666666019037e-02,
C2 = -1.38888888888741095749e-03,
C3 = 2.48015872894767294178e-05,
C4 = -2.75573143513906633035e-07,
C5 = 2.08757232129817482790e-09,
C6 = -1.13596475577881948265e-11;
double attribute_hidden
__kernel_cos(double x, double y)
double attribute_hidden
__kernel_cos(x, y)
double x, y;
