static PyCFunctionObject *free_list = NULL;
static int numfree = 0;
#define PyCFunction_MAXFREELIST 256
PyObject *
PyCFunction_NewEx(PyMethodDef *ml, PyObject *self, PyObject *module)
PyCFunction
PyCFunction_GetFunction(PyObject *op)
PyObject *
PyCFunction_GetSelf(PyObject *op)
int
PyCFunction_GetFlags(PyObject *op)
PyObject *
PyCFunction_Call(PyObject *func, PyObject *arg, PyObject *kw)
static void
meth_dealloc(PyCFunctionObject *m)
static PyObject *
meth_get__doc__(PyCFunctionObject *m, void *closure)
static PyObject *
meth_get__name__(PyCFunctionObject *m, void *closure)
static int
meth_traverse(PyCFunctionObject *m, visitproc visit, void *arg)
static PyObject *
meth_get__self__(PyCFunctionObject *m, void *closure)
static PyGetSetDef meth_getsets [] = ;
#define OFF(x) offsetof(PyCFunctionObject, x)
static PyMemberDef meth_members[] = ;
static PyObject *
meth_repr(PyCFunctionObject *m)
static int
meth_compare(PyCFunctionObject *a, PyCFunctionObject *b)
static PyObject *
meth_richcompare(PyObject *self, PyObject *other, int op)
static long
meth_hash(PyCFunctionObject *a)
PyTypeObject PyCFunction_Type = ;
static PyObject *
listmethodchain(PyMethodChain *chain)
PyObject *
Py_FindMethodInChain(PyMethodChain *chain, PyObject *self, const char *name)
PyObject *
Py_FindMethod(PyMethodDef *methods, PyObject *self, const char *name)
int
PyCFunction_ClearFreeList(void)
void
PyCFunction_Fini(void)
#undef PyCFunction_New
PyAPI_FUNC(PyObject *) PyCFunction_New(PyMethodDef *, PyObject *);
PyObject *
PyCFunction_New(PyMethodDef *ml, PyObject *self)
