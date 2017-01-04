#define PYSQLITE_UTIL_H
int pysqlite_step(sqlite3_stmt* statement, pysqlite_Connection* connection);
int _pysqlite_seterror(sqlite3* db, sqlite3_stmt* st);
PyObject * _pysqlite_long_from_int64(sqlite_int64 value);
sqlite_int64 _pysqlite_long_as_int64(PyObject * value);
