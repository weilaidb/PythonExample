#if SQLITE_VERSION_NUMBER >= 3003003
#define HAVE_SHARED_CACHE
PyObject* pysqlite_Error, *pysqlite_Warning, *pysqlite_InterfaceError, *pysqlite_DatabaseError,
*pysqlite_InternalError, *pysqlite_OperationalError, *pysqlite_ProgrammingError,
*pysqlite_IntegrityError, *pysqlite_DataError, *pysqlite_NotSupportedError, *pysqlite_OptimizedUnicode;
PyObject* converters;
int _enable_callback_tracebacks;
int pysqlite_BaseTypeAdapted;
static PyObject* module_connect(PyObject* self, PyObject* args, PyObject*
kwargs)
PyDoc_STRVAR(module_connect_doc,
"connect(database[, timeout, isolation_level, detect_types, factory])\n\
\n\
Opens a connection to the SQLite database file *database*. You can use\n\
\ to open a database connection to a database that resides in\n\
RAM instead of on disk.");
static PyObject* module_complete(PyObject* self, PyObject* args, PyObject*
kwargs)
PyDoc_STRVAR(module_complete_doc,
"complete_statement(sql)\n\
\n\
Checks if a string contains a complete SQL statement. Non-standard.");
static PyObject* module_enable_shared_cache(PyObject* self, PyObject* args, PyObject*
kwargs)
PyDoc_STRVAR(module_enable_shared_cache_doc,
"enable_shared_cache(do_enable)\n\
\n\
Enable or disable shared cache mode for the calling thread.\n\
Experimental/Non-standard.");
static PyObject* module_register_adapter(PyObject* self, PyObject* args)
PyDoc_STRVAR(module_register_adapter_doc,
"register_adapter(type, callable)\n\
\n\
Registers an adapter with pysqlite's adapter registry. Non-standard.");
static PyObject* module_register_converter(PyObject* self, PyObject* args)
PyDoc_STRVAR(module_register_converter_doc,
"register_converter(typename, callable)\n\
\n\
Registers a converter with pysqlite. Non-standard.");
static PyObject* enable_callback_tracebacks(PyObject* self, PyObject* args)
PyDoc_STRVAR(enable_callback_tracebacks_doc,
"enable_callback_tracebacks(flag)\n\
\n\
Enable or disable callback functions throwing errors to stderr.");
static void converters_init(PyObject* dict)
static PyMethodDef module_methods[] = ;
struct _IntConstantPair ;
typedef struct _IntConstantPair IntConstantPair;
static IntConstantPair _int_constants[] = ;
PyMODINIT_FUNC init_sqlite3(void)
