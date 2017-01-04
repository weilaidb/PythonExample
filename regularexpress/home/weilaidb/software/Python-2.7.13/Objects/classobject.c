static PyMethodObject *free_list;
static int numfree = 0;
#define PyMethod_MAXFREELIST 256
#define TP_DESCR_GET(t) \
(PyType_HasFeature(t, Py_TPFLAGS_HAVE_CLASS) ? (t)->tp_descr_get : NULL)
static PyObject *class_lookup(PyClassObject *, PyObject *,
PyClassObject **);
static PyObject *instance_getattr1(PyInstanceObject *, PyObject *);
static PyObject *instance_getattr2(PyInstanceObject *, PyObject *);
static PyObject *getattrstr, *setattrstr, *delattrstr;
PyObject *
PyClass_New(PyObject *bases, PyObject *dict, PyObject *name)
PyObject *
PyMethod_Function(PyObject *im)
PyObject *
PyMethod_Self(PyObject *im)
PyObject *
PyMethod_Class(PyObject *im)
PyDoc_STRVAR(class_doc,
"classobj(name, bases, dict)\n\
\n\
Create a class object.  The name must be a string; the second argument\n\
a tuple of classes, and the third a dictionary.");
static PyObject *
class_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
static void
class_dealloc(PyClassObject *op)
static PyObject *
class_lookup(PyClassObject *cp, PyObject *name, PyClassObject **pclass)
static PyObject *
class_getattr(register PyClassObject *op, PyObject *name)
static void
set_slot(PyObject **slot, PyObject *v)
static void
set_attr_slots(PyClassObject *c)
static char *
set_dict(PyClassObject *c, PyObject *v)
static char *
set_bases(PyClassObject *c, PyObject *v)
static char *
set_name(PyClassObject *c, PyObject *v)
static int
class_setattr(PyClassObject *op, PyObject *name, PyObject *v)
static PyObject *
class_repr(PyClassObject *op)
static PyObject *
class_str(PyClassObject *op)
static int
class_traverse(PyClassObject *o, visitproc visit, void *arg)
PyTypeObject PyClass_Type = ;
int
PyClass_IsSubclass(PyObject *klass, PyObject *base)
PyObject *
PyInstance_NewRaw(PyObject *klass, PyObject *dict)
PyObject *
PyInstance_New(PyObject *klass, PyObject *arg, PyObject *kw)
PyDoc_STRVAR(instance_doc,
"instance(class[, dict])\n\
\n\
Create an instance without calling its __init__() method.\n\
The class must be a classic class.\n\
If present, dict must be a dictionary or None.");
static PyObject *
instance_new(PyTypeObject* type, PyObject* args, PyObject *kw)
static void
instance_dealloc(register PyInstanceObject *inst)
static PyObject *
instance_getattr1(register PyInstanceObject *inst, PyObject *name)
static PyObject *
instance_getattr2(register PyInstanceObject *inst, PyObject *name)
static PyObject *
instance_getattr(register PyInstanceObject *inst, PyObject *name)
PyObject *
_PyInstance_Lookup(PyObject *pinst, PyObject *name)
static int
instance_setattr1(PyInstanceObject *inst, PyObject *name, PyObject *v)
static int
instance_setattr(PyInstanceObject *inst, PyObject *name, PyObject *v)
static PyObject *
instance_repr(PyInstanceObject *inst)
static PyObject *
instance_str(PyInstanceObject *inst)
static long
instance_hash(PyInstanceObject *inst)
static int
instance_traverse(PyInstanceObject *o, visitproc visit, void *arg)
static PyObject *getitemstr, *setitemstr, *delitemstr, *lenstr;
static PyObject *iterstr, *nextstr;
static Py_ssize_t
instance_length(PyInstanceObject *inst)
static PyObject *
instance_subscript(PyInstanceObject *inst, PyObject *key)
static int
instance_ass_subscript(PyInstanceObject *inst, PyObject *key, PyObject *value)
static PyMappingMethods instance_as_mapping = ;
static PyObject *
instance_item(PyInstanceObject *inst, Py_ssize_t i)
static PyObject *
instance_slice(PyInstanceObject *inst, Py_ssize_t i, Py_ssize_t j)
static int
instance_ass_item(PyInstanceObject *inst, Py_ssize_t i, PyObject *item)
static int
instance_ass_slice(PyInstanceObject *inst, Py_ssize_t i, Py_ssize_t j, PyObject *value)
static int
instance_contains(PyInstanceObject *inst, PyObject *member)
static PySequenceMethods
instance_as_sequence = ;
static PyObject *
generic_unary_op(PyInstanceObject *self, PyObject *methodname)
static PyObject *
generic_binary_op(PyObject *v, PyObject *w, char *opname)
static PyObject *coerce_obj;
static PyObject *
half_binop(PyObject *v, PyObject *w, char *opname, binaryfunc thisfunc,
int swapped)
static PyObject *
do_binop(PyObject *v, PyObject *w, char *opname, char *ropname,
binaryfunc thisfunc)
static PyObject *
do_binop_inplace(PyObject *v, PyObject *w, char *iopname, char *opname,
char *ropname, binaryfunc thisfunc)
static int
instance_coerce(PyObject **pv, PyObject **pw)
#define UNARY(funcname, methodname) \
static PyObject *funcname(PyInstanceObject *self)
#define UNARY_FB(funcname, methodname, funcname_fb) \
static PyObject *funcname(PyInstanceObject *self)
#define BINARY(f, m, n) \
static PyObject *f(PyObject *v, PyObject *w)
#define BINARY_INPLACE(f, m, n) \
static PyObject *f(PyObject *v, PyObject *w)
UNARY(instance_neg, "__neg__")
UNARY(instance_pos, "__pos__")
UNARY(instance_abs, "__abs__")
BINARY(instance_or, "or", PyNumber_Or)
BINARY(instance_and, "and", PyNumber_And)
BINARY(instance_xor, "xor", PyNumber_Xor)
BINARY(instance_lshift, "lshift", PyNumber_Lshift)
BINARY(instance_rshift, "rshift", PyNumber_Rshift)
BINARY(instance_add, "add", PyNumber_Add)
BINARY(instance_sub, "sub", PyNumber_Subtract)
BINARY(instance_mul, "mul", PyNumber_Multiply)
BINARY(instance_div, "div", PyNumber_Divide)
BINARY(instance_mod, "mod", PyNumber_Remainder)
BINARY(instance_divmod, "divmod", PyNumber_Divmod)
BINARY(instance_floordiv, "floordiv", PyNumber_FloorDivide)
BINARY(instance_truediv, "truediv", PyNumber_TrueDivide)
BINARY_INPLACE(instance_ior, "or", PyNumber_InPlaceOr)
BINARY_INPLACE(instance_ixor, "xor", PyNumber_InPlaceXor)
BINARY_INPLACE(instance_iand, "and", PyNumber_InPlaceAnd)
BINARY_INPLACE(instance_ilshift, "lshift", PyNumber_InPlaceLshift)
BINARY_INPLACE(instance_irshift, "rshift", PyNumber_InPlaceRshift)
BINARY_INPLACE(instance_iadd, "add", PyNumber_InPlaceAdd)
BINARY_INPLACE(instance_isub, "sub", PyNumber_InPlaceSubtract)
BINARY_INPLACE(instance_imul, "mul", PyNumber_InPlaceMultiply)
BINARY_INPLACE(instance_idiv, "div", PyNumber_InPlaceDivide)
BINARY_INPLACE(instance_imod, "mod", PyNumber_InPlaceRemainder)
BINARY_INPLACE(instance_ifloordiv, "floordiv", PyNumber_InPlaceFloorDivide)
BINARY_INPLACE(instance_itruediv, "truediv", PyNumber_InPlaceTrueDivide)
static int
half_cmp(PyObject *v, PyObject *w)
static int
instance_compare(PyObject *v, PyObject *w)
static int
instance_nonzero(PyInstanceObject *self)
static PyObject *
instance_index(PyInstanceObject *self)
UNARY(instance_invert, "__invert__")
UNARY(_instance_trunc, "__trunc__")
static PyObject *
instance_int(PyInstanceObject *self)
UNARY_FB(instance_long, "__long__", instance_int)
UNARY(instance_float, "__float__")
UNARY(instance_oct, "__oct__")
UNARY(instance_hex, "__hex__")
static PyObject *
bin_power(PyObject *v, PyObject *w)
static PyObject *
instance_pow(PyObject *v, PyObject *w, PyObject *z)
static PyObject *
bin_inplace_power(PyObject *v, PyObject *w)
static PyObject *
instance_ipow(PyObject *v, PyObject *w, PyObject *z)
#define NAME_OPS 6
static PyObject **name_op = NULL;
static int
init_name_op(void)
static PyObject *
half_richcompare(PyObject *v, PyObject *w, int op)
static PyObject *
instance_richcompare(PyObject *v, PyObject *w, int op)
static PyObject *
instance_getiter(PyInstanceObject *self)
static PyObject *
instance_iternext(PyInstanceObject *self)
static PyObject *
instance_call(PyObject *func, PyObject *arg, PyObject *kw)
static PyNumberMethods instance_as_number = ;
PyTypeObject PyInstance_Type = ;
PyObject *
PyMethod_New(PyObject *func, PyObject *self, PyObject *klass)
#define OFF(x) offsetof(PyMethodObject, x)
static PyMemberDef instancemethod_memberlist[] = ;
static PyObject *
instancemethod_get_doc(PyMethodObject *im, void *context)
static PyGetSetDef instancemethod_getset[] = ;
static PyObject *
instancemethod_getattro(PyObject *obj, PyObject *name)
PyDoc_STRVAR(instancemethod_doc,
"instancemethod(function, instance, class)\n\
\n\
Create an instance method object.");
static PyObject *
instancemethod_new(PyTypeObject* type, PyObject* args, PyObject *kw)
static void
instancemethod_dealloc(register PyMethodObject *im)
static int
instancemethod_compare(PyMethodObject *a, PyMethodObject *b)
static PyObject *
instancemethod_repr(PyMethodObject *a)
static long
instancemethod_hash(PyMethodObject *a)
static int
instancemethod_traverse(PyMethodObject *im, visitproc visit, void *arg)
static void
getclassname(PyObject *klass, char *buf, int bufsize)
static void
getinstclassname(PyObject *inst, char *buf, int bufsize)
static PyObject *
instancemethod_call(PyObject *func, PyObject *arg, PyObject *kw)
static PyObject *
instancemethod_descr_get(PyObject *meth, PyObject *obj, PyObject *cls)
PyTypeObject PyMethod_Type = ;
int
PyMethod_ClearFreeList(void)
void
PyMethod_Fini(void)
