#if PY_VERSION_HEX < 0x02060000 && !defined(Py_TYPE)
#define Py_TYPE(ob)     (((PyObject*)(ob))->ob_type)
#if PY_VERSION_HEX < 0x02050000 && !defined(PY_SSIZE_T_MIN)
typedef int Py_ssize_t;
#define PY_SSIZE_T_MAX INT_MAX
#define PY_SSIZE_T_MIN INT_MIN
#define PyInt_FromSsize_t PyInt_FromLong
#define PyInt_AsSsize_t PyInt_AsLong
#define Py_IS_FINITE(X) (!Py_IS_INFINITY(X) && !Py_IS_NAN(X))
#define UNUSED __attribute__((__unused__))
#define UNUSED
#define DEFAULT_ENCODING "utf-8"
#define PyScanner_Check(op) PyObject_TypeCheck(op, &PyScannerType)
#define PyScanner_CheckExact(op) (Py_TYPE(op) == &PyScannerType)
#define PyEncoder_Check(op) PyObject_TypeCheck(op, &PyEncoderType)
#define PyEncoder_CheckExact(op) (Py_TYPE(op) == &PyEncoderType)
static PyTypeObject PyScannerType;
static PyTypeObject PyEncoderType;
typedef struct _PyScannerObject  PyScannerObject;
static PyMemberDef scanner_members[] = ;
typedef struct _PyEncoderObject  PyEncoderObject;
static PyMemberDef encoder_members[] = ;
static Py_ssize_t
ascii_escape_char(Py_UNICODE c, char *output, Py_ssize_t chars);
static PyObject *
ascii_escape_unicode(PyObject *pystr);
static PyObject *
ascii_escape_str(PyObject *pystr);
static PyObject *
py_encode_basestring_ascii(PyObject* self UNUSED, PyObject *pystr);
void init_json(void);
static PyObject *
scan_once_str(PyScannerObject *s, PyObject *pystr, Py_ssize_t idx, Py_ssize_t *next_idx_ptr);
static PyObject *
scan_once_unicode(PyScannerObject *s, PyObject *pystr, Py_ssize_t idx, Py_ssize_t *next_idx_ptr);
static PyObject *
_build_rval_index_tuple(PyObject *rval, Py_ssize_t idx);
static PyObject *
scanner_new(PyTypeObject *type, PyObject *args, PyObject *kwds);
static int
scanner_init(PyObject *self, PyObject *args, PyObject *kwds);
static void
scanner_dealloc(PyObject *self);
static int
scanner_clear(PyObject *self);
static PyObject *
encoder_new(PyTypeObject *type, PyObject *args, PyObject *kwds);
static int
encoder_init(PyObject *self, PyObject *args, PyObject *kwds);
static void
encoder_dealloc(PyObject *self);
static int
encoder_clear(PyObject *self);
static int
encoder_listencode_list(PyEncoderObject *s, PyObject *rval, PyObject *seq, Py_ssize_t indent_level);
static int
encoder_listencode_obj(PyEncoderObject *s, PyObject *rval, PyObject *obj, Py_ssize_t indent_level);
static int
encoder_listencode_dict(PyEncoderObject *s, PyObject *rval, PyObject *dct, Py_ssize_t indent_level);
static PyObject *
_encoded_const(PyObject *obj);
static void
raise_errmsg(char *msg, PyObject *s, Py_ssize_t end);
static PyObject *
encoder_encode_string(PyEncoderObject *s, PyObject *obj);
static int
_convertPyInt_AsSsize_t(PyObject *o, Py_ssize_t *size_ptr);
static PyObject *
_convertPyInt_FromSsize_t(Py_ssize_t *size_ptr);
static PyObject *
encoder_encode_float(PyEncoderObject *s, PyObject *obj);
#define S_CHAR(c) (c >= ' ' && c <= '~' && c != '\\' && c != '"')
#define IS_WHITESPACE(c) (((c) == ' ') || ((c) == '\t') || ((c) == '\n') || ((c) == '\r'))
#define MIN_EXPANSION 6
#define MAX_EXPANSION (2 * MIN_EXPANSION)
#define MAX_EXPANSION MIN_EXPANSION
static int
_convertPyInt_AsSsize_t(PyObject *o, Py_ssize_t *size_ptr)
static PyObject *
_convertPyInt_FromSsize_t(Py_ssize_t *size_ptr)
static Py_ssize_t
ascii_escape_char(Py_UNICODE c, char *output, Py_ssize_t chars)
static PyObject *
ascii_escape_unicode(PyObject *pystr)
static PyObject *
ascii_escape_str(PyObject *pystr)
static void
raise_errmsg(char *msg, PyObject *s, Py_ssize_t end)
static PyObject *
join_list_unicode(PyObject *lst)
static PyObject *
_build_rval_index_tuple(PyObject *rval, Py_ssize_t idx)
static PyObject *
scanstring_str(PyObject *pystr, Py_ssize_t end, char *encoding, int strict, Py_ssize_t *next_end_ptr)
static PyObject *
scanstring_unicode(PyObject *pystr, Py_ssize_t end, int strict, Py_ssize_t *next_end_ptr)
PyDoc_STRVAR(pydoc_scanstring,
"scanstring(basestring, end, encoding, strict=True) -> (str, end)\n"
"\n"
"Scan the string s for a JSON string. End is the index of the\n"
"character in s after the quote that started the JSON string.\n"
"Unescapes all valid JSON string escape sequences and raises ValueError\n"
"on attempt to decode an invalid string. If strict is False then literal\n"
"control characters are allowed in the string.\n"
"\n"
"Returns a tuple of the decoded string and the index of the character in s\n"
"after the end quote."
);
static PyObject *
py_scanstring(PyObject* self UNUSED, PyObject *args)
PyDoc_STRVAR(pydoc_encode_basestring_ascii,
"encode_basestring_ascii(basestring) -> str\n"
"\n"
"Return an ASCII-only JSON representation of a Python string"
);
static PyObject *
py_encode_basestring_ascii(PyObject* self UNUSED, PyObject *pystr)
static void
scanner_dealloc(PyObject *self)
static int
scanner_traverse(PyObject *self, visitproc visit, void *arg)
static int
scanner_clear(PyObject *self)
static PyObject *
_parse_object_str(PyScannerObject *s, PyObject *pystr, Py_ssize_t idx, Py_ssize_t *next_idx_ptr) ')
}
if (idx > end_idx || str[idx] != '}')
if (s->pairs_hook != Py_None)
rval = PyObject_CallFunctionObjArgs((PyObject *)(&PyDict_Type),
pairs, NULL);
if (rval == NULL)
goto bail;
Py_CLEAR(pairs);
if (s->object_hook != Py_None)
*next_idx_ptr = idx + 1;
return rval;
bail:
Py_XDECREF(key);
Py_XDECREF(val);
Py_XDECREF(pairs);
return NULL;
}
static PyObject *
_parse_object_unicode(PyScannerObject *s, PyObject *pystr, Py_ssize_t idx, Py_ssize_t *next_idx_ptr) ')
}
if (idx > end_idx || str[idx] != '}')
if (s->pairs_hook != Py_None)
rval = PyObject_CallFunctionObjArgs((PyObject *)(&PyDict_Type),
pairs, NULL);
if (rval == NULL)
goto bail;
Py_CLEAR(pairs);
if (s->object_hook != Py_None)
*next_idx_ptr = idx + 1;
return rval;
bail:
Py_XDECREF(key);
Py_XDECREF(val);
Py_XDECREF(pairs);
return NULL;
}
static PyObject *
_parse_array_str(PyScannerObject *s, PyObject *pystr, Py_ssize_t idx, Py_ssize_t *next_idx_ptr)
static PyObject *
_parse_array_unicode(PyScannerObject *s, PyObject *pystr, Py_ssize_t idx, Py_ssize_t *next_idx_ptr)
static PyObject *
_parse_constant(PyScannerObject *s, char *constant, Py_ssize_t idx, Py_ssize_t *next_idx_ptr)
static PyObject *
_match_number_str(PyScannerObject *s, PyObject *pystr, Py_ssize_t start, Py_ssize_t *next_idx_ptr)
static PyObject *
_match_number_unicode(PyScannerObject *s, PyObject *pystr, Py_ssize_t start, Py_ssize_t *next_idx_ptr)
static PyObject *
scan_once_str(PyScannerObject *s, PyObject *pystr, Py_ssize_t idx, Py_ssize_t *next_idx_ptr)
{
PyObject *res;
int strict;
char *str = PyString_AS_STRING(pystr);
Py_ssize_t length = PyString_GET_SIZE(pystr);
if (idx < 0)
if (idx >= length)
switch (str[idx])
static PyObject *
scan_once_unicode(PyScannerObject *s, PyObject *pystr, Py_ssize_t idx, Py_ssize_t *next_idx_ptr)
{
PyObject *res;
int strict;
Py_UNICODE *str = PyUnicode_AS_UNICODE(pystr);
Py_ssize_t length = PyUnicode_GET_SIZE(pystr);
if (idx < 0)
if (idx >= length)
switch (str[idx])
static PyObject *
scanner_call(PyObject *self, PyObject *args, PyObject *kwds)
static PyObject *
scanner_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
static int
scanner_init(PyObject *self, PyObject *args, PyObject *kwds)
PyDoc_STRVAR(scanner_doc, "JSON scanner object");
static
PyTypeObject PyScannerType = ;
static PyObject *
encoder_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
static int
encoder_init(PyObject *self, PyObject *args, PyObject *kwds)
static PyObject *
encoder_call(PyObject *self, PyObject *args, PyObject *kwds)
static PyObject *
_encoded_const(PyObject *obj)
static PyObject *
encoder_encode_float(PyEncoderObject *s, PyObject *obj)
static PyObject *
encoder_encode_string(PyEncoderObject *s, PyObject *obj)
static int
_steal_list_append(PyObject *lst, PyObject *stolen)
static int
encoder_listencode_obj(PyEncoderObject *s, PyObject *rval, PyObject *obj, Py_ssize_t indent_level)
static int
encoder_listencode_dict(PyEncoderObject *s, PyObject *rval, PyObject *dct, Py_ssize_t indent_level)
static int
encoder_listencode_list(PyEncoderObject *s, PyObject *rval, PyObject *seq, Py_ssize_t indent_level)
static void
encoder_dealloc(PyObject *self)
static int
encoder_traverse(PyObject *self, visitproc visit, void *arg)
static int
encoder_clear(PyObject *self)
PyDoc_STRVAR(encoder_doc, "_iterencode(obj, _current_indent_level) -> iterable");
static
PyTypeObject PyEncoderType = ;
static PyMethodDef speedups_methods[] = ;
PyDoc_STRVAR(module_doc,
"json speedups\n");
void
init_json(void)
