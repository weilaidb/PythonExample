#define NAME_CHARS \
"0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ_abcdefghijklmnopqrstuvwxyz"
static int
all_name_chars(PyObject *o)
static void
intern_strings(PyObject *tuple)
static int
intern_string_constants(PyObject *tuple)
PyCodeObject *
PyCode_New(int argcount, int nlocals, int stacksize, int flags,
PyObject *code, PyObject *consts, PyObject *names,
PyObject *varnames, PyObject *freevars, PyObject *cellvars,
PyObject *filename, PyObject *name, int firstlineno,
PyObject *lnotab)
PyCodeObject *
PyCode_NewEmpty(const char *filename, const char *funcname, int firstlineno)
#define OFF(x) offsetof(PyCodeObject, x)
static PyMemberDef code_memberlist[] = ;
static PyObject*
validate_and_copy_tuple(PyObject *tup)
PyDoc_STRVAR(code_doc,
"code(argcount, nlocals, stacksize, flags, codestring, constants, names,\n\
varnames, filename, name, firstlineno, lnotab[, freevars[, cellvars]])\n\
\n\
Create a code object.  Not for the faint of heart.");
static PyObject *
code_new(PyTypeObject *type, PyObject *args, PyObject *kw)
static void
code_dealloc(PyCodeObject *co)
static PyObject *
code_repr(PyCodeObject *co)
static int
code_compare(PyCodeObject *co, PyCodeObject *cp)
PyObject*
_PyCode_ConstantKey(PyObject *op)
static PyObject *
code_richcompare(PyObject *self, PyObject *other, int op)
static long
code_hash(PyCodeObject *co)
PyTypeObject PyCode_Type = ;
int
PyCode_Addr2Line(PyCodeObject *co, int addrq)
int
_PyCode_CheckLineNumber(PyCodeObject* co, int lasti, PyAddrPair *bounds)
