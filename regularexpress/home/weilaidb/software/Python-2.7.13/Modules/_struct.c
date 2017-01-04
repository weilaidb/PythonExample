#define PY_SSIZE_T_CLEAN
static PyTypeObject PyStructType;
#if (PY_VERSION_HEX < 0x02050000)
typedef int Py_ssize_t;
#define FLOAT_COERCE_WARN "integer argument expected, got float"
#define NON_INTEGER_WARN "integer argument expected, got non-integer " \
"(implicit conversion using __int__ is deprecated)"
typedef struct _formatdef  formatdef;
typedef struct _formatcode  formatcode;
typedef struct  PyStructObject;
#define PyStruct_Check(op) PyObject_TypeCheck(op, &PyStructType)
#define PyStruct_CheckExact(op) (Py_TYPE(op) == &PyStructType)
static PyObject *StructError;
typedef struct  st_short;
typedef struct  st_int;
typedef struct  st_long;
typedef struct  st_float;
typedef struct  st_double;
typedef struct  st_void_p;
#define SHORT_ALIGN (sizeof(st_short) - sizeof(short))
#define INT_ALIGN (sizeof(st_int) - sizeof(int))
#define LONG_ALIGN (sizeof(st_long) - sizeof(long))
#define FLOAT_ALIGN (sizeof(st_float) - sizeof(float))
#define DOUBLE_ALIGN (sizeof(st_double) - sizeof(double))
#define VOID_P_ALIGN (sizeof(st_void_p) - sizeof(void *))
typedef struct  s_long_long;
#define LONG_LONG_ALIGN (sizeof(s_long_long) - sizeof(PY_LONG_LONG))
#define BOOL_TYPE _Bool
typedef struct  s_bool;
#define BOOL_ALIGN (sizeof(s_bool) - sizeof(BOOL_TYPE))
#define BOOL_TYPE char
#define BOOL_ALIGN 0
#define STRINGIFY(x)    #x
static char *integer_codes = "bBhHiIlLqQ";
static PyObject *
get_pylong(PyObject *v)
static int
get_long(PyObject *v, long *p)
static int
get_ulong(PyObject *v, unsigned long *p)
static int
get_longlong(PyObject *v, PY_LONG_LONG *p)
static int
get_ulonglong(PyObject *v, unsigned PY_LONG_LONG *p)
static PyObject *
unpack_float(const char *p,
int le)
static PyObject *
unpack_double(const char *p,
int le)
static int
_range_error(const formatdef *f, int is_unsigned)
static PyObject *
nu_char(const char *p, const formatdef *f)
static PyObject *
nu_byte(const char *p, const formatdef *f)
static PyObject *
nu_ubyte(const char *p, const formatdef *f)
static PyObject *
nu_short(const char *p, const formatdef *f)
static PyObject *
nu_ushort(const char *p, const formatdef *f)
static PyObject *
nu_int(const char *p, const formatdef *f)
static PyObject *
nu_uint(const char *p, const formatdef *f)
static PyObject *
nu_long(const char *p, const formatdef *f)
static PyObject *
nu_ulong(const char *p, const formatdef *f)
static PyObject *
nu_longlong(const char *p, const formatdef *f)
static PyObject *
nu_ulonglong(const char *p, const formatdef *f)
static PyObject *
nu_bool(const char *p, const formatdef *f)
static PyObject *
nu_float(const char *p, const formatdef *f)
static PyObject *
nu_double(const char *p, const formatdef *f)
static PyObject *
nu_void_p(const char *p, const formatdef *f)
static int
np_byte(char *p, PyObject *v, const formatdef *f)
static int
np_ubyte(char *p, PyObject *v, const formatdef *f)
static int
np_char(char *p, PyObject *v, const formatdef *f)
static int
np_short(char *p, PyObject *v, const formatdef *f)
static int
np_ushort(char *p, PyObject *v, const formatdef *f)
static int
np_int(char *p, PyObject *v, const formatdef *f)
static int
np_uint(char *p, PyObject *v, const formatdef *f)
static int
np_long(char *p, PyObject *v, const formatdef *f)
static int
np_ulong(char *p, PyObject *v, const formatdef *f)
static int
np_longlong(char *p, PyObject *v, const formatdef *f)
static int
np_ulonglong(char *p, PyObject *v, const formatdef *f)
static int
np_bool(char *p, PyObject *v, const formatdef *f)
static int
np_float(char *p, PyObject *v, const formatdef *f)
static int
np_double(char *p, PyObject *v, const formatdef *f)
static int
np_void_p(char *p, PyObject *v, const formatdef *f)
static formatdef native_table[] = ;
static PyObject *
bu_int(const char *p, const formatdef *f)
static PyObject *
bu_uint(const char *p, const formatdef *f)
static PyObject *
bu_longlong(const char *p, const formatdef *f)
static PyObject *
bu_ulonglong(const char *p, const formatdef *f)
static PyObject *
bu_float(const char *p, const formatdef *f)
static PyObject *
bu_double(const char *p, const formatdef *f)
static PyObject *
bu_bool(const char *p, const formatdef *f)
static int
bp_int(char *p, PyObject *v, const formatdef *f)
static int
bp_uint(char *p, PyObject *v, const formatdef *f)
static int
bp_longlong(char *p, PyObject *v, const formatdef *f)
static int
bp_ulonglong(char *p, PyObject *v, const formatdef *f)
static int
bp_float(char *p, PyObject *v, const formatdef *f)
static int
bp_double(char *p, PyObject *v, const formatdef *f)
static int
bp_bool(char *p, PyObject *v, const formatdef *f)
static formatdef bigendian_table[] = ;
static PyObject *
lu_int(const char *p, const formatdef *f)
static PyObject *
lu_uint(const char *p, const formatdef *f)
static PyObject *
lu_longlong(const char *p, const formatdef *f)
static PyObject *
lu_ulonglong(const char *p, const formatdef *f)
static PyObject *
lu_float(const char *p, const formatdef *f)
static PyObject *
lu_double(const char *p, const formatdef *f)
static int
lp_int(char *p, PyObject *v, const formatdef *f)
static int
lp_uint(char *p, PyObject *v, const formatdef *f)
static int
lp_longlong(char *p, PyObject *v, const formatdef *f)
static int
lp_ulonglong(char *p, PyObject *v, const formatdef *f)
static int
lp_float(char *p, PyObject *v, const formatdef *f)
static int
lp_double(char *p, PyObject *v, const formatdef *f)
static formatdef lilendian_table[] = ;
static const formatdef *
whichtable(char **pfmt)
static const formatdef *
getentry(int c, const formatdef *f)
static Py_ssize_t
align(Py_ssize_t size, char c, const formatdef *e)
static int
prepare_s(PyStructObject *self)
static PyObject *
s_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
static int
s_init(PyObject *self, PyObject *args, PyObject *kwds)
static void
s_dealloc(PyStructObject *s)
static PyObject *
s_unpack_internal(PyStructObject *soself, char *startfrom)
PyDoc_STRVAR(s_unpack__doc__,
"S.unpack(str) -> (v1, v2, ...)\n\
\n\
Return tuple containing values unpacked according to this Struct's format.\n\
Requires len(str) == self.size. See struct.__doc__ for more on format\n\
strings.");
static PyObject *
s_unpack(PyObject *self, PyObject *inputstr)
PyDoc_STRVAR(s_unpack_from__doc__,
"S.unpack_from(buffer[, offset]) -> (v1, v2, ...)\n\
\n\
Return tuple containing values unpacked according to this Struct's format.\n\
Unlike unpack, unpack_from can unpack values from any object supporting\n\
the buffer API, not just str. Requires len(buffer[offset:]) >= self.size.\n\
See struct.__doc__ for more on format strings.");
static PyObject *
s_unpack_from(PyObject *self, PyObject *args, PyObject *kwds)
static int
s_pack_internal(PyStructObject *soself, PyObject *args, int offset, char* buf)
PyDoc_STRVAR(s_pack__doc__,
"S.pack(v1, v2, ...) -> string\n\
\n\
Return a string containing values v1, v2, ... packed according to this\n\
Struct's format. See struct.__doc__ for more on format strings.");
static PyObject *
s_pack(PyObject *self, PyObject *args)
PyDoc_STRVAR(s_pack_into__doc__,
"S.pack_into(buffer, offset, v1, v2, ...)\n\
\n\
Pack the values v1, v2, ... according to this Struct's format, write \n\
the packed bytes into the writable buffer buf starting at offset.  Note\n\
that the offset is not an optional argument.  See struct.__doc__ for \n\
more on format strings.");
static PyObject *
s_pack_into(PyObject *self, PyObject *args)
static PyObject *
s_get_format(PyStructObject *self, void *unused)
static PyObject *
s_get_size(PyStructObject *self, void *unused)
PyDoc_STRVAR(s_sizeof__doc__,
"S.__sizeof__() -> size of S in memory, in bytes");
static PyObject *
s_sizeof(PyStructObject *self, void *unused)
static struct PyMethodDef s_methods[] = ;
PyDoc_STRVAR(s__doc__, "Compiled struct object");
#define OFF(x) offsetof(PyStructObject, x)
static PyGetSetDef s_getsetlist[] = ;
static
PyTypeObject PyStructType = ;
#define MAXCACHE 100
static PyObject *cache = NULL;
static PyObject *
cache_struct(PyObject *fmt)
PyDoc_STRVAR(clearcache_doc,
"Clear the internal cache.");
static PyObject *
clearcache(PyObject *self)
PyDoc_STRVAR(calcsize_doc,
"Return size of C struct described by format string fmt.");
static PyObject *
calcsize(PyObject *self, PyObject *fmt)
PyDoc_STRVAR(pack_doc,
"Return string containing values v1, v2, ... packed according to fmt.");
static PyObject *
pack(PyObject *self, PyObject *args)
PyDoc_STRVAR(pack_into_doc,
"Pack the values v1, v2, ... according to fmt.\n\
Write the packed bytes into the writable buffer buf starting at offset.");
static PyObject *
pack_into(PyObject *self, PyObject *args)
PyDoc_STRVAR(unpack_doc,
"Unpack the string containing packed C structure data, according to fmt.\n\
Requires len(string) == calcsize(fmt).");
static PyObject *
unpack(PyObject *self, PyObject *args)
PyDoc_STRVAR(unpack_from_doc,
"Unpack the buffer, containing packed C structure data, according to\n\
fmt, starting at offset. Requires len(buffer[offset:]) >= calcsize(fmt).");
static PyObject *
unpack_from(PyObject *self, PyObject *args, PyObject *kwds)
static struct PyMethodDef module_functions[] = ;
PyDoc_STRVAR(module_doc,
"Functions to convert between Python values and C structs represented\n\
as Python strings. It uses format strings (explained below) as compact\n\
descriptions of the lay-out of the C structs and the intended conversion\n\
to/from Python values.\n\
\n\
The optional first format char indicates byte order, size and alignment:\n\
@: native order, size & alignment (default)\n\
=: native order, std. size & alignment\n\
<: little-endian, std. size & alignment\n\
>: big-endian, std. size & alignment\n\
!: same as >\n\
\n\
The remaining chars indicate types of args and must match exactly;\n\
these can be preceded by a decimal repeat count:\n\
x: pad byte (no data); c:char; b:signed byte; B:unsigned byte;\n\
?: _Bool (requires C99; if not available, char is used instead)\n\
h:short; H:unsigned short; i:int; I:unsigned int;\n\
l:long; L:unsigned long; f:float; d:double.\n\
Special cases (preceding decimal count indicates length):\n\
s:string (array of char); p: pascal string (with count byte).\n\
Special case (only available in native format):\n\
P:an integer type that is wide enough to hold a pointer.\n\
Special case (not in native mode unless 'long long' in platform C):\n\
q:long long; Q:unsigned long long\n\
Whitespace between formats is ignored.\n\
\n\
The variable struct.error is an exception raised on errors.\n");
PyMODINIT_FUNC
init_struct(void)
