#undef MIN
#undef MAX
#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define OFF(x) offsetof(PyFrameObject, x)
static PyMemberDef frame_memberlist[] = ;
#define WARN_GET_SET(NAME) \
static PyObject * frame_get_ ## NAME(PyFrameObject *f)  \
static int frame_set_ ## NAME(PyFrameObject *f, PyObject *new)
WARN_GET_SET(f_exc_traceback)
WARN_GET_SET(f_exc_type)
WARN_GET_SET(f_exc_value)
static PyObject *
frame_getlocals(PyFrameObject *f, void *closure)
int
PyFrame_GetLineNumber(PyFrameObject *f)
static PyObject *
frame_getlineno(PyFrameObject *f, void *closure)
static int
frame_setlineno(PyFrameObject *f, PyObject* p_new_lineno)
static PyObject *
frame_gettrace(PyFrameObject *f, void *closure)
static int
frame_settrace(PyFrameObject *f, PyObject* v, void *closure)
static PyObject *
frame_getrestricted(PyFrameObject *f, void *closure)
static PyGetSetDef frame_getsetlist[] = ;
static PyFrameObject *free_list = NULL;
static int numfree = 0;
#define PyFrame_MAXFREELIST 200
static void
frame_dealloc(PyFrameObject *f)
static int
frame_traverse(PyFrameObject *f, visitproc visit, void *arg)
static void
frame_clear(PyFrameObject *f)
static PyObject *
frame_sizeof(PyFrameObject *f)
PyDoc_STRVAR(sizeof__doc__,
);
static PyMethodDef frame_methods[] = ;
PyTypeObject PyFrame_Type = ;
static PyObject *builtin_object;
int _PyFrame_Init()
PyFrameObject *
PyFrame_New(PyThreadState *tstate, PyCodeObject *code, PyObject *globals,
PyObject *locals)
void
PyFrame_BlockSetup(PyFrameObject *f, int type, int handler, int level)
PyTryBlock *
PyFrame_BlockPop(PyFrameObject *f)
static void
map_to_dict(PyObject *map, Py_ssize_t nmap, PyObject *dict, PyObject **values,
int deref)
static void
dict_to_map(PyObject *map, Py_ssize_t nmap, PyObject *dict, PyObject **values,
int deref, int clear)
void
PyFrame_FastToLocals(PyFrameObject *f)
void
PyFrame_LocalsToFast(PyFrameObject *f, int clear)
int
PyFrame_ClearFreeList(void)
void
PyFrame_Fini(void)
