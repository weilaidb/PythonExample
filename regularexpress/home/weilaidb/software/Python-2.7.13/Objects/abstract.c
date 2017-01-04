#define NEW_STYLE_NUMBER(o) PyType_HasFeature((o)->ob_type, \
Py_TPFLAGS_CHECKTYPES)
static PyObject *
type_error(const char *msg, PyObject *obj)
static PyObject *
null_error(void)
int
PyObject_Cmp(PyObject *o1, PyObject *o2, int *result)
PyObject *
PyObject_Type(PyObject *o)
Py_ssize_t
PyObject_Size(PyObject *o)
#undef PyObject_Length
Py_ssize_t
PyObject_Length(PyObject *o)
#define PyObject_Length PyObject_Size
Py_ssize_t
_PyObject_LengthHint(PyObject *o, Py_ssize_t defaultvalue)
PyObject *
PyObject_GetItem(PyObject *o, PyObject *key)
int
PyObject_SetItem(PyObject *o, PyObject *key, PyObject *value)
int
PyObject_DelItem(PyObject *o, PyObject *key)
int
PyObject_DelItemString(PyObject *o, char *key)
int
PyObject_AsCharBuffer(PyObject *obj,
const char **buffer,
Py_ssize_t *buffer_len)
int
PyObject_CheckReadBuffer(PyObject *obj)
int PyObject_AsReadBuffer(PyObject *obj,
const void **buffer,
Py_ssize_t *buffer_len)
int PyObject_AsWriteBuffer(PyObject *obj,
void **buffer,
Py_ssize_t *buffer_len)
int
PyObject_GetBuffer(PyObject *obj, Py_buffer *view, int flags)
static int
_IsFortranContiguous(Py_buffer *view)
static int
_IsCContiguous(Py_buffer *view)
int
PyBuffer_IsContiguous(Py_buffer *view, char fort)
void*
PyBuffer_GetPointer(Py_buffer *view, Py_ssize_t *indices)
void
_Py_add_one_to_index_F(int nd, Py_ssize_t *index, const Py_ssize_t *shape)
void
_Py_add_one_to_index_C(int nd, Py_ssize_t *index, const Py_ssize_t *shape)
int
PyBuffer_ToContiguous(void *buf, Py_buffer *view, Py_ssize_t len, char fort)
int
PyBuffer_FromContiguous(Py_buffer *view, void *buf, Py_ssize_t len, char fort)
int PyObject_CopyData(PyObject *dest, PyObject *src)
void
PyBuffer_FillContiguousStrides(int nd, Py_ssize_t *shape,
Py_ssize_t *strides, int itemsize,
char fort)
int
PyBuffer_FillInfo(Py_buffer *view, PyObject *obj, void *buf, Py_ssize_t len,
int readonly, int flags)
void
PyBuffer_Release(Py_buffer *view)
PyObject *
PyObject_Format(PyObject* obj, PyObject *format_spec)
{
PyObject *empty = NULL;
PyObject *result = NULL;
int spec_is_unicode;
int result_is_unicode;
if (format_spec == NULL)
if (PyUnicode_Check(format_spec))
spec_is_unicode = 1;
else if (PyString_Check(format_spec))
spec_is_unicode = 0;
else {
if (!PyString_Check(format_spec))
if (PyInstance_Check(obj))  else
if (result == NULL)
goto done;
if (PyUnicode_Check(result))
result_is_unicode = 1;
else if (PyString_Check(result))
result_is_unicode = 0;
else
int
PyNumber_Check(PyObject *o)
#define NB_SLOT(x) offsetof(PyNumberMethods, x)
#define NB_BINOP(nb_methods, slot) \
(*(binaryfunc*)(& ((char*)nb_methods)[slot]))
#define NB_TERNOP(nb_methods, slot) \
(*(ternaryfunc*)(& ((char*)nb_methods)[slot]))
static PyObject *
binary_op1(PyObject *v, PyObject *w, const int op_slot)
static PyObject *
binop_type_error(PyObject *v, PyObject *w, const char *op_name)
static PyObject *
binary_op(PyObject *v, PyObject *w, const int op_slot, const char *op_name)
static PyObject *
ternary_op(PyObject *v,
PyObject *w,
PyObject *z,
const int op_slot,
const char *op_name)
#define BINARY_FUNC(func, op, op_name) \
PyObject * \
func(PyObject *v, PyObject *w)
BINARY_FUNC(PyNumber_Or, nb_or, "|")
BINARY_FUNC(PyNumber_Xor, nb_xor, "^")
BINARY_FUNC(PyNumber_And, nb_and, "&")
BINARY_FUNC(PyNumber_Lshift, nb_lshift, "<<")
BINARY_FUNC(PyNumber_Rshift, nb_rshift, ">>")
BINARY_FUNC(PyNumber_Subtract, nb_subtract, "-")
BINARY_FUNC(PyNumber_Divide, nb_divide, "/")
BINARY_FUNC(PyNumber_Divmod, nb_divmod, "divmod()")
PyObject *
PyNumber_Add(PyObject *v, PyObject *w)
static PyObject *
sequence_repeat(ssizeargfunc repeatfunc, PyObject *seq, PyObject *n)
PyObject *
PyNumber_Multiply(PyObject *v, PyObject *w)
PyObject *
PyNumber_FloorDivide(PyObject *v, PyObject *w)
PyObject *
PyNumber_TrueDivide(PyObject *v, PyObject *w)
PyObject *
PyNumber_Remainder(PyObject *v, PyObject *w)
PyObject *
PyNumber_Power(PyObject *v, PyObject *w, PyObject *z)
#define HASINPLACE(t) \
PyType_HasFeature((t)->ob_type, Py_TPFLAGS_HAVE_INPLACEOPS)
static PyObject *
binary_iop1(PyObject *v, PyObject *w, const int iop_slot, const int op_slot)
static PyObject *
binary_iop(PyObject *v, PyObject *w, const int iop_slot, const int op_slot,
const char *op_name)
#define INPLACE_BINOP(func, iop, op, op_name) \
PyObject * \
func(PyObject *v, PyObject *w)
INPLACE_BINOP(PyNumber_InPlaceOr, nb_inplace_or, nb_or, "|=")
INPLACE_BINOP(PyNumber_InPlaceXor, nb_inplace_xor, nb_xor, "^=")
INPLACE_BINOP(PyNumber_InPlaceAnd, nb_inplace_and, nb_and, "&=")
INPLACE_BINOP(PyNumber_InPlaceLshift, nb_inplace_lshift, nb_lshift, "<<=")
INPLACE_BINOP(PyNumber_InPlaceRshift, nb_inplace_rshift, nb_rshift, ">>=")
INPLACE_BINOP(PyNumber_InPlaceSubtract, nb_inplace_subtract, nb_subtract, "-=")
INPLACE_BINOP(PyNumber_InPlaceDivide, nb_inplace_divide, nb_divide, "/=")
PyObject *
PyNumber_InPlaceFloorDivide(PyObject *v, PyObject *w)
PyObject *
PyNumber_InPlaceTrueDivide(PyObject *v, PyObject *w)
PyObject *
PyNumber_InPlaceAdd(PyObject *v, PyObject *w)
PyObject *
PyNumber_InPlaceMultiply(PyObject *v, PyObject *w)
PyObject *
PyNumber_InPlaceRemainder(PyObject *v, PyObject *w)
PyObject *
PyNumber_InPlacePower(PyObject *v, PyObject *w, PyObject *z)
PyObject *
PyNumber_Negative(PyObject *o)
PyObject *
PyNumber_Positive(PyObject *o)
PyObject *
PyNumber_Invert(PyObject *o)
PyObject *
PyNumber_Absolute(PyObject *o)
static PyObject *
int_from_string(const char *s, Py_ssize_t len)
PyObject *
PyNumber_Index(PyObject *item)
Py_ssize_t
PyNumber_AsSsize_t(PyObject *item, PyObject *err)
PyObject *
_PyNumber_ConvertIntegralToInt(PyObject *integral, const char* error_format)
PyObject *
PyNumber_Int(PyObject *o)
static PyObject *
long_from_string(const char *s, Py_ssize_t len)
PyObject *
PyNumber_Long(PyObject *o)
PyObject *
PyNumber_Float(PyObject *o)
PyObject *
PyNumber_ToBase(PyObject *n, int base)
int
PySequence_Check(PyObject *s)
Py_ssize_t
PySequence_Size(PyObject *s)
#undef PySequence_Length
Py_ssize_t
PySequence_Length(PyObject *s)
#define PySequence_Length PySequence_Size
PyObject *
PySequence_Concat(PyObject *s, PyObject *o)
PyObject *
PySequence_Repeat(PyObject *o, Py_ssize_t count)
PyObject *
PySequence_InPlaceConcat(PyObject *s, PyObject *o)
PyObject *
PySequence_InPlaceRepeat(PyObject *o, Py_ssize_t count)
PyObject *
PySequence_GetItem(PyObject *s, Py_ssize_t i)
PyObject *
PySequence_GetSlice(PyObject *s, Py_ssize_t i1, Py_ssize_t i2)
int
PySequence_SetItem(PyObject *s, Py_ssize_t i, PyObject *o)
int
PySequence_DelItem(PyObject *s, Py_ssize_t i)
int
PySequence_SetSlice(PyObject *s, Py_ssize_t i1, Py_ssize_t i2, PyObject *o)
int
PySequence_DelSlice(PyObject *s, Py_ssize_t i1, Py_ssize_t i2)
PyObject *
PySequence_Tuple(PyObject *v)
PyObject *
PySequence_List(PyObject *v)
PyObject *
PySequence_Fast(PyObject *v, const char *m)
Py_ssize_t
_PySequence_IterSearch(PyObject *seq, PyObject *obj, int operation)
Py_ssize_t
PySequence_Count(PyObject *s, PyObject *o)
int
PySequence_Contains(PyObject *seq, PyObject *ob)
#undef PySequence_In
int
PySequence_In(PyObject *w, PyObject *v)
Py_ssize_t
PySequence_Index(PyObject *s, PyObject *o)
int
PyMapping_Check(PyObject *o)
Py_ssize_t
PyMapping_Size(PyObject *o)
#undef PyMapping_Length
Py_ssize_t
PyMapping_Length(PyObject *o)
#define PyMapping_Length PyMapping_Size
PyObject *
PyMapping_GetItemString(PyObject *o, char *key)
int
PyMapping_SetItemString(PyObject *o, char *key, PyObject *value)
int
PyMapping_HasKeyString(PyObject *o, char *key)
int
PyMapping_HasKey(PyObject *o, PyObject *key)
PyObject *
PyObject_CallObject(PyObject *o, PyObject *a)
PyObject *
PyObject_Call(PyObject *func, PyObject *arg, PyObject *kw)
static PyObject*
call_function_tail(PyObject *callable, PyObject *args)
PyObject *
PyObject_CallFunction(PyObject *callable, char *format, ...)
PyObject *
_PyObject_CallFunction_SizeT(PyObject *callable, char *format, ...)
PyObject *
PyObject_CallMethod(PyObject *o, char *name, char *format, ...)
PyObject *
_PyObject_CallMethod_SizeT(PyObject *o, char *name, char *format, ...)
static PyObject *
objargs_mktuple(va_list va)
PyObject *
PyObject_CallMethodObjArgs(PyObject *callable, PyObject *name, ...)
PyObject *
PyObject_CallFunctionObjArgs(PyObject *callable, ...)
static PyObject *
abstract_get_bases(PyObject *cls)
static int
abstract_issubclass(PyObject *derived, PyObject *cls)
static int
check_class(PyObject *cls, const char *error)
static int
recursive_isinstance(PyObject *inst, PyObject *cls)
int
PyObject_IsInstance(PyObject *inst, PyObject *cls)
static  int
recursive_issubclass(PyObject *derived, PyObject *cls)
int
PyObject_IsSubclass(PyObject *derived, PyObject *cls)
int
_PyObject_RealIsInstance(PyObject *inst, PyObject *cls)
int
_PyObject_RealIsSubclass(PyObject *derived, PyObject *cls)
PyObject *
PyObject_GetIter(PyObject *o)
PyObject *
PyIter_Next(PyObject *iter)
