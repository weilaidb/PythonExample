#if defined(CTYPES_UNICODE) && !defined(HAVE_USABLE_WCHAR_T)
#   define CTYPES_CAPSULE_WCHAR_T
CTYPES_CAPSULE_INSTANTIATE_DESTRUCTOR(CTYPES_CAPSULE_WCHAR_T)
static PyObject *
PyCField_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
PyObject *
PyCField_FromDesc(PyObject *desc, Py_ssize_t index,
Py_ssize_t *pfield_size, int bitsize, int *pbitofs,
Py_ssize_t *psize, Py_ssize_t *poffset, Py_ssize_t *palign,
int pack, int big_endian)
static int
PyCField_set(CFieldObject *self, PyObject *inst, PyObject *value)
static PyObject *
PyCField_get(CFieldObject *self, PyObject *inst, PyTypeObject *type)
static PyObject *
PyCField_get_offset(PyObject *self, void *data)
static PyObject *
PyCField_get_size(PyObject *self, void *data)
static PyGetSetDef PyCField_getset[] = ;
static int
PyCField_traverse(CFieldObject *self, visitproc visit, void *arg)
static int
PyCField_clear(CFieldObject *self)
static void
PyCField_dealloc(PyObject *self)
static PyObject *
PyCField_repr(CFieldObject *self)
PyTypeObject PyCField_Type = ;
static int
get_long(PyObject *v, long *p)
static int
get_ulong(PyObject *v, unsigned long *p)
static int
get_longlong(PyObject *v, PY_LONG_LONG *p)
static int
get_ulonglong(PyObject *v, unsigned PY_LONG_LONG *p)
#define LOW_BIT(x)  ((x) & 0xFFFF)
#define NUM_BITS(x) ((x) >> 16)
#define BIT_MASK(type, size) (((((type)1 << (NUM_BITS(size) - 1)) - 1) << 1) + 1)
#define GET_BITFIELD(v, size)                                           \
if (NUM_BITS(size))
#define SET(type, x, v, size)                                                 \
(NUM_BITS(size) ?                                                   \
( ( (type)x & ~(BIT_MASK(type, size) << LOW_BIT(size)) ) | ( ((type)v & BIT_MASK(type, size)) << LOW_BIT(size) ) ) \
: (type)v)
#define SWAP_2(v)                               \
( ( (v >> 8) & 0x00FF) |                    \
( (v << 8) & 0xFF00) )
#define SWAP_4(v)                       \
( ( (v & 0x000000FF) << 24 ) |  \
( (v & 0x0000FF00) <<  8 ) |  \
( (v & 0x00FF0000) >>  8 ) |  \
( ((v >> 24) & 0xFF)) )
#define SWAP_8(v)                               \
( ( (v & 0x00000000000000FFL) << 56 ) |  \
( (v & 0x000000000000FF00L) << 40 ) |  \
( (v & 0x0000000000FF0000L) << 24 ) |  \
( (v & 0x00000000FF000000L) <<  8 ) |  \
( (v & 0x000000FF00000000L) >>  8 ) |  \
( (v & 0x0000FF0000000000L) >> 24 ) |  \
( (v & 0x00FF000000000000L) >> 40 ) |  \
( ((v >> 56) & 0xFF)) )
#define SWAP_8(v)                               \
( ( (v & 0x00000000000000FFLL) << 56 ) |  \
( (v & 0x000000000000FF00LL) << 40 ) |  \
( (v & 0x0000000000FF0000LL) << 24 ) |  \
( (v & 0x00000000FF000000LL) <<  8 ) |  \
( (v & 0x000000FF00000000LL) >>  8 ) |  \
( (v & 0x0000FF0000000000LL) >> 24 ) |  \
( (v & 0x00FF000000000000LL) >> 40 ) |  \
( ((v >> 56) & 0xFF)) )
#define SWAP_INT SWAP_4
#if SIZEOF_LONG == 4
# define SWAP_LONG SWAP_4
#elif SIZEOF_LONG == 8
# define SWAP_LONG SWAP_8
#define _RET(x) Py_INCREF(x); return x
#define _RET(X) Py_INCREF(Py_None); return Py_None
static PyObject *
b_set(void *ptr, PyObject *value, Py_ssize_t size)
static PyObject *
b_get(void *ptr, Py_ssize_t size)
static PyObject *
B_set(void *ptr, PyObject *value, Py_ssize_t size)
static PyObject *
B_get(void *ptr, Py_ssize_t size)
static PyObject *
h_set(void *ptr, PyObject *value, Py_ssize_t size)
static PyObject *
h_set_sw(void *ptr, PyObject *value, Py_ssize_t size)
static PyObject *
h_get(void *ptr, Py_ssize_t size)
static PyObject *
h_get_sw(void *ptr, Py_ssize_t size)
static PyObject *
H_set(void *ptr, PyObject *value, Py_ssize_t size)
static PyObject *
H_set_sw(void *ptr, PyObject *value, Py_ssize_t size)
static PyObject *
H_get(void *ptr, Py_ssize_t size)
static PyObject *
H_get_sw(void *ptr, Py_ssize_t size)
static PyObject *
i_set(void *ptr, PyObject *value, Py_ssize_t size)
static PyObject *
i_set_sw(void *ptr, PyObject *value, Py_ssize_t size)
static PyObject *
i_get(void *ptr, Py_ssize_t size)
static PyObject *
i_get_sw(void *ptr, Py_ssize_t size)
static PyObject *
vBOOL_set(void *ptr, PyObject *value, Py_ssize_t size)
static PyObject *
vBOOL_get(void *ptr, Py_ssize_t size)
#define BOOL_TYPE _Bool
#define BOOL_TYPE char
#undef SIZEOF__BOOL
#define SIZEOF__BOOL 1
static PyObject *
bool_set(void *ptr, PyObject *value, Py_ssize_t size)
static PyObject *
bool_get(void *ptr, Py_ssize_t size)
static PyObject *
I_set(void *ptr, PyObject *value, Py_ssize_t size)
static PyObject *
I_set_sw(void *ptr, PyObject *value, Py_ssize_t size)
static PyObject *
I_get(void *ptr, Py_ssize_t size)
static PyObject *
I_get_sw(void *ptr, Py_ssize_t size)
static PyObject *
l_set(void *ptr, PyObject *value, Py_ssize_t size)
static PyObject *
l_set_sw(void *ptr, PyObject *value, Py_ssize_t size)
static PyObject *
l_get(void *ptr, Py_ssize_t size)
static PyObject *
l_get_sw(void *ptr, Py_ssize_t size)
static PyObject *
L_set(void *ptr, PyObject *value, Py_ssize_t size)
static PyObject *
L_set_sw(void *ptr, PyObject *value, Py_ssize_t size)
static PyObject *
L_get(void *ptr, Py_ssize_t size)
static PyObject *
L_get_sw(void *ptr, Py_ssize_t size)
static PyObject *
q_set(void *ptr, PyObject *value, Py_ssize_t size)
static PyObject *
q_set_sw(void *ptr, PyObject *value, Py_ssize_t size)
static PyObject *
q_get(void *ptr, Py_ssize_t size)
static PyObject *
q_get_sw(void *ptr, Py_ssize_t size)
static PyObject *
Q_set(void *ptr, PyObject *value, Py_ssize_t size)
static PyObject *
Q_set_sw(void *ptr, PyObject *value, Py_ssize_t size)
static PyObject *
Q_get(void *ptr, Py_ssize_t size)
static PyObject *
Q_get_sw(void *ptr, Py_ssize_t size)
static PyObject *
g_set(void *ptr, PyObject *value, Py_ssize_t size)
static PyObject *
g_get(void *ptr, Py_ssize_t size)
static PyObject *
d_set(void *ptr, PyObject *value, Py_ssize_t size)
static PyObject *
d_get(void *ptr, Py_ssize_t size)
static PyObject *
d_set_sw(void *ptr, PyObject *value, Py_ssize_t size)
static PyObject *
d_get_sw(void *ptr, Py_ssize_t size)
static PyObject *
f_set(void *ptr, PyObject *value, Py_ssize_t size)
static PyObject *
f_get(void *ptr, Py_ssize_t size)
static PyObject *
f_set_sw(void *ptr, PyObject *value, Py_ssize_t size)
static PyObject *
f_get_sw(void *ptr, Py_ssize_t size)
static PyObject *
O_get(void *ptr, Py_ssize_t size)
static PyObject *
O_set(void *ptr, PyObject *value, Py_ssize_t size)
static PyObject *
c_set(void *ptr, PyObject *value, Py_ssize_t size)
static PyObject *
c_get(void *ptr, Py_ssize_t size)
static PyObject *
u_set(void *ptr, PyObject *value, Py_ssize_t size)
static PyObject *
u_get(void *ptr, Py_ssize_t size)
static PyObject *
U_get(void *ptr, Py_ssize_t size)
static PyObject *
U_set(void *ptr, PyObject *value, Py_ssize_t length)
static PyObject *
s_get(void *ptr, Py_ssize_t size)
static PyObject *
s_set(void *ptr, PyObject *value, Py_ssize_t length)
static PyObject *
z_set(void *ptr, PyObject *value, Py_ssize_t size)
static PyObject *
z_get(void *ptr, Py_ssize_t size)
static PyObject *
Z_set(void *ptr, PyObject *value, Py_ssize_t size)
static PyObject *
Z_get(void *ptr, Py_ssize_t size)
static PyObject *
BSTR_set(void *ptr, PyObject *value, Py_ssize_t size)
static PyObject *
BSTR_get(void *ptr, Py_ssize_t size)
static PyObject *
P_set(void *ptr, PyObject *value, Py_ssize_t size)
static PyObject *
P_get(void *ptr, Py_ssize_t size)
static struct fielddesc formattable[] = ;
struct fielddesc *
_ctypes_get_fielddesc(char *fmt)
typedef struct  s_char;
typedef struct  s_short;
typedef struct  s_int;
typedef struct  s_long;
typedef struct  s_float;
typedef struct  s_double;
typedef struct  s_long_double;
typedef struct  s_char_p;
typedef struct  s_void_p;
#define INT_ALIGN (sizeof(s_int) - sizeof(int))
#define FLOAT_ALIGN (sizeof(s_float) - sizeof(float))
#define DOUBLE_ALIGN (sizeof(s_double) - sizeof(double))
#define LONGDOUBLE_ALIGN (sizeof(s_long_double) - sizeof(long double))
#define VOID_P_ALIGN (sizeof(s_void_p) - sizeof(void*))
typedef struct  s_long_long;
#define LONG_LONG_ALIGN (sizeof(s_long_long) - sizeof(PY_LONG_LONG))
ffi_type ffi_type_void = ;
ffi_type ffi_type_uint8 = ;
ffi_type ffi_type_sint8 = ;
ffi_type ffi_type_uint16 = ;
ffi_type ffi_type_sint16 = ;
ffi_type ffi_type_uint32 = ;
ffi_type ffi_type_sint32 = ;
ffi_type ffi_type_uint64 = ;
ffi_type ffi_type_sint64 = ;
ffi_type ffi_type_float = ;
ffi_type ffi_type_double = ;
#undef ffi_type_longdouble
ffi_type ffi_type_longdouble = ;
ffi_type ffi_type_pointer = ;
