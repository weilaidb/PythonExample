Py_ssize_t _Py_RefTotal;
Py_ssize_t
_Py_GetRefTotal(void)
int Py_DivisionWarningFlag;
int Py_Py3kWarningFlag;
static PyObject refchain = ;
void
_Py_AddToAllObjects(PyObject *op, int force)
static PyTypeObject *type_list;
static int unlist_types_without_objects;
extern Py_ssize_t tuple_zero_allocs, fast_tuple_allocs;
extern Py_ssize_t quick_int_allocs, quick_neg_int_allocs;
extern Py_ssize_t null_strings, one_strings;
void
dump_counts(FILE* f)
PyObject *
get_counts(void)
void
inc_count(PyTypeObject *tp)
void dec_count(PyTypeObject *tp)
void
_Py_NegativeRefcount(const char *fname, int lineno, PyObject *op)
void
Py_IncRef(PyObject *o)
void
Py_DecRef(PyObject *o)
PyObject *
PyObject_Init(PyObject *op, PyTypeObject *tp)
PyVarObject *
PyObject_InitVar(PyVarObject *op, PyTypeObject *tp, Py_ssize_t size)
PyObject *
_PyObject_New(PyTypeObject *tp)
PyVarObject *
_PyObject_NewVar(PyTypeObject *tp, Py_ssize_t nitems)
#undef _PyObject_Del
void
_PyObject_Del(PyObject *op)
static int
internal_print(PyObject *op, FILE *fp, int flags, int nesting)
int
PyObject_Print(PyObject *op, FILE *fp, int flags)
void _PyObject_Dump(PyObject* op)
PyObject *
PyObject_Repr(PyObject *v)
PyObject *
_PyObject_Str(PyObject *v)
PyObject *
PyObject_Str(PyObject *v)
PyObject *
PyObject_Unicode(PyObject *v)
static int
adjust_tp_compare(int c)
#define RICHCOMPARE(t) (PyType_HasFeature((t), Py_TPFLAGS_HAVE_RICHCOMPARE) \
? (t)->tp_richcompare : NULL)
int _Py_SwappedOp[] = ;
static PyObject *
try_rich_compare(PyObject *v, PyObject *w, int op)
static int
try_rich_compare_bool(PyObject *v, PyObject *w, int op)
static int
try_rich_to_3way_compare(PyObject *v, PyObject *w)
static int
try_3way_compare(PyObject *v, PyObject *w)
static int
default_3way_compare(PyObject *v, PyObject *w)
static int
do_cmp(PyObject *v, PyObject *w)
int
PyObject_Compare(PyObject *v, PyObject *w)
static PyObject *
convert_3way_to_object(int op, int c)
static PyObject *
try_3way_to_rich_compare(PyObject *v, PyObject *w, int op)
static PyObject *
do_richcmp(PyObject *v, PyObject *w, int op)
PyObject *
PyObject_RichCompare(PyObject *v, PyObject *w, int op)
int
PyObject_RichCompareBool(PyObject *v, PyObject *w, int op)
long
_Py_HashDouble(double v)
long
_Py_HashPointer(void *p)
long
PyObject_HashNotImplemented(PyObject *self)
_Py_HashSecret_t _Py_HashSecret;
long
PyObject_Hash(PyObject *v)
PyObject *
PyObject_GetAttrString(PyObject *v, const char *name)
int
PyObject_HasAttrString(PyObject *v, const char *name)
int
PyObject_SetAttrString(PyObject *v, const char *name, PyObject *w)
PyObject *
PyObject_GetAttr(PyObject *v, PyObject *name)
int
PyObject_HasAttr(PyObject *v, PyObject *name)
int
PyObject_SetAttr(PyObject *v, PyObject *name, PyObject *value)
PyObject **
_PyObject_GetDictPtr(PyObject *obj)
PyObject *
PyObject_SelfIter(PyObject *obj)
PyObject *
_PyObject_NextNotImplemented(PyObject *self)
PyObject *
_PyObject_GenericGetAttrWithDict(PyObject *obj, PyObject *name, PyObject *dict)
PyObject *
PyObject_GenericGetAttr(PyObject *obj, PyObject *name)
int
_PyObject_GenericSetAttrWithDict(PyObject *obj, PyObject *name,
PyObject *value, PyObject *dict)
int
PyObject_GenericSetAttr(PyObject *obj, PyObject *name, PyObject *value)
int
PyObject_IsTrue(PyObject *v)
int
PyObject_Not(PyObject *v)
int
PyNumber_CoerceEx(PyObject **pv, PyObject **pw)
int
PyNumber_Coerce(PyObject **pv, PyObject **pw)
int
PyCallable_Check(PyObject *x)
static int
merge_class_dict(PyObject* dict, PyObject* aclass)
static int
merge_list_attr(PyObject* dict, PyObject* obj, const char *attrname)
static PyObject *
_dir_locals(void)
static PyObject *
_specialized_dir_type(PyObject *obj)
static PyObject *
_specialized_dir_module(PyObject *obj)
static PyObject *
_generic_dir(PyObject *obj)
static PyObject *
_dir_object(PyObject *obj)
PyObject *
PyObject_Dir(PyObject *obj)
static PyObject *
none_repr(PyObject *op)
static void
none_dealloc(PyObject* ignore)
static PyTypeObject PyNone_Type = ;
PyObject _Py_NoneStruct = ;
static PyObject *
NotImplemented_repr(PyObject *op)
static PyTypeObject PyNotImplemented_Type = ;
PyObject _Py_NotImplementedStruct = ;
void
_Py_ReadyTypes(void)
void
_Py_NewReference(PyObject *op)
void
_Py_ForgetReference(register PyObject *op)
void
_Py_Dealloc(PyObject *op)
void
_Py_PrintReferences(FILE *fp)
void
_Py_PrintReferenceAddresses(FILE *fp)
PyObject *
_Py_GetObjects(PyObject *self, PyObject *args)
PyTypeObject *_Py_capsule_hack = &PyCapsule_Type;
PyTypeObject *_Py_cobject_hack = &PyCObject_Type;
Py_ssize_t (*_Py_abstract_hack)(PyObject *) = PyObject_Size;
void *
PyMem_Malloc(size_t nbytes)
void *
PyMem_Realloc(void *p, size_t nbytes)
void
PyMem_Free(void *p)
#define KEY "Py_Repr"
int
Py_ReprEnter(PyObject *obj)
void
Py_ReprLeave(PyObject *obj)
int _PyTrash_delete_nesting = 0;
PyObject *_PyTrash_delete_later = NULL;
void
_PyTrash_deposit_object(PyObject *op)
void
_PyTrash_thread_deposit_object(PyObject *op)
void
_PyTrash_destroy_chain(void)
void
_PyTrash_thread_destroy_chain(void)
