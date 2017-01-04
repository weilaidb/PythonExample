#define Py_PYMATH_H
extern double copysign(double, double);
extern double round(double);
extern double hypot(double, double);
extern double fmod (double, double);
extern double frexp (double, int *);
extern double ldexp (double, int);
extern double modf (double, double *);
extern double pow(double, double);
extern int finite(double);
extern double copysign(double, double);
#define Py_MATH_PIl 3.1415926535897932384626433832795029L
#define Py_MATH_PI 3.14159265358979323846
#define Py_MATH_El 2.7182818284590452353602874713526625L
#define Py_MATH_E 2.7182818284590452354
#  ifdef X87_DOUBLE_ROUNDING
PyAPI_FUNC(double) _Py_force_double(double);
#    define Py_FORCE_DOUBLE(X) (_Py_force_double(X))
#  else
#    define Py_FORCE_DOUBLE(X) (X)
#  endif
PyAPI_FUNC(unsigned short) _Py_get_387controlword(void);
PyAPI_FUNC(void) _Py_set_387controlword(unsigned short);
#if defined HAVE_DECL_ISNAN && HAVE_DECL_ISNAN == 1
#define Py_IS_NAN(X) isnan(X)
#define Py_IS_NAN(X) ((X) != (X))
#  if defined HAVE_DECL_ISINF && HAVE_DECL_ISINF == 1
#    define Py_IS_INFINITY(X) isinf(X)
#  else
#    define Py_IS_INFINITY(X) ((X) &&                                   \
(Py_FORCE_DOUBLE(X)*0.5 == Py_FORCE_DOUBLE(X)))
#  endif
#if defined HAVE_DECL_ISFINITE && HAVE_DECL_ISFINITE == 1
#define Py_IS_FINITE(X) isfinite(X)
#elif defined HAVE_FINITE
#define Py_IS_FINITE(X) finite(X)
#define Py_IS_FINITE(X) (!Py_IS_INFINITY(X) && !Py_IS_NAN(X))
#define Py_HUGE_VAL HUGE_VAL
#if !defined(Py_NAN) && !defined(Py_NO_NAN)
#if !defined(__INTEL_COMPILER)
#define Py_NAN (Py_HUGE_VAL * 0.)
#if defined(ICC_NAN_STRICT)
#if defined(_MSC_VER)
__declspec(noinline)
__attribute__((noinline))
static double __icc_nan()
#define Py_NAN __icc_nan()
static union  __nan_store = ;
#define Py_NAN (__nan_store.__icc_nan)
#if defined(__FreeBSD__) || defined(__OpenBSD__)
#define Py_OVERFLOWED(X) isinf(X)
#define Py_OVERFLOWED(X) ((X) != 0.0 && (errno == ERANGE ||    \
(X) == Py_HUGE_VAL || \
(X) == -Py_HUGE_VAL))
