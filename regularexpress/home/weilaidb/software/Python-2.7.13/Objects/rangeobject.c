typedef struct  rangeobject;
static unsigned long
get_len_of_range(long lo, long hi, long step)
static long
get_stop_for_range(rangeobject *r)
static PyObject *
range_new(PyTypeObject *type, PyObject *args, PyObject *kw)
PyDoc_STRVAR(range_doc,
"xrange(stop) -> xrange object\n\
xrange(start, stop[, step]) -> xrange object\n\
\n\
Like range(), but instead of returning a list, returns an object that\n\
generates the numbers in the range on demand.  For looping, this is \n\
slightly faster than range() and more memory efficient.");
static PyObject *
range_item(rangeobject *r, Py_ssize_t i)
static Py_ssize_t
range_length(rangeobject *r)
static PyObject *
range_repr(rangeobject *r)
static PyObject *
range_reduce(rangeobject *r, PyObject *args)
static PySequenceMethods range_as_sequence = ;
static PyObject * range_iter(PyObject *seq);
static PyObject * range_reverse(PyObject *seq);
PyDoc_STRVAR(reverse_doc,
);
static PyMethodDef range_methods[] = ;
PyTypeObject PyRange_Type = ;
typedef struct  rangeiterobject;
static PyObject *
rangeiter_next(rangeiterobject *r)
static PyObject *
rangeiter_len(rangeiterobject *r)
PyDoc_STRVAR(length_hint_doc, );
static PyMethodDef rangeiter_methods[] = ;
static PyTypeObject Pyrangeiter_Type = ;
static PyObject *
range_iter(PyObject *seq)
static PyObject *
range_reverse(PyObject *seq)
