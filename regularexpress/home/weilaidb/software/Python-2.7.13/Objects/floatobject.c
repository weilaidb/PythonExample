#undef MAX
#undef MIN
#define MAX(x, y) ((x) < (y) ? (y) : (x))
#define MIN(x, y) ((x) < (y) ? (x) : (y))
extern int finite(double);
#define BLOCK_SIZE      1000
#define BHEAD_SIZE      8
#define N_FLOATOBJECTS  ((BLOCK_SIZE - BHEAD_SIZE) / sizeof(PyFloatObject))
struct _floatblock ;
typedef struct _floatblock PyFloatBlock;
static PyFloatBlock *block_list = NULL;
static PyFloatObject *free_list = NULL;
static PyFloatObject *
fill_free_list(void)
double
PyFloat_GetMax(void)
double
PyFloat_GetMin(void)
static PyTypeObject FloatInfoType = ;
PyDoc_STRVAR(floatinfo__doc__,
"sys.float_info\n\
\n\
A structseq holding information about the float type. It contains low level\n\
information about the precision and internal representation. Please study\n\
your system's :file:`float.h` for more information.");
static PyStructSequence_Field floatinfo_fields[] = ;
static PyStructSequence_Desc floatinfo_desc = ;
PyObject *
PyFloat_GetInfo(void)
PyObject *
PyFloat_FromDouble(double fval)
PyObject *
PyFloat_FromString(PyObject *v, char **pend)
static void
float_dealloc(PyFloatObject *op)
double
PyFloat_AsDouble(PyObject *op)
#define CONVERT_TO_DOUBLE(obj, dbl)                     \
if (PyFloat_Check(obj))                             \
dbl = PyFloat_AS_DOUBLE(obj);                   \
else if (convert_to_double(&(obj), &(dbl)) < 0)     \
return obj;
static int
convert_to_double(PyObject **v, double *dbl)
void
PyFloat_AsString(char *buf, PyFloatObject *v)
void
PyFloat_AsReprString(char *buf, PyFloatObject *v)
static int
float_print(PyFloatObject *v, FILE *fp, int flags)
static PyObject *
float_str_or_repr(PyFloatObject *v, int precision, char format_code)
static PyObject *
float_repr(PyFloatObject *v)
static PyObject *
float_str(PyFloatObject *v)
static PyObject*
float_richcompare(PyObject *v, PyObject *w, int op)
static long
float_hash(PyFloatObject *v)
static PyObject *
float_add(PyObject *v, PyObject *w)
static PyObject *
float_sub(PyObject *v, PyObject *w)
static PyObject *
float_mul(PyObject *v, PyObject *w)
static PyObject *
float_div(PyObject *v, PyObject *w)
static PyObject *
float_classic_div(PyObject *v, PyObject *w)
static PyObject *
float_rem(PyObject *v, PyObject *w)
static PyObject *
float_divmod(PyObject *v, PyObject *w)
static PyObject *
float_floor_div(PyObject *v, PyObject *w)
#define DOUBLE_IS_ODD_INTEGER(x) (fmod(fabs(x), 2.0) == 1.0)
static PyObject *
float_pow(PyObject *v, PyObject *w, PyObject *z)
#undef DOUBLE_IS_ODD_INTEGER
static PyObject *
float_neg(PyFloatObject *v)
static PyObject *
float_abs(PyFloatObject *v)
static int
float_nonzero(PyFloatObject *v)
static int
float_coerce(PyObject **pv, PyObject **pw)
static PyObject *
float_is_integer(PyObject *v)
static PyObject *
float_trunc(PyObject *v)
static PyObject *
float_long(PyObject *v)
#if DBL_MANT_DIG == 53
#define FIVE_POW_LIMIT 22
#error
PyObject *
_Py_double_round(double x, int ndigits)
#undef FIVE_POW_LIMIT
PyObject *
_Py_double_round(double x, int ndigits)
static PyObject *
float_float(PyObject *v)
static char
char_from_hex(int x)
static int
hex_from_char(char c)
#define TOHEX_NBITS DBL_MANT_DIG + 3 - (DBL_MANT_DIG+2)%4
static PyObject *
float_hex(PyObject *v)
PyDoc_STRVAR(float_hex_doc,
"float.hex() -> string\n\
\n\
Return a hexadecimal representation of a floating-point number.\n\
>>> (-0.1).hex()\n\
'-0x1.999999999999ap-4'\n\
>>> 3.14159.hex()\n\
'0x1.921f9f01b866ep+1'");
static int
case_insensitive_match(const char *s, const char *t)
static PyObject *
float_fromhex(PyObject *cls, PyObject *arg)
PyDoc_STRVAR(float_fromhex_doc,
"float.fromhex(string) -> float\n\
\n\
Create a floating-point number from a hexadecimal string.\n\
>>> float.fromhex('0x1.ffffp10')\n\
2047.984375\n\
>>> float.fromhex('-0x1p-1074')\n\
-4.9406564584124654e-324");
static PyObject *
float_as_integer_ratio(PyObject *v, PyObject *unused)
PyDoc_STRVAR(float_as_integer_ratio_doc,
);
static PyObject *
float_subtype_new(PyTypeObject *type, PyObject *args, PyObject *kwds);
static PyObject *
float_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
static PyObject *
float_subtype_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
static PyObject *
float_getnewargs(PyFloatObject *v)
typedef enum  float_format_type;
static float_format_type double_format, float_format;
static float_format_type detected_double_format, detected_float_format;
static PyObject *
float_getformat(PyTypeObject *v, PyObject* arg)
PyDoc_STRVAR(float_getformat_doc,
);
static PyObject *
float_setformat(PyTypeObject *v, PyObject* args)
PyDoc_STRVAR(float_setformat_doc,
);
static PyObject *
float_getzero(PyObject *v, void *closure)
static PyObject *
float__format__(PyObject *self, PyObject *args)
PyDoc_STRVAR(float__format__doc,
);
static PyMethodDef float_methods[] = ;
static PyGetSetDef float_getset[] = ;
PyDoc_STRVAR(float_doc,
"float(x) -> floating point number\n\
\n\
Convert a string or number to a floating point number, if possible.");
static PyNumberMethods float_as_number = ;
PyTypeObject PyFloat_Type = ;
void
_PyFloat_Init(void)
int
PyFloat_ClearFreeList(void)
void
PyFloat_Fini(void)
int
_PyFloat_Pack4(double x, unsigned char *p, int le)
int
_PyFloat_Pack8(double x, unsigned char *p, int le)
double
_PyFloat_Unpack4(const unsigned char *p, int le)
double
_PyFloat_Unpack8(const unsigned char *p, int le)
