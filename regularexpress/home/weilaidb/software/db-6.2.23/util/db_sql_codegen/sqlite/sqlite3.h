#define _SQLITE3_H_
# define SQLITE_EXTERN extern
# undef SQLITE_VERSION
# undef SQLITE_VERSION_NUMBER
#define SQLITE_VERSION         "3.5.9"
#define SQLITE_VERSION_NUMBER  3005009
SQLITE_EXTERN const char sqlite3_version[];
const char *sqlite3_libversion(void);
int sqlite3_libversion_number(void);
int sqlite3_threadsafe(void);
typedef struct sqlite3 sqlite3;
typedef SQLITE_INT64_TYPE sqlite_int64;
typedef unsigned SQLITE_INT64_TYPE sqlite_uint64;
#elif defined(_MSC_VER) || defined(__BORLANDC__)
typedef __int64 sqlite_int64;
typedef unsigned __int64 sqlite_uint64;
typedef long long int sqlite_int64;
typedef unsigned long long int sqlite_uint64;
typedef sqlite_int64 sqlite3_int64;
typedef sqlite_uint64 sqlite3_uint64;
# define double sqlite3_int64
int sqlite3_close(sqlite3 *);
typedef int (*sqlite3_callback)(void*,int,char**, char**);
int sqlite3_exec(
sqlite3*,
const char *sql,
int (*callback)(void*,int,char**,char**),
void *,
char **errmsg
);
#define SQLITE_OK           0
#define SQLITE_ERROR        1
#define SQLITE_INTERNAL     2
#define SQLITE_PERM         3
#define SQLITE_ABORT        4
#define SQLITE_BUSY         5
#define SQLITE_LOCKED       6
#define SQLITE_NOMEM        7
#define SQLITE_READONLY     8
#define SQLITE_INTERRUPT    9
#define SQLITE_IOERR       10
#define SQLITE_CORRUPT     11
#define SQLITE_NOTFOUND    12
#define SQLITE_FULL        13
#define SQLITE_CANTOPEN    14
#define SQLITE_PROTOCOL    15
#define SQLITE_EMPTY       16
#define SQLITE_SCHEMA      17
#define SQLITE_TOOBIG      18
#define SQLITE_CONSTRAINT  19
#define SQLITE_MISMATCH    20
#define SQLITE_MISUSE      21
#define SQLITE_NOLFS       22
#define SQLITE_AUTH        23
#define SQLITE_FORMAT      24
#define SQLITE_RANGE       25
#define SQLITE_NOTADB      26
#define SQLITE_ROW         100
#define SQLITE_DONE        101
#define SQLITE_IOERR_READ          (SQLITE_IOERR | (1<<8))
#define SQLITE_IOERR_SHORT_READ    (SQLITE_IOERR | (2<<8))
#define SQLITE_IOERR_WRITE         (SQLITE_IOERR | (3<<8))
#define SQLITE_IOERR_FSYNC         (SQLITE_IOERR | (4<<8))
#define SQLITE_IOERR_DIR_FSYNC     (SQLITE_IOERR | (5<<8))
#define SQLITE_IOERR_TRUNCATE      (SQLITE_IOERR | (6<<8))
#define SQLITE_IOERR_FSTAT         (SQLITE_IOERR | (7<<8))
#define SQLITE_IOERR_UNLOCK        (SQLITE_IOERR | (8<<8))
#define SQLITE_IOERR_RDLOCK        (SQLITE_IOERR | (9<<8))
#define SQLITE_IOERR_DELETE        (SQLITE_IOERR | (10<<8))
#define SQLITE_IOERR_BLOCKED       (SQLITE_IOERR | (11<<8))
#define SQLITE_IOERR_NOMEM         (SQLITE_IOERR | (12<<8))
#define SQLITE_OPEN_READONLY         0x00000001
#define SQLITE_OPEN_READWRITE        0x00000002
#define SQLITE_OPEN_CREATE           0x00000004
#define SQLITE_OPEN_DELETEONCLOSE    0x00000008
#define SQLITE_OPEN_EXCLUSIVE        0x00000010
#define SQLITE_OPEN_MAIN_DB          0x00000100
#define SQLITE_OPEN_TEMP_DB          0x00000200
#define SQLITE_OPEN_TRANSIENT_DB     0x00000400
#define SQLITE_OPEN_MAIN_JOURNAL     0x00000800
#define SQLITE_OPEN_TEMP_JOURNAL     0x00001000
#define SQLITE_OPEN_SUBJOURNAL       0x00002000
#define SQLITE_OPEN_MASTER_JOURNAL   0x00004000
#define SQLITE_IOCAP_ATOMIC          0x00000001
#define SQLITE_IOCAP_ATOMIC512       0x00000002
#define SQLITE_IOCAP_ATOMIC1K        0x00000004
#define SQLITE_IOCAP_ATOMIC2K        0x00000008
#define SQLITE_IOCAP_ATOMIC4K        0x00000010
#define SQLITE_IOCAP_ATOMIC8K        0x00000020
#define SQLITE_IOCAP_ATOMIC16K       0x00000040
#define SQLITE_IOCAP_ATOMIC32K       0x00000080
#define SQLITE_IOCAP_ATOMIC64K       0x00000100
#define SQLITE_IOCAP_SAFE_APPEND     0x00000200
#define SQLITE_IOCAP_SEQUENTIAL      0x00000400
#define SQLITE_LOCK_NONE          0
#define SQLITE_LOCK_SHARED        1
#define SQLITE_LOCK_RESERVED      2
#define SQLITE_LOCK_PENDING       3
#define SQLITE_LOCK_EXCLUSIVE     4
#define SQLITE_SYNC_NORMAL        0x00002
#define SQLITE_SYNC_FULL          0x00003
#define SQLITE_SYNC_DATAONLY      0x00010
typedef struct sqlite3_file sqlite3_file;
struct sqlite3_file ;
typedef struct sqlite3_io_methods sqlite3_io_methods;
struct sqlite3_io_methods ;
#define SQLITE_FCNTL_LOCKSTATE        1
typedef struct sqlite3_mutex sqlite3_mutex;
typedef struct sqlite3_vfs sqlite3_vfs;
struct sqlite3_vfs ;
#define SQLITE_ACCESS_EXISTS    0
#define SQLITE_ACCESS_READWRITE 1
#define SQLITE_ACCESS_READ      2
int sqlite3_extended_result_codes(sqlite3*, int onoff);
sqlite3_int64 sqlite3_last_insert_rowid(sqlite3*);
int sqlite3_changes(sqlite3*);
int sqlite3_total_changes(sqlite3*);
void sqlite3_interrupt(sqlite3*);
int sqlite3_complete(const char *sql);
int sqlite3_complete16(const void *sql);
int sqlite3_busy_handler(sqlite3*, int(*)(void*,int), void*);
int sqlite3_busy_timeout(sqlite3*, int ms);
int sqlite3_get_table(
sqlite3*,
const char *sql,
char ***pResult,
int *nrow,
int *ncolumn,
char **errmsg
);
void sqlite3_free_table(char **result);
char *sqlite3_mprintf(const char*,...);
char *sqlite3_vmprintf(const char*, va_list);
char *sqlite3_snprintf(int,char*,const char*, ...);
void *sqlite3_malloc(int);
void *sqlite3_realloc(void*, int);
void sqlite3_free(void*);
sqlite3_int64 sqlite3_memory_used(void);
sqlite3_int64 sqlite3_memory_highwater(int resetFlag);
void sqlite3_randomness(int N, void *P);
int sqlite3_set_authorizer(
sqlite3*,
int (*xAuth)(void*,int,const char*,const char*,const char*,const char*),
void *pUserData
);
#define SQLITE_DENY   1
#define SQLITE_IGNORE 2
#define SQLITE_CREATE_INDEX          1
#define SQLITE_CREATE_TABLE          2
#define SQLITE_CREATE_TEMP_INDEX     3
#define SQLITE_CREATE_TEMP_TABLE     4
#define SQLITE_CREATE_TEMP_TRIGGER   5
#define SQLITE_CREATE_TEMP_VIEW      6
#define SQLITE_CREATE_TRIGGER        7
#define SQLITE_CREATE_VIEW           8
#define SQLITE_DELETE                9
#define SQLITE_DROP_INDEX           10
#define SQLITE_DROP_TABLE           11
#define SQLITE_DROP_TEMP_INDEX      12
#define SQLITE_DROP_TEMP_TABLE      13
#define SQLITE_DROP_TEMP_TRIGGER    14
#define SQLITE_DROP_TEMP_VIEW       15
#define SQLITE_DROP_TRIGGER         16
#define SQLITE_DROP_VIEW            17
#define SQLITE_INSERT               18
#define SQLITE_PRAGMA               19
#define SQLITE_READ                 20
#define SQLITE_SELECT               21
#define SQLITE_TRANSACTION          22
#define SQLITE_UPDATE               23
#define SQLITE_ATTACH               24
#define SQLITE_DETACH               25
#define SQLITE_ALTER_TABLE          26
#define SQLITE_REINDEX              27
#define SQLITE_ANALYZE              28
#define SQLITE_CREATE_VTABLE        29
#define SQLITE_DROP_VTABLE          30
#define SQLITE_FUNCTION             31
#define SQLITE_COPY                  0
void *sqlite3_trace(sqlite3*, void(*xTrace)(void*,const char*), void*);
void *sqlite3_profile(sqlite3*,
void(*xProfile)(void*,const char*,sqlite3_uint64), void*);
void sqlite3_progress_handler(sqlite3*, int, int(*)(void*), void*);
int sqlite3_open(
const char *filename,
sqlite3 **ppDb
);
int sqlite3_open16(
const void *filename,
sqlite3 **ppDb
);
int sqlite3_open_v2(
const char *filename,
sqlite3 **ppDb,
int flags,
const char *zVfs
);
int sqlite3_errcode(sqlite3 *db);
const char *sqlite3_errmsg(sqlite3*);
const void *sqlite3_errmsg16(sqlite3*);
typedef struct sqlite3_stmt sqlite3_stmt;
int sqlite3_limit(sqlite3*, int id, int newVal);
#define SQLITE_LIMIT_LENGTH                    0
#define SQLITE_LIMIT_SQL_LENGTH                1
#define SQLITE_LIMIT_COLUMN                    2
#define SQLITE_LIMIT_EXPR_DEPTH                3
#define SQLITE_LIMIT_COMPOUND_SELECT           4
#define SQLITE_LIMIT_VDBE_OP                   5
#define SQLITE_LIMIT_FUNCTION_ARG              6
#define SQLITE_LIMIT_ATTACHED                  7
#define SQLITE_LIMIT_LIKE_PATTERN_LENGTH       8
#define SQLITE_LIMIT_VARIABLE_NUMBER           9
int sqlite3_prepare(
sqlite3 *db,
const char *zSql,
int nByte,
sqlite3_stmt **ppStmt,
const char **pzTail
);
int sqlite3_prepare_v2(
sqlite3 *db,
const char *zSql,
int nByte,
sqlite3_stmt **ppStmt,
const char **pzTail
);
int sqlite3_prepare16(
sqlite3 *db,
const void *zSql,
int nByte,
sqlite3_stmt **ppStmt,
const void **pzTail
);
int sqlite3_prepare16_v2(
sqlite3 *db,
const void *zSql,
int nByte,
sqlite3_stmt **ppStmt,
const void **pzTail
);
const char *sqlite3_sql(sqlite3_stmt *pStmt);
typedef struct Mem sqlite3_value;
typedef struct sqlite3_context sqlite3_context;
int sqlite3_bind_blob(sqlite3_stmt*, int, const void*, int n, void(*)(void*));
int sqlite3_bind_double(sqlite3_stmt*, int, double);
int sqlite3_bind_int(sqlite3_stmt*, int, int);
int sqlite3_bind_int64(sqlite3_stmt*, int, sqlite3_int64);
int sqlite3_bind_null(sqlite3_stmt*, int);
int sqlite3_bind_text(sqlite3_stmt*, int, const char*, int n, void(*)(void*));
int sqlite3_bind_text16(sqlite3_stmt*, int, const void*, int, void(*)(void*));
int sqlite3_bind_value(sqlite3_stmt*, int, const sqlite3_value*);
int sqlite3_bind_zeroblob(sqlite3_stmt*, int, int n);
int sqlite3_bind_parameter_count(sqlite3_stmt*);
const char *sqlite3_bind_parameter_name(sqlite3_stmt*, int);
int sqlite3_bind_parameter_index(sqlite3_stmt*, const char *zName);
int sqlite3_clear_bindings(sqlite3_stmt*);
int sqlite3_column_count(sqlite3_stmt *pStmt);
const char *sqlite3_column_name(sqlite3_stmt*, int N);
const void *sqlite3_column_name16(sqlite3_stmt*, int N);
const char *sqlite3_column_database_name(sqlite3_stmt*,int);
const void *sqlite3_column_database_name16(sqlite3_stmt*,int);
const char *sqlite3_column_table_name(sqlite3_stmt*,int);
const void *sqlite3_column_table_name16(sqlite3_stmt*,int);
const char *sqlite3_column_origin_name(sqlite3_stmt*,int);
const void *sqlite3_column_origin_name16(sqlite3_stmt*,int);
const char *sqlite3_column_decltype(sqlite3_stmt*,int);
const void *sqlite3_column_decltype16(sqlite3_stmt*,int);
int sqlite3_step(sqlite3_stmt*);
int sqlite3_data_count(sqlite3_stmt *pStmt);
#define SQLITE_INTEGER  1
#define SQLITE_FLOAT    2
#define SQLITE_BLOB     4
#define SQLITE_NULL     5
# undef SQLITE_TEXT
# define SQLITE_TEXT     3
#define SQLITE3_TEXT     3
const void *sqlite3_column_blob(sqlite3_stmt*, int iCol);
int sqlite3_column_bytes(sqlite3_stmt*, int iCol);
int sqlite3_column_bytes16(sqlite3_stmt*, int iCol);
double sqlite3_column_double(sqlite3_stmt*, int iCol);
int sqlite3_column_int(sqlite3_stmt*, int iCol);
sqlite3_int64 sqlite3_column_int64(sqlite3_stmt*, int iCol);
const unsigned char *sqlite3_column_text(sqlite3_stmt*, int iCol);
const void *sqlite3_column_text16(sqlite3_stmt*, int iCol);
int sqlite3_column_type(sqlite3_stmt*, int iCol);
sqlite3_value *sqlite3_column_value(sqlite3_stmt*, int iCol);
int sqlite3_finalize(sqlite3_stmt *pStmt);
int sqlite3_reset(sqlite3_stmt *pStmt);
int sqlite3_create_function(
sqlite3 *db,
const char *zFunctionName,
int nArg,
int eTextRep,
void *pApp,
void (*xFunc)(sqlite3_context*,int,sqlite3_value**),
void (*xStep)(sqlite3_context*,int,sqlite3_value**),
void (*xFinal)(sqlite3_context*)
);
int sqlite3_create_function16(
sqlite3 *db,
const void *zFunctionName,
int nArg,
int eTextRep,
void *pApp,
void (*xFunc)(sqlite3_context*,int,sqlite3_value**),
void (*xStep)(sqlite3_context*,int,sqlite3_value**),
void (*xFinal)(sqlite3_context*)
);
#define SQLITE_UTF8           1
#define SQLITE_UTF16LE        2
#define SQLITE_UTF16BE        3
#define SQLITE_UTF16          4
#define SQLITE_ANY            5
#define SQLITE_UTF16_ALIGNED  8
int sqlite3_aggregate_count(sqlite3_context*);
int sqlite3_expired(sqlite3_stmt*);
int sqlite3_transfer_bindings(sqlite3_stmt*, sqlite3_stmt*);
int sqlite3_global_recover(void);
void sqlite3_thread_cleanup(void);
int sqlite3_memory_alarm(void(*)(void*,sqlite3_int64,int),void*,sqlite3_int64);
const void *sqlite3_value_blob(sqlite3_value*);
int sqlite3_value_bytes(sqlite3_value*);
int sqlite3_value_bytes16(sqlite3_value*);
double sqlite3_value_double(sqlite3_value*);
int sqlite3_value_int(sqlite3_value*);
sqlite3_int64 sqlite3_value_int64(sqlite3_value*);
const unsigned char *sqlite3_value_text(sqlite3_value*);
const void *sqlite3_value_text16(sqlite3_value*);
const void *sqlite3_value_text16le(sqlite3_value*);
const void *sqlite3_value_text16be(sqlite3_value*);
int sqlite3_value_type(sqlite3_value*);
int sqlite3_value_numeric_type(sqlite3_value*);
void *sqlite3_aggregate_context(sqlite3_context*, int nBytes);
void *sqlite3_user_data(sqlite3_context*);
sqlite3 *sqlite3_context_db_handle(sqlite3_context*);
void *sqlite3_get_auxdata(sqlite3_context*, int N);
void sqlite3_set_auxdata(sqlite3_context*, int N, void*, void (*)(void*));
typedef void (*sqlite3_destructor_type)(void*);
#define SQLITE_STATIC      ((sqlite3_destructor_type)0)
#define SQLITE_TRANSIENT   ((sqlite3_destructor_type)-1)
void sqlite3_result_blob(sqlite3_context*, const void*, int, void(*)(void*));
void sqlite3_result_double(sqlite3_context*, double);
void sqlite3_result_error(sqlite3_context*, const char*, int);
void sqlite3_result_error16(sqlite3_context*, const void*, int);
void sqlite3_result_error_toobig(sqlite3_context*);
void sqlite3_result_error_nomem(sqlite3_context*);
void sqlite3_result_error_code(sqlite3_context*, int);
void sqlite3_result_int(sqlite3_context*, int);
void sqlite3_result_int64(sqlite3_context*, sqlite3_int64);
void sqlite3_result_null(sqlite3_context*);
void sqlite3_result_text(sqlite3_context*, const char*, int, void(*)(void*));
void sqlite3_result_text16(sqlite3_context*, const void*, int, void(*)(void*));
void sqlite3_result_text16le(sqlite3_context*, const void*, int,void(*)(void*));
void sqlite3_result_text16be(sqlite3_context*, const void*, int,void(*)(void*));
void sqlite3_result_value(sqlite3_context*, sqlite3_value*);
void sqlite3_result_zeroblob(sqlite3_context*, int n);
int sqlite3_create_collation(
sqlite3*,
const char *zName,
int eTextRep,
void*,
int(*xCompare)(void*,int,const void*,int,const void*)
);
int sqlite3_create_collation_v2(
sqlite3*,
const char *zName,
int eTextRep,
void*,
int(*xCompare)(void*,int,const void*,int,const void*),
void(*xDestroy)(void*)
);
int sqlite3_create_collation16(
sqlite3*,
const char *zName,
int eTextRep,
void*,
int(*xCompare)(void*,int,const void*,int,const void*)
);
int sqlite3_collation_needed(
sqlite3*,
void*,
void(*)(void*,sqlite3*,int eTextRep,const char*)
);
int sqlite3_collation_needed16(
sqlite3*,
void*,
void(*)(void*,sqlite3*,int eTextRep,const void*)
);
int sqlite3_key(
sqlite3 *db,
const void *pKey, int nKey
);
int sqlite3_rekey(
sqlite3 *db,
const void *pKey, int nKey
);
int sqlite3_sleep(int);
SQLITE_EXTERN char *sqlite3_temp_directory;
int sqlite3_get_autocommit(sqlite3*);
sqlite3 *sqlite3_db_handle(sqlite3_stmt*);
void *sqlite3_commit_hook(sqlite3*, int(*)(void*), void*);
void *sqlite3_rollback_hook(sqlite3*, void(*)(void *), void*);
void *sqlite3_update_hook(
sqlite3*,
void(*)(void *,int ,char const *,char const *,sqlite3_int64),
void*
);
int sqlite3_enable_shared_cache(int);
int sqlite3_release_memory(int);
void sqlite3_soft_heap_limit(int);
int sqlite3_table_column_metadata(
sqlite3 *db,
const char *zDbName,
const char *zTableName,
const char *zColumnName,
char const **pzDataType,
char const **pzCollSeq,
int *pNotNull,
int *pPrimaryKey,
int *pAutoinc
);
int sqlite3_load_extension(
sqlite3 *db,
const char *zFile,
const char *zProc,
char **pzErrMsg
);
int sqlite3_enable_load_extension(sqlite3 *db, int onoff);
int sqlite3_auto_extension(void *xEntryPoint);
void sqlite3_reset_auto_extension(void);
typedef struct sqlite3_vtab sqlite3_vtab;
typedef struct sqlite3_index_info sqlite3_index_info;
typedef struct sqlite3_vtab_cursor sqlite3_vtab_cursor;
typedef struct sqlite3_module sqlite3_module;
struct sqlite3_module ;
struct sqlite3_index_info ;
#define SQLITE_INDEX_CONSTRAINT_EQ    2
#define SQLITE_INDEX_CONSTRAINT_GT    4
#define SQLITE_INDEX_CONSTRAINT_LE    8
#define SQLITE_INDEX_CONSTRAINT_LT    16
#define SQLITE_INDEX_CONSTRAINT_GE    32
#define SQLITE_INDEX_CONSTRAINT_MATCH 64
int sqlite3_create_module(
sqlite3 *db,
const char *zName,
const sqlite3_module *,
void *
);
int sqlite3_create_module_v2(
sqlite3 *db,
const char *zName,
const sqlite3_module *,
void *,
void(*xDestroy)(void*)
);
struct sqlite3_vtab ;
struct sqlite3_vtab_cursor ;
int sqlite3_declare_vtab(sqlite3*, const char *zCreateTable);
int sqlite3_overload_function(sqlite3*, const char *zFuncName, int nArg);
typedef struct sqlite3_blob sqlite3_blob;
int sqlite3_blob_open(
sqlite3*,
const char *zDb,
const char *zTable,
const char *zColumn,
sqlite3_int64 iRow,
int flags,
sqlite3_blob **ppBlob
);
int sqlite3_blob_close(sqlite3_blob *);
int sqlite3_blob_bytes(sqlite3_blob *);
int sqlite3_blob_read(sqlite3_blob *, void *Z, int N, int iOffset);
int sqlite3_blob_write(sqlite3_blob *, const void *z, int n, int iOffset);
sqlite3_vfs *sqlite3_vfs_find(const char *zVfsName);
int sqlite3_vfs_register(sqlite3_vfs*, int makeDflt);
int sqlite3_vfs_unregister(sqlite3_vfs*);
sqlite3_mutex *sqlite3_mutex_alloc(int);
void sqlite3_mutex_free(sqlite3_mutex*);
void sqlite3_mutex_enter(sqlite3_mutex*);
int sqlite3_mutex_try(sqlite3_mutex*);
void sqlite3_mutex_leave(sqlite3_mutex*);
int sqlite3_mutex_held(sqlite3_mutex*);
int sqlite3_mutex_notheld(sqlite3_mutex*);
#define SQLITE_MUTEX_FAST             0
#define SQLITE_MUTEX_RECURSIVE        1
#define SQLITE_MUTEX_STATIC_MASTER    2
#define SQLITE_MUTEX_STATIC_MEM       3
#define SQLITE_MUTEX_STATIC_MEM2      4
#define SQLITE_MUTEX_STATIC_PRNG      5
#define SQLITE_MUTEX_STATIC_LRU       6
#define SQLITE_MUTEX_STATIC_LRU2      7
int sqlite3_file_control(sqlite3*, const char *zDbName, int op, void*);
int sqlite3_test_control(int op, ...);
#define SQLITE_TESTCTRL_FAULT_CONFIG             1
#define SQLITE_TESTCTRL_FAULT_FAILURES           2
#define SQLITE_TESTCTRL_FAULT_BENIGN_FAILURES    3
#define SQLITE_TESTCTRL_FAULT_PENDING            4
#define SQLITE_TESTCTRL_PRNG_SAVE                5
#define SQLITE_TESTCTRL_PRNG_RESTORE             6
#define SQLITE_TESTCTRL_PRNG_RESET               7
#define SQLITE_TESTCTRL_BITVEC_TEST              8
# undef double
