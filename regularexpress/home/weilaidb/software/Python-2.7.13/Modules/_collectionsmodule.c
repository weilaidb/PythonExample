#define BLOCKLEN 62
#define CENTER ((BLOCKLEN - 1) / 2)
typedef struct BLOCK  block;
#define MAXFREEBLOCKS 10
static Py_ssize_t numfreeblocks = 0;
static block *freeblocks[MAXFREEBLOCKS];
static block *
newblock(block *leftlink, block *rightlink, Py_ssize_t len)
static void
freeblock(block *b)
typedef struct  dequeobject;
#define TRIM(d, popfunction)                                    \
if (d->maxlen != -1 && d->len > d->maxlen)
static PyTypeObject deque_type;
static PyObject *
deque_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
static PyObject *
deque_pop(dequeobject *deque, PyObject *unused)
PyDoc_STRVAR(pop_doc, );
static PyObject *
deque_popleft(dequeobject *deque, PyObject *unused)
PyDoc_STRVAR(popleft_doc, );
static PyObject *
deque_append(dequeobject *deque, PyObject *item)
PyDoc_STRVAR(append_doc, );
static PyObject *
deque_appendleft(dequeobject *deque, PyObject *item)
PyDoc_STRVAR(appendleft_doc, );
static PyObject*
consume_iterator(PyObject *it)
static PyObject *
deque_extend(dequeobject *deque, PyObject *iterable)
PyDoc_STRVAR(extend_doc,
);
static PyObject *
deque_extendleft(dequeobject *deque, PyObject *iterable)
PyDoc_STRVAR(extendleft_doc,
);
static PyObject *
deque_inplace_concat(dequeobject *deque, PyObject *other)
static int
_deque_rotate(dequeobject *deque, Py_ssize_t n)
static PyObject *
deque_rotate(dequeobject *deque, PyObject *args)
PyDoc_STRVAR(rotate_doc,
);
static PyObject *
deque_reverse(dequeobject *deque, PyObject *unused)
PyDoc_STRVAR(reverse_doc,
);
static PyObject *
deque_count(dequeobject *deque, PyObject *v)
PyDoc_STRVAR(count_doc,
);
static Py_ssize_t
deque_len(dequeobject *deque)
static PyObject *
deque_remove(dequeobject *deque, PyObject *value)
PyDoc_STRVAR(remove_doc,
);
static void
deque_clear(dequeobject *deque)
static PyObject *
deque_item(dequeobject *deque, Py_ssize_t i)
static int
deque_del_item(dequeobject *deque, Py_ssize_t i)
static int
deque_ass_item(dequeobject *deque, Py_ssize_t i, PyObject *v)
static PyObject *
deque_clearmethod(dequeobject *deque)
PyDoc_STRVAR(clear_doc, );
static void
deque_dealloc(dequeobject *deque)
static int
deque_traverse(dequeobject *deque, visitproc visit, void *arg)
static PyObject *
deque_copy(PyObject *deque)
PyDoc_STRVAR(copy_doc, );
static PyObject *
deque_reduce(dequeobject *deque)
PyDoc_STRVAR(reduce_doc, );
static PyObject *
deque_repr(PyObject *deque)
static int
deque_tp_print(PyObject *deque, FILE *fp, int flags)
static PyObject *
deque_richcompare(PyObject *v, PyObject *w, int op)
static int
deque_init(dequeobject *deque, PyObject *args, PyObject *kwdargs)
static PyObject *
deque_sizeof(dequeobject *deque, void *unused)
PyDoc_STRVAR(sizeof_doc,
);
static PyObject *
deque_get_maxlen(dequeobject *deque)
static PyGetSetDef deque_getset[] = ;
static PySequenceMethods deque_as_sequence = ;
static PyObject *deque_iter(dequeobject *deque);
static PyObject *deque_reviter(dequeobject *deque);
PyDoc_STRVAR(reversed_doc,
);
static PyMethodDef deque_methods[] = ;
PyDoc_STRVAR(deque_doc,
"deque([iterable[, maxlen]]) --> deque object\n\
\n\
Build an ordered collection with optimized access from its endpoints.");
static PyTypeObject deque_type = ;
typedef struct  dequeiterobject;
static PyTypeObject dequeiter_type;
static PyObject *
deque_iter(dequeobject *deque)
static int
dequeiter_traverse(dequeiterobject *dio, visitproc visit, void *arg)
static void
dequeiter_dealloc(dequeiterobject *dio)
static PyObject *
dequeiter_next(dequeiterobject *it)
static PyObject *
dequeiter_len(dequeiterobject *it)
PyDoc_STRVAR(length_hint_doc, );
static PyMethodDef dequeiter_methods[] = ;
static PyTypeObject dequeiter_type = ;
static PyTypeObject dequereviter_type;
static PyObject *
deque_reviter(dequeobject *deque)
static PyObject *
dequereviter_next(dequeiterobject *it)
static PyTypeObject dequereviter_type = ;
typedef struct  defdictobject;
static PyTypeObject defdict_type;
PyDoc_STRVAR(defdict_missing_doc,
"__missing__(key) # Called by __getitem__ for missing key; pseudo-code:\n\
if self.default_factory is None: raise KeyError((key,))\n\
self[key] = value = self.default_factory()\n\
return value\n\
");
static PyObject *
defdict_missing(defdictobject *dd, PyObject *key)
PyDoc_STRVAR(defdict_copy_doc, );
static PyObject *
defdict_copy(defdictobject *dd)
static PyObject *
defdict_reduce(defdictobject *dd)
static PyMethodDef defdict_methods[] = ;
static PyMemberDef defdict_members[] = ;
static void
defdict_dealloc(defdictobject *dd)
static int
defdict_print(defdictobject *dd, FILE *fp, int flags)
static PyObject *
defdict_repr(defdictobject *dd)
static int
defdict_traverse(PyObject *self, visitproc visit, void *arg)
static int
defdict_tp_clear(defdictobject *dd)
static int
defdict_init(PyObject *self, PyObject *args, PyObject *kwds)
PyDoc_STRVAR(defdict_doc,
"defaultdict(default_factory[, ...]) --> dict with default factory\n\
\n\
The default factory is called without arguments to produce\n\
a new value when a key is not present, in __getitem__ only.\n\
A defaultdict compares equal to a dict with the same items.\n\
All remaining arguments are treated the same as if they were\n\
passed to the dict constructor, including keyword arguments.\n\
");
#define DEFERRED_ADDRESS(ADDR) 0
static PyTypeObject defdict_type = ;
PyDoc_STRVAR(module_doc,
"High performance data structures.\n\
- deque:        ordered collection accessible from endpoints only\n\
- defaultdict:  dict subclass with a default value factory\n\
");
PyMODINIT_FUNC
init_collections(void)
