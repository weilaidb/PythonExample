#define ACTION_FINALIZE 1
#define ACTION_RESET 2
#if SQLITE_VERSION_NUMBER >= 3003008
#define HAVE_LOAD_EXTENSION
static int pysqlite_connection_set_isolation_level(pysqlite_Connection* self, PyObject* isolation_level);
static void _pysqlite_drop_unused_cursor_references(pysqlite_Connection* self);
static void _sqlite3_result_error(sqlite3_context* ctx, const char* errmsg, int len)
int pysqlite_connection_init(pysqlite_Connection* self, PyObject* args, PyObject* kwargs)
void pysqlite_flush_statement_cache(pysqlite_Connection* self)
void pysqlite_do_all_statements(pysqlite_Connection* self, int action, int reset_cursors)
void pysqlite_connection_dealloc(pysqlite_Connection* self)
int pysqlite_connection_register_cursor(pysqlite_Connection* connection, PyObject* cursor)
PyObject* pysqlite_connection_cursor(pysqlite_Connection* self, PyObject* args, PyObject* kwargs)
PyObject* pysqlite_connection_close(pysqlite_Connection* self, PyObject* args)
int pysqlite_check_connection(pysqlite_Connection* con)
PyObject* _pysqlite_connection_begin(pysqlite_Connection* self)
PyObject* pysqlite_connection_commit(pysqlite_Connection* self, PyObject* args)
PyObject* pysqlite_connection_rollback(pysqlite_Connection* self, PyObject* args)
static int
_pysqlite_set_result(sqlite3_context* context, PyObject* py_val)
PyObject* _pysqlite_build_py_params(sqlite3_context *context, int argc, sqlite3_value** argv)
void _pysqlite_func_callback(sqlite3_context* context, int argc, sqlite3_value** argv)
static void _pysqlite_step_callback(sqlite3_context *context, int argc, sqlite3_value** params)
void _pysqlite_final_callback(sqlite3_context* context)
static void _pysqlite_drop_unused_statement_references(pysqlite_Connection* self)
static void _pysqlite_drop_unused_cursor_references(pysqlite_Connection* self)
PyObject* pysqlite_connection_create_function(pysqlite_Connection* self, PyObject* args, PyObject* kwargs)
PyObject* pysqlite_connection_create_aggregate(pysqlite_Connection* self, PyObject* args, PyObject* kwargs)
static int _authorizer_callback(void* user_arg, int action, const char* arg1, const char* arg2 , const char* dbname, const char* access_attempt_source)
static int _progress_handler(void* user_arg)
static PyObject* pysqlite_connection_set_authorizer(pysqlite_Connection* self, PyObject* args, PyObject* kwargs)
static PyObject* pysqlite_connection_set_progress_handler(pysqlite_Connection* self, PyObject* args, PyObject* kwargs)
static PyObject* pysqlite_enable_load_extension(pysqlite_Connection* self, PyObject* args)
static PyObject* pysqlite_load_extension(pysqlite_Connection* self, PyObject* args)
int pysqlite_check_thread(pysqlite_Connection* self)
static PyObject* pysqlite_connection_get_isolation_level(pysqlite_Connection* self, void* unused)
static PyObject* pysqlite_connection_get_total_changes(pysqlite_Connection* self, void* unused)
static int pysqlite_connection_set_isolation_level(pysqlite_Connection* self, PyObject* isolation_level)
PyObject* pysqlite_connection_call(pysqlite_Connection* self, PyObject* args, PyObject* kwargs)
PyObject* pysqlite_connection_execute(pysqlite_Connection* self, PyObject* args)
PyObject* pysqlite_connection_executemany(pysqlite_Connection* self, PyObject* args)
PyObject* pysqlite_connection_executescript(pysqlite_Connection* self, PyObject* args)
static int
pysqlite_collation_callback(
void* context,
int text1_length, const void* text1_data,
int text2_length, const void* text2_data)
static PyObject *
pysqlite_connection_interrupt(pysqlite_Connection* self, PyObject* args)
static PyObject *
pysqlite_connection_iterdump(pysqlite_Connection* self, PyObject* args)
static PyObject *
pysqlite_connection_create_collation(pysqlite_Connection* self, PyObject* args)
static PyObject *
pysqlite_connection_enter(pysqlite_Connection* self, PyObject* args)
static PyObject *
pysqlite_connection_exit(pysqlite_Connection* self, PyObject* args)
static char connection_doc[] =
PyDoc_STR();
static PyGetSetDef connection_getset[] = ;
static PyMethodDef connection_methods[] = ;
static struct PyMemberDef connection_members[] =
;
PyTypeObject pysqlite_ConnectionType = ;
extern int pysqlite_connection_setup_types(void)
