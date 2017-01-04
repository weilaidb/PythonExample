static PyObject *int_int(PyIntObject *v);
long
PyInt_GetMax(void)
#define BLOCK_SIZE      1000
#define BHEAD_SIZE      8
#define N_INTOBJECTS    ((BLOCK_SIZE - BHEAD_SIZE) / sizeof(PyIntObject))
struct _intblock ;
typedef struct _intblock PyIntBlock;
static PyIntBlock *block_list = NULL;
static PyIntObject *free_list = NULL;
static PyIntObject *
fill_free_list(void)
#define NSMALLPOSINTS           257
#define NSMALLNEGINTS           5
#if NSMALLNEGINTS + NSMALLPOSINTS > 0
static PyIntObject *small_ints[NSMALLNEGINTS + NSMALLPOSINTS];
Py_ssize_t quick_int_allocs;
Py_ssize_t quick_neg_int_allocs;
PyObject *
PyInt_FromLong(long ival)
PyObject *
PyInt_FromSize_t(size_t ival)
PyObject *
PyInt_FromSsize_t(Py_ssize_t ival)
static void
int_dealloc(PyIntObject *v)
long
PyInt_AsLong(register PyObject *op)
int
_PyInt_AsInt(PyObject *obj)
Py_ssize_t
PyInt_AsSsize_t(register PyObject *op)
unsigned long
PyInt_AsUnsignedLongMask(register PyObject *op)
unsigned PY_LONG_LONG
PyInt_AsUnsignedLongLongMask(register PyObject *op)
PyObject *
PyInt_FromString(char *s, char **pend, int base)
PyObject *
PyInt_FromUnicode(Py_UNICODE *s, Py_ssize_t length, int base)
#define CONVERT_TO_LONG(obj, lng)               \
if (PyInt_Check(obj))                                            \
else
static int
int_print(PyIntObject *v, FILE *fp, int flags)
static int
int_compare(PyIntObject *v, PyIntObject *w)
static long
int_hash(PyIntObject *v)
static PyObject *
int_add(PyIntObject *v, PyIntObject *w)
static PyObject *
int_sub(PyIntObject *v, PyIntObject *w)
static PyObject *
int_mul(PyObject *v, PyObject *w)
#define UNARY_NEG_WOULD_OVERFLOW(x)     \
((x) < 0 && (unsigned long)(x) == 0-(unsigned long)(x))
enum divmod_result ;
static enum divmod_result
i_divmod(register long x, register long y,
long *p_xdivy, long *p_xmody)
static PyObject *
int_div(PyIntObject *x, PyIntObject *y)
static PyObject *
int_classic_div(PyIntObject *x, PyIntObject *y)
static PyObject *
int_true_divide(PyIntObject *x, PyIntObject *y)
static PyObject *
int_mod(PyIntObject *x, PyIntObject *y)
static PyObject *
int_divmod(PyIntObject *x, PyIntObject *y)
static PyObject *
int_pow(PyIntObject *v, PyIntObject *w, PyIntObject *z)
static PyObject *
int_neg(PyIntObject *v)
static PyObject *
int_abs(PyIntObject *v)
static int
int_nonzero(PyIntObject *v)
static PyObject *
int_invert(PyIntObject *v)
static PyObject *
int_lshift(PyIntObject *v, PyIntObject *w)
static PyObject *
int_rshift(PyIntObject *v, PyIntObject *w)
static PyObject *
int_and(PyIntObject *v, PyIntObject *w)
static PyObject *
int_xor(PyIntObject *v, PyIntObject *w)
static PyObject *
int_or(PyIntObject *v, PyIntObject *w)
static int
int_coerce(PyObject **pv, PyObject **pw)
static PyObject *
int_int(PyIntObject *v)
static PyObject *
int_long(PyIntObject *v)
static const unsigned char BitLengthTable[32] = ;
static int
bits_in_ulong(unsigned long d)
#if 8*SIZEOF_LONG-1 <= DBL_MANT_DIG
static PyObject *
int_float(PyIntObject *v)
static PyObject *
int_float(PyIntObject *v)
static PyObject *
int_oct(PyIntObject *v)
static PyObject *
int_hex(PyIntObject *v)
static PyObject *
int_subtype_new(PyTypeObject *type, PyObject *args, PyObject *kwds);
static PyObject *
int_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
static PyObject *
int_subtype_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
static PyObject *
int_getnewargs(PyIntObject *v)
static PyObject *
int_get0(PyIntObject *v, void *context)
static PyObject *
int_get1(PyIntObject *v, void *context)
static PyObject *
int_to_decimal_string(PyIntObject *v)
PyAPI_FUNC(PyObject*)
_PyInt_Format(PyIntObject *v, int base, int newstyle)
static PyObject *
int__format__(PyObject *self, PyObject *args)
static PyObject *
int_bit_length(PyIntObject *v)
PyDoc_STRVAR(int_bit_length_doc,
"int.bit_length() -> int\n\
\n\
Number of bits necessary to represent self in binary.\n\
>>> bin(37)\n\
'0b100101'\n\
>>> (37).bit_length()\n\
6");
static PyMethodDef int_methods[] = ;
static PyGetSetDef int_getset[] = ;
PyDoc_STRVAR(int_doc,
"int(x=0) -> int or long\n\
int(x, base=10) -> int or long\n\
\n\
Convert a number or string to an integer, or return 0 if no arguments\n\
are given.  If x is floating point, the conversion truncates towards zero.\n\
If x is outside the integer range, the function returns a long instead.\n\
\n\
If x is not a number or if base is given, then x must be a string or\n\
Unicode object representing an integer literal in the given base.  The\n\
literal can be preceded by '+' or '-' and be surrounded by whitespace.\n\
The base defaults to 10.  Valid bases are 0 and 2-36.  Base 0 means to\n\
interpret the base from the string as an integer literal.\n\
>>> int('0b100', base=0)\n\
4");
static PyNumberMethods int_as_number = ;
PyTypeObject PyInt_Type = ;
int
_PyInt_Init(void)
int
PyInt_ClearFreeList(void)
void
PyInt_Fini(void)
