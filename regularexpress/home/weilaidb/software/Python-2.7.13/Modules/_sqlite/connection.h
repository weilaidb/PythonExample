#define PYSQLITE_CONNECTION_H
typedef struct
pysqlite_Connection;
extern PyTypeObject pysqlite_ConnectionType;
PyObject* pysqlite_connection_alloc(PyTypeObject* type, int aware);
void pysqlite_connection_dealloc(pysqlite_Connection* self);
PyObject* pysqlite_connection_cursor(pysqlite_Connection* self, PyObject* args, PyObject* kwargs);
PyObject* pysqlite_connection_close(pysqlite_Connection* self, PyObject* args);
PyObject* _pysqlite_connection_begin(pysqlite_Connection* self);
PyObject* pysqlite_connection_commit(pysqlite_Connection* self, PyObject* args);
PyObject* pysqlite_connection_rollback(pysqlite_Connection* self, PyObject* args);
PyObject* pysqlite_connection_new(PyTypeObject* type, PyObject* args, PyObject* kw);
int pysqlite_connection_init(pysqlite_Connection* self, PyObject* args, PyObject* kwargs);
int pysqlite_connection_register_cursor(pysqlite_Connection* connection, PyObject* cursor);
int pysqlite_check_thread(pysqlite_Connection* self);
int pysqlite_check_connection(pysqlite_Connection* con);
int pysqlite_connection_setup_types(void);
