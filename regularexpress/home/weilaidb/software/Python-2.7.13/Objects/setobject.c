static void
set_key_error(PyObject *arg)
#define PERTURB_SHIFT 5
static PyObject *dummy = NULL;
PyObject *
_PySet_Dummy(void)
#define INIT_NONZERO_SET_SLOTS(so) do  while(0)
#define EMPTY_TO_MINSIZE(so) do  while(0)
#define PySet_MAXFREELIST 80
static PySetObject *free_list[PySet_MAXFREELIST];
static int numfree = 0;
static setentry *
set_lookkey(PySetObject *so, PyObject *key, register long hash)
static setentry *
set_lookkey_string(PySetObject *so, PyObject *key, register long hash)
static int
set_insert_key(register PySetObject *so, PyObject *key, long hash)
static void
set_insert_clean(register PySetObject *so, PyObject *key, long hash)
static int
set_table_resize(PySetObject *so, Py_ssize_t minused)
static int
set_add_entry(register PySetObject *so, setentry *entry)
static int
set_add_key(register PySetObject *so, PyObject *key)
#define DISCARD_NOTFOUND 0
#define DISCARD_FOUND 1
static int
set_discard_entry(PySetObject *so, setentry *oldentry)
static int
set_discard_key(PySetObject *so, PyObject *key)
static int
set_clear_internal(PySetObject *so)
static int
set_next(PySetObject *so, Py_ssize_t *pos_ptr, setentry **entry_ptr)
static void
set_dealloc(PySetObject *so)
static int
set_tp_print(PySetObject *so, FILE *fp, int flags)
static PyObject *
set_repr(PySetObject *so)
static Py_ssize_t
set_len(PyObject *so)
static int
set_merge(PySetObject *so, PyObject *otherset)
static int
set_contains_key(PySetObject *so, PyObject *key)
static int
set_contains_entry(PySetObject *so, setentry *entry)
static PyObject *
set_pop(PySetObject *so)
PyDoc_STRVAR(pop_doc, "Remove and return an arbitrary set element.\n\
Raises KeyError if the set is empty.");
static int
set_traverse(PySetObject *so, visitproc visit, void *arg)
static long
frozenset_hash(PyObject *self)
typedef struct  setiterobject;
static void
setiter_dealloc(setiterobject *si)
static int
setiter_traverse(setiterobject *si, visitproc visit, void *arg)
static PyObject *
setiter_len(setiterobject *si)
PyDoc_STRVAR(length_hint_doc, );
static PyMethodDef setiter_methods[] = ;
static PyObject *setiter_iternext(setiterobject *si)
static PyTypeObject PySetIter_Type = ;
static PyObject *
set_iter(PySetObject *so)
static int
set_update_internal(PySetObject *so, PyObject *other)
static PyObject *
set_update(PySetObject *so, PyObject *args)
PyDoc_STRVAR(update_doc,
);
static PyObject *
make_new_set(PyTypeObject *type, PyObject *iterable)
static PyObject *emptyfrozenset = NULL;
static PyObject *
frozenset_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
void
PySet_Fini(void)
static PyObject *
set_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
static void
set_swap_bodies(PySetObject *a, PySetObject *b)
static PyObject *
set_copy(PySetObject *so)
static PyObject *
frozenset_copy(PySetObject *so)
PyDoc_STRVAR(copy_doc, );
static PyObject *
set_clear(PySetObject *so)
PyDoc_STRVAR(clear_doc, );
static PyObject *
set_union(PySetObject *so, PyObject *args)
PyDoc_STRVAR(union_doc,
"Return the union of sets as a new set.\n\
\n\
(i.e. all elements that are in either set.)");
static PyObject *
set_or(PySetObject *so, PyObject *other)
static PyObject *
set_ior(PySetObject *so, PyObject *other)
static PyObject *
set_intersection(PySetObject *so, PyObject *other)
static PyObject *
set_intersection_multi(PySetObject *so, PyObject *args)
PyDoc_STRVAR(intersection_doc,
"Return the intersection of two or more sets as a new set.\n\
\n\
(i.e. elements that are common to all of the sets.)");
static PyObject *
set_intersection_update(PySetObject *so, PyObject *other)
static PyObject *
set_intersection_update_multi(PySetObject *so, PyObject *args)
PyDoc_STRVAR(intersection_update_doc,
);
static PyObject *
set_and(PySetObject *so, PyObject *other)
static PyObject *
set_iand(PySetObject *so, PyObject *other)
static PyObject *
set_isdisjoint(PySetObject *so, PyObject *other)
PyDoc_STRVAR(isdisjoint_doc,
);
static int
set_difference_update_internal(PySetObject *so, PyObject *other)
static PyObject *
set_difference_update(PySetObject *so, PyObject *args)
PyDoc_STRVAR(difference_update_doc,
);
static PyObject *
set_difference(PySetObject *so, PyObject *other)
static PyObject *
set_difference_multi(PySetObject *so, PyObject *args)
PyDoc_STRVAR(difference_doc,
"Return the difference of two or more sets as a new set.\n\
\n\
(i.e. all elements that are in this set but not the others.)");
static PyObject *
set_sub(PySetObject *so, PyObject *other)
static PyObject *
set_isub(PySetObject *so, PyObject *other)
static PyObject *
set_symmetric_difference_update(PySetObject *so, PyObject *other)
PyDoc_STRVAR(symmetric_difference_update_doc,
);
static PyObject *
set_symmetric_difference(PySetObject *so, PyObject *other)
PyDoc_STRVAR(symmetric_difference_doc,
"Return the symmetric difference of two sets as a new set.\n\
\n\
(i.e. all elements that are in exactly one of the sets.)");
static PyObject *
set_xor(PySetObject *so, PyObject *other)
static PyObject *
set_ixor(PySetObject *so, PyObject *other)
static PyObject *
set_issubset(PySetObject *so, PyObject *other)
PyDoc_STRVAR(issubset_doc, );
static PyObject *
set_issuperset(PySetObject *so, PyObject *other)
PyDoc_STRVAR(issuperset_doc, );
static PyObject *
set_richcompare(PySetObject *v, PyObject *w, int op)
static int
set_nocmp(PyObject *self, PyObject *other)
static PyObject *
set_add(PySetObject *so, PyObject *key)
PyDoc_STRVAR(add_doc,
"Add an element to a set.\n\
\n\
This has no effect if the element is already present.");
static int
set_contains(PySetObject *so, PyObject *key)
static PyObject *
set_direct_contains(PySetObject *so, PyObject *key)
PyDoc_STRVAR(contains_doc, );
static PyObject *
set_remove(PySetObject *so, PyObject *key)
PyDoc_STRVAR(remove_doc,
"Remove an element from a set; it must be a member.\n\
\n\
If the element is not a member, raise a KeyError.");
static PyObject *
set_discard(PySetObject *so, PyObject *key)
PyDoc_STRVAR(discard_doc,
"Remove an element from a set if it is a member.\n\
\n\
If the element is not a member, do nothing.");
static PyObject *
set_reduce(PySetObject *so)
PyDoc_STRVAR(reduce_doc, );
static PyObject *
set_sizeof(PySetObject *so)
PyDoc_STRVAR(sizeof_doc, );
static int
set_init(PySetObject *self, PyObject *args, PyObject *kwds)
static PySequenceMethods set_as_sequence = ;
static PyObject *test_c_api(PySetObject *so);
PyDoc_STRVAR(test_c_api_doc, "Exercises C API.  Returns True.\n\
All is well if assertions don't fail.");
static PyMethodDef set_methods[] = ;
static PyNumberMethods set_as_number = ;
PyDoc_STRVAR(set_doc,
"set() -> new empty set object\n\
set(iterable) -> new set object\n\
\n\
Build an unordered collection of unique elements.");
PyTypeObject PySet_Type = ;
static PyMethodDef frozenset_methods[] = ;
static PyNumberMethods frozenset_as_number = ;
PyDoc_STRVAR(frozenset_doc,
"frozenset() -> empty frozenset object\n\
frozenset(iterable) -> frozenset object\n\
\n\
Build an immutable unordered collection of unique elements.");
PyTypeObject PyFrozenSet_Type = ;
PyObject *
PySet_New(PyObject *iterable)
PyObject *
PyFrozenSet_New(PyObject *iterable)
Py_ssize_t
PySet_Size(PyObject *anyset)
int
PySet_Clear(PyObject *set)
int
PySet_Contains(PyObject *anyset, PyObject *key)
int
PySet_Discard(PyObject *set, PyObject *key)
int
PySet_Add(PyObject *anyset, PyObject *key)
int
_PySet_Next(PyObject *set, Py_ssize_t *pos, PyObject **key)
int
_PySet_NextEntry(PyObject *set, Py_ssize_t *pos, PyObject **key, long *hash)
PyObject *
PySet_Pop(PyObject *set)
int
_PySet_Update(PyObject *set, PyObject *iterable)
#define assertRaises(call_return_value, exception)              \
do  while(0)
static PyObject *
test_c_api(PySetObject *so)
#undef assertRaises
