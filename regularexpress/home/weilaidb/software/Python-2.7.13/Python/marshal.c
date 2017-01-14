#define PY_SSIZE_T_CLEAN
#define ABS(x) ((x) < 0 ? -(x) : (x))
#if defined(MS_WINDOWS) && defined(_DEBUG)
#define MAX_MARSHAL_STACK_DEPTH 1000
#define MAX_MARSHAL_STACK_DEPTH 2000
#define TYPE_NULL               '0'
#define TYPE_NONE               'N'
#define TYPE_FALSE              'F'
#define TYPE_TRUE               'T'
#define TYPE_STOPITER           'S'
#define TYPE_ELLIPSIS           '.'
#define TYPE_INT                'i'
#define TYPE_INT64              'I'
#define TYPE_FLOAT              'f'
#define TYPE_BINARY_FLOAT       'g'
#define TYPE_COMPLEX            'x'
#define TYPE_BINARY_COMPLEX     'y'
#define TYPE_LONG               'l'
#define TYPE_STRING             's'
#define TYPE_INTERNED           't'
#define TYPE_STRINGREF          'R'
#define TYPE_TUPLE              '('
#define TYPE_LIST               '['
#define TYPE_DICT               '{'
#define TYPE_CODE               'c'
#define TYPE_UNICODE            'u'
#define TYPE_UNKNOWN            '?'
#define TYPE_SET                '<'
#define TYPE_FROZENSET          '>'
#define WFERR_OK 0
#define WFERR_UNMARSHALLABLE 1
#define WFERR_NESTEDTOODEEP 2
#define WFERR_NOMEMORY 3
typedef struct  WFILE;
#define w_byte(c, p) if (((p)->fp)) putc((c), (p)->fp); \
else if ((p)->ptr != (p)->end) *(p)->ptr++ = (c); \
else w_more(c, p)
static void
w_more(int c, WFILE *p)
static void
w_string(const char *s, Py_ssize_t n, WFILE *p)
static void
w_short(int x, WFILE *p)
static void
w_long(long x, WFILE *p)
#if SIZEOF_LONG > 4
static void
w_long64(long x, WFILE *p)
#define SIZE32_MAX  0x7FFFFFFF
#if SIZEOF_SIZE_T > 4
# define W_SIZE(n, p)  do  while(0)
# define W_SIZE  w_long
static void
w_pstring(const char *s, Py_ssize_t n, WFILE *p)
#define PyLong_MARSHAL_SHIFT 15
#define PyLong_MARSHAL_BASE ((short)1 << PyLong_MARSHAL_SHIFT)
#define PyLong_MARSHAL_MASK (PyLong_MARSHAL_BASE - 1)
#if PyLong_SHIFT % PyLong_MARSHAL_SHIFT != 0
#error
#define PyLong_MARSHAL_RATIO (PyLong_SHIFT / PyLong_MARSHAL_SHIFT)
static void
w_PyLong(const PyLongObject *ob, WFILE *p)
static void
w_object(PyObject *v, WFILE *p)
void
PyMarshal_WriteLongToFile(long x, FILE *fp, int version)
void
PyMarshal_WriteObjectToFile(PyObject *x, FILE *fp, int version)
typedef WFILE RFILE;
#define rs_byte(p) (((p)->ptr < (p)->end) ? (unsigned char)*(p)->ptr++ : EOF)
#define r_byte(p) ((p)->fp ? getc((p)->fp) : rs_byte(p))
static Py_ssize_t
r_string(char *s, Py_ssize_t n, RFILE *p)
static int
r_short(RFILE *p)
static long
r_long(RFILE *p)
static PyObject *
r_long64(RFILE *p)
static PyObject *
r_PyLong(RFILE *p)
static PyObject *
r_object(RFILE *p)
static PyObject *
read_object(RFILE *p)
int
PyMarshal_ReadShortFromFile(FILE *fp)
long
PyMarshal_ReadLongFromFile(FILE *fp)
static off_t
getfilesize(FILE *fp)
PyObject *
PyMarshal_ReadLastObjectFromFile(FILE *fp)
PyObject *
PyMarshal_ReadObjectFromFile(FILE *fp)
PyObject *
PyMarshal_ReadObjectFromString(char *str, Py_ssize_t len)
static void
set_error(int error)
PyObject *
PyMarshal_WriteObjectToString(PyObject *x, int version)
static PyObject *
marshal_dump(PyObject *self, PyObject *args)
PyDoc_STRVAR(dump_doc,
"dump(value, file[, version])\n\
\n\
Write the value on the open file. The value must be a supported type.\n\
The file must be an open file object such as sys.stdout or returned by\n\
open() or os.popen(). It must be opened in binary mode ('wb' or 'w+b').\n\
\n\
If the value has (or contains an object that has) an unsupported type, a\n\
ValueError exception is raised — but garbage data will also be written\n\
to the file. The object will not be properly read back by load()\n\
\n\
New in version 2.4: The version argument indicates the data format that\n\
dump should use.");
static PyObject *
marshal_load(PyObject *self, PyObject *f)
PyDoc_STRVAR(load_doc,
"load(file)\n\
\n\
Read one value from the open file and return it. If no valid value is\n\
read (e.g. because the data has a different Python version’s\n\
incompatible marshal format), raise EOFError, ValueError or TypeError.\n\
The file must be an open file object opened in binary mode ('rb' or\n\
'r+b').\n\
\n\
Note: If an object containing an unsupported type was marshalled with\n\
dump(), load() will substitute None for the unmarshallable type.");
static PyObject *
marshal_dumps(PyObject *self, PyObject *args)
PyDoc_STRVAR(dumps_doc,
"dumps(value[, version])\n\
\n\
Return the string that would be written to a file by dump(value, file).\n\
The value must be a supported type. Raise a ValueError exception if\n\
value has (or contains an object that has) an unsupported type.\n\
\n\
New in version 2.4: The version argument indicates the data format that\n\
dumps should use.");
static PyObject *
marshal_loads(PyObject *self, PyObject *args)
PyDoc_STRVAR(loads_doc,
"loads(string)\n\
\n\
Convert the string to a value. If no valid value is found, raise\n\
EOFError, ValueError or TypeError. Extra characters in the string are\n\
ignored.");
static PyMethodDef marshal_methods[] = ;
PyDoc_STRVAR(marshal_doc,
"This module contains functions that can read and write Python values in\n\
a binary format. The format is specific to Python, but independent of\n\
machine architecture issues.\n\
\n\
Not all Python object types are supported; in general, only objects\n\
whose value is independent from a particular invocation of Python can be\n\
written and read by this module. The following types are supported:\n\
None, integers, long integers, floating point numbers, strings, Unicode\n\
objects, tuples, lists, sets, dictionaries, and code objects, where it\n\
should be understood that tuples, lists and dictionaries are only\n\
supported as long as the values contained therein are themselves\n\
supported; and recursive lists and dictionaries should not be written\n\
(they will cause infinite loops).\n\
\n\
Variables:\n\
\n\
version -- indicates the format that the module uses. Version 0 is the\n\
historical format, version 1 (added in Python 2.4) shares interned\n\
strings and version 2 (added in Python 2.5) uses a binary format for\n\
floating point numbers. (New in version 2.4)\n\
\n\
Functions:\n\
\n\
dump() -- write value to a file\n\
load() -- read value from a file\n\
dumps() -- write value to a string\n\
loads() -- read value from a string");
PyMODINIT_FUNC
PyMarshal_Init(void)
