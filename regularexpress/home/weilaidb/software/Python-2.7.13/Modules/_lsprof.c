#if !defined(HAVE_LONG_LONG)
#error
static PY_LONG_LONG
hpTimer(void)
static double
hpTimerUnit(void)
#error
#if (defined(PYOS_OS2) && defined(PYCC_GCC))
static PY_LONG_LONG
hpTimer(void)
static double
hpTimerUnit(void)
struct _ProfilerEntry;
typedef struct _ProfilerSubEntry  ProfilerSubEntry;
typedef struct _ProfilerEntry  ProfilerEntry;
typedef struct _ProfilerContext  ProfilerContext;
typedef struct  ProfilerObject;
#define POF_ENABLED     0x001
#define POF_SUBCALLS    0x002
#define POF_BUILTINS    0x004
#define POF_NOMEMORY    0x100
staticforward PyTypeObject PyProfiler_Type;
#define PyProfiler_Check(op) PyObject_TypeCheck(op, &PyProfiler_Type)
#define PyProfiler_CheckExact(op) (Py_TYPE(op) == &PyProfiler_Type)
#define DOUBLE_TIMER_PRECISION   4294967296.0
static PyObject *empty_tuple;
static PY_LONG_LONG CallExternalTimer(ProfilerObject *pObj)
#define CALL_TIMER(pObj)        ((pObj)->externalTimer ?                \
CallExternalTimer(pObj) :       \
hpTimer())
static PyObject *
normalizeUserObj(PyObject *obj)
static ProfilerEntry*
newProfilerEntry(ProfilerObject *pObj, void *key, PyObject *userObj)
static ProfilerEntry*
getEntry(ProfilerObject *pObj, void *key)
static ProfilerSubEntry *
getSubEntry(ProfilerObject *pObj, ProfilerEntry *caller, ProfilerEntry* entry)
static ProfilerSubEntry *
newSubEntry(ProfilerObject *pObj,  ProfilerEntry *caller, ProfilerEntry* entry)
static int freeSubEntry(rotating_node_t *header, void *arg)
static int freeEntry(rotating_node_t *header, void *arg)
static void clearEntries(ProfilerObject *pObj)
static void
initContext(ProfilerObject *pObj, ProfilerContext *self, ProfilerEntry *entry)
static void
Stop(ProfilerObject *pObj, ProfilerContext *self, ProfilerEntry *entry)
static void
ptrace_enter_call(PyObject *self, void *key, PyObject *userObj)
static void
ptrace_leave_call(PyObject *self, void *key)
static int
profiler_callback(PyObject *self, PyFrameObject *frame, int what,
PyObject *arg)
static int
pending_exception(ProfilerObject *pObj)
static PyStructSequence_Field profiler_entry_fields[] = ;
static PyStructSequence_Field profiler_subentry_fields[] = ;
static PyStructSequence_Desc profiler_entry_desc = ;
static PyStructSequence_Desc profiler_subentry_desc = ;
static int initialized;
static PyTypeObject StatsEntryType;
static PyTypeObject StatsSubEntryType;
typedef struct  statscollector_t;
static int statsForSubEntry(rotating_node_t *node, void *arg)
static int statsForEntry(rotating_node_t *node, void *arg)
PyDoc_STRVAR(getstats_doc, "\
getstats() -> list of profiler_entry objects\n\
\n\
Return all information collected by the profiler.\n\
Each profiler_entry is a tuple-like object with the\n\
following attributes:\n\
\n\
code          code object\n\
callcount     how many times this was called\n\
reccallcount  how many times called recursively\n\
totaltime     total time in this entry\n\
inlinetime    inline time in this entry (not in subcalls)\n\
calls         details of the calls\n\
\n\
The calls attribute is either None or a list of\n\
profiler_subentry objects:\n\
\n\
code          called code object\n\
callcount     how many times this is called\n\
reccallcount  how many times this is called recursively\n\
totaltime     total time spent in this call\n\
inlinetime    inline time (not in further subcalls)\n\
");
static PyObject*
profiler_getstats(ProfilerObject *pObj, PyObject* noarg)
static int
setSubcalls(ProfilerObject *pObj, int nvalue)
static int
setBuiltins(ProfilerObject *pObj, int nvalue)
PyDoc_STRVAR(enable_doc, "\
enable(subcalls=True, builtins=True)\n\
\n\
Start collecting profiling information.\n\
If 'subcalls' is True, also records for each function\n\
statistics separated according to its current caller.\n\
If 'builtins' is True, records the time spent in\n\
built-in functions separately from their caller.\n\
");
static PyObject*
profiler_enable(ProfilerObject *self, PyObject *args, PyObject *kwds)
static void
flush_unmatched(ProfilerObject *pObj)
PyDoc_STRVAR(disable_doc, "\
disable()\n\
\n\
Stop collecting profiling information.\n\
");
static PyObject*
profiler_disable(ProfilerObject *self, PyObject* noarg)
PyDoc_STRVAR(clear_doc, "\
clear()\n\
\n\
Clear all profiling information collected so far.\n\
");
static PyObject*
profiler_clear(ProfilerObject *pObj, PyObject* noarg)
static void
profiler_dealloc(ProfilerObject *op)
static int
profiler_init(ProfilerObject *pObj, PyObject *args, PyObject *kw)
static PyMethodDef profiler_methods[] = ;
PyDoc_STRVAR(profiler_doc, "\
Profiler(custom_timer=None, time_unit=None, subcalls=True, builtins=True)\n\
\n\
Builds a profiler object using the specified timer function.\n\
The default timer is a fast built-in one based on real time.\n\
For custom timer functions returning integers, time_unit can\n\
be a float specifying a scale (i.e. how long each integer unit\n\
is, in seconds).\n\
");
statichere PyTypeObject PyProfiler_Type = ;
static PyMethodDef moduleMethods[] = ;
PyMODINIT_FUNC
init_lsprof(void)
