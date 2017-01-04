#define PyMODINIT_FUNC void
#define PyDoc_STRVAR(Var,Str) static char Var[] = Str
#undef AUTOGIL_DEBUG
static PyObject *AutoGILError;
static void autoGILCallback(CFRunLoopObserverRef observer,
CFRunLoopActivity activity,
void *info)
static void infoRelease(const void *info)
static PyObject *
autoGIL_installAutoGIL(PyObject *self)
PyDoc_STRVAR(autoGIL_installAutoGIL_doc,
"installAutoGIL() -> None\n\
Install an observer callback in the event loop (CFRunLoop) for the\n\
current thread, that will lock and unlock the Global Interpreter Lock\n\
(GIL) at appropriate times, allowing other Python threads to run while\n\
the event loop is idle."
);
static PyMethodDef autoGIL_methods[] = ;
PyDoc_STRVAR(autoGIL_docs,
"The autoGIL module provides a function (installAutoGIL) that\n\
automatically locks and unlocks Python's Global Interpreter Lock\n\
when running an event loop."
);
PyMODINIT_FUNC
initautoGIL(void)
