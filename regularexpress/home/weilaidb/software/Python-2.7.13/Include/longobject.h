#define Py_LONGOBJECT_H
typedef struct _longobject PyLongObject;
PyAPI_DATA(PyTypeObject) PyLong_Type;
#define PyLong_Check(op) \
PyType_FastSubclass(Py_TYPE(op), Py_TPFLAGS_LONG_SUBCLASS)
#define PyLong_CheckExact(op) (Py_TYPE(op) == &PyLong_Type)
PyAPI_FUNC(PyObject *) PyLong_FromLong(long);
PyAPI_FUNC(PyObject *) PyLong_FromUnsignedLong(unsigned long);
PyAPI_FUNC(PyObject *) PyLong_FromDouble(double);
PyAPI_FUNC(PyObject *) PyLong_FromSize_t(size_t);
PyAPI_FUNC(PyObject *) PyLong_FromSsize_t(Py_ssize_t);
PyAPI_FUNC(long) PyLong_AsLong(PyObject *);
PyAPI_FUNC(long) PyLong_AsLongAndOverflow(PyObject *, int *);
PyAPI_FUNC(unsigned long) PyLong_AsUnsignedLong(PyObject *);
PyAPI_FUNC(unsigned long) PyLong_AsUnsignedLongMask(PyObject *);
PyAPI_FUNC(Py_ssize_t) PyLong_AsSsize_t(PyObject *);
PyAPI_FUNC(int) _PyLong_AsInt(PyObject *);
PyAPI_FUNC(PyObject *) PyLong_GetInfo(void);
#define _PyLong_AsSsize_t PyLong_AsSsize_t
#define _PyLong_FromSize_t PyLong_FromSize_t
#define _PyLong_FromSsize_t PyLong_FromSsize_t
PyAPI_DATA(int) _PyLong_DigitValue[256];
PyAPI_FUNC(double) _PyLong_Frexp(PyLongObject *a, Py_ssize_t *e);
PyAPI_FUNC(double) PyLong_AsDouble(PyObject *);
PyAPI_FUNC(PyObject *) PyLong_FromVoidPtr(void *);
PyAPI_FUNC(void *) PyLong_AsVoidPtr(PyObject *);
PyAPI_FUNC(PyObject *) PyLong_FromLongLong(PY_LONG_LONG);
PyAPI_FUNC(PyObject *) PyLong_FromUnsignedLongLong(unsigned PY_LONG_LONG);
PyAPI_FUNC(PY_LONG_LONG) PyLong_AsLongLong(PyObject *);
PyAPI_FUNC(unsigned PY_LONG_LONG) PyLong_AsUnsignedLongLong(PyObject *);
PyAPI_FUNC(unsigned PY_LONG_LONG) PyLong_AsUnsignedLongLongMask(PyObject *);
PyAPI_FUNC(PY_LONG_LONG) PyLong_AsLongLongAndOverflow(PyObject *, int *);
PyAPI_FUNC(PyObject *) PyLong_FromString(char *, char **, int);
PyAPI_FUNC(PyObject *) PyLong_FromUnicode(Py_UNICODE*, Py_ssize_t, int);
PyAPI_FUNC(int) _PyLong_Sign(PyObject *v);
PyAPI_FUNC(size_t) _PyLong_NumBits(PyObject *v);
PyAPI_FUNC(PyObject *) _PyLong_FromByteArray(
const unsigned char* bytes, size_t n,
int little_endian, int is_signed);
PyAPI_FUNC(int) _PyLong_AsByteArray(PyLongObject* v,
unsigned char* bytes, size_t n,
int little_endian, int is_signed);
PyAPI_FUNC(PyObject *) _PyLong_Format(PyObject *aa, int base, int addL, int newstyle);
PyAPI_FUNC(PyObject *) _PyLong_FormatAdvanced(PyObject *obj,
char *format_spec,
Py_ssize_t format_spec_len);
