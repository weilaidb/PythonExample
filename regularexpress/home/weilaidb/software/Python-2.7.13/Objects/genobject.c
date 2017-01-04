static int
gen_traverse(PyGenObject *gen, visitproc visit, void *arg)
static void
gen_dealloc(PyGenObject *gen)
static PyObject *
gen_send_ex(PyGenObject *gen, PyObject *arg, int exc)
PyDoc_STRVAR(send_doc,
"send(arg) -> send 'arg' into generator,\n\
return next yielded value or raise StopIteration.");
static PyObject *
gen_send(PyGenObject *gen, PyObject *arg)
PyDoc_STRVAR(close_doc,
"close() -> raise GeneratorExit inside generator.");
static PyObject *
gen_close(PyGenObject *gen, PyObject *args)
static void
gen_del(PyObject *self)
PyDoc_STRVAR(throw_doc,
"throw(typ[,val[,tb]]) -> raise exception in generator,\n\
return next yielded value or raise StopIteration.");
static PyObject *
gen_throw(PyGenObject *gen, PyObject *args)
static PyObject *
gen_iternext(PyGenObject *gen)
static PyObject *
gen_repr(PyGenObject *gen)
static PyObject *
gen_get_name(PyGenObject *gen)
PyDoc_STRVAR(gen__name__doc__,
"Return the name of the generator's associated code object.");
static PyGetSetDef gen_getsetlist[] = ;
static PyMemberDef gen_memberlist[] = ;
static PyMethodDef gen_methods[] = ;
PyTypeObject PyGen_Type = ;
PyObject *
PyGen_New(PyFrameObject *f)
int
PyGen_NeedsFinalizing(PyGenObject *gen)
