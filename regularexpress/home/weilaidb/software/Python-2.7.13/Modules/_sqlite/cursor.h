#define PYSQLITE_CURSOR_H
typedef struct
pysqlite_Cursor;
typedef enum  pysqlite_StatementKind;
extern PyTypeObject pysqlite_CursorType;
PyObject* pysqlite_cursor_execute(pysqlite_Cursor* self, PyObject* args);
PyObject* pysqlite_cursor_executemany(pysqlite_Cursor* self, PyObject* args);
PyObject* pysqlite_cursor_getiter(pysqlite_Cursor *self);
PyObject* pysqlite_cursor_iternext(pysqlite_Cursor *self);
PyObject* pysqlite_cursor_fetchone(pysqlite_Cursor* self, PyObject* args);
PyObject* pysqlite_cursor_fetchmany(pysqlite_Cursor* self, PyObject* args, PyObject* kwargs);
PyObject* pysqlite_cursor_fetchall(pysqlite_Cursor* self, PyObject* args);
PyObject* pysqlite_noop(pysqlite_Connection* self, PyObject* args);
PyObject* pysqlite_cursor_close(pysqlite_Cursor* self, PyObject* args);
int pysqlite_cursor_setup_types(void);
#define UNKNOWN (-1)
