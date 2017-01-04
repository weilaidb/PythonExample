#define OFF(x) offsetof(PyTracebackObject, x)
static PyMemberDef tb_memberlist[] = ;
static void
tb_dealloc(PyTracebackObject *tb)
static int
tb_traverse(PyTracebackObject *tb, visitproc visit, void *arg)
static void
tb_clear(PyTracebackObject *tb)
PyTypeObject PyTraceBack_Type = ;
static PyTracebackObject *
newtracebackobject(PyTracebackObject *next, PyFrameObject *frame)
int
PyTraceBack_Here(PyFrameObject *frame)
int
_Py_DisplaySourceLine(PyObject *f, const char *filename, int lineno, int indent)
static int
tb_displayline(PyObject *f, const char *filename, int lineno, const char *name)
static int
tb_printinternal(PyTracebackObject *tb, PyObject *f, long limit)
int
PyTraceBack_Print(PyObject *v, PyObject *f)
