#define _SQLITE4ODBC_H
#if defined(_WIN32) || defined(_WIN64)
#if defined(HAVE_LOCALECONV) || defined(_WIN32) || defined(_WIN64)
#if defined(HAVE_UNIXODBC) || defined(_WIN32) || defined(_WIN64)
#define SQL_API
#define SQLLEN SQLINTEGER
#define SQLLEN_PTR SQLLEN *
#define SQLULEN SQLUINTEGER
#define SQLROWCOUNT SQLUINTEGER
#define SQLSETPOSIROW SQLUSMALLINT
#define SQLROWOFFSET SQLLEN
#define SQLROWSETSIZE SQLULEN
struct dbc;
struct stmt;
typedef struct  ENV;
typedef struct dbc  DBC;
typedef struct  COL;
typedef struct  BINDCOL;
typedef struct  BINDPARM;
typedef struct stmt  STMT;
