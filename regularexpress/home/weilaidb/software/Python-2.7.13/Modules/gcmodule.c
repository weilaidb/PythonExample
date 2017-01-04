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
"enable() -> None\n"
"\n"
"Enable automatic garbage collection.\n");
static PyObject *
gc_enable(PyObject *self, PyObject *noargs)
PyDoc_STRVAR(gc_disable__doc__,
"disable() -> None\n"
"\n"
"Disable automatic garbage collection.\n");
static PyObject *
gc_disable(PyObject *self, PyObject *noargs)
PyDoc_STRVAR(gc_isenabled__doc__,
"isenabled() -> status\n"
"\n"
"Returns true if automatic garbage collection is enabled.\n");
static PyObject *
gc_isenabled(PyObject *self, PyObject *noargs)
PyDoc_STRVAR(gc_collect__doc__,
"collect([generation]) -> n\n"
"\n"
"With no arguments, run a full collection.  The optional argument\n"
"may be an integer specifying which generation to collect.  A ValueError\n"
"is raised if the generation number is invalid.\n\n"
"The number of unreachable objects is returned.\n");
static PyObject *
gc_collect(PyObject *self, PyObject *args, PyObject *kws)
PyDoc_STRVAR(gc_set_debug__doc__,
"set_debug(flags) -> None\n"
"\n"
"Set the garbage collection debugging flags. Debugging information is\n"
"written to sys.stderr.\n"
"\n"
"flags is an integer and can have the following bits turned on:\n"
"\n"
"  DEBUG_STATS - Print statistics during collection.\n"
"  DEBUG_COLLECTABLE - Print collectable objects found.\n"
"  DEBUG_UNCOLLECTABLE - Print unreachable but uncollectable objects found.\n"
"  DEBUG_INSTANCES - Print instance objects.\n"
"  DEBUG_OBJECTS - Print objects other than instances.\n"
"  DEBUG_SAVEALL - Save objects to gc.garbage rather than freeing them.\n"
"  DEBUG_LEAK - Debug leaking programs (everything but STATS).\n");
static PyObject *
gc_set_debug(PyObject *self, PyObject *args)
PyDoc_STRVAR(gc_get_debug__doc__,
"get_debug() -> flags\n"
"\n"
"Get the garbage collection debugging flags.\n");
static PyObject *
gc_get_debug(PyObject *self, PyObject *noargs)
PyDoc_STRVAR(gc_set_thresh__doc__,
"set_threshold(threshold0, [threshold1, threshold2]) -> None\n"
"\n"
"Sets the collection thresholds.  Setting threshold0 to zero disables\n"
"collection.\n");
static PyObject *
gc_set_thresh(PyObject *self, PyObject *args)
PyDoc_STRVAR(gc_get_thresh__doc__,
"get_threshold() -> (threshold0, threshold1, threshold2)\n"
"\n"
"Return the current collection thresholds\n");
static PyObject *
gc_get_thresh(PyObject *self, PyObject *noargs)
PyDoc_STRVAR(gc_get_count__doc__,
"get_count() -> (count0, count1, count2)\n"
"\n"
"Return the current collection counts\n");
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
"get_objects() -> [...]\n"
"\n"
"Return a list of objects tracked by the collector (excluding the list\n"
"returned).\n");
static PyObject *
gc_get_objects(PyObject *self, PyObject *noargs)
PyDoc_STRVAR(gc_is_tracked__doc__,
"is_tracked(obj) -> bool\n"
"\n"
"Returns true if the object is tracked by the garbage collector.\n"
"Simple atomic objects will return false.\n"
);
static PyObject *
gc_is_tracked(PyObject *self, PyObject *obj)
PyDoc_STRVAR(gc__doc__,
"This module provides access to the garbage collector for reference cycles.\n"
"\n"
"enable() -- Enable automatic garbage collection.\n"
"disable() -- Disable automatic garbage collection.\n"
"isenabled() -- Returns true if automatic collection is enabled.\n"
"collect() -- Do a full collection right now.\n"
"get_count() -- Return the current collection counts.\n"
"set_debug() -- Set debugging flags.\n"
"get_debug() -- Get debugging flags.\n"
"set_threshold() -- Set the collection thresholds.\n"
"get_threshold() -- Return the current the collection thresholds.\n"
"get_objects() -- Return a list of all objects tracked by the collector.\n"
"is_tracked() -- Returns true if a given object is tracked.\n"
"get_referrers() -- Return the list of objects that refer to an object.\n"
"get_referents() -- Return the list of objects that an object refers to.\n");
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
