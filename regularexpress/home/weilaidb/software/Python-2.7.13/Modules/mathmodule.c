extern double copysign(double, double);
static const double pi = 3.141592653589793238462643383279502884197;
static const double sqrtpi = 1.772453850905516027298167483341145182798;
static double
sinpi(double x)
#define LANCZOS_N 13
static const double lanczos_g = 6.024680040776729583740234375;
static const double lanczos_g_minus_half = 5.524680040776729583740234375;
static const double lanczos_num_coeffs[LANCZOS_N] = ;
static const double lanczos_den_coeffs[LANCZOS_N] = ;
#define NGAMMA_INTEGRAL 23
static const double gamma_integral[NGAMMA_INTEGRAL] = ;
static double
lanczos_sum(double x)
static double
m_tgamma(double x)
static double
m_lgamma(double x)
#define ERF_SERIES_CUTOFF 1.5
#define ERF_SERIES_TERMS 25
#define ERFC_CONTFRAC_CUTOFF 30.0
#define ERFC_CONTFRAC_TERMS 50
static double
m_erf_series(double x)
static double
m_erfc_contfrac(double x)
static double
m_erf(double x)
static double
m_erfc(double x)
static double
m_atan2(double y, double x)
static double
m_log(double x)
static double
m_log10(double x)
static int
is_error(double x)
static PyObject *
math_1(PyObject *arg, double (*func) (double), int can_overflow)
static PyObject *
math_1a(PyObject *arg, double (*func) (double))
static PyObject *
math_2(PyObject *args, double (*func) (double, double), char *funcname)
#define FUNC1(funcname, func, can_overflow, docstring)                  \
static PyObject * math_##funcname(PyObject *self, PyObject *args) \
PyDoc_STRVAR(math_##funcname##_doc, docstring);
#define FUNC1A(funcname, func, docstring)                               \
static PyObject * math_##funcname(PyObject *self, PyObject *args) \
PyDoc_STRVAR(math_##funcname##_doc, docstring);
#define FUNC2(funcname, func, docstring) \
static PyObject * math_##funcname(PyObject *self, PyObject *args) \
PyDoc_STRVAR(math_##funcname##_doc, docstring);
FUNC1(acos, acos, 0,
)
FUNC1(acosh, m_acosh, 0,
)
FUNC1(asin, asin, 0,
)
FUNC1(asinh, m_asinh, 0,
)
FUNC1(atan, atan, 0,
)
FUNC2(atan2, m_atan2,
)
FUNC1(atanh, m_atanh, 0,
)
FUNC1(ceil, ceil, 0,
)
FUNC2(copysign, copysign,
)
FUNC1(cos, cos, 0,
)
FUNC1(cosh, cosh, 1,
)
FUNC1A(erf, m_erf,
)
FUNC1A(erfc, m_erfc,
)
FUNC1(exp, exp, 1,
)
FUNC1(expm1, m_expm1, 1,
)
FUNC1(fabs, fabs, 0,
)
FUNC1(floor, floor, 0,
)
FUNC1A(gamma, m_tgamma,
)
FUNC1A(lgamma, m_lgamma,
)
FUNC1(log1p, m_log1p, 1,
)
FUNC1(sin, sin, 0,
)
FUNC1(sinh, sinh, 1,
)
FUNC1(sqrt, sqrt, 0,
)
FUNC1(tan, tan, 0,
)
FUNC1(tanh, tanh, 0,
)
#define NUM_PARTIALS  32
static int
_fsum_realloc(double **p_ptr, Py_ssize_t  n,
double  *ps,    Py_ssize_t *m_ptr)
static PyObject*
math_fsum(PyObject *self, PyObject *seq)
#undef NUM_PARTIALS
PyDoc_STRVAR(math_fsum_doc,
"fsum(iterable)\n\n\
Return an accurate floating point sum of values in the iterable.\n\
Assumes IEEE-754 floating point arithmetic.");
static PyObject *
math_factorial(PyObject *self, PyObject *arg)
PyDoc_STRVAR(math_factorial_doc,
);
static PyObject *
math_trunc(PyObject *self, PyObject *number)
PyDoc_STRVAR(math_trunc_doc,
);
static PyObject *
math_frexp(PyObject *self, PyObject *arg)
PyDoc_STRVAR(math_frexp_doc,
);
static PyObject *
math_ldexp(PyObject *self, PyObject *args)
PyDoc_STRVAR(math_ldexp_doc,
"ldexp(x, i)\n\n\
Return x * (2**i).");
static PyObject *
math_modf(PyObject *self, PyObject *arg)
PyDoc_STRVAR(math_modf_doc,
);
static PyObject*
loghelper(PyObject* arg, double (*func)(double), char *funcname)
static PyObject *
math_log(PyObject *self, PyObject *args)
PyDoc_STRVAR(math_log_doc,
"log(x[, base])\n\n\
Return the logarithm of x to the given base.\n\
If the base not specified, returns the natural logarithm (base e) of x.");
static PyObject *
math_log10(PyObject *self, PyObject *arg)
PyDoc_STRVAR(math_log10_doc,
);
static PyObject *
math_fmod(PyObject *self, PyObject *args)
PyDoc_STRVAR(math_fmod_doc,
);
static PyObject *
math_hypot(PyObject *self, PyObject *args)
PyDoc_STRVAR(math_hypot_doc,
);
static PyObject *
math_pow(PyObject *self, PyObject *args)
PyDoc_STRVAR(math_pow_doc,
);
static const double degToRad = Py_MATH_PI / 180.0;
static const double radToDeg = 180.0 / Py_MATH_PI;
static PyObject *
math_degrees(PyObject *self, PyObject *arg)
PyDoc_STRVAR(math_degrees_doc,
"degrees(x)\n\n\
Convert angle x from radians to degrees.");
static PyObject *
math_radians(PyObject *self, PyObject *arg)
PyDoc_STRVAR(math_radians_doc,
"radians(x)\n\n\
Convert angle x from degrees to radians.");
static PyObject *
math_isnan(PyObject *self, PyObject *arg)
PyDoc_STRVAR(math_isnan_doc,
"isnan(x) -> bool\n\n\
Check if float x is not a number (NaN).");
static PyObject *
math_isinf(PyObject *self, PyObject *arg)
PyDoc_STRVAR(math_isinf_doc,
"isinf(x) -> bool\n\n\
Check if float x is infinite (positive or negative).");
static PyMethodDef math_methods[] = ;
PyDoc_STRVAR(module_doc,
);
PyMODINIT_FUNC
initmath(void)
