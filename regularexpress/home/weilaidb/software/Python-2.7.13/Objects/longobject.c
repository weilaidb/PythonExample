#define KARATSUBA_CUTOFF 70
#define KARATSUBA_SQUARE_CUTOFF (2 * KARATSUBA_CUTOFF)
#define FIVEARY_CUTOFF 8
#define ABS(x) ((x) < 0 ? -(x) : (x))
#undef MIN
#undef MAX
#define MAX(x, y) ((x) < (y) ? (y) : (x))
#define MIN(x, y) ((x) > (y) ? (y) : (x))
#define SIGCHECK(PyTryBlock)                            \
do  while(0)
static PyLongObject *
long_normalize(register PyLongObject *v)
#define MAX_LONG_DIGITS \
((PY_SSIZE_T_MAX - offsetof(PyLongObject, ob_digit))/sizeof(digit))
PyLongObject *
_PyLong_New(Py_ssize_t size)
PyObject *
_PyLong_Copy(PyLongObject *src)
PyObject *
PyLong_FromLong(long ival)
PyObject *
PyLong_FromUnsignedLong(unsigned long ival)
PyObject *
PyLong_FromDouble(double dval)
#define PY_ABS_LONG_MIN         (0-(unsigned long)LONG_MIN)
#define PY_ABS_SSIZE_T_MIN      (0-(size_t)PY_SSIZE_T_MIN)
long
PyLong_AsLongAndOverflow(PyObject *vv, int *overflow)
long
PyLong_AsLong(PyObject *obj)
int
_PyLong_AsInt(PyObject *obj)
Py_ssize_t
PyLong_AsSsize_t(PyObject *vv)
unsigned long
PyLong_AsUnsignedLong(PyObject *vv)
unsigned long
PyLong_AsUnsignedLongMask(PyObject *vv)
int
_PyLong_Sign(PyObject *vv)
size_t
_PyLong_NumBits(PyObject *vv)
PyObject *
_PyLong_FromByteArray(const unsigned char* bytes, size_t n,
int little_endian, int is_signed)
int
_PyLong_AsByteArray(PyLongObject* v,
unsigned char* bytes, size_t n,
int little_endian, int is_signed)
PyObject *
PyLong_FromVoidPtr(void *p)
void *
PyLong_AsVoidPtr(PyObject *vv)
#define IS_LITTLE_ENDIAN (int)*(unsigned char*)&one
#define PY_ABS_LLONG_MIN (0-(unsigned PY_LONG_LONG)PY_LLONG_MIN)
PyObject *
PyLong_FromLongLong(PY_LONG_LONG ival)
PyObject *
PyLong_FromUnsignedLongLong(unsigned PY_LONG_LONG ival)
PyObject *
PyLong_FromSsize_t(Py_ssize_t ival)
PyObject *
PyLong_FromSize_t(size_t ival)
PY_LONG_LONG
PyLong_AsLongLong(PyObject *vv)
unsigned PY_LONG_LONG
PyLong_AsUnsignedLongLong(PyObject *vv)
unsigned PY_LONG_LONG
PyLong_AsUnsignedLongLongMask(PyObject *vv)
PY_LONG_LONG
PyLong_AsLongLongAndOverflow(PyObject *vv, int *overflow)
#undef IS_LITTLE_ENDIAN
static int
convert_binop(PyObject *v, PyObject *w, PyLongObject **a, PyLongObject **b)
#define CONVERT_BINOP(v, w, a, b)               \
do  while(0)                                  \
static const unsigned char BitLengthTable[32] = ;
static int
bits_in_digit(digit d)
static digit
v_iadd(digit *x, Py_ssize_t m, digit *y, Py_ssize_t n)
static digit
v_isub(digit *x, Py_ssize_t m, digit *y, Py_ssize_t n)
static digit
v_lshift(digit *z, digit *a, Py_ssize_t m, int d)
static digit
v_rshift(digit *z, digit *a, Py_ssize_t m, int d)
static digit
inplace_divrem1(digit *pout, digit *pin, Py_ssize_t size, digit n)
static PyLongObject *
divrem1(PyLongObject *a, digit n, digit *prem)
static PyObject *
long_to_decimal_string(PyObject *aa, int addL)
PyAPI_FUNC(PyObject *)
_PyLong_Format(PyObject *aa, int base, int addL, int newstyle)
int _PyLong_DigitValue[256] = ;
static PyLongObject *
long_from_binary_base(char **str, int base)
PyObject *
PyLong_FromString(char *str, char **pend, int base)
PyObject *
PyLong_FromUnicode(Py_UNICODE *u, Py_ssize_t length, int base)
static PyLongObject *x_divrem
(PyLongObject *, PyLongObject *, PyLongObject **);
static PyObject *long_long(PyObject *v);
static int
long_divrem(PyLongObject *a, PyLongObject *b,
PyLongObject **pdiv, PyLongObject **prem)
static PyLongObject *
x_divrem(PyLongObject *v1, PyLongObject *w1, PyLongObject **prem)
#if DBL_MANT_DIG == 53
#define EXP2_DBL_MANT_DIG 9007199254740992.0
#define EXP2_DBL_MANT_DIG (ldexp(1.0, DBL_MANT_DIG))
double
_PyLong_Frexp(PyLongObject *a, Py_ssize_t *e)
double
PyLong_AsDouble(PyObject *v)
static void
long_dealloc(PyObject *v)
static PyObject *
long_repr(PyObject *v)
static PyObject *
long_str(PyObject *v)
static int
long_compare(PyLongObject *a, PyLongObject *b)
static long
long_hash(PyLongObject *v)
static PyLongObject *
x_add(PyLongObject *a, PyLongObject *b)
static PyLongObject *
x_sub(PyLongObject *a, PyLongObject *b)
static PyObject *
long_add(PyLongObject *v, PyLongObject *w)
static PyObject *
long_sub(PyLongObject *v, PyLongObject *w)
static PyLongObject *
x_mul(PyLongObject *a, PyLongObject *b)
static int
kmul_split(PyLongObject *n,
Py_ssize_t size,
PyLongObject **high,
PyLongObject **low)
static PyLongObject *k_lopsided_mul(PyLongObject *a, PyLongObject *b);
static PyLongObject *
k_mul(PyLongObject *a, PyLongObject *b)
static PyLongObject *
k_lopsided_mul(PyLongObject *a, PyLongObject *b)
static PyObject *
long_mul(PyLongObject *v, PyLongObject *w)
static int
l_divmod(PyLongObject *v, PyLongObject *w,
PyLongObject **pdiv, PyLongObject **pmod)
static PyObject *
long_div(PyObject *v, PyObject *w)
static PyObject *
long_classic_div(PyObject *v, PyObject *w)
#define MANT_DIG_DIGITS (DBL_MANT_DIG / PyLong_SHIFT)
#define MANT_DIG_BITS (DBL_MANT_DIG % PyLong_SHIFT)
static PyObject *
long_true_divide(PyObject *v, PyObject *w)
static PyObject *
long_mod(PyObject *v, PyObject *w)
static PyObject *
long_divmod(PyObject *v, PyObject *w)
static PyObject *
long_pow(PyObject *v, PyObject *w, PyObject *x)
static PyObject *
long_invert(PyLongObject *v)
static PyObject *
long_neg(PyLongObject *v)
static PyObject *
long_abs(PyLongObject *v)
static int
long_nonzero(PyLongObject *v)
static PyObject *
long_rshift(PyLongObject *v, PyLongObject *w)
static PyObject *
long_lshift(PyObject *v, PyObject *w)
static void
v_complement(digit *z, digit *a, Py_ssize_t m)
static PyObject *
long_bitwise(PyLongObject *a,
int op,
PyLongObject *b)
static PyObject *
long_and(PyObject *v, PyObject *w)
static PyObject *
long_xor(PyObject *v, PyObject *w)
static PyObject *
long_or(PyObject *v, PyObject *w)
static int
long_coerce(PyObject **pv, PyObject **pw)
static PyObject *
long_long(PyObject *v)
static PyObject *
long_int(PyObject *v)
static PyObject *
long_float(PyObject *v)
static PyObject *
long_oct(PyObject *v)
static PyObject *
long_hex(PyObject *v)
static PyObject *
long_subtype_new(PyTypeObject *type, PyObject *args, PyObject *kwds);
static PyObject *
long_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
static PyObject *
long_subtype_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
static PyObject *
long_getnewargs(PyLongObject *v)
static PyObject *
long_get0(PyLongObject *v, void *context)
static PyObject *
long_get1(PyLongObject *v, void *context)
static PyObject *
long__format__(PyObject *self, PyObject *args)
static PyObject *
long_sizeof(PyLongObject *v)
static PyObject *
long_bit_length(PyLongObject *v)
PyDoc_STRVAR(long_bit_length_doc,
"long.bit_length() -> int or long\n\
\n\
Number of bits necessary to represent self in binary.\n\
>>> bin(37L)\n\
'0b100101'\n\
>>> (37L).bit_length()\n\
6");
static PyMethodDef long_methods[] = ;
static PyGetSetDef long_getset[] = ;
PyDoc_STRVAR(long_doc,
"long(x=0) -> long\n\
long(x, base=10) -> long\n\
\n\
Convert a number or string to a long integer, or return 0L if no arguments\n\
are given.  If x is floating point, the conversion truncates towards zero.\n\
\n\
If x is not a number or if base is given, then x must be a string or\n\
Unicode object representing an integer literal in the given base.  The\n\
literal can be preceded by '+' or '-' and be surrounded by whitespace.\n\
The base defaults to 10.  Valid bases are 0 and 2-36.  Base 0 means to\n\
interpret the base from the string as an integer literal.\n\
>>> int('0b100', base=0)\n\
4L");
static PyNumberMethods long_as_number = ;
PyTypeObject PyLong_Type = ;
static PyTypeObject Long_InfoType;
PyDoc_STRVAR(long_info__doc__,
"sys.long_info\n\
\n\
A struct sequence that holds information about Python's\n\
internal representation of integers.  The attributes are read only.");
static PyStructSequence_Field long_info_fields[] = ;
static PyStructSequence_Desc long_info_desc = ;
PyObject *
PyLong_GetInfo(void)
int
_PyLong_Init(void)
