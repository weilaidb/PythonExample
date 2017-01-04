#define _BSDDB_H_
#define DBVER (DB_VERSION_MAJOR * 10 + DB_VERSION_MINOR)
#if DB_VERSION_MINOR > 9
#error "eek! DBVER can't handle minor versions > 9"
#define PY_BSDDB_VERSION "5.3.0"
struct behaviourFlags ;
struct DBObject;
struct DBCursorObject;
struct DBLogCursorObject;
struct DBTxnObject;
struct DBSequenceObject;
#if (DBVER >= 52)
struct DBSiteObject;
typedef struct  DBEnvObject;
typedef struct DBObject  DBObject;
typedef struct DBCursorObject  DBCursorObject;
typedef struct DBTxnObject  DBTxnObject;
typedef struct DBLogCursorObject  DBLogCursorObject;
#if (DBVER >= 52)
typedef struct DBSiteObject  DBSiteObject;
typedef struct  DBLockObject;
typedef struct DBSequenceObject  DBSequenceObject;
#define PYBSDDB_API_VERSION 1
typedef struct  BSDDB_api;
#define DBObject_Check(v)       ((v)->ob_type == bsddb_api->db_type)
#define DBCursorObject_Check(v) ((v)->ob_type == bsddb_api->dbcursor_type)
#define DBEnvObject_Check(v)    ((v)->ob_type == bsddb_api->dbenv_type)
#define DBTxnObject_Check(v)    ((v)->ob_type == bsddb_api->dbtxn_type)
#define DBLockObject_Check(v)   ((v)->ob_type == bsddb_api->dblock_type)
#define DBSequenceObject_Check(v)  \
((bsddb_api->dbsequence_type) && \
((v)->ob_type == bsddb_api->dbsequence_type))
