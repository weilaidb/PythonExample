static int
list_resize(PyListObject *self, Py_ssize_t newsize)
#undef SHOW_ALLOC_COUNT
static size_t count_alloc = 0;
static size_t count_reuse = 0;
static void
show_alloc(void)
#define PyList_MAXFREELIST 80
static PyListObject *free_list[PyList_MAXFREELIST];
static int numfree = 0;
void
PyList_Fini(void)
PyObject *
PyList_New(Py_ssize_t size)
Py_ssize_t
PyList_Size(PyObject *op)
static PyObject *indexerr = NULL;
PyObject *
PyList_GetItem(PyObject *op, Py_ssize_t i)
int
PyList_SetItem(register PyObject *op, register Py_ssize_t i,
register PyObject *newitem)
static int
ins1(PyListObject *self, Py_ssize_t where, PyObject *v)
int
PyList_Insert(PyObject *op, Py_ssize_t where, PyObject *newitem)
static int
app1(PyListObject *self, PyObject *v)
int
PyList_Append(PyObject *op, PyObject *newitem)
static void
list_dealloc(PyListObject *op)
static int
list_print(PyListObject *op, FILE *fp, int flags)
static PyObject *
list_repr(PyListObject *v)
static Py_ssize_t
list_length(PyListObject *a)
static int
list_contains(PyListObject *a, PyObject *el)
static PyObject *
list_item(PyListObject *a, Py_ssize_t i)
static PyObject *
list_slice(PyListObject *a, Py_ssize_t ilow, Py_ssize_t ihigh)
PyObject *
PyList_GetSlice(PyObject *a, Py_ssize_t ilow, Py_ssize_t ihigh)
static PyObject *
list_concat(PyListObject *a, PyObject *bb)
static PyObject *
list_repeat(PyListObject *a, Py_ssize_t n)
static int
list_clear(PyListObject *a)
static int
list_ass_slice(PyListObject *a, Py_ssize_t ilow, Py_ssize_t ihigh, PyObject *v)
int
PyList_SetSlice(PyObject *a, Py_ssize_t ilow, Py_ssize_t ihigh, PyObject *v)
static PyObject *
list_inplace_repeat(PyListObject *self, Py_ssize_t n)
static int
list_ass_item(PyListObject *a, Py_ssize_t i, PyObject *v)
static PyObject *
listinsert(PyListObject *self, PyObject *args)
static PyObject *
listappend(PyListObject *self, PyObject *v)
static PyObject *
listextend(PyListObject *self, PyObject *b)
PyObject *
_PyList_Extend(PyListObject *self, PyObject *b)
static PyObject *
list_inplace_concat(PyListObject *self, PyObject *other)
static PyObject *
listpop(PyListObject *self, PyObject *args)
static void
reverse_slice(PyObject **lo, PyObject **hi)
static int
islt(PyObject *x, PyObject *y, PyObject *compare)
#define ISLT(X, Y, COMPARE) ((COMPARE) == NULL ?                        \
PyObject_RichCompareBool(X, Y, Py_LT) :                \
islt(X, Y, COMPARE))
#define IFLT(X, Y) if ((k = ISLT(X, Y, compare)) < 0) goto fail;  \
if (k)
static int
binarysort(PyObject **lo, PyObject **hi, PyObject **start, PyObject *compare)
static Py_ssize_t
count_run(PyObject **lo, PyObject **hi, PyObject *compare, int *descending)
static Py_ssize_t
gallop_left(PyObject *key, PyObject **a, Py_ssize_t n, Py_ssize_t hint, PyObject *compare)
static Py_ssize_t
gallop_right(PyObject *key, PyObject **a, Py_ssize_t n, Py_ssize_t hint, PyObject *compare)
#define MAX_MERGE_PENDING 85
#define MIN_GALLOP 7
#define MERGESTATE_TEMP_SIZE 256
struct s_slice ;
typedef struct s_MergeState  MergeState;
static void
merge_init(MergeState *ms, PyObject *compare)
static void
merge_freemem(MergeState *ms)
static int
merge_getmem(MergeState *ms, Py_ssize_t need)
#define MERGE_GETMEM(MS, NEED) ((NEED) <= (MS)->alloced ? 0 :   \
merge_getmem(MS, NEED))
static Py_ssize_t
merge_lo(MergeState *ms, PyObject **pa, Py_ssize_t na,
PyObject **pb, Py_ssize_t nb)
static Py_ssize_t
merge_hi(MergeState *ms, PyObject **pa, Py_ssize_t na, PyObject **pb, Py_ssize_t nb)
static Py_ssize_t
merge_at(MergeState *ms, Py_ssize_t i)
static int
merge_collapse(MergeState *ms)
static int
merge_force_collapse(MergeState *ms)
static Py_ssize_t
merge_compute_minrun(Py_ssize_t n)
typedef struct  sortwrapperobject;
PyDoc_STRVAR(sortwrapper_doc, );
static PyObject *
sortwrapper_richcompare(sortwrapperobject *, sortwrapperobject *, int);
static void
sortwrapper_dealloc(sortwrapperobject *);
static PyTypeObject sortwrapper_type = ;
static PyObject *
sortwrapper_richcompare(sortwrapperobject *a, sortwrapperobject *b, int op)
static void
sortwrapper_dealloc(sortwrapperobject *so)
static PyObject *
build_sortwrapper(PyObject *key, PyObject *value)
static PyObject *
sortwrapper_getvalue(PyObject *so)
typedef struct  cmpwrapperobject;
static void
cmpwrapper_dealloc(cmpwrapperobject *co)
static PyObject *
cmpwrapper_call(cmpwrapperobject *co, PyObject *args, PyObject *kwds)
PyDoc_STRVAR(cmpwrapper_doc, );
static PyTypeObject cmpwrapper_type = ;
static PyObject *
build_cmpwrapper(PyObject *cmpfunc)
static PyObject *
listsort(PyListObject *self, PyObject *args, PyObject *kwds)
#undef IFLT
#undef ISLT
int
PyList_Sort(PyObject *v)
static PyObject *
listreverse(PyListObject *self)
int
PyList_Reverse(PyObject *v)
PyObject *
PyList_AsTuple(PyObject *v)
static PyObject *
listindex(PyListObject *self, PyObject *args)
static PyObject *
listcount(PyListObject *self, PyObject *v)
static PyObject *
listremove(PyListObject *self, PyObject *v)
static int
list_traverse(PyListObject *o, visitproc visit, void *arg)
static PyObject *
list_richcompare(PyObject *v, PyObject *w, int op)
static int
list_init(PyListObject *self, PyObject *args, PyObject *kw)
static PyObject *
list_sizeof(PyListObject *self)
static PyObject *list_iter(PyObject *seq);
static PyObject *list_reversed(PyListObject* seq, PyObject* unused);
PyDoc_STRVAR(getitem_doc,
);
PyDoc_STRVAR(reversed_doc,
);
PyDoc_STRVAR(sizeof_doc,
);
PyDoc_STRVAR(append_doc,
);
PyDoc_STRVAR(extend_doc,
);
PyDoc_STRVAR(insert_doc,
);
PyDoc_STRVAR(pop_doc,
);
PyDoc_STRVAR(remove_doc,
);
PyDoc_STRVAR(index_doc,
);
PyDoc_STRVAR(count_doc,
);
PyDoc_STRVAR(reverse_doc,
);
PyDoc_STRVAR(sort_doc,
"L.sort(cmp=None, key=None, reverse=False) -- stable sort *IN PLACE*;\n\
cmp(x, y) -> -1, 0, 1");
static PyObject *list_subscript(PyListObject*, PyObject*);
static PyMethodDef list_methods[] = ;
static PySequenceMethods list_as_sequence = ;
PyDoc_STRVAR(list_doc,
);
static PyObject *
list_subscript(PyListObject* self, PyObject* item)
static int
list_ass_subscript(PyListObject* self, PyObject* item, PyObject* value)
static PyMappingMethods list_as_mapping = ;
PyTypeObject PyList_Type = ;
typedef struct  listiterobject;
static PyObject *list_iter(PyObject *);
static void listiter_dealloc(listiterobject *);
static int listiter_traverse(listiterobject *, visitproc, void *);
static PyObject *listiter_next(listiterobject *);
static PyObject *listiter_len(listiterobject *);
PyDoc_STRVAR(length_hint_doc, );
static PyMethodDef listiter_methods[] = ;
PyTypeObject PyListIter_Type = ;
static PyObject *
list_iter(PyObject *seq)
static void
listiter_dealloc(listiterobject *it)
static int
listiter_traverse(listiterobject *it, visitproc visit, void *arg)
static PyObject *
listiter_next(listiterobject *it)
static PyObject *
listiter_len(listiterobject *it)
typedef struct  listreviterobject;
static PyObject *list_reversed(PyListObject *, PyObject *);
static void listreviter_dealloc(listreviterobject *);
static int listreviter_traverse(listreviterobject *, visitproc, void *);
static PyObject *listreviter_next(listreviterobject *);
static PyObject *listreviter_len(listreviterobject *);
static PyMethodDef listreviter_methods[] = ;
PyTypeObject PyListRevIter_Type = ;
static PyObject *
list_reversed(PyListObject *seq, PyObject *unused)
static void
listreviter_dealloc(listreviterobject *it)
static int
listreviter_traverse(listreviterobject *it, visitproc visit, void *arg)
static PyObject *
listreviter_next(listreviterobject *it)
static PyObject *
listreviter_len(listreviterobject *it)
