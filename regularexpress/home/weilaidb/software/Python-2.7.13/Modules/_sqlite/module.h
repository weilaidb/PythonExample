#define PYSQLITE_MODULE_H
#define PYSQLITE_VERSION
extern PyObject* pysqlite_Error;
extern PyObject* pysqlite_Warning;
extern PyObject* pysqlite_InterfaceError;
extern PyObject* pysqlite_DatabaseError;
extern PyObject* pysqlite_InternalError;
extern PyObject* pysqlite_OperationalError;
extern PyObject* pysqlite_ProgrammingError;
extern PyObject* pysqlite_IntegrityError;
extern PyObject* pysqlite_DataError;
extern PyObject* pysqlite_NotSupportedError;
extern PyObject* pysqlite_OptimizedUnicode;
extern PyObject* time_time;
extern PyObject* time_sleep;
extern PyObject* converters;
extern int _enable_callback_tracebacks;
extern int pysqlite_BaseTypeAdapted;
#define PARSE_DECLTYPES 1
#define PARSE_COLNAMES 2
