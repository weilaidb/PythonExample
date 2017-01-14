#if (FLT_RADIX != 2 && FLT_RADIX != 16)
#error
#define M_LN2 (0.6931471805599453094)
#define M_LN10 (2.302585092994045684)
#define CM_LARGE_DOUBLE (DBL_MAX/4.)
#define CM_SQRT_LARGE_DOUBLE (sqrt(CM_LARGE_DOUBLE))
#define CM_LOG_LARGE_DOUBLE (log(CM_LARGE_DOUBLE))
#define CM_SQRT_DBL_MIN (sqrt(DBL_MIN))
#if FLT_RADIX==2
#define CM_SCALE_UP (2*(DBL_MANT_DIG/2) + 1)
#elif FLT_RADIX==16
#define CM_SCALE_UP (4*DBL_MANT_DIG+1)
#define CM_SCALE_DOWN (-(CM_SCALE_UP+1)/2)
static Py_complex c_asinh(Py_complex);
static Py_complex c_atanh(Py_complex);
static Py_complex c_cosh(Py_complex);
static Py_complex c_sinh(Py_complex);
static Py_complex c_sqrt(Py_complex);
static Py_complex c_tanh(Py_complex);
static PyObject * math_error(void);
enum special_types ;
static enum special_types
special_type(double d)
#define SPECIAL_VALUE(z, table)                                         \
if (!Py_IS_FINITE((z).real) || !Py_IS_FINITE((z).imag))
#define P Py_MATH_PI
#define P14 0.25*Py_MATH_PI
#define P12 0.5*Py_MATH_PI
#define P34 0.75*Py_MATH_PI
#define INF Py_HUGE_VAL
#define N Py_NAN
#define U -9.5426319407711027e33
static Py_complex acos_special_values[7][7];
static Py_complex
c_acos(Py_complex z)
PyDoc_STRVAR(c_acos_doc,
);
static Py_complex acosh_special_values[7][7];
static Py_complex
c_acosh(Py_complex z)
PyDoc_STRVAR(c_acosh_doc,
);
static Py_complex
c_asin(Py_complex z)
PyDoc_STRVAR(c_asin_doc,
);
static Py_complex asinh_special_values[7][7];
static Py_complex
c_asinh(Py_complex z)
PyDoc_STRVAR(c_asinh_doc,
);
static Py_complex
c_atan(Py_complex z)
static double
c_atan2(Py_complex z)
PyDoc_STRVAR(c_atan_doc,
);
static Py_complex atanh_special_values[7][7];
static Py_complex
c_atanh(Py_complex z)
PyDoc_STRVAR(c_atanh_doc,
);
static Py_complex
c_cos(Py_complex z)
PyDoc_STRVAR(c_cos_doc,
);
static Py_complex cosh_special_values[7][7];
static Py_complex
c_cosh(Py_complex z)
PyDoc_STRVAR(c_cosh_doc,
);
static Py_complex exp_special_values[7][7];
static Py_complex
c_exp(Py_complex z)
PyDoc_STRVAR(c_exp_doc,
);
static Py_complex log_special_values[7][7];
static Py_complex
c_log(Py_complex z)
static Py_complex
c_log10(Py_complex z)
PyDoc_STRVAR(c_log10_doc,
);
static Py_complex
c_sin(Py_complex z)
PyDoc_STRVAR(c_sin_doc,
);
static Py_complex sinh_special_values[7][7];
static Py_complex
c_sinh(Py_complex z)
PyDoc_STRVAR(c_sinh_doc,
);
static Py_complex sqrt_special_values[7][7];
static Py_complex
c_sqrt(Py_complex z)
PyDoc_STRVAR(c_sqrt_doc,
);
static Py_complex
c_tan(Py_complex z)
PyDoc_STRVAR(c_tan_doc,
);
static Py_complex tanh_special_values[7][7];
static Py_complex
c_tanh(Py_complex z)
PyDoc_STRVAR(c_tanh_doc,
);
static PyObject *
cmath_log(PyObject *self, PyObject *args)
PyDoc_STRVAR(cmath_log_doc,
"log(x[, base]) -> the logarithm of x to the given base.\n\
If the base not specified, returns the natural logarithm (base e) of x.");
static PyObject *
math_error(void)
static PyObject *
math_1(PyObject *args, Py_complex (*func)(Py_complex))
#define FUNC1(stubname, func) \
static PyObject * stubname(PyObject *self, PyObject *args)
FUNC1(cmath_acos, c_acos)
FUNC1(cmath_acosh, c_acosh)
FUNC1(cmath_asin, c_asin)
FUNC1(cmath_asinh, c_asinh)
FUNC1(cmath_atan, c_atan)
FUNC1(cmath_atanh, c_atanh)
FUNC1(cmath_cos, c_cos)
FUNC1(cmath_cosh, c_cosh)
FUNC1(cmath_exp, c_exp)
FUNC1(cmath_log10, c_log10)
FUNC1(cmath_sin, c_sin)
FUNC1(cmath_sinh, c_sinh)
FUNC1(cmath_sqrt, c_sqrt)
FUNC1(cmath_tan, c_tan)
FUNC1(cmath_tanh, c_tanh)
static PyObject *
cmath_phase(PyObject *self, PyObject *args)
PyDoc_STRVAR(cmath_phase_doc,
"phase(z) -> float\n\n\
Return argument, also known as the phase angle, of a complex.");
static PyObject *
cmath_polar(PyObject *self, PyObject *args)
PyDoc_STRVAR(cmath_polar_doc,
"polar(z) -> r: float, phi: float\n\n\
Convert a complex from rectangular coordinates to polar coordinates. r is\n\
the distance from 0 and phi the phase angle.");
static Py_complex rect_special_values[7][7];
static PyObject *
cmath_rect(PyObject *self, PyObject *args)
PyDoc_STRVAR(cmath_rect_doc,
"rect(r, phi) -> z: complex\n\n\
Convert from polar coordinates to rectangular coordinates.");
static PyObject *
cmath_isnan(PyObject *self, PyObject *args)
PyDoc_STRVAR(cmath_isnan_doc,
"isnan(z) -> bool\n\
Checks if the real or imaginary part of z not a number (NaN)");
static PyObject *
cmath_isinf(PyObject *self, PyObject *args)
PyDoc_STRVAR(cmath_isinf_doc,
"isinf(z) -> bool\n\
Checks if the real or imaginary part of z is infinite.");
PyDoc_STRVAR(module_doc,
);
static PyMethodDef cmath_methods[] = ;
PyMODINIT_FUNC
initcmath(void)
