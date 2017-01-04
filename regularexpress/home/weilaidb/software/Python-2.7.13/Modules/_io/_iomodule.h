extern PyTypeObject PyIOBase_Type;
extern PyTypeObject PyRawIOBase_Type;
extern PyTypeObject PyBufferedIOBase_Type;
extern PyTypeObject PyTextIOBase_Type;
extern PyTypeObject PyFileIO_Type;
extern PyTypeObject PyBytesIO_Type;
extern PyTypeObject PyStringIO_Type;
extern PyTypeObject PyBufferedReader_Type;
extern PyTypeObject PyBufferedWriter_Type;
extern PyTypeObject PyBufferedRWPair_Type;
extern PyTypeObject PyBufferedRandom_Type;
extern PyTypeObject PyTextIOWrapper_Type;
extern PyTypeObject PyIncrementalNewlineDecoder_Type;
extern int _PyIO_ConvertSsize_t(PyObject *, void *);
extern PyObject* _PyIOBase_check_readable(PyObject *self, PyObject *args);
extern PyObject* _PyIOBase_check_writable(PyObject *self, PyObject *args);
extern PyObject* _PyIOBase_check_seekable(PyObject *self, PyObject *args);
extern PyObject* _PyIOBase_check_closed(PyObject *self, PyObject *args);
extern int _PyIOBase_finalize(PyObject *self);
extern int _PyFileIO_closed(PyObject *self);
extern PyObject *_PyIncrementalNewlineDecoder_decode(
PyObject *self, PyObject *input, int final);
extern Py_ssize_t _PyIO_find_line_ending(
int translated, int universal, PyObject *readnl,
Py_UNICODE *start, Py_UNICODE *end, Py_ssize_t *consumed);
extern int _PyIO_trap_eintr(void);
#define DEFAULT_BUFFER_SIZE (8 * 1024)
typedef struct  PyBlockingIOErrorObject;
extern PyObject *PyExc_BlockingIOError;
#if defined(MS_WIN64) || defined(MS_WINDOWS)
typedef PY_LONG_LONG Py_off_t;
# define PyLong_AsOff_t     PyLong_AsLongLong
# define PyLong_FromOff_t   PyLong_FromLongLong
# define PY_OFF_T_MAX       PY_LLONG_MAX
# define PY_OFF_T_MIN       PY_LLONG_MIN
# define PY_OFF_T_COMPAT    PY_LONG_LONG
# define PY_PRIdOFF         "lld"
typedef off_t Py_off_t;
#if (SIZEOF_OFF_T == SIZEOF_SIZE_T)
# define PyLong_AsOff_t     PyLong_AsSsize_t
# define PyLong_FromOff_t   PyLong_FromSsize_t
# define PY_OFF_T_MAX       PY_SSIZE_T_MAX
# define PY_OFF_T_MIN       PY_SSIZE_T_MIN
# define PY_OFF_T_COMPAT    Py_ssize_t
# define PY_PRIdOFF         "zd"
#elif (HAVE_LONG_LONG && SIZEOF_OFF_T == SIZEOF_LONG_LONG)
# define PyLong_AsOff_t     PyLong_AsLongLong
# define PyLong_FromOff_t   PyLong_FromLongLong
# define PY_OFF_T_MAX       PY_LLONG_MAX
# define PY_OFF_T_MIN       PY_LLONG_MIN
# define PY_OFF_T_COMPAT    PY_LONG_LONG
# define PY_PRIdOFF         "lld"
#elif (SIZEOF_OFF_T == SIZEOF_LONG)
# define PyLong_AsOff_t     PyLong_AsLong
# define PyLong_FromOff_t   PyLong_FromLong
# define PY_OFF_T_MAX       LONG_MAX
# define PY_OFF_T_MIN       LONG_MIN
# define PY_OFF_T_COMPAT    long
# define PY_PRIdOFF         "ld"
# error off_t does not match either size_t, long, or long long!
extern Py_off_t PyNumber_AsOff_t(PyObject *item, PyObject *err);
extern PyObject *_PyIO_os_module;
extern PyObject *_PyIO_locale_module;
extern PyObject *_PyIO_unsupported_operation;
extern PyObject *_PyIO_str_close;
extern PyObject *_PyIO_str_closed;
extern PyObject *_PyIO_str_decode;
extern PyObject *_PyIO_str_encode;
extern PyObject *_PyIO_str_fileno;
extern PyObject *_PyIO_str_flush;
extern PyObject *_PyIO_str_getstate;
extern PyObject *_PyIO_str_isatty;
extern PyObject *_PyIO_str_newlines;
extern PyObject *_PyIO_str_nl;
extern PyObject *_PyIO_str_read;
extern PyObject *_PyIO_str_read1;
extern PyObject *_PyIO_str_readable;
extern PyObject *_PyIO_str_readinto;
extern PyObject *_PyIO_str_readline;
extern PyObject *_PyIO_str_reset;
extern PyObject *_PyIO_str_seek;
extern PyObject *_PyIO_str_seekable;
extern PyObject *_PyIO_str_setstate;
extern PyObject *_PyIO_str_tell;
extern PyObject *_PyIO_str_truncate;
extern PyObject *_PyIO_str_writable;
extern PyObject *_PyIO_str_write;
extern PyObject *_PyIO_empty_str;
extern PyObject *_PyIO_empty_bytes;
extern PyObject *_PyIO_zero;
