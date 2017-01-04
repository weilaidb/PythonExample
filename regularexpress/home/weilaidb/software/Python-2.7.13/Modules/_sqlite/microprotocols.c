PyObject *psyco_adapters;
int
pysqlite_microprotocols_init(PyObject *dict)
int
pysqlite_microprotocols_add(PyTypeObject *type, PyObject *proto, PyObject *cast)
PyObject *
pysqlite_microprotocols_adapt(PyObject *obj, PyObject *proto, PyObject *alt)
PyObject *
pysqlite_adapt(pysqlite_Cursor *self, PyObject *args)
