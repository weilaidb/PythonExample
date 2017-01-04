PyDoc_STRVAR(cStringIO_module_documentation,
"A simple fast partial StringIO replacement.\n"
"\n"
"This module provides a simple useful replacement for\n"
"the StringIO module that is written in C.  It does not provide the\n"
"full generality of StringIO, but it provides enough for most\n"
"applications and is especially useful in conjunction with the\n"
"pickle module.\n"
"\n"
"Usage:\n"
"\n"
"  from cStringIO import StringIO\n"
"\n"
"  an_output_stream=StringIO()\n"
"  an_output_stream.write(some_stuff)\n"
"  ...\n"
"  value=an_output_stream.getvalue()\n"
"\n"
"  an_input_stream=StringIO(a_string)\n"
"  spam=an_input_stream.readline()\n"
"  spam=an_input_stream.read(5)\n"
"  an_input_stream.seek(0)           # OK, start over\n"
"  spam=an_input_stream.read()       # and read it all\n"
"  \n"
"If someone else wants to provide a more complete implementation,\n"
"go for it. :-)  \n"
"\n"
"cStringIO.c,v 1.29 1999/06/15 14:10:27 jim Exp\n");
typedef struct  IOobject;
#define IOOOBJECT(O) ((IOobject*)(O))
typedef struct  Oobject;
typedef struct  Iobject;
PyDoc_STRVAR(IO_flush__doc__, "flush(): does nothing.");
static int
IO__opencheck(IOobject *self)
static PyObject *
IO_get_closed(IOobject *self, void *closure)
static PyGetSetDef file_getsetlist[] = ;
static PyObject *
IO_flush(IOobject *self, PyObject *unused)
PyDoc_STRVAR(IO_getval__doc__,
"getvalue([use_pos]) -- Get the string value."
"\n"
"If use_pos is specified and is a true value, then the string returned\n"
"will include only the text up to the current file position.\n");
static PyObject *
IO_cgetval(PyObject *self)
static PyObject *
IO_getval(IOobject *self, PyObject *args)
PyDoc_STRVAR(IO_isatty__doc__, "isatty(): always returns 0");
static PyObject *
IO_isatty(IOobject *self, PyObject *unused)
PyDoc_STRVAR(IO_read__doc__,
"read([s]) -- Read s characters, or the rest of the string");
static int
IO_cread(PyObject *self, char **output, Py_ssize_t  n)
static PyObject *
IO_read(IOobject *self, PyObject *args)
PyDoc_STRVAR(IO_readline__doc__, "readline() -- Read one line");
static int
IO_creadline(PyObject *self, char **output)
static PyObject *
IO_readline(IOobject *self, PyObject *args)
PyDoc_STRVAR(IO_readlines__doc__, "readlines() -- Read all lines");
static PyObject *
IO_readlines(IOobject *self, PyObject *args)
PyDoc_STRVAR(IO_reset__doc__,
"reset() -- Reset the file position to the beginning");
static PyObject *
IO_reset(IOobject *self, PyObject *unused)
PyDoc_STRVAR(IO_tell__doc__, "tell() -- get the current position.");
static PyObject *
IO_tell(IOobject *self, PyObject *unused)
PyDoc_STRVAR(IO_truncate__doc__,
"truncate(): truncate the file at the current position.");
static PyObject *
IO_truncate(IOobject *self, PyObject *args)
static PyObject *
IO_iternext(Iobject *self)
PyDoc_STRVAR(IO_seek__doc__,
"seek(position)       -- set the current position\n"
"seek(position, mode) -- mode 0: absolute; 1: relative; 2: relative to EOF");
static PyObject *
IO_seek(Iobject *self, PyObject *args)
PyDoc_STRVAR(O_write__doc__,
"write(s) -- Write a string to the file"
"\n\nNote (hack:) writing None resets the buffer");
static int
O_cwrite(PyObject *self, const char *c, Py_ssize_t  len)
static PyObject *
O_write(Oobject *self, PyObject *args)
PyDoc_STRVAR(O_close__doc__, "close(): explicitly release resources held.");
static PyObject *
O_close(Oobject *self, PyObject *unused)
PyDoc_STRVAR(O_writelines__doc__,
"writelines(sequence_of_strings) -> None.  Write the strings to the file.\n"
"\n"
"Note that newlines are not added.  The sequence can be any iterable object\n"
"producing strings. This is equivalent to calling write() for each string.");
static PyObject *
O_writelines(Oobject *self, PyObject *args)
static struct PyMethodDef O_methods[] = ;
static PyMemberDef O_memberlist[] = ;
static void
O_dealloc(Oobject *self)
PyDoc_STRVAR(Otype__doc__, "Simple type for output to strings.");
static PyTypeObject Otype = ;
static PyObject *
newOobject(int  size)
static PyObject *
I_close(Iobject *self, PyObject *unused)
static struct PyMethodDef I_methods[] = ;
static void
I_dealloc(Iobject *self)
PyDoc_STRVAR(Itype__doc__,
"Simple type for treating strings as input file streams");
static PyTypeObject Itype = ;
static PyObject *
newIobject(PyObject *s)
PyDoc_STRVAR(IO_StringIO__doc__,
"StringIO([s]) -- Return a StringIO-like stream for reading or writing");
static PyObject *
IO_StringIO(PyObject *self, PyObject *args)
static struct PyMethodDef IO_methods[] = ;
static struct PycStringIO_CAPI CAPI = ;
#define PyMODINIT_FUNC void
PyMODINIT_FUNC
initcStringIO(void)
