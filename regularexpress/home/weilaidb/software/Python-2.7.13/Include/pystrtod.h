#define Py_STRTOD_H
PyAPI_FUNC(double) PyOS_ascii_strtod(const char *str, char **ptr);
PyAPI_FUNC(double) PyOS_ascii_atof(const char *str);
PyAPI_FUNC(char *) PyOS_ascii_formatd(char *buffer, size_t buf_len,
const char *format, double d);
PyAPI_FUNC(double) PyOS_string_to_double(const char *str,
char **endptr,
PyObject *overflow_exception);
PyAPI_FUNC(char *) PyOS_double_to_string(double val,
char format_code,
int precision,
int flags,
int *type);
PyAPI_FUNC(double) _Py_parse_inf_or_nan(const char *p, char **endptr);
#define Py_DTSF_SIGN      0x01
#define Py_DTSF_ADD_DOT_0 0x02
#define Py_DTSF_ALT       0x04
#define Py_DTST_FINITE 0
#define Py_DTST_INFINITE 1
#define Py_DTST_NAN 2
