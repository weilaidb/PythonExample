PyObject *
PyCell_New(PyObject *obj)
PyObject *
PyCell_Get(PyObject *op)
int
PyCell_Set(PyObject *op, PyObject *obj)
static void
cell_dealloc(PyCellObject *op)
static int
cell_compare(PyCellObject *a, PyCellObject *b)
static PyObject *
cell_repr(PyCellObject *op)
static int
cell_traverse(PyCellObject *op, visitproc visit, void *arg)
static int
cell_clear(PyCellObject *op)
static PyObject *
cell_get_contents(PyCellObject *op, void *closure)
static PyGetSetDef cell_getsetlist[] = ;
PyTypeObject PyCell_Type = ;
