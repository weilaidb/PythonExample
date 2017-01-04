#if defined(LIBM_SCCS) && !defined(lint)
static const char rcsid[] =
"$NetBSD: s_floor.c,v 1.8 1995/05/10 20:47:20 jtc Exp $";
static const double huge_val = 1.0e300;
static double huge_val = 1.0e300;
libm_hidden_proto(floor)
double floor(double x)
double floor(x)
double x;
libm_hidden_def(floor)
