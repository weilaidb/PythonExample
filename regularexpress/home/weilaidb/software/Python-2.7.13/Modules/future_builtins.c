PyDoc_STRVAR(module_doc,
"This module provides functions that will be builtins in Python 3.0,\n\
but that conflict with builtins that already exist in Python 2.x.\n\
\n\
Functions:\n\
\n\
ascii(arg) -- Returns the canonical string representation of an object.\n\
filter(pred, iterable) -- Returns an iterator yielding those items of \n\
iterable for which pred(item) is true.\n\
hex(arg) -- Returns the hexadecimal representation of an integer.\n\
map(func, *iterables) -- Returns an iterator that computes the function \n\
using arguments from each of the iterables.\n\
oct(arg) -- Returns the octal representation of an integer.\n\
zip(iter1 [,iter2 [...]]) -- Returns a zip object whose .next() method \n\
returns a tuple where the i-th element comes from the i-th iterable \n\
argument.\n\
\n\
The typical usage of this module is to replace existing builtins in a\n\
module's namespace:\n \n\
from future_builtins import ascii, filter, map, hex, oct, zip\n");
static PyObject *
builtin_hex(PyObject *self, PyObject *v)
PyDoc_STRVAR(hex_doc,
"hex(number) -> string\n\
\n\
Return the hexadecimal representation of an integer or long integer.");
static PyObject *
builtin_oct(PyObject *self, PyObject *v)
PyDoc_STRVAR(oct_doc,
"oct(number) -> string\n\
\n\
Return the octal representation of an integer or long integer.");
static PyObject *
builtin_ascii(PyObject *self, PyObject *v)
PyDoc_STRVAR(ascii_doc,
"ascii(object) -> string\n\
\n\
Return the same as repr().  In Python 3.x, the repr() result will\n\
contain printable characters unescaped, while the ascii() result\n\
will have such characters backslash-escaped.");
static PyMethodDef module_functions[] = ;
PyMODINIT_FUNC
initfuture_builtins(void)
