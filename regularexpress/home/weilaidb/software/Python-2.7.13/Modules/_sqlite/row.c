void pysqlite_row_dealloc(pysqlite_Row* self)
static PyObject *
pysqlite_row_new(PyTypeObject *type, PyObject *args, PyObject *kwargs)
PyObject* pysqlite_row_item(pysqlite_Row* self, Py_ssize_t idx)
PyObject* pysqlite_row_subscript(pysqlite_Row* self, PyObject* idx)
Py_ssize_t pysqlite_row_length(pysqlite_Row* self, PyObject* args, PyObject* kwargs)
PyObject* pysqlite_row_keys(pysqlite_Row* self, PyObject* args, PyObject* kwargs)
static int pysqlite_row_print(pysqlite_Row* self, FILE *fp, int flags)
static PyObject* pysqlite_iter(pysqlite_Row* self)
static long pysqlite_row_hash(pysqlite_Row *self)
static PyObject* pysqlite_row_richcompare(pysqlite_Row *self, PyObject *_other, int opid)
PyMappingMethods pysqlite_row_as_mapping = ;
static PySequenceMethods pysqlite_row_as_sequence = ;
static PyMethodDef pysqlite_row_methods[] = ;
PyTypeObject pysqlite_RowType = ;
extern int pysqlite_row_setup_types(void)
