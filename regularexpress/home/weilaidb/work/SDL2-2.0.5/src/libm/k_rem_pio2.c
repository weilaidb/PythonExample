#if defined(LIBM_SCCS) && !defined(lint)
static const char rcsid[] =
"$NetBSD: k_rem_pio2.c,v 1.7 1995/05/10 20:46:25 jtc Exp $";
libm_hidden_proto(scalbn)
libm_hidden_proto(floor)
static const int init_jk[] = ;
static int init_jk[] = ;
static const double PIo2[] = {
static double PIo2[] = ;
static const double
static double
zero = 0.0, one = 1.0, two24 = 1.67772160000000000000e+07,
twon24 = 5.96046447753906250000e-08;
int attribute_hidden
__kernel_rem_pio2(double *x, double *y, int e0, int nx, int prec,
const int32_t * ipio2)
int attribute_hidden
__kernel_rem_pio2(x, y, e0, nx, prec, ipio2)
double x[], y[];
int e0, nx, prec;
int32_t ipio2[];
