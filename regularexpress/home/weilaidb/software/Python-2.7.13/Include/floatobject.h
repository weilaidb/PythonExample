#define Py_FLOATOBJECT_H
typedef struct  PyFloatObject;
PyAPI_DATA(PyTypeObject) PyFloat_Type;
#define PyFloat_Check(op) PyObject_TypeCheck(op, &PyFloat_Type)
#define PyFloat_CheckExact(op) (Py_TYPE(op) == &PyFloat_Type)
#define PyFloat_STR_PRECISION 12
#define Py_RETURN_NAN return PyFloat_FromDouble(Py_NAN)
#define Py_RETURN_INF(sign) do					\
if (copysign(1., sign) == 1.)  else  while(0)
PyAPI_FUNC(double) PyFloat_GetMax(void);
PyAPI_FUNC(double) PyFloat_GetMin(void);
PyAPI_FUNC(PyObject *) PyFloat_GetInfo(void);
PyAPI_FUNC(PyObject *) PyFloat_FromString(PyObject*, char** junk);
PyAPI_FUNC(PyObject *) PyFloat_FromDouble(double);
PyAPI_FUNC(double) PyFloat_AsDouble(PyObject *);
#define PyFloat_AS_DOUBLE(op) (((PyFloatObject *)(op))->ob_fval)
PyAPI_FUNC(void) PyFloat_AsReprString(char*, PyFloatObject *v);
PyAPI_FUNC(void) PyFloat_AsString(char*, PyFloatObject *v);
PyAPI_FUNC(int) _PyFloat_Pack4(double x, unsigned char *p, int le);
PyAPI_FUNC(int) _PyFloat_Pack8(double x, unsigned char *p, int le);
PyAPI_FUNC(int) _PyFloat_Digits(char *buf, double v, int *signum);
PyAPI_FUNC(void) _PyFloat_DigitsInit(void);
PyAPI_FUNC(double) _PyFloat_Unpack4(const unsigned char *p, int le);
PyAPI_FUNC(double) _PyFloat_Unpack8(const unsigned char *p, int le);
PyAPI_FUNC(int) PyFloat_ClearFreeList(void);
PyAPI_FUNC(PyObject *) _PyFloat_FormatAdvanced(PyObject *obj,
char *format_spec,
Py_ssize_t format_spec_len);
PyAPI_FUNC(PyObject *) _Py_double_round(double x, int ndigits);
