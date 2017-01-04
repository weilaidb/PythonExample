static void
set_key_error(PyObject *arg)
#undef SHOW_CONVERSION_COUNTS
#define PERTURB_SHIFT 5
static PyObject *dummy = NULL;
PyObject *
_PyDict_Dummy(void)
static PyDictEntry *
lookdict_string(PyDictObject *mp, PyObject *key, long hash);
static long created = 0L;
static long converted = 0L;
static void
show_counts(void)
#undef SHOW_ALLOC_COUNT
static size_t count_alloc = 0;
static size_t count_reuse = 0;
static void
show_alloc(void)
static Py_ssize_t count_untracked = 0;
static Py_ssize_t count_tracked = 0;
static void
show_track(void)
#define INIT_NONZERO_DICT_SLOTS(mp) do  while(0)
#define EMPTY_TO_MINSIZE(mp) do  while(0)
#define PyDict_MAXFREELIST 80
static PyDictObject *free_list[PyDict_MAXFREELIST];
static int numfree = 0;
void
PyDict_Fini(void)
PyObject *
PyDict_New(void)
static PyDictEntry *
lookdict(PyDictObject *mp, PyObject *key, register long hash)
static PyDictEntry *
lookdict_string(PyDictObject *mp, PyObject *key, register long hash)
#define INCREASE_TRACK_COUNT \
(count_tracked++, count_untracked--);
#define DECREASE_TRACK_COUNT \
(count_tracked--, count_untracked++);
#define INCREASE_TRACK_COUNT
#define DECREASE_TRACK_COUNT
#define MAINTAIN_TRACKING(mp, key, value) \
do  while(0)
void
_PyDict_MaybeUntrack(PyObject *op)
static int
insertdict_by_entry(register PyDictObject *mp, PyObject *key, long hash,
PyDictEntry *ep, PyObject *value)
static int
insertdict(register PyDictObject *mp, PyObject *key, long hash, PyObject *value)
static void
insertdict_clean(register PyDictObject *mp, PyObject *key, long hash,
PyObject *value)
static int
dictresize(PyDictObject *mp, Py_ssize_t minused)
PyObject *
_PyDict_NewPresized(Py_ssize_t minused)
PyObject *
PyDict_GetItem(PyObject *op, PyObject *key)
PyObject *
_PyDict_GetItemWithError(PyObject *op, PyObject *key)
static int
dict_set_item_by_hash_or_entry(register PyObject *op, PyObject *key,
long hash, PyDictEntry *ep, PyObject *value)
int
PyDict_SetItem(register PyObject *op, PyObject *key, PyObject *value)
int
PyDict_DelItem(PyObject *op, PyObject *key)
void
PyDict_Clear(PyObject *op)
int
PyDict_Next(PyObject *op, Py_ssize_t *ppos, PyObject **pkey, PyObject **pvalue)
int
_PyDict_Next(PyObject *op, Py_ssize_t *ppos, PyObject **pkey, PyObject **pvalue, long *phash)
static void
dict_dealloc(register PyDictObject *mp)
static int
dict_print(register PyDictObject *mp, register FILE *fp, register int flags)
static PyObject *
dict_repr(PyDictObject *mp)
static Py_ssize_t
dict_length(PyDictObject *mp)
static PyObject *
dict_subscript(PyDictObject *mp, register PyObject *key)
static int
dict_ass_sub(PyDictObject *mp, PyObject *v, PyObject *w)
static PyMappingMethods dict_as_mapping = ;
static PyObject *
dict_keys(register PyDictObject *mp)
static PyObject *
dict_values(register PyDictObject *mp)
static PyObject *
dict_items(register PyDictObject *mp)
static PyObject *
dict_fromkeys(PyObject *cls, PyObject *args)
static int
dict_update_common(PyObject *self, PyObject *args, PyObject *kwds, char *methname)
static PyObject *
dict_update(PyObject *self, PyObject *args, PyObject *kwds)
int
PyDict_MergeFromSeq2(PyObject *d, PyObject *seq2, int override)
int
PyDict_Update(PyObject *a, PyObject *b)
int
PyDict_Merge(PyObject *a, PyObject *b, int override)
static PyObject *
dict_copy(register PyDictObject *mp)
PyObject *
PyDict_Copy(PyObject *o)
Py_ssize_t
PyDict_Size(PyObject *mp)
PyObject *
PyDict_Keys(PyObject *mp)
PyObject *
PyDict_Values(PyObject *mp)
PyObject *
PyDict_Items(PyObject *mp)
static PyObject *
characterize(PyDictObject *a, PyDictObject *b, PyObject **pval)
static int
dict_compare(PyDictObject *a, PyDictObject *b)
static int
dict_equal(PyDictObject *a, PyDictObject *b)
static PyObject *
dict_richcompare(PyObject *v, PyObject *w, int op)
static PyObject *
dict_contains(register PyDictObject *mp, PyObject *key)
static PyObject *
dict_has_key(register PyDictObject *mp, PyObject *key)
static PyObject *
dict_get(register PyDictObject *mp, PyObject *args)
static PyObject *
dict_setdefault(register PyDictObject *mp, PyObject *args)
static PyObject *
dict_clear(register PyDictObject *mp)
static PyObject *
dict_pop(PyDictObject *mp, PyObject *args)
static PyObject *
dict_popitem(PyDictObject *mp)
static int
dict_traverse(PyObject *op, visitproc visit, void *arg)
static int
dict_tp_clear(PyObject *op)
extern PyTypeObject PyDictIterKey_Type;
extern PyTypeObject PyDictIterValue_Type;
extern PyTypeObject PyDictIterItem_Type;
static PyObject *dictiter_new(PyDictObject *, PyTypeObject *);
static PyObject *
dict_iterkeys(PyDictObject *dict)
static PyObject *
dict_itervalues(PyDictObject *dict)
static PyObject *
dict_iteritems(PyDictObject *dict)
static PyObject *
dict_sizeof(PyDictObject *mp)
PyDoc_STRVAR(has_key__doc__,
"D.has_key(k) -> True if D has a key k, else False");
PyDoc_STRVAR(contains__doc__,
"D.__contains__(k) -> True if D has a key k, else False");
PyDoc_STRVAR(getitem__doc__, "x.__getitem__(y) <==> x[y]");
PyDoc_STRVAR(sizeof__doc__,
"D.__sizeof__() -> size of D in memory, in bytes");
PyDoc_STRVAR(get__doc__,
"D.get(k[,d]) -> D[k] if k in D, else d.  d defaults to None.");
PyDoc_STRVAR(setdefault_doc__,
"D.setdefault(k[,d]) -> D.get(k,d), also set D[k]=d if k not in D");
PyDoc_STRVAR(pop__doc__,
"D.pop(k[,d]) -> v, remove specified key and return the corresponding value.\n\
If key is not found, d is returned if given, otherwise KeyError is raised");
PyDoc_STRVAR(popitem__doc__,
"D.popitem() -> (k, v), remove and return some (key, value) pair as a\n\
2-tuple; but raise KeyError if D is empty.");
PyDoc_STRVAR(keys__doc__,
"D.keys() -> list of D's keys");
PyDoc_STRVAR(items__doc__,
"D.items() -> list of D's (key, value) pairs, as 2-tuples");
PyDoc_STRVAR(values__doc__,
"D.values() -> list of D's values");
PyDoc_STRVAR(update__doc__,
"D.update([E, ]**F) -> None.  Update D from dict/iterable E and F.\n"
"If E present and has a .keys() method, does:     for k in E: D[k] = E[k]\n\
If E present and lacks .keys() method, does:     for (k, v) in E: D[k] = v\n\
In either case, this is followed by: for k in F: D[k] = F[k]");
PyDoc_STRVAR(fromkeys__doc__,
"dict.fromkeys(S[,v]) -> New dict with keys from S and values equal to v.\n\
v defaults to None.");
PyDoc_STRVAR(clear__doc__,
"D.clear() -> None.  Remove all items from D.");
PyDoc_STRVAR(copy__doc__,
"D.copy() -> a shallow copy of D");
PyDoc_STRVAR(iterkeys__doc__,
"D.iterkeys() -> an iterator over the keys of D");
PyDoc_STRVAR(itervalues__doc__,
"D.itervalues() -> an iterator over the values of D");
PyDoc_STRVAR(iteritems__doc__,
"D.iteritems() -> an iterator over the (key, value) items of D");
static PyObject *dictkeys_new(PyObject *);
static PyObject *dictitems_new(PyObject *);
static PyObject *dictvalues_new(PyObject *);
PyDoc_STRVAR(viewkeys__doc__,
"D.viewkeys() -> a set-like object providing a view on D's keys");
PyDoc_STRVAR(viewitems__doc__,
"D.viewitems() -> a set-like object providing a view on D's items");
PyDoc_STRVAR(viewvalues__doc__,
"D.viewvalues() -> an object providing a view on D's values");
static PyMethodDef mapp_methods[] = ;
int
PyDict_Contains(PyObject *op, PyObject *key)
int
_PyDict_Contains(PyObject *op, PyObject *key, long hash)
static PySequenceMethods dict_as_sequence = ;
static PyObject *
dict_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
static int
dict_init(PyObject *self, PyObject *args, PyObject *kwds)
static PyObject *
dict_iter(PyDictObject *dict)
PyDoc_STRVAR(dictionary_doc,
"dict() -> new empty dictionary\n"
"dict(mapping) -> new dictionary initialized from a mapping object's\n"
"    (key, value) pairs\n"
"dict(iterable) -> new dictionary initialized as if via:\n"
"    d = \n"
"    for k, v in iterable:\n"
"        d[k] = v\n"
"dict(**kwargs) -> new dictionary initialized with the name=value pairs\n"
"    in the keyword argument list.  For example:  dict(one=1, two=2)");
PyTypeObject PyDict_Type = ;
PyObject *
PyDict_GetItemString(PyObject *v, const char *key)
int
PyDict_SetItemString(PyObject *v, const char *key, PyObject *item)
int
PyDict_DelItemString(PyObject *v, const char *key)
typedef struct  dictiterobject;
static PyObject *
dictiter_new(PyDictObject *dict, PyTypeObject *itertype)
static void
dictiter_dealloc(dictiterobject *di)
static int
dictiter_traverse(dictiterobject *di, visitproc visit, void *arg)
static PyObject *
dictiter_len(dictiterobject *di)
PyDoc_STRVAR(length_hint_doc, "Private method returning an estimate of len(list(it)).");
static PyMethodDef dictiter_methods[] = ;
static PyObject *dictiter_iternextkey(dictiterobject *di)
PyTypeObject PyDictIterKey_Type = ;
static PyObject *dictiter_iternextvalue(dictiterobject *di)
PyTypeObject PyDictIterValue_Type = ;
static PyObject *dictiter_iternextitem(dictiterobject *di)
PyTypeObject PyDictIterItem_Type = ;
typedef struct  dictviewobject;
static void
dictview_dealloc(dictviewobject *dv)
static int
dictview_traverse(dictviewobject *dv, visitproc visit, void *arg)
static Py_ssize_t
dictview_len(dictviewobject *dv)
static PyObject *
dictview_new(PyObject *dict, PyTypeObject *type)
static int
all_contained_in(PyObject *self, PyObject *other)
static PyObject *
dictview_richcompare(PyObject *self, PyObject *other, int op)
static PyObject *
dictview_repr(dictviewobject *dv)
static PyObject *
dictkeys_iter(dictviewobject *dv)
static int
dictkeys_contains(dictviewobject *dv, PyObject *obj)
static PySequenceMethods dictkeys_as_sequence = ;
static PyObject*
dictviews_sub(PyObject* self, PyObject *other)
static PyObject*
dictviews_and(PyObject* self, PyObject *other)
static PyObject*
dictviews_or(PyObject* self, PyObject *other)
static PyObject*
dictviews_xor(PyObject* self, PyObject *other)
static PyNumberMethods dictviews_as_number = ;
static PyMethodDef dictkeys_methods[] = ;
PyTypeObject PyDictKeys_Type = ;
static PyObject *
dictkeys_new(PyObject *dict)
static PyObject *
dictitems_iter(dictviewobject *dv)
static int
dictitems_contains(dictviewobject *dv, PyObject *obj)
static PySequenceMethods dictitems_as_sequence = ;
static PyMethodDef dictitems_methods[] = ;
PyTypeObject PyDictItems_Type = ;
static PyObject *
dictitems_new(PyObject *dict)
static PyObject *
dictvalues_iter(dictviewobject *dv)
static PySequenceMethods dictvalues_as_sequence = ;
static PyMethodDef dictvalues_methods[] = ;
PyTypeObject PyDictValues_Type = ;
static PyObject *
dictvalues_new(PyObject *dict)
