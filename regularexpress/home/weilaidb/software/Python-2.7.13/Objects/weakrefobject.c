#define GET_WEAKREFS_LISTPTR(o) \
((PyWeakReference **) PyObject_GET_WEAKREFS_LISTPTR(o))
Py_ssize_t
_PyWeakref_GetWeakrefCount(PyWeakReference *head)
static void
init_weakref(PyWeakReference *self, PyObject *ob, PyObject *callback)
static PyWeakReference *
new_weakref(PyObject *ob, PyObject *callback)
static void
clear_weakref(PyWeakReference *self)
void
_PyWeakref_ClearRef(PyWeakReference *self)
static void
weakref_dealloc(PyObject *self)
static int
gc_traverse(PyWeakReference *self, visitproc visit, void *arg)
static int
gc_clear(PyWeakReference *self)
static PyObject *
weakref_call(PyWeakReference *self, PyObject *args, PyObject *kw)
static long
weakref_hash(PyWeakReference *self)
static PyObject *
weakref_repr(PyWeakReference *self)
static PyObject *
weakref_richcompare(PyWeakReference* self, PyWeakReference* other, int op)
static void
get_basic_refs(PyWeakReference *head,
PyWeakReference **refp, PyWeakReference **proxyp)
static void
insert_after(PyWeakReference *newref, PyWeakReference *prev)
static void
insert_head(PyWeakReference *newref, PyWeakReference **list)
static int
parse_weakref_init_args(char *funcname, PyObject *args, PyObject *kwargs,
PyObject **obp, PyObject **callbackp)
static PyObject *
weakref___new__(PyTypeObject *type, PyObject *args, PyObject *kwargs)
static int
weakref___init__(PyObject *self, PyObject *args, PyObject *kwargs)
PyTypeObject
_PyWeakref_RefType = ;
static int
proxy_checkref(PyWeakReference *proxy)
#define UNWRAP(o) \
if (PyWeakref_CheckProxy(o))
#define UNWRAP_I(o) \
if (PyWeakref_CheckProxy(o))
#define WRAP_UNARY(method, generic) \
static PyObject * \
method(PyObject *proxy)
#define WRAP_BINARY(method, generic) \
static PyObject * \
method(PyObject *x, PyObject *y)
#define WRAP_TERNARY(method, generic) \
static PyObject * \
method(PyObject *proxy, PyObject *v, PyObject *w)
#define WRAP_METHOD(method, special) \
static PyObject * \
method(PyObject *proxy)
WRAP_BINARY(proxy_getattr, PyObject_GetAttr)
WRAP_UNARY(proxy_str, PyObject_Str)
WRAP_TERNARY(proxy_call, PyEval_CallObjectWithKeywords)
static PyObject *
proxy_repr(PyWeakReference *proxy)
static int
proxy_setattr(PyWeakReference *proxy, PyObject *name, PyObject *value)
static int
proxy_compare(PyObject *proxy, PyObject *v)
WRAP_BINARY(proxy_add, PyNumber_Add)
WRAP_BINARY(proxy_sub, PyNumber_Subtract)
WRAP_BINARY(proxy_mul, PyNumber_Multiply)
WRAP_BINARY(proxy_div, PyNumber_Divide)
WRAP_BINARY(proxy_floor_div, PyNumber_FloorDivide)
WRAP_BINARY(proxy_true_div, PyNumber_TrueDivide)
WRAP_BINARY(proxy_mod, PyNumber_Remainder)
WRAP_BINARY(proxy_divmod, PyNumber_Divmod)
WRAP_TERNARY(proxy_pow, PyNumber_Power)
WRAP_UNARY(proxy_neg, PyNumber_Negative)
WRAP_UNARY(proxy_pos, PyNumber_Positive)
WRAP_UNARY(proxy_abs, PyNumber_Absolute)
WRAP_UNARY(proxy_invert, PyNumber_Invert)
WRAP_BINARY(proxy_lshift, PyNumber_Lshift)
WRAP_BINARY(proxy_rshift, PyNumber_Rshift)
WRAP_BINARY(proxy_and, PyNumber_And)
WRAP_BINARY(proxy_xor, PyNumber_Xor)
WRAP_BINARY(proxy_or, PyNumber_Or)
WRAP_UNARY(proxy_int, PyNumber_Int)
WRAP_UNARY(proxy_long, PyNumber_Long)
WRAP_UNARY(proxy_float, PyNumber_Float)
WRAP_BINARY(proxy_iadd, PyNumber_InPlaceAdd)
WRAP_BINARY(proxy_isub, PyNumber_InPlaceSubtract)
WRAP_BINARY(proxy_imul, PyNumber_InPlaceMultiply)
WRAP_BINARY(proxy_idiv, PyNumber_InPlaceDivide)
WRAP_BINARY(proxy_ifloor_div, PyNumber_InPlaceFloorDivide)
WRAP_BINARY(proxy_itrue_div, PyNumber_InPlaceTrueDivide)
WRAP_BINARY(proxy_imod, PyNumber_InPlaceRemainder)
WRAP_TERNARY(proxy_ipow, PyNumber_InPlacePower)
WRAP_BINARY(proxy_ilshift, PyNumber_InPlaceLshift)
WRAP_BINARY(proxy_irshift, PyNumber_InPlaceRshift)
WRAP_BINARY(proxy_iand, PyNumber_InPlaceAnd)
WRAP_BINARY(proxy_ixor, PyNumber_InPlaceXor)
WRAP_BINARY(proxy_ior, PyNumber_InPlaceOr)
WRAP_UNARY(proxy_index, PyNumber_Index)
static int
proxy_nonzero(PyWeakReference *proxy)
static void
proxy_dealloc(PyWeakReference *self)
static PyObject *
proxy_slice(PyWeakReference *proxy, Py_ssize_t i, Py_ssize_t j)
static int
proxy_ass_slice(PyWeakReference *proxy, Py_ssize_t i, Py_ssize_t j, PyObject *value)
static int
proxy_contains(PyWeakReference *proxy, PyObject *value)
static Py_ssize_t
proxy_length(PyWeakReference *proxy)
WRAP_BINARY(proxy_getitem, PyObject_GetItem)
static int
proxy_setitem(PyWeakReference *proxy, PyObject *key, PyObject *value)
static PyObject *
proxy_iter(PyWeakReference *proxy)
static PyObject *
proxy_iternext(PyWeakReference *proxy)
WRAP_METHOD(proxy_unicode, );
static PyMethodDef proxy_methods[] = ;
static PyNumberMethods proxy_as_number = ;
static PySequenceMethods proxy_as_sequence = ;
static PyMappingMethods proxy_as_mapping = ;
PyTypeObject
_PyWeakref_ProxyType = ;
PyTypeObject
_PyWeakref_CallableProxyType = ;
PyObject *
PyWeakref_NewRef(PyObject *ob, PyObject *callback)
PyObject *
PyWeakref_NewProxy(PyObject *ob, PyObject *callback)
PyObject *
PyWeakref_GetObject(PyObject *ref)
static void
handle_callback(PyWeakReference *ref, PyObject *callback)
void
PyObject_ClearWeakRefs(PyObject *object)
