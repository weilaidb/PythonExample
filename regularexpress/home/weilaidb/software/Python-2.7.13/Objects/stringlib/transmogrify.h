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
);
static PyObject *
stringlib_ljust(PyObject *self, PyObject *args)
PyDoc_STRVAR(rjust__doc__,
);
static PyObject *
stringlib_rjust(PyObject *self, PyObject *args)
PyDoc_STRVAR(center__doc__,
);
static PyObject *
stringlib_center(PyObject *self, PyObject *args)
PyDoc_STRVAR(zfill__doc__,
);
static PyObject *
stringlib_zfill(PyObject *self, PyObject *args)
