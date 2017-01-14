#define PY_SSIZE_T_CLEAN
PyDoc_STRVAR(strop_module__doc__,
);
#define WARN if (PyErr_Warn(PyExc_DeprecationWarning, \
)) \
return NULL
#define LEFTSTRIP 0
#define RIGHTSTRIP 1
#define BOTHSTRIP 2
static PyObject *
split_whitespace(char *s, Py_ssize_t len, Py_ssize_t maxsplit)
PyDoc_STRVAR(splitfields__doc__,
);
static PyObject *
strop_splitfields(PyObject *self, PyObject *args)
PyDoc_STRVAR(joinfields__doc__,
);
static PyObject *
strop_joinfields(PyObject *self, PyObject *args)
PyDoc_STRVAR(find__doc__,
);
static PyObject *
strop_find(PyObject *self, PyObject *args)
PyDoc_STRVAR(rfind__doc__,
);
static PyObject *
strop_rfind(PyObject *self, PyObject *args)
static PyObject *
do_strip(PyObject *args, int striptype)
PyDoc_STRVAR(strip__doc__,
);
static PyObject *
strop_strip(PyObject *self, PyObject *args)
PyDoc_STRVAR(lstrip__doc__,
);
static PyObject *
strop_lstrip(PyObject *self, PyObject *args)
PyDoc_STRVAR(rstrip__doc__,
);
static PyObject *
strop_rstrip(PyObject *self, PyObject *args)
PyDoc_STRVAR(lower__doc__,
);
static PyObject *
strop_lower(PyObject *self, PyObject *args)
PyDoc_STRVAR(upper__doc__,
);
static PyObject *
strop_upper(PyObject *self, PyObject *args)
PyDoc_STRVAR(capitalize__doc__,
);
static PyObject *
strop_capitalize(PyObject *self, PyObject *args)
PyDoc_STRVAR(expandtabs__doc__,
);
static PyObject *
strop_expandtabs(PyObject *self, PyObject *args)
PyDoc_STRVAR(count__doc__,
);
static PyObject *
strop_count(PyObject *self, PyObject *args)
PyDoc_STRVAR(swapcase__doc__,
);
static PyObject *
strop_swapcase(PyObject *self, PyObject *args)
PyDoc_STRVAR(atoi__doc__,
);
static PyObject *
strop_atoi(PyObject *self, PyObject *args)
PyDoc_STRVAR(atol__doc__,
);
static PyObject *
strop_atol(PyObject *self, PyObject *args)
PyDoc_STRVAR(atof__doc__,
);
static PyObject *
strop_atof(PyObject *self, PyObject *args)
PyDoc_STRVAR(maketrans__doc__,
);
static PyObject *
strop_maketrans(PyObject *self, PyObject *args)
PyDoc_STRVAR(translate__doc__,
);
static PyObject *
strop_translate(PyObject *self, PyObject *args)
static Py_ssize_t
mymemfind(const char *mem, Py_ssize_t len, const char *pat, Py_ssize_t pat_len)
static Py_ssize_t
mymemcnt(const char *mem, Py_ssize_t len, const char *pat, Py_ssize_t pat_len)
static char *
mymemreplace(const char *str, Py_ssize_t len,
const char *pat, Py_ssize_t pat_len,
const char *sub, Py_ssize_t sub_len,
Py_ssize_t count,
Py_ssize_t *out_len)
PyDoc_STRVAR(replace__doc__,
);
static PyObject *
strop_replace(PyObject *self, PyObject *args)
static PyMethodDef
strop_methods[] = ;
PyMODINIT_FUNC
initstrop(void)
