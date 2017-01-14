#define Py_LONGINTREPR_H
#if PYLONG_BITS_IN_DIGIT == 30
#if !(defined HAVE_UINT64_T && defined HAVE_UINT32_T &&          \
defined HAVE_INT64_T && defined HAVE_INT32_T)
#error
typedef PY_UINT32_T digit;
typedef PY_INT32_T sdigit;
typedef PY_UINT64_T twodigits;
typedef PY_INT64_T stwodigits;
#define PyLong_SHIFT	30
#define _PyLong_DECIMAL_SHIFT	9
#define _PyLong_DECIMAL_BASE	((digit)1000000000)
#elif PYLONG_BITS_IN_DIGIT == 15
typedef unsigned short digit;
typedef short sdigit;
typedef unsigned long twodigits;
typedef long stwodigits;
#define PyLong_SHIFT	15
#define _PyLong_DECIMAL_SHIFT	4
#define _PyLong_DECIMAL_BASE	((digit)10000)
#error
#define PyLong_BASE	((digit)1 << PyLong_SHIFT)
#define PyLong_MASK	((digit)(PyLong_BASE - 1))
#define SHIFT	PyLong_SHIFT
#define BASE	PyLong_BASE
#define MASK	PyLong_MASK
#if PyLong_SHIFT % 5 != 0
#error
struct _longobject ;
PyAPI_FUNC(PyLongObject *) _PyLong_New(Py_ssize_t);
PyAPI_FUNC(PyObject *) _PyLong_Copy(PyLongObject *src);
