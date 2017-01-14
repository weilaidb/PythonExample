#define MCACHE_MAX_ATTR_SIZE    100
#define MCACHE_SIZE_EXP         12
#define MCACHE_HASH(version, name_hash)                                 \
(((unsigned int)(version) ^ (unsigned int)(name_hash))          \
& ((1 << MCACHE_SIZE_EXP) - 1))
#define MCACHE_HASH_METHOD(type, name)                                  \
MCACHE_HASH((type)->tp_version_tag,                     \
((PyStringObject *)(name))->ob_shash)
#define MCACHE_CACHEABLE_NAME(name)                                     \
PyString_CheckExact(name) &&                            \
PyString_GET_SIZE(name) <= MCACHE_MAX_ATTR_SIZE
struct method_cache_entry ;
static struct method_cache_entry method_cache[1 << MCACHE_SIZE_EXP];
static unsigned int next_version_tag = 0;
#define MCACHE_STATS 0
#if MCACHE_STATS
static size_t method_cache_hits = 0;
static size_t method_cache_misses = 0;
static size_t method_cache_collisions = 0;
unsigned int
PyType_ClearCache(void)
void
PyType_Modified(PyTypeObject *type)
static void
type_mro_modified(PyTypeObject *type, PyObject *bases)
static int
assign_version_tag(PyTypeObject *type)
static PyMemberDef type_members[] = ;
static PyObject *
type_name(PyTypeObject *type, void *context)
static int
type_set_name(PyTypeObject *type, PyObject *value, void *context)
static PyObject *
type_module(PyTypeObject *type, void *context)
static int
type_set_module(PyTypeObject *type, PyObject *value, void *context)
static PyObject *
type_abstractmethods(PyTypeObject *type, void *context)
static int
type_set_abstractmethods(PyTypeObject *type, PyObject *value, void *context)
static PyObject *
type_get_bases(PyTypeObject *type, void *context)
static PyTypeObject *best_base(PyObject *);
static int mro_internal(PyTypeObject *);
static int compatible_for_assignment(PyTypeObject *, PyTypeObject *, char *);
static int add_subclass(PyTypeObject*, PyTypeObject*);
static void remove_subclass(PyTypeObject *, PyTypeObject *);
static void update_all_slots(PyTypeObject *);
typedef int (*update_callback)(PyTypeObject *, void *);
static int update_subclasses(PyTypeObject *type, PyObject *name,
update_callback callback, void *data);
static int recurse_down_subclasses(PyTypeObject *type, PyObject *name,
update_callback callback, void *data);
static int
mro_subclasses(PyTypeObject *type, PyObject* temp)
static int
type_set_bases(PyTypeObject *type, PyObject *value, void *context)
static PyObject *
type_dict(PyTypeObject *type, void *context)
static PyObject *
type_get_doc(PyTypeObject *type, void *context)
static PyObject *
type___instancecheck__(PyObject *type, PyObject *inst)
static PyObject *
type___subclasscheck__(PyObject *type, PyObject *inst)
static PyGetSetDef type_getsets[] = ;
static PyObject*
type_richcompare(PyObject *v, PyObject *w, int op)
static PyObject *
type_repr(PyTypeObject *type)
static PyObject *
type_call(PyTypeObject *type, PyObject *args, PyObject *kwds)
PyObject *
PyType_GenericAlloc(PyTypeObject *type, Py_ssize_t nitems)
PyObject *
PyType_GenericNew(PyTypeObject *type, PyObject *args, PyObject *kwds)
static int
traverse_slots(PyTypeObject *type, PyObject *self, visitproc visit, void *arg)
static int
subtype_traverse(PyObject *self, visitproc visit, void *arg)
static void
clear_slots(PyTypeObject *type, PyObject *self)
static int
subtype_clear(PyObject *self)
static void
subtype_dealloc(PyObject *self)
static PyTypeObject *solid_base(PyTypeObject *type);
int
PyType_IsSubtype(PyTypeObject *a, PyTypeObject *b)
static PyObject *
lookup_maybe(PyObject *self, char *attrstr, PyObject **attrobj)
static PyObject *
lookup_method(PyObject *self, char *attrstr, PyObject **attrobj)
PyObject *
_PyObject_LookupSpecial(PyObject *self, char *attrstr, PyObject **attrobj)
static PyObject *
call_method(PyObject *o, char *name, PyObject **nameobj, char *format, ...)
static PyObject *
call_maybe(PyObject *o, char *name, PyObject **nameobj, char *format, ...)
static int
fill_classic_mro(PyObject *mro, PyObject *cls)
static PyObject *
classic_mro(PyObject *cls)
static int
tail_contains(PyObject *list, int whence, PyObject *o)
static PyObject *
class_name(PyObject *cls)
static int
check_duplicates(PyObject *list)
static void
set_mro_error(PyObject *to_merge, int *remain)
static int
pmerge(PyObject *acc, PyObject* to_merge)
static PyObject *
mro_implementation(PyTypeObject *type)
static PyObject *
mro_external(PyObject *self)
static int
mro_internal(PyTypeObject *type)
static PyTypeObject *
best_base(PyObject *bases)
static int
extra_ivars(PyTypeObject *type, PyTypeObject *base)
static PyTypeObject *
solid_base(PyTypeObject *type)
static void object_dealloc(PyObject *);
static int object_init(PyObject *, PyObject *, PyObject *);
static int update_slot(PyTypeObject *, PyObject *);
static void fixup_slot_dispatchers(PyTypeObject *);
static PyTypeObject *
get_builtin_base_with_dict(PyTypeObject *type)
static PyObject *
get_dict_descriptor(PyTypeObject *type)
static void
raise_dict_descr_error(PyObject *obj)
static PyObject *
subtype_dict(PyObject *obj, void *context)
static int
subtype_setdict(PyObject *obj, PyObject *value, void *context)
static PyObject *
subtype_getweakref(PyObject *obj, void *context)
static PyGetSetDef subtype_getsets_full[] = ;
static PyGetSetDef subtype_getsets_dict_only[] = ;
static PyGetSetDef subtype_getsets_weakref_only[] = ;
static int
valid_identifier(PyObject *s)
static PyObject *
_unicode_to_string(PyObject *slots, Py_ssize_t nslots)
static int
object_init(PyObject *self, PyObject *args, PyObject *kwds);
static int
type_init(PyObject *cls, PyObject *args, PyObject *kwds)
static PyObject *
type_new(PyTypeObject *metatype, PyObject *args, PyObject *kwds)
PyObject *
_PyType_Lookup(PyTypeObject *type, PyObject *name)
static PyObject *
type_getattro(PyTypeObject *type, PyObject *name)
static int
type_setattro(PyTypeObject *type, PyObject *name, PyObject *value)
static void
type_dealloc(PyTypeObject *type)
static PyObject *
type_subclasses(PyTypeObject *type, PyObject *args_ignored)
static PyMethodDef type_methods[] = ;
PyDoc_STRVAR(type_doc,
);
static int
type_traverse(PyTypeObject *type, visitproc visit, void *arg)
static int
type_clear(PyTypeObject *type)
static int
type_is_gc(PyTypeObject *type)
PyTypeObject PyType_Type = ;
static PyObject *
object_new(PyTypeObject *type, PyObject *args, PyObject *kwds);
static int
excess_args(PyObject *args, PyObject *kwds)
static int
object_init(PyObject *self, PyObject *args, PyObject *kwds)
static PyObject *
object_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
static void
object_dealloc(PyObject *self)
static PyObject *
object_repr(PyObject *self)
static PyObject *
object_str(PyObject *self)
static PyObject *
object_get_class(PyObject *self, void *closure)
static int
equiv_structs(PyTypeObject *a, PyTypeObject *b)
static int
same_slots_added(PyTypeObject *a, PyTypeObject *b)
static int
compatible_for_assignment(PyTypeObject* oldto, PyTypeObject* newto, char* attr)
static int
object_set_class(PyObject *self, PyObject *value, void *closure)
static PyGetSetDef object_getsets[] = ;
static PyObject *
import_copyreg(void)
static PyObject *
slotnames(PyObject *cls)
static PyObject *
reduce_2(PyObject *obj)
static PyObject *
_common_reduce(PyObject *self, int proto)
static PyObject *
object_reduce(PyObject *self, PyObject *args)
static PyObject *
object_reduce_ex(PyObject *self, PyObject *args)
static PyObject *
object_subclasshook(PyObject *cls, PyObject *args)
PyDoc_STRVAR(object_subclasshook_doc,
);
static PyObject *
object_format(PyObject *self, PyObject *args)
{
PyObject *format_spec;
PyObject *self_as_str = NULL;
PyObject *result = NULL;
Py_ssize_t format_len;
if (!PyArg_ParseTuple(args, , &format_spec))
return NULL;
if (PyUnicode_Check(format_spec))  else if (PyString_Check(format_spec))
static PyObject *
object_sizeof(PyObject *self, PyObject *args)
static PyMethodDef object_methods[] = ;
PyTypeObject PyBaseObject_Type = ;
static int
add_methods(PyTypeObject *type, PyMethodDef *meth)
static int
add_members(PyTypeObject *type, PyMemberDef *memb)
static int
add_getset(PyTypeObject *type, PyGetSetDef *gsp)
#define BUFFER_FLAGS (Py_TPFLAGS_HAVE_GETCHARBUFFER | Py_TPFLAGS_HAVE_NEWBUFFER)
static void
inherit_special(PyTypeObject *type, PyTypeObject *base)
static int
overrides_name(PyTypeObject *type, char *name)
#define OVERRIDES_HASH(x)       overrides_name(x, )
#define OVERRIDES_EQ(x)         overrides_name(x, )
static void
inherit_slots(PyTypeObject *type, PyTypeObject *base)
static int add_operators(PyTypeObject *);
int
PyType_Ready(PyTypeObject *type)
static int
add_subclass(PyTypeObject *base, PyTypeObject *type)
static void
remove_subclass(PyTypeObject *base, PyTypeObject *type)
static int
check_num_args(PyObject *ob, int n)
static PyObject *
wrap_lenfunc(PyObject *self, PyObject *args, void *wrapped)
static PyObject *
wrap_inquirypred(PyObject *self, PyObject *args, void *wrapped)
static PyObject *
wrap_binaryfunc(PyObject *self, PyObject *args, void *wrapped)
static PyObject *
wrap_binaryfunc_l(PyObject *self, PyObject *args, void *wrapped)
static PyObject *
wrap_binaryfunc_r(PyObject *self, PyObject *args, void *wrapped)
static PyObject *
wrap_coercefunc(PyObject *self, PyObject *args, void *wrapped)
static PyObject *
wrap_ternaryfunc(PyObject *self, PyObject *args, void *wrapped)
static PyObject *
wrap_ternaryfunc_r(PyObject *self, PyObject *args, void *wrapped)
static PyObject *
wrap_unaryfunc(PyObject *self, PyObject *args, void *wrapped)
static PyObject *
wrap_indexargfunc(PyObject *self, PyObject *args, void *wrapped)
static Py_ssize_t
getindex(PyObject *self, PyObject *arg)
static PyObject *
wrap_sq_item(PyObject *self, PyObject *args, void *wrapped)
static PyObject *
wrap_ssizessizeargfunc(PyObject *self, PyObject *args, void *wrapped)
static PyObject *
wrap_sq_setitem(PyObject *self, PyObject *args, void *wrapped)
static PyObject *
wrap_sq_delitem(PyObject *self, PyObject *args, void *wrapped)
static PyObject *
wrap_ssizessizeobjargproc(PyObject *self, PyObject *args, void *wrapped)
static PyObject *
wrap_delslice(PyObject *self, PyObject *args, void *wrapped)
static PyObject *
wrap_objobjproc(PyObject *self, PyObject *args, void *wrapped)
static PyObject *
wrap_objobjargproc(PyObject *self, PyObject *args, void *wrapped)
static PyObject *
wrap_delitem(PyObject *self, PyObject *args, void *wrapped)
static PyObject *
wrap_cmpfunc(PyObject *self, PyObject *args, void *wrapped)
static int
hackcheck(PyObject *self, setattrofunc func, char *what)
static PyObject *
wrap_setattr(PyObject *self, PyObject *args, void *wrapped)
static PyObject *
wrap_delattr(PyObject *self, PyObject *args, void *wrapped)
static PyObject *
wrap_hashfunc(PyObject *self, PyObject *args, void *wrapped)
static PyObject *
wrap_call(PyObject *self, PyObject *args, void *wrapped, PyObject *kwds)
static PyObject *
wrap_richcmpfunc(PyObject *self, PyObject *args, void *wrapped, int op)
#undef RICHCMP_WRAPPER
#define RICHCMP_WRAPPER(NAME, OP) \
static PyObject * \
richcmp_##NAME(PyObject *self, PyObject *args, void *wrapped) \
RICHCMP_WRAPPER(lt, Py_LT)
RICHCMP_WRAPPER(le, Py_LE)
RICHCMP_WRAPPER(eq, Py_EQ)
RICHCMP_WRAPPER(ne, Py_NE)
RICHCMP_WRAPPER(gt, Py_GT)
RICHCMP_WRAPPER(ge, Py_GE)
static PyObject *
wrap_next(PyObject *self, PyObject *args, void *wrapped)
static PyObject *
wrap_descr_get(PyObject *self, PyObject *args, void *wrapped)
static PyObject *
wrap_descr_set(PyObject *self, PyObject *args, void *wrapped)
static PyObject *
wrap_descr_delete(PyObject *self, PyObject *args, void *wrapped)
static PyObject *
wrap_init(PyObject *self, PyObject *args, void *wrapped, PyObject *kwds)
static PyObject *
tp_new_wrapper(PyObject *self, PyObject *args, PyObject *kwds)
static struct PyMethodDef tp_new_methoddef[] = ;
static int
add_tp_new_wrapper(PyTypeObject *type)
#define SLOT0(FUNCNAME, OPSTR) \
static PyObject * \
FUNCNAME(PyObject *self) \
#define SLOT1(FUNCNAME, OPSTR, ARG1TYPE, ARGCODES) \
static PyObject * \
FUNCNAME(PyObject *self, ARG1TYPE arg1) \
static int
method_is_overloaded(PyObject *left, PyObject *right, char *name)
#define SLOT1BINFULL(FUNCNAME, TESTFUNC, SLOTNAME, OPSTR, ROPSTR) \
static PyObject * \
FUNCNAME(PyObject *self, PyObject *other) \
#define SLOT1BIN(FUNCNAME, SLOTNAME, OPSTR, ROPSTR) \
SLOT1BINFULL(FUNCNAME, FUNCNAME, SLOTNAME, OPSTR, ROPSTR)
#define SLOT2(FUNCNAME, OPSTR, ARG1TYPE, ARG2TYPE, ARGCODES) \
static PyObject * \
FUNCNAME(PyObject *self, ARG1TYPE arg1, ARG2TYPE arg2) \
static Py_ssize_t
slot_sq_length(PyObject *self)
static PyObject *
slot_sq_item(PyObject *self, Py_ssize_t i)
static PyObject*
slot_sq_slice(PyObject *self, Py_ssize_t i, Py_ssize_t j)
static int
slot_sq_ass_item(PyObject *self, Py_ssize_t index, PyObject *value)
static int
slot_sq_ass_slice(PyObject *self, Py_ssize_t i, Py_ssize_t j, PyObject *value)
static int
slot_sq_contains(PyObject *self, PyObject *value)
#define slot_mp_length slot_sq_length
SLOT1(slot_mp_subscript, )
static int
slot_mp_ass_subscript(PyObject *self, PyObject *key, PyObject *value)
SLOT1BIN(slot_nb_add, nb_add, )
SLOT1BIN(slot_nb_subtract, nb_subtract, )
SLOT1BIN(slot_nb_multiply, nb_multiply, )
SLOT1BIN(slot_nb_divide, nb_divide, )
SLOT1BIN(slot_nb_remainder, nb_remainder, )
SLOT1BIN(slot_nb_divmod, nb_divmod, )
static PyObject *slot_nb_power(PyObject *, PyObject *, PyObject *);
SLOT1BINFULL(slot_nb_power_binary, slot_nb_power,
nb_power, )
static PyObject *
slot_nb_power(PyObject *self, PyObject *other, PyObject *modulus)
SLOT0(slot_nb_negative, )
SLOT0(slot_nb_positive, )
SLOT0(slot_nb_absolute, )
static int
slot_nb_nonzero(PyObject *self)
static PyObject *
slot_nb_index(PyObject *self)
SLOT0(slot_nb_invert, )
SLOT1BIN(slot_nb_lshift, nb_lshift, )
SLOT1BIN(slot_nb_rshift, nb_rshift, )
SLOT1BIN(slot_nb_and, nb_and, )
SLOT1BIN(slot_nb_xor, nb_xor, )
SLOT1BIN(slot_nb_or, nb_or, )
static int
slot_nb_coerce(PyObject **a, PyObject **b)
SLOT0(slot_nb_int, )
SLOT0(slot_nb_long, )
SLOT0(slot_nb_float, )
SLOT0(slot_nb_oct, )
SLOT0(slot_nb_hex, )
SLOT1(slot_nb_inplace_add, )
SLOT1(slot_nb_inplace_subtract, )
SLOT1(slot_nb_inplace_multiply, )
SLOT1(slot_nb_inplace_divide, )
SLOT1(slot_nb_inplace_remainder, )
static PyObject *
slot_nb_inplace_power(PyObject *self, PyObject * arg1, PyObject *arg2)
SLOT1(slot_nb_inplace_lshift, )
SLOT1(slot_nb_inplace_rshift, )
SLOT1(slot_nb_inplace_and, )
SLOT1(slot_nb_inplace_xor, )
SLOT1(slot_nb_inplace_or, )
SLOT1BIN(slot_nb_floor_divide, nb_floor_divide,
)
SLOT1BIN(slot_nb_true_divide, nb_true_divide, )
SLOT1(slot_nb_inplace_floor_divide, )
SLOT1(slot_nb_inplace_true_divide, )
static int
half_compare(PyObject *self, PyObject *other)
int
_PyObject_SlotCompare(PyObject *self, PyObject *other)
static PyObject *
slot_tp_repr(PyObject *self)
static PyObject *
slot_tp_str(PyObject *self)
static long
slot_tp_hash(PyObject *self)
static PyObject *
slot_tp_call(PyObject *self, PyObject *args, PyObject *kwds)
static PyObject *
slot_tp_getattro(PyObject *self, PyObject *name)
static PyObject *
call_attribute(PyObject *self, PyObject *attr, PyObject *name)
static PyObject *
slot_tp_getattr_hook(PyObject *self, PyObject *name)
static int
slot_tp_setattro(PyObject *self, PyObject *name, PyObject *value)
static char *name_op[] = ;
static PyObject *
half_richcompare(PyObject *self, PyObject *other, int op)
static PyObject *
slot_tp_richcompare(PyObject *self, PyObject *other, int op)
static PyObject *
slot_tp_iter(PyObject *self)
static PyObject *
slot_tp_iternext(PyObject *self)
static PyObject *
slot_tp_descr_get(PyObject *self, PyObject *obj, PyObject *type)
static int
slot_tp_descr_set(PyObject *self, PyObject *target, PyObject *value)
static int
slot_tp_init(PyObject *self, PyObject *args, PyObject *kwds)
static PyObject *
slot_tp_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
static void
slot_tp_del(PyObject *self)
typedef struct wrapperbase slotdef;
#undef TPSLOT
#undef FLSLOT
#undef ETSLOT
#undef SQSLOT
#undef MPSLOT
#undef NBSLOT
#undef UNSLOT
#undef IBSLOT
#undef BINSLOT
#undef RBINSLOT
#define TPSLOT(NAME, SLOT, FUNCTION, WRAPPER, DOC) \
#define FLSLOT(NAME, SLOT, FUNCTION, WRAPPER, DOC, FLAGS) \
#define ETSLOT(NAME, SLOT, FUNCTION, WRAPPER, DOC) \
#define SQSLOT(NAME, SLOT, FUNCTION, WRAPPER, DOC) \
ETSLOT(NAME, as_sequence.SLOT, FUNCTION, WRAPPER, DOC)
#define MPSLOT(NAME, SLOT, FUNCTION, WRAPPER, DOC) \
ETSLOT(NAME, as_mapping.SLOT, FUNCTION, WRAPPER, DOC)
#define NBSLOT(NAME, SLOT, FUNCTION, WRAPPER, DOC) \
ETSLOT(NAME, as_number.SLOT, FUNCTION, WRAPPER, DOC)
#define UNSLOT(NAME, SLOT, FUNCTION, WRAPPER, DOC) \
ETSLOT(NAME, as_number.SLOT, FUNCTION, WRAPPER, \
DOC)
#define IBSLOT(NAME, SLOT, FUNCTION, WRAPPER, DOC) \
ETSLOT(NAME, as_number.SLOT, FUNCTION, WRAPPER, \
)
#define BINSLOT(NAME, SLOT, FUNCTION, DOC) \
ETSLOT(NAME, as_number.SLOT, FUNCTION, wrap_binaryfunc_l, \
)
#define RBINSLOT(NAME, SLOT, FUNCTION, DOC) \
ETSLOT(NAME, as_number.SLOT, FUNCTION, wrap_binaryfunc_r, \
)
#define BINSLOTNOTINFIX(NAME, SLOT, FUNCTION, DOC) \
ETSLOT(NAME, as_number.SLOT, FUNCTION, wrap_binaryfunc_l, \
DOC)
#define RBINSLOTNOTINFIX(NAME, SLOT, FUNCTION, DOC) \
ETSLOT(NAME, as_number.SLOT, FUNCTION, wrap_binaryfunc_r, \
DOC)
static slotdef slotdefs[] = ;
static void **
slotptr(PyTypeObject *type, int ioffset)
#define MAX_EQUIV 10
static void **
resolve_slotdups(PyTypeObject *type, PyObject *name)
static slotdef *
update_one_slot(PyTypeObject *type, slotdef *p)
static int
update_slots_callback(PyTypeObject *type, void *data)
static void
init_slotdefs(void)
static int
update_slot(PyTypeObject *type, PyObject *name)
static void
fixup_slot_dispatchers(PyTypeObject *type)
static void
update_all_slots(PyTypeObject* type)
static int
update_subclasses(PyTypeObject *type, PyObject *name,
update_callback callback, void *data)
static int
recurse_down_subclasses(PyTypeObject *type, PyObject *name,
update_callback callback, void *data)
static int
add_operators(PyTypeObject *type)
typedef struct  superobject;
static PyMemberDef super_members[] = ;
static void
super_dealloc(PyObject *self)
static PyObject *
super_repr(PyObject *self)
static PyObject *
super_getattro(PyObject *self, PyObject *name)
static PyTypeObject *
supercheck(PyTypeObject *type, PyObject *obj)
static PyObject *
super_descr_get(PyObject *self, PyObject *obj, PyObject *type)
static int
super_init(PyObject *self, PyObject *args, PyObject *kwds)
PyDoc_STRVAR(super_doc,
);
static int
super_traverse(PyObject *self, visitproc visit, void *arg)
PyTypeObject PySuper_Type = ;
