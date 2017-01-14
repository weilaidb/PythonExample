PyDoc_STRVAR(cStringIO_module_documentation,
);
typedef struct  IOobject;
#define IOOOBJECT(O) ((IOobject*)(O))
typedef struct  Oobject;
typedef struct  Iobject;
PyDoc_STRVAR(IO_flush__doc__, );
static int
IO__opencheck(IOobject *self)
static PyObject *
IO_get_closed(IOobject *self, void *closure)
static PyGetSetDef file_getsetlist[] = ;
static PyObject *
IO_flush(IOobject *self, PyObject *unused)
PyDoc_STRVAR(IO_getval__doc__,
);
static PyObject *
IO_cgetval(PyObject *self)
static PyObject *
IO_getval(IOobject *self, PyObject *args)
PyDoc_STRVAR(IO_isatty__doc__, );
static PyObject *
IO_isatty(IOobject *self, PyObject *unused)
PyDoc_STRVAR(IO_read__doc__,
);
static int
IO_cread(PyObject *self, char **output, Py_ssize_t  n)
static PyObject *
IO_read(IOobject *self, PyObject *args)
PyDoc_STRVAR(IO_readline__doc__, );
static int
IO_creadline(PyObject *self, char **output)
static PyObject *
IO_readline(IOobject *self, PyObject *args)
PyDoc_STRVAR(IO_readlines__doc__, );
static PyObject *
IO_readlines(IOobject *self, PyObject *args)
PyDoc_STRVAR(IO_reset__doc__,
);
static PyObject *
IO_reset(IOobject *self, PyObject *unused)
PyDoc_STRVAR(IO_tell__doc__, );
static PyObject *
IO_tell(IOobject *self, PyObject *unused)
PyDoc_STRVAR(IO_truncate__doc__,
);
static PyObject *
IO_truncate(IOobject *self, PyObject *args)
static PyObject *
IO_iternext(Iobject *self)
PyDoc_STRVAR(IO_seek__doc__,
);
static PyObject *
IO_seek(Iobject *self, PyObject *args)
PyDoc_STRVAR(O_write__doc__,
);
static int
O_cwrite(PyObject *self, const char *c, Py_ssize_t  len)
static PyObject *
O_write(Oobject *self, PyObject *args)
PyDoc_STRVAR(O_close__doc__, );
static PyObject *
O_close(Oobject *self, PyObject *unused)
PyDoc_STRVAR(O_writelines__doc__,
);
static PyObject *
O_writelines(Oobject *self, PyObject *args)
static struct PyMethodDef O_methods[] = ;
static PyMemberDef O_memberlist[] = ;
static void
O_dealloc(Oobject *self)
PyDoc_STRVAR(Otype__doc__, );
static PyTypeObject Otype = ;
static PyObject *
newOobject(int  size)
static PyObject *
I_close(Iobject *self, PyObject *unused)
static struct PyMethodDef I_methods[] = ;
static void
I_dealloc(Iobject *self)
PyDoc_STRVAR(Itype__doc__,
);
static PyTypeObject Itype = ;
static PyObject *
newIobject(PyObject *s)
PyDoc_STRVAR(IO_StringIO__doc__,
);
static PyObject *
IO_StringIO(PyObject *self, PyObject *args)
static struct PyMethodDef IO_methods[] = ;
static struct PycStringIO_CAPI CAPI = ;
#define PyMODINIT_FUNC void
PyMODINIT_FUNC
initcStringIO(void)
