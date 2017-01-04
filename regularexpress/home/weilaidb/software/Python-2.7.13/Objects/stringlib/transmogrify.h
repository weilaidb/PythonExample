PyDoc_STRVAR(expandtabs__doc__,
"B.expandtabs([tabsize]) -> copy of B\n\
\n\
Return a copy of B where all tab characters are expanded using spaces.\n\
If tabsize is not given, a tab size of 8 characters is assumed.");
static PyObject*
stringlib_expandtabs(PyObject *self, PyObject *args)
Py_LOCAL_INLINE(PyObject *)
pad(PyObject *self, Py_ssize_t left, Py_ssize_t right, char fill)
PyDoc_STRVAR(ljust__doc__,
"B.ljust(width[, fillchar]) -> copy of B\n"
"\n"
"Return B left justified in a string of length width. Padding is\n"
"done using the specified fill character (default is a space).");
static PyObject *
stringlib_ljust(PyObject *self, PyObject *args)
PyDoc_STRVAR(rjust__doc__,
"B.rjust(width[, fillchar]) -> copy of B\n"
"\n"
"Return B right justified in a string of length width. Padding is\n"
"done using the specified fill character (default is a space)");
static PyObject *
stringlib_rjust(PyObject *self, PyObject *args)
PyDoc_STRVAR(center__doc__,
"B.center(width[, fillchar]) -> copy of B\n"
"\n"
"Return B centered in a string of length width.  Padding is\n"
"done using the specified fill character (default is a space).");
static PyObject *
stringlib_center(PyObject *self, PyObject *args)
PyDoc_STRVAR(zfill__doc__,
"B.zfill(width) -> copy of B\n"
"\n"
"Pad a numeric string B with zeros on the left, to fill a field\n"
"of the specified width.  B is never truncated.");
static PyObject *
stringlib_zfill(PyObject *self, PyObject *args)
