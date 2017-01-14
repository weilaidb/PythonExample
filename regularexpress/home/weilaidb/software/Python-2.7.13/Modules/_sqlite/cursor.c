PyObject* pysqlite_cursor_iternext(pysqlite_Cursor* self);
static char* errmsg_fetch_across_rollback = ;
static pysqlite_StatementKind detect_statement_type(char* statement)
static int pysqlite_cursor_init(pysqlite_Cursor* self, PyObject* args, PyObject* kwargs)
static void pysqlite_cursor_dealloc(pysqlite_Cursor* self)
PyObject* _pysqlite_get_converter(PyObject* key)
int pysqlite_build_row_cast_map(pysqlite_Cursor* self)
PyObject* _pysqlite_build_column_name(const char* colname)
PyObject* pysqlite_unicode_from_string(const char* val_str, Py_ssize_t size, int optimize)
PyObject* _pysqlite_fetch_one_row(pysqlite_Cursor* self)
static int check_cursor(pysqlite_Cursor* cur)
PyObject* _pysqlite_query_execute(pysqlite_Cursor* self, int multiple, PyObject* args)
PyObject* pysqlite_cursor_execute(pysqlite_Cursor* self, PyObject* args)
PyObject* pysqlite_cursor_executemany(pysqlite_Cursor* self, PyObject* args)
PyObject* pysqlite_cursor_executescript(pysqlite_Cursor* self, PyObject* args)
PyObject* pysqlite_cursor_getiter(pysqlite_Cursor *self)
PyObject* pysqlite_cursor_iternext(pysqlite_Cursor *self)
PyObject* pysqlite_cursor_fetchone(pysqlite_Cursor* self, PyObject* args)
PyObject* pysqlite_cursor_fetchmany(pysqlite_Cursor* self, PyObject* args, PyObject* kwargs)
PyObject* pysqlite_cursor_fetchall(pysqlite_Cursor* self, PyObject* args)
PyObject* pysqlite_noop(pysqlite_Connection* self, PyObject* args)
PyObject* pysqlite_cursor_close(pysqlite_Cursor* self, PyObject* args)
static PyMethodDef cursor_methods[] = ;
static struct PyMemberDef cursor_members[] =
;
static char cursor_doc[] =
PyDoc_STR();
PyTypeObject pysqlite_CursorType = ;
extern int pysqlite_cursor_setup_types(void)
