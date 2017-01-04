static int
bool_print(PyBoolObject *self, FILE *fp, int flags)
static PyObject *false_str = NULL;
static PyObject *true_str = NULL;
static PyObject *
bool_repr(PyBoolObject *self)
PyObject *PyBool_FromLong(long ok)
static PyObject *
bool_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
static PyObject *
bool_and(PyObject *a, PyObject *b)
static PyObject *
bool_or(PyObject *a, PyObject *b)
static PyObject *
bool_xor(PyObject *a, PyObject *b)
PyDoc_STRVAR(bool_doc,
"bool(x) -> bool\n\
\n\
Returns True when the argument x is true, False otherwise.\n\
The builtins True and False are the only two instances of the class bool.\n\
The class bool is a subclass of the class int, and cannot be subclassed.");
static PyNumberMethods bool_as_number = ;
PyTypeObject PyBool_Type = ;
PyIntObject _Py_ZeroStruct = ;
PyIntObject _Py_TrueStruct = ;
