static Py_ssize_t
internal_bisect_right(PyObject *list, PyObject *item, Py_ssize_t lo, Py_ssize_t hi)
static PyObject *
bisect_right(PyObject *self, PyObject *args, PyObject *kw)
PyDoc_STRVAR(bisect_right_doc,
"bisect(a, x[, lo[, hi]]) -> index\n\
bisect_right(a, x[, lo[, hi]]) -> index\n\
\n\
Return the index where to insert item x in list a, assuming a is sorted.\n\
\n\
The return value i is such that all e in a[:i] have e <= x, and all e in\n\
a[i:] have e > x.  So if x already appears in the list, i points just\n\
beyond the rightmost x already there\n\
\n\
Optional args lo (default 0) and hi (default len(a)) bound the\n\
slice of a to be searched.\n");
static PyObject *
insort_right(PyObject *self, PyObject *args, PyObject *kw)
PyDoc_STRVAR(insort_right_doc,
"insort(a, x[, lo[, hi]])\n\
insort_right(a, x[, lo[, hi]])\n\
\n\
Insert item x in list a, and keep it sorted assuming a is sorted.\n\
\n\
If x is already in a, insert it to the right of the rightmost x.\n\
\n\
Optional args lo (default 0) and hi (default len(a)) bound the\n\
slice of a to be searched.\n");
static Py_ssize_t
internal_bisect_left(PyObject *list, PyObject *item, Py_ssize_t lo, Py_ssize_t hi)
static PyObject *
bisect_left(PyObject *self, PyObject *args, PyObject *kw)
PyDoc_STRVAR(bisect_left_doc,
"bisect_left(a, x[, lo[, hi]]) -> index\n\
\n\
Return the index where to insert item x in list a, assuming a is sorted.\n\
\n\
The return value i is such that all e in a[:i] have e < x, and all e in\n\
a[i:] have e >= x.  So if x already appears in the list, i points just\n\
before the leftmost x already there.\n\
\n\
Optional args lo (default 0) and hi (default len(a)) bound the\n\
slice of a to be searched.\n");
static PyObject *
insort_left(PyObject *self, PyObject *args, PyObject *kw)
PyDoc_STRVAR(insort_left_doc,
"insort_left(a, x[, lo[, hi]])\n\
\n\
Insert item x in list a, and keep it sorted assuming a is sorted.\n\
\n\
If x is already in a, insert it to the left of the leftmost x.\n\
\n\
Optional args lo (default 0) and hi (default len(a)) bound the\n\
slice of a to be searched.\n");
static PyMethodDef bisect_methods[] = ;
PyDoc_STRVAR(module_doc,
"Bisection algorithms.\n\
\n\
This module provides support for maintaining a list in sorted order without\n\
having to sort the list after each insertion. For long lists of items with\n\
expensive comparison operations, this can be an improvement over the more\n\
common approach.\n");
PyMODINIT_FUNC
init_bisect(void)
