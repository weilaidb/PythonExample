#define PSYCOPG_MICROPROTOCOLS_H 1
extern PyObject *psyco_adapters;
#define MICROPROTOCOLS_GETQUOTED_NAME
#define MICROPROTOCOLS_GETSTRING_NAME
#define MICROPROTOCOLS_GETBINARY_NAME
extern int pysqlite_microprotocols_init(PyObject *dict);
extern int pysqlite_microprotocols_add(
PyTypeObject *type, PyObject *proto, PyObject *cast);
extern PyObject *pysqlite_microprotocols_adapt(
PyObject *obj, PyObject *proto, PyObject *alt);
extern PyObject *
pysqlite_adapt(pysqlite_Cursor* self, PyObject *args);
#define pysqlite_adapt_doc \
