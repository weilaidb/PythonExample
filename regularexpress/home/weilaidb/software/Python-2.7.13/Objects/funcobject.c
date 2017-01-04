PyObject *
PyFunction_New(PyObject *code, PyObject *globals)
PyObject *
PyFunction_GetCode(PyObject *op)
PyObject *
PyFunction_GetGlobals(PyObject *op)
PyObject *
PyFunction_GetModule(PyObject *op)
PyObject *
PyFunction_GetDefaults(PyObject *op)
int
PyFunction_SetDefaults(PyObject *op, PyObject *defaults)
PyObject *
PyFunction_GetClosure(PyObject *op)
int
PyFunction_SetClosure(PyObject *op, PyObject *closure)
#define OFF(x) offsetof(PyFunctionObject, x)
static PyMemberDef func_memberlist[] = ;
static int
restricted(void)
static PyObject *
func_get_dict(PyFunctionObject *op)
static int
func_set_dict(PyFunctionObject *op, PyObject *value)
static PyObject *
func_get_code(PyFunctionObject *op)
static int
func_set_code(PyFunctionObject *op, PyObject *value)
static PyObject *
func_get_name(PyFunctionObject *op)
static int
func_set_name(PyFunctionObject *op, PyObject *value)
static PyObject *
func_get_defaults(PyFunctionObject *op)
static int
func_set_defaults(PyFunctionObject *op, PyObject *value)
static PyGetSetDef func_getsetlist[] = ;
PyDoc_STRVAR(func_doc,
"function(code, globals[, name[, argdefs[, closure]]])\n\
\n\
Create a function object from a code object and a dictionary.\n\
The optional name string overrides the name from the code object.\n\
The optional argdefs tuple specifies the default argument values.\n\
The optional closure tuple supplies the bindings for free variables.");
static PyObject *
func_new(PyTypeObject* type, PyObject* args, PyObject* kw)
static void
func_dealloc(PyFunctionObject *op)
static PyObject*
func_repr(PyFunctionObject *op)
static int
func_traverse(PyFunctionObject *f, visitproc visit, void *arg)
static PyObject *
function_call(PyObject *func, PyObject *arg, PyObject *kw)
static PyObject *
func_descr_get(PyObject *func, PyObject *obj, PyObject *type)
PyTypeObject PyFunction_Type = ;
typedef struct  classmethod;
static void
cm_dealloc(classmethod *cm)
static int
cm_traverse(classmethod *cm, visitproc visit, void *arg)
static int
cm_clear(classmethod *cm)
static PyObject *
cm_descr_get(PyObject *self, PyObject *obj, PyObject *type)
static int
cm_init(PyObject *self, PyObject *args, PyObject *kwds)
static PyMemberDef cm_memberlist[] = ;
PyDoc_STRVAR(classmethod_doc,
"classmethod(function) -> method\n\
\n\
Convert a function to be a class method.\n\
\n\
A class method receives the class as implicit first argument,\n\
just like an instance method receives the instance.\n\
To declare a class method, use this idiom:\n\
\n\
class C:\n\
@classmethod\n\
def f(cls, arg1, arg2, ...):\n\
...\n\
\n\
It can be called either on the class (e.g. C.f()) or on an instance\n\
(e.g. C().f()).  The instance is ignored except for its class.\n\
If a class method is called for a derived class, the derived class\n\
object is passed as the implied first argument.\n\
\n\
Class methods are different than C++ or Java static methods.\n\
If you want those, see the staticmethod builtin.");
PyTypeObject PyClassMethod_Type = ;
PyObject *
PyClassMethod_New(PyObject *callable)
typedef struct  staticmethod;
static void
sm_dealloc(staticmethod *sm)
static int
sm_traverse(staticmethod *sm, visitproc visit, void *arg)
static int
sm_clear(staticmethod *sm)
static PyObject *
sm_descr_get(PyObject *self, PyObject *obj, PyObject *type)
static int
sm_init(PyObject *self, PyObject *args, PyObject *kwds)
static PyMemberDef sm_memberlist[] = ;
PyDoc_STRVAR(staticmethod_doc,
"staticmethod(function) -> method\n\
\n\
Convert a function to be a static method.\n\
\n\
A static method does not receive an implicit first argument.\n\
To declare a static method, use this idiom:\n\
\n\
class C:\n\
@staticmethod\n\
def f(arg1, arg2, ...):\n\
...\n\
\n\
It can be called either on the class (e.g. C.f()) or on an instance\n\
(e.g. C().f()).  The instance is ignored except for its class.\n\
\n\
Static methods in Python are similar to those found in Java or C++.\n\
For a more advanced concept, see the classmethod builtin.");
PyTypeObject PyStaticMethod_Type = ;
PyObject *
PyStaticMethod_New(PyObject *callable)
