#if defined(LIBM_SCCS) && !defined(lint)
static const char rcsid[] =
"$NetBSD: s_scalbn.c,v 1.8 1995/05/10 20:48:08 jtc Exp $";
libm_hidden_proto(copysign)
static const double
static double
two54 = 1.80143985094819840000e+16,
twom54 = 5.55111512312578270212e-17,
huge_val = 1.0e+300, tiny = 1.0e-300;
libm_hidden_proto(scalbn)
double scalbn(double x, int n)
double scalbn(x, n)
double x;
int n;
libm_hidden_def(scalbn)
