#define AS_GC(o) ((PyGC_Head *)(o)-1)
#define FROM_GC(g) ((PyObject *)(((PyGC_Head *)g)+1))
struct gc_generation ;
#define NUM_GENERATIONS 3
#define GEN_HEAD(n) (&generations[n].head)
static struct gc_generation generations[NUM_GENERATIONS] = ;
PyGC_Head *_PyGC_generation0 = GEN_HEAD(0);
static int enabled = 1;
static int collecting = 0;
static PyObject *garbage = NULL;
static PyObject *gc_str = NULL;
static PyObject *delstr = NULL;
static Py_ssize_t long_lived_total = 0;
static Py_ssize_t long_lived_pending = 0;
#define DEBUG_STATS             (1<<0)
#define DEBUG_COLLECTABLE       (1<<1)
#define DEBUG_UNCOLLECTABLE     (1<<2)
#define DEBUG_INSTANCES         (1<<3)
#define DEBUG_OBJECTS           (1<<4)
#define DEBUG_SAVEALL           (1<<5)
#define DEBUG_LEAK              DEBUG_COLLECTABLE | \
DEBUG_UNCOLLECTABLE | \
DEBUG_INSTANCES | \
DEBUG_OBJECTS | \
DEBUG_SAVEALL
static int debug;
static PyObject *tmod = NULL;
#define GC_UNTRACKED                    _PyGC_REFS_UNTRACKED
#define GC_REACHABLE                    _PyGC_REFS_REACHABLE
#define GC_TENTATIVELY_UNREACHABLE      _PyGC_REFS_TENTATIVELY_UNREACHABLE
#define IS_TRACKED(o) ((AS_GC(o))->gc.gc_refs != GC_UNTRACKED)
#define IS_REACHABLE(o) ((AS_GC(o))->gc.gc_refs == GC_REACHABLE)
#define IS_TENTATIVELY_UNREACHABLE(o) ( \
(AS_GC(o))->gc.gc_refs == GC_TENTATIVELY_UNREACHABLE)
static void
gc_list_init(PyGC_Head *list)
static int
gc_list_is_empty(PyGC_Head *list)
static void
gc_list_remove(PyGC_Head *node)
static void
gc_list_move(PyGC_Head *node, PyGC_Head *list)
static void
gc_list_merge(PyGC_Head *from, PyGC_Head *to)
static Py_ssize_t
gc_list_size(PyGC_Head *list)
static int
append_objects(PyObject *py_list, PyGC_Head *gc_list)
static void
update_refs(PyGC_Head *containers)
static int
visit_decref(PyObject *op, void *data)
static void
subtract_refs(PyGC_Head *containers)
static int
visit_reachable(PyObject *op, PyGC_Head *reachable)
static void
move_unreachable(PyGC_Head *young, PyGC_Head *unreachable)
static int
has_finalizer(PyObject *op)
static void
untrack_dicts(PyGC_Head *head)
static void
move_finalizers(PyGC_Head *unreachable, PyGC_Head *finalizers)
static int
visit_move(PyObject *op, PyGC_Head *tolist)
static void
move_finalizer_reachable(PyGC_Head *finalizers)
static int
handle_weakrefs(PyGC_Head *unreachable, PyGC_Head *old)
static void
debug_instance(char *msg, PyInstanceObject *inst)
static void
debug_cycle(char *msg, PyObject *op)
static int
handle_finalizers(PyGC_Head *finalizers, PyGC_Head *old)
static void
delete_garbage(PyGC_Head *collectable, PyGC_Head *old)
static void
clear_freelists(void)
static double
get_time(void)
static Py_ssize_t
collect(int generation)
static Py_ssize_t
collect_generations(void)
PyDoc_STRVAR(gc_enable__doc__,
);
static PyObject *
gc_enable(PyObject *self, PyObject *noargs)
PyDoc_STRVAR(gc_disable__doc__,
);
static PyObject *
gc_disable(PyObject *self, PyObject *noargs)
PyDoc_STRVAR(gc_isenabled__doc__,
);
static PyObject *
gc_isenabled(PyObject *self, PyObject *noargs)
PyDoc_STRVAR(gc_collect__doc__,
);
static PyObject *
gc_collect(PyObject *self, PyObject *args, PyObject *kws)
PyDoc_STRVAR(gc_set_debug__doc__,
);
static PyObject *
gc_set_debug(PyObject *self, PyObject *args)
PyDoc_STRVAR(gc_get_debug__doc__,
);
static PyObject *
gc_get_debug(PyObject *self, PyObject *noargs)
PyDoc_STRVAR(gc_set_thresh__doc__,
);
static PyObject *
gc_set_thresh(PyObject *self, PyObject *args)
PyDoc_STRVAR(gc_get_thresh__doc__,
);
static PyObject *
gc_get_thresh(PyObject *self, PyObject *noargs)
PyDoc_STRVAR(gc_get_count__doc__,
);
static PyObject *
gc_get_count(PyObject *self, PyObject *noargs)
static int
referrersvisit(PyObject* obj, PyObject *objs)
static int
gc_referrers_for(PyObject *objs, PyGC_Head *list, PyObject *resultlist)
PyDoc_STRVAR(gc_get_referrers__doc__,
"get_referrers(*objs) -> list\n\
Return the list of objects that directly refer to any of objs.");
static PyObject *
gc_get_referrers(PyObject *self, PyObject *args)
static int
referentsvisit(PyObject *obj, PyObject *list)
PyDoc_STRVAR(gc_get_referents__doc__,
"get_referents(*objs) -> list\n\
Return the list of objects that are directly referred to by objs.");
static PyObject *
gc_get_referents(PyObject *self, PyObject *args)
PyDoc_STRVAR(gc_get_objects__doc__,
);
static PyObject *
gc_get_objects(PyObject *self, PyObject *noargs)
PyDoc_STRVAR(gc_is_tracked__doc__,
);
static PyObject *
gc_is_tracked(PyObject *self, PyObject *obj)
PyDoc_STRVAR(gc__doc__,
);
static PyMethodDef GcMethods[] = ;
PyMODINIT_FUNC
initgc(void)
Py_ssize_t
PyGC_Collect(void)
void
_PyGC_Dump(PyGC_Head *g)
#undef PyObject_GC_Track
#undef PyObject_GC_UnTrack
#undef PyObject_GC_Del
#undef _PyObject_GC_Malloc
void
PyObject_GC_Track(void *op)
void
_PyObject_GC_Track(PyObject *op)
void
PyObject_GC_UnTrack(void *op)
void
_PyObject_GC_UnTrack(PyObject *op)
PyObject *
_PyObject_GC_Malloc(size_t basicsize)
PyObject *
_PyObject_GC_New(PyTypeObject *tp)
PyVarObject *
_PyObject_GC_NewVar(PyTypeObject *tp, Py_ssize_t nitems)
PyVarObject *
_PyObject_GC_Resize(PyVarObject *op, Py_ssize_t nitems)
void
PyObject_GC_Del(void *op)
#undef _PyObject_GC_Del
void
_PyObject_GC_Del(PyObject *op)
