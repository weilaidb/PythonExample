#define PyBlock_Check(op) ((op)->ob_type == &PyBlockType)
static PyObject *SwiError;
static PyObject *ArgError;
static os_error *e;
static PyObject *swi_oserror(void)
static PyObject *swi_error(char *s)
typedef struct
PyBlockObject;
static PyTypeObject PyBlockType;
static PyObject *PyBlock_New(PyObject *self,PyObject *args)
static PyObject *PyRegister(PyObject *self,PyObject *args)
static PyObject *PyBlock_ToString(PyBlockObject *self,PyObject *arg)
static PyObject *PyBlock_NullString(PyBlockObject *self,PyObject *arg)
static PyObject *PyBlock_CtrlString(PyBlockObject *self,PyObject *arg)
static PyObject *PyBlock_PadString(PyBlockObject *self,PyObject *arg)
static PyObject *PyBlock_BitSet(PyBlockObject *self,PyObject *arg)
static PyObject *PyBlock_Resize(PyBlockObject *self,PyObject *arg)
static PyObject *PyBlock_ToFile(PyBlockObject *self,PyObject *arg)
static struct PyMethodDef PyBlock_Methods[]=
;
static int block_len(PyBlockObject *b)
static PyObject *block_concat(PyBlockObject *b,PyBlockObject *c)
static PyObject *block_repeat(PyBlockObject *b,Py_ssize_t i)
static PyObject *block_item(PyBlockObject *b,Py_ssize_t i)
static PyObject *block_slice(PyBlockObject *b,Py_ssize_t i,Py_ssize_t j)
static int block_ass_item(PyBlockObject *b,Py_ssize_t i,PyObject *v)
static int block_ass_slice(PyBlockObject *b,Py_ssize_t i,Py_ssize_t j,PyObject *v)
static PySequenceMethods block_as_sequence=
;
static PyObject *PyBlock_GetAttr(PyBlockObject *s,char *name)
static void PyBlock_Dealloc(PyBlockObject *b)
static PyTypeObject PyBlockType=
;
static PyObject *swi_swi(PyObject *self,PyObject *args)
static PyObject *swi_string(PyObject *self, PyObject *arg)
static char swi_string__doc__[] =
"string(address[, length]) -> string\n\
Read a null terminated string from the given address.";
static PyObject *swi_integer(PyObject *self, PyObject *arg)
static char swi_integer__doc__[] =
"integer(address) -> string\n\
Read an integer from the given address.";
static PyObject *swi_integers(PyObject *self, PyObject *arg)
static char swi_integers__doc__[] =
"integers(address[, count]) -> string\n\
Either read a null terminated list of integers or\n\
a list of given length from the given address.";
static PyObject *swi_tuples(PyObject *self, PyObject *arg)
static char swi_tuples__doc__[] =
"tuples(address[, length=4[, count]]) -> string\n\
Either read a null terminated list of byte tuples or\n\
a list of given length from the given address.";
static PyObject *swi_tuple(PyObject *self, PyObject *arg)
static char swi_tuple__doc__[] =
"tuple(address[, count=1]]) -> tuple\n\
Read count bytes from given address.";
static PyMethodDef SwiMethods[]=
;
void initswi()
