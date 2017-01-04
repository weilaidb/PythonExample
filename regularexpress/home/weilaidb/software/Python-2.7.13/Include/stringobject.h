#define Py_STRINGOBJECT_H
typedef struct  PyStringObject;
#define SSTATE_NOT_INTERNED 0
#define SSTATE_INTERNED_MORTAL 1
#define SSTATE_INTERNED_IMMORTAL 2
PyAPI_DATA(PyTypeObject) PyBaseString_Type;
PyAPI_DATA(PyTypeObject) PyString_Type;
#define PyString_Check(op) \
PyType_FastSubclass(Py_TYPE(op), Py_TPFLAGS_STRING_SUBCLASS)
#define PyString_CheckExact(op) (Py_TYPE(op) == &PyString_Type)
PyAPI_FUNC(PyObject *) PyString_FromStringAndSize(const char *, Py_ssize_t);
PyAPI_FUNC(PyObject *) PyString_FromString(const char *);
PyAPI_FUNC(PyObject *) PyString_FromFormatV(const char*, va_list)
Py_GCC_ATTRIBUTE((format(printf, 1, 0)));
PyAPI_FUNC(PyObject *) PyString_FromFormat(const char*, ...)
Py_GCC_ATTRIBUTE((format(printf, 1, 2)));
PyAPI_FUNC(Py_ssize_t) PyString_Size(PyObject *);
PyAPI_FUNC(char *) PyString_AsString(PyObject *);
PyAPI_FUNC(PyObject *) PyString_Repr(PyObject *, int);
PyAPI_FUNC(void) PyString_Concat(PyObject **, PyObject *);
PyAPI_FUNC(void) PyString_ConcatAndDel(PyObject **, PyObject *);
PyAPI_FUNC(int) _PyString_Resize(PyObject **, Py_ssize_t);
PyAPI_FUNC(int) _PyString_Eq(PyObject *, PyObject*);
PyAPI_FUNC(PyObject *) PyString_Format(PyObject *, PyObject *);
PyAPI_FUNC(PyObject *) _PyString_FormatLong(PyObject*, int, int,
int, char**, int*);
PyAPI_FUNC(PyObject *) PyString_DecodeEscape(const char *, Py_ssize_t,
const char *, Py_ssize_t,
const char *);
PyAPI_FUNC(void) PyString_InternInPlace(PyObject **);
PyAPI_FUNC(void) PyString_InternImmortal(PyObject **);
PyAPI_FUNC(PyObject *) PyString_InternFromString(const char *);
PyAPI_FUNC(void) _Py_ReleaseInternedStrings(void);
#define PyString_CHECK_INTERNED(op) (((PyStringObject *)(op))->ob_sstate)
#define PyString_AS_STRING(op) (((PyStringObject *)(op))->ob_sval)
#define PyString_GET_SIZE(op)  Py_SIZE(op)
PyAPI_FUNC(PyObject *) _PyString_Join(PyObject *sep, PyObject *x);
PyAPI_FUNC(PyObject*) PyString_Decode(
const char *s,
Py_ssize_t size,
const char *encoding,
const char *errors
);
PyAPI_FUNC(PyObject*) PyString_Encode(
const char *s,
Py_ssize_t size,
const char *encoding,
const char *errors
);
PyAPI_FUNC(PyObject*) PyString_AsEncodedObject(
PyObject *str,
const char *encoding,
const char *errors
);
PyAPI_FUNC(PyObject*) PyString_AsEncodedString(
PyObject *str,
const char *encoding,
const char *errors
);
PyAPI_FUNC(PyObject*) PyString_AsDecodedObject(
PyObject *str,
const char *encoding,
const char *errors
);
PyAPI_FUNC(PyObject*) PyString_AsDecodedString(
PyObject *str,
const char *encoding,
const char *errors
);
PyAPI_FUNC(int) PyString_AsStringAndSize(
register PyObject *obj,
register char **s,
register Py_ssize_t *len
);
PyAPI_FUNC(Py_ssize_t) _PyString_InsertThousandsGroupingLocale(char *buffer,
Py_ssize_t n_buffer,
char *digits,
Py_ssize_t n_digits,
Py_ssize_t min_width);
PyAPI_FUNC(Py_ssize_t) _PyString_InsertThousandsGrouping(char *buffer,
Py_ssize_t n_buffer,
char *digits,
Py_ssize_t n_digits,
Py_ssize_t min_width,
const char *grouping,
const char *thousands_sep);
PyAPI_FUNC(PyObject *) _PyBytes_FormatAdvanced(PyObject *obj,
char *format_spec,
Py_ssize_t format_spec_len);
