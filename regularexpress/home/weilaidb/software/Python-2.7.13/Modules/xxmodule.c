static PyObject *ErrorObject;
typedef struct  XxoObject;
static PyTypeObject Xxo_Type;
#define XxoObject_Check(v)      (Py_TYPE(v) == &Xxo_Type)
static XxoObject *
newXxoObject(PyObject *arg)
static void
Xxo_dealloc(XxoObject *self)
static PyObject *
Xxo_demo(XxoObject *self, PyObject *args)
static PyMethodDef Xxo_methods[] = ;
static PyObject *
Xxo_getattr(XxoObject *self, char *name)
static int
Xxo_setattr(XxoObject *self, char *name, PyObject *v)
static PyTypeObject Xxo_Type = ;
PyDoc_STRVAR(xx_foo_doc,
"foo(i,j)\n\
\n\
Return the sum of i and j.");
static PyObject *
xx_foo(PyObject *self, PyObject *args)
static PyObject *
xx_new(PyObject *self, PyObject *args)
static PyObject *
xx_bug(PyObject *self, PyObject *args)
static PyObject *
xx_roj(PyObject *self, PyObject *args)
static PyTypeObject Str_Type = ;
static PyObject *
null_richcompare(PyObject *self, PyObject *other, int op)
static PyTypeObject Null_Type = ;
static PyMethodDef xx_methods[] = ;
PyDoc_STRVAR(module_doc,
"This is a template module just for instruction.");
PyMODINIT_FUNC
initxx(void)
