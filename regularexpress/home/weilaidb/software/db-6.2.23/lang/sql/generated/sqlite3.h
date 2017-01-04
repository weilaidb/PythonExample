#define _SQLITE3_H_
# define SQLITE_EXTERN extern
# define SQLITE_API
# define SQLITE_CDECL
# define SQLITE_STDCALL
#define SQLITE_DEPRECATED
#define SQLITE_EXPERIMENTAL
# undef SQLITE_VERSION
# undef SQLITE_VERSION_NUMBER
#define SQLITE_VERSION        "3.8.10.2"
#define SQLITE_VERSION_NUMBER 3008010
#define SQLITE_SOURCE_ID      "2015-05-20 18:17:19 2ef4f3a5b1d1d0c4338f8243d40a2452cc1f7fe4"
SQLITE_API SQLITE_EXTERN const char sqlite3_version[];
SQLITE_API const char *SQLITE_STDCALL sqlite3_libversion(void);
SQLITE_API const char *SQLITE_STDCALL sqlite3_sourceid(void);
SQLITE_API int SQLITE_STDCALL sqlite3_libversion_number(void);
SQLITE_API int SQLITE_STDCALL sqlite3_compileoption_used(const char *zOptName);
SQLITE_API const char *SQLITE_STDCALL sqlite3_compileoption_get(int N);
SQLITE_API int SQLITE_STDCALL sqlite3_threadsafe(void);
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
SQLITE_API int SQLITE_STDCALL sqlite3_close(sqlite3*);
SQLITE_API int SQLITE_STDCALL sqlite3_close_v2(sqlite3*);
typedef int (*sqlite3_callback)(void*,int,char**, char**);
SQLITE_API int SQLITE_STDCALL sqlite3_exec(
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
#define SQLITE_NOTICE      27
#define SQLITE_WARNING     28
#define SQLITE_ROW         100
#define SQLITE_DONE        101
#define SQLITE_IOERR_READ              (SQLITE_IOERR | (1<<8))
#define SQLITE_IOERR_SHORT_READ        (SQLITE_IOERR | (2<<8))
#define SQLITE_IOERR_WRITE             (SQLITE_IOERR | (3<<8))
#define SQLITE_IOERR_FSYNC             (SQLITE_IOERR | (4<<8))
#define SQLITE_IOERR_DIR_FSYNC         (SQLITE_IOERR | (5<<8))
#define SQLITE_IOERR_TRUNCATE          (SQLITE_IOERR | (6<<8))
#define SQLITE_IOERR_FSTAT             (SQLITE_IOERR | (7<<8))
#define SQLITE_IOERR_UNLOCK            (SQLITE_IOERR | (8<<8))
#define SQLITE_IOERR_RDLOCK            (SQLITE_IOERR | (9<<8))
#define SQLITE_IOERR_DELETE            (SQLITE_IOERR | (10<<8))
#define SQLITE_IOERR_BLOCKED           (SQLITE_IOERR | (11<<8))
#define SQLITE_IOERR_NOMEM             (SQLITE_IOERR | (12<<8))
#define SQLITE_IOERR_ACCESS            (SQLITE_IOERR | (13<<8))
#define SQLITE_IOERR_CHECKRESERVEDLOCK (SQLITE_IOERR | (14<<8))
#define SQLITE_IOERR_LOCK              (SQLITE_IOERR | (15<<8))
#define SQLITE_IOERR_CLOSE             (SQLITE_IOERR | (16<<8))
#define SQLITE_IOERR_DIR_CLOSE         (SQLITE_IOERR | (17<<8))
#define SQLITE_IOERR_SHMOPEN           (SQLITE_IOERR | (18<<8))
#define SQLITE_IOERR_SHMSIZE           (SQLITE_IOERR | (19<<8))
#define SQLITE_IOERR_SHMLOCK           (SQLITE_IOERR | (20<<8))
#define SQLITE_IOERR_SHMMAP            (SQLITE_IOERR | (21<<8))
#define SQLITE_IOERR_SEEK              (SQLITE_IOERR | (22<<8))
#define SQLITE_IOERR_DELETE_NOENT      (SQLITE_IOERR | (23<<8))
#define SQLITE_IOERR_MMAP              (SQLITE_IOERR | (24<<8))
#define SQLITE_IOERR_GETTEMPPATH       (SQLITE_IOERR | (25<<8))
#define SQLITE_IOERR_CONVPATH          (SQLITE_IOERR | (26<<8))
#define SQLITE_LOCKED_SHAREDCACHE      (SQLITE_LOCKED |  (1<<8))
#define SQLITE_BUSY_RECOVERY           (SQLITE_BUSY   |  (1<<8))
#define SQLITE_BUSY_SNAPSHOT           (SQLITE_BUSY   |  (2<<8))
#define SQLITE_CANTOPEN_NOTEMPDIR      (SQLITE_CANTOPEN | (1<<8))
#define SQLITE_CANTOPEN_ISDIR          (SQLITE_CANTOPEN | (2<<8))
#define SQLITE_CANTOPEN_FULLPATH       (SQLITE_CANTOPEN | (3<<8))
#define SQLITE_CANTOPEN_CONVPATH       (SQLITE_CANTOPEN | (4<<8))
#define SQLITE_CORRUPT_VTAB            (SQLITE_CORRUPT | (1<<8))
#define SQLITE_READONLY_RECOVERY       (SQLITE_READONLY | (1<<8))
#define SQLITE_READONLY_CANTLOCK       (SQLITE_READONLY | (2<<8))
#define SQLITE_READONLY_ROLLBACK       (SQLITE_READONLY | (3<<8))
#define SQLITE_READONLY_DBMOVED        (SQLITE_READONLY | (4<<8))
#define SQLITE_ABORT_ROLLBACK          (SQLITE_ABORT | (2<<8))
#define SQLITE_CONSTRAINT_CHECK        (SQLITE_CONSTRAINT | (1<<8))
#define SQLITE_CONSTRAINT_COMMITHOOK   (SQLITE_CONSTRAINT | (2<<8))
#define SQLITE_CONSTRAINT_FOREIGNKEY   (SQLITE_CONSTRAINT | (3<<8))
#define SQLITE_CONSTRAINT_FUNCTION     (SQLITE_CONSTRAINT | (4<<8))
#define SQLITE_CONSTRAINT_NOTNULL      (SQLITE_CONSTRAINT | (5<<8))
#define SQLITE_CONSTRAINT_PRIMARYKEY   (SQLITE_CONSTRAINT | (6<<8))
#define SQLITE_CONSTRAINT_TRIGGER      (SQLITE_CONSTRAINT | (7<<8))
#define SQLITE_CONSTRAINT_UNIQUE       (SQLITE_CONSTRAINT | (8<<8))
#define SQLITE_CONSTRAINT_VTAB         (SQLITE_CONSTRAINT | (9<<8))
#define SQLITE_CONSTRAINT_ROWID        (SQLITE_CONSTRAINT |(10<<8))
#define SQLITE_NOTICE_RECOVER_WAL      (SQLITE_NOTICE | (1<<8))
#define SQLITE_NOTICE_RECOVER_ROLLBACK (SQLITE_NOTICE | (2<<8))
#define SQLITE_WARNING_AUTOINDEX       (SQLITE_WARNING | (1<<8))
#define SQLITE_AUTH_USER               (SQLITE_AUTH | (1<<8))
#define SQLITE_OPEN_READONLY         0x00000001
#define SQLITE_OPEN_READWRITE        0x00000002
#define SQLITE_OPEN_CREATE           0x00000004
#define SQLITE_OPEN_DELETEONCLOSE    0x00000008
#define SQLITE_OPEN_EXCLUSIVE        0x00000010
#define SQLITE_OPEN_AUTOPROXY        0x00000020
#define SQLITE_OPEN_URI              0x00000040
#define SQLITE_OPEN_MEMORY           0x00000080
#define SQLITE_OPEN_MAIN_DB          0x00000100
#define SQLITE_OPEN_TEMP_DB          0x00000200
#define SQLITE_OPEN_TRANSIENT_DB     0x00000400
#define SQLITE_OPEN_MAIN_JOURNAL     0x00000800
#define SQLITE_OPEN_TEMP_JOURNAL     0x00001000
#define SQLITE_OPEN_SUBJOURNAL       0x00002000
#define SQLITE_OPEN_MASTER_JOURNAL   0x00004000
#define SQLITE_OPEN_NOMUTEX          0x00008000
#define SQLITE_OPEN_FULLMUTEX        0x00010000
#define SQLITE_OPEN_SHAREDCACHE      0x00020000
#define SQLITE_OPEN_PRIVATECACHE     0x00040000
#define SQLITE_OPEN_WAL              0x00080000
#define SQLITE_IOCAP_ATOMIC                 0x00000001
#define SQLITE_IOCAP_ATOMIC512              0x00000002
#define SQLITE_IOCAP_ATOMIC1K               0x00000004
#define SQLITE_IOCAP_ATOMIC2K               0x00000008
#define SQLITE_IOCAP_ATOMIC4K               0x00000010
#define SQLITE_IOCAP_ATOMIC8K               0x00000020
#define SQLITE_IOCAP_ATOMIC16K              0x00000040
#define SQLITE_IOCAP_ATOMIC32K              0x00000080
#define SQLITE_IOCAP_ATOMIC64K              0x00000100
#define SQLITE_IOCAP_SAFE_APPEND            0x00000200
#define SQLITE_IOCAP_SEQUENTIAL             0x00000400
#define SQLITE_IOCAP_UNDELETABLE_WHEN_OPEN  0x00000800
#define SQLITE_IOCAP_POWERSAFE_OVERWRITE    0x00001000
#define SQLITE_IOCAP_IMMUTABLE              0x00002000
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
#define SQLITE_FCNTL_LOCKSTATE               1
#define SQLITE_FCNTL_GET_LOCKPROXYFILE       2
#define SQLITE_FCNTL_SET_LOCKPROXYFILE       3
#define SQLITE_FCNTL_LAST_ERRNO              4
#define SQLITE_FCNTL_SIZE_HINT               5
#define SQLITE_FCNTL_CHUNK_SIZE              6
#define SQLITE_FCNTL_FILE_POINTER            7
#define SQLITE_FCNTL_SYNC_OMITTED            8
#define SQLITE_FCNTL_WIN32_AV_RETRY          9
#define SQLITE_FCNTL_PERSIST_WAL            10
#define SQLITE_FCNTL_OVERWRITE              11
#define SQLITE_FCNTL_VFSNAME                12
#define SQLITE_FCNTL_POWERSAFE_OVERWRITE    13
#define SQLITE_FCNTL_PRAGMA                 14
#define SQLITE_FCNTL_BUSYHANDLER            15
#define SQLITE_FCNTL_TEMPFILENAME           16
#define SQLITE_FCNTL_MMAP_SIZE              18
#define SQLITE_FCNTL_TRACE                  19
#define SQLITE_FCNTL_HAS_MOVED              20
#define SQLITE_FCNTL_SYNC                   21
#define SQLITE_FCNTL_COMMIT_PHASETWO        22
#define SQLITE_FCNTL_WIN32_SET_HANDLE       23
#define SQLITE_FCNTL_WAL_BLOCK              24
#define SQLITE_GET_LOCKPROXYFILE      SQLITE_FCNTL_GET_LOCKPROXYFILE
#define SQLITE_SET_LOCKPROXYFILE      SQLITE_FCNTL_SET_LOCKPROXYFILE
#define SQLITE_LAST_ERRNO             SQLITE_FCNTL_LAST_ERRNO
typedef struct sqlite3_mutex sqlite3_mutex;
typedef struct sqlite3_vfs sqlite3_vfs;
typedef void (*sqlite3_syscall_ptr)(void);
struct sqlite3_vfs ;
#define SQLITE_ACCESS_EXISTS    0
#define SQLITE_ACCESS_READWRITE 1
#define SQLITE_ACCESS_READ      2
#define SQLITE_SHM_UNLOCK       1
#define SQLITE_SHM_LOCK         2
#define SQLITE_SHM_SHARED       4
#define SQLITE_SHM_EXCLUSIVE    8
#define SQLITE_SHM_NLOCK        8
SQLITE_API int SQLITE_STDCALL sqlite3_initialize(void);
SQLITE_API int SQLITE_STDCALL sqlite3_shutdown(void);
SQLITE_API int SQLITE_STDCALL sqlite3_os_init(void);
SQLITE_API int SQLITE_STDCALL sqlite3_os_end(void);
SQLITE_API int SQLITE_CDECL sqlite3_config(int, ...);
SQLITE_API int SQLITE_CDECL sqlite3_db_config(sqlite3*, int op, ...);
typedef struct sqlite3_mem_methods sqlite3_mem_methods;
struct sqlite3_mem_methods ;
#define SQLITE_CONFIG_SINGLETHREAD  1
#define SQLITE_CONFIG_MULTITHREAD   2
#define SQLITE_CONFIG_SERIALIZED    3
#define SQLITE_CONFIG_MALLOC        4
#define SQLITE_CONFIG_GETMALLOC     5
#define SQLITE_CONFIG_SCRATCH       6
#define SQLITE_CONFIG_PAGECACHE     7
#define SQLITE_CONFIG_HEAP          8
#define SQLITE_CONFIG_MEMSTATUS     9
#define SQLITE_CONFIG_MUTEX        10
#define SQLITE_CONFIG_GETMUTEX     11
#define SQLITE_CONFIG_LOOKASIDE    13
#define SQLITE_CONFIG_PCACHE       14
#define SQLITE_CONFIG_GETPCACHE    15
#define SQLITE_CONFIG_LOG          16
#define SQLITE_CONFIG_URI          17
#define SQLITE_CONFIG_PCACHE2      18
#define SQLITE_CONFIG_GETPCACHE2   19
#define SQLITE_CONFIG_COVERING_INDEX_SCAN 20
#define SQLITE_CONFIG_SQLLOG       21
#define SQLITE_CONFIG_MMAP_SIZE    22
#define SQLITE_CONFIG_WIN32_HEAPSIZE      23
#define SQLITE_CONFIG_PCACHE_HDRSZ        24
#define SQLITE_CONFIG_PMASZ               25
#define SQLITE_DBCONFIG_LOOKASIDE       1001
#define SQLITE_DBCONFIG_ENABLE_FKEY     1002
#define SQLITE_DBCONFIG_ENABLE_TRIGGER  1003
SQLITE_API int SQLITE_STDCALL sqlite3_extended_result_codes(sqlite3*, int onoff);
SQLITE_API sqlite3_int64 SQLITE_STDCALL sqlite3_last_insert_rowid(sqlite3*);
SQLITE_API int SQLITE_STDCALL sqlite3_changes(sqlite3*);
SQLITE_API int SQLITE_STDCALL sqlite3_total_changes(sqlite3*);
SQLITE_API void SQLITE_STDCALL sqlite3_interrupt(sqlite3*);
SQLITE_API int SQLITE_STDCALL sqlite3_complete(const char *sql);
SQLITE_API int SQLITE_STDCALL sqlite3_complete16(const void *sql);
SQLITE_API int SQLITE_STDCALL sqlite3_busy_handler(sqlite3*, int(*)(void*,int), void*);
SQLITE_API int SQLITE_STDCALL sqlite3_busy_timeout(sqlite3*, int ms);
SQLITE_API int SQLITE_STDCALL sqlite3_get_table(
sqlite3 *db,
const char *zSql,
char ***pazResult,
int *pnRow,
int *pnColumn,
char **pzErrmsg
);
SQLITE_API void SQLITE_STDCALL sqlite3_free_table(char **result);
SQLITE_API char *SQLITE_CDECL sqlite3_mprintf(const char*,...);
SQLITE_API char *SQLITE_STDCALL sqlite3_vmprintf(const char*, va_list);
SQLITE_API char *SQLITE_CDECL sqlite3_snprintf(int,char*,const char*, ...);
SQLITE_API char *SQLITE_STDCALL sqlite3_vsnprintf(int,char*,const char*, va_list);
SQLITE_API void *SQLITE_STDCALL sqlite3_malloc(int);
SQLITE_API void *SQLITE_STDCALL sqlite3_malloc64(sqlite3_uint64);
SQLITE_API void *SQLITE_STDCALL sqlite3_realloc(void*, int);
SQLITE_API void *SQLITE_STDCALL sqlite3_realloc64(void*, sqlite3_uint64);
SQLITE_API void SQLITE_STDCALL sqlite3_free(void*);
SQLITE_API sqlite3_uint64 SQLITE_STDCALL sqlite3_msize(void*);
SQLITE_API sqlite3_int64 SQLITE_STDCALL sqlite3_memory_used(void);
SQLITE_API sqlite3_int64 SQLITE_STDCALL sqlite3_memory_highwater(int resetFlag);
SQLITE_API void SQLITE_STDCALL sqlite3_randomness(int N, void *P);
SQLITE_API int SQLITE_STDCALL sqlite3_set_authorizer(
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
#define SQLITE_SAVEPOINT            32
#define SQLITE_COPY                  0
#define SQLITE_RECURSIVE            33
SQLITE_API void *SQLITE_STDCALL sqlite3_trace(sqlite3*, void(*xTrace)(void*,const char*), void*);
SQLITE_API SQLITE_EXPERIMENTAL void *SQLITE_STDCALL sqlite3_profile(sqlite3*,
void(*xProfile)(void*,const char*,sqlite3_uint64), void*);
SQLITE_API void SQLITE_STDCALL sqlite3_progress_handler(sqlite3*, int, int(*)(void*), void*);
SQLITE_API int SQLITE_STDCALL sqlite3_open(
const char *filename,
sqlite3 **ppDb
);
SQLITE_API int SQLITE_STDCALL sqlite3_open16(
const void *filename,
sqlite3 **ppDb
);
SQLITE_API int SQLITE_STDCALL sqlite3_open_v2(
const char *filename,
sqlite3 **ppDb,
int flags,
const char *zVfs
);
SQLITE_API const char *SQLITE_STDCALL sqlite3_uri_parameter(const char *zFilename, const char *zParam);
SQLITE_API int SQLITE_STDCALL sqlite3_uri_boolean(const char *zFile, const char *zParam, int bDefault);
SQLITE_API sqlite3_int64 SQLITE_STDCALL sqlite3_uri_int64(const char*, const char*, sqlite3_int64);
SQLITE_API int SQLITE_STDCALL sqlite3_errcode(sqlite3 *db);
SQLITE_API int SQLITE_STDCALL sqlite3_extended_errcode(sqlite3 *db);
SQLITE_API const char *SQLITE_STDCALL sqlite3_errmsg(sqlite3*);
SQLITE_API const void *SQLITE_STDCALL sqlite3_errmsg16(sqlite3*);
SQLITE_API const char *SQLITE_STDCALL sqlite3_errstr(int);
typedef struct sqlite3_stmt sqlite3_stmt;
SQLITE_API int SQLITE_STDCALL sqlite3_limit(sqlite3*, int id, int newVal);
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
#define SQLITE_LIMIT_TRIGGER_DEPTH            10
#define SQLITE_LIMIT_WORKER_THREADS           11
SQLITE_API int SQLITE_STDCALL sqlite3_prepare(
sqlite3 *db,
const char *zSql,
int nByte,
sqlite3_stmt **ppStmt,
const char **pzTail
);
SQLITE_API int SQLITE_STDCALL sqlite3_prepare_v2(
sqlite3 *db,
const char *zSql,
int nByte,
sqlite3_stmt **ppStmt,
const char **pzTail
);
SQLITE_API int SQLITE_STDCALL sqlite3_prepare16(
sqlite3 *db,
const void *zSql,
int nByte,
sqlite3_stmt **ppStmt,
const void **pzTail
);
SQLITE_API int SQLITE_STDCALL sqlite3_prepare16_v2(
sqlite3 *db,
const void *zSql,
int nByte,
sqlite3_stmt **ppStmt,
const void **pzTail
);
SQLITE_API const char *SQLITE_STDCALL sqlite3_sql(sqlite3_stmt *pStmt);
SQLITE_API int SQLITE_STDCALL sqlite3_stmt_readonly(sqlite3_stmt *pStmt);
SQLITE_API int SQLITE_STDCALL sqlite3_stmt_busy(sqlite3_stmt*);
typedef struct Mem sqlite3_value;
typedef struct sqlite3_context sqlite3_context;
SQLITE_API int SQLITE_STDCALL sqlite3_bind_blob(sqlite3_stmt*, int, const void*, int n, void(*)(void*));
SQLITE_API int SQLITE_STDCALL sqlite3_bind_blob64(sqlite3_stmt*, int, const void*, sqlite3_uint64,
void(*)(void*));
SQLITE_API int SQLITE_STDCALL sqlite3_bind_double(sqlite3_stmt*, int, double);
SQLITE_API int SQLITE_STDCALL sqlite3_bind_int(sqlite3_stmt*, int, int);
SQLITE_API int SQLITE_STDCALL sqlite3_bind_int64(sqlite3_stmt*, int, sqlite3_int64);
SQLITE_API int SQLITE_STDCALL sqlite3_bind_null(sqlite3_stmt*, int);
SQLITE_API int SQLITE_STDCALL sqlite3_bind_text(sqlite3_stmt*,int,const char*,int,void(*)(void*));
SQLITE_API int SQLITE_STDCALL sqlite3_bind_text16(sqlite3_stmt*, int, const void*, int, void(*)(void*));
SQLITE_API int SQLITE_STDCALL sqlite3_bind_text64(sqlite3_stmt*, int, const char*, sqlite3_uint64,
void(*)(void*), unsigned char encoding);
SQLITE_API int SQLITE_STDCALL sqlite3_bind_value(sqlite3_stmt*, int, const sqlite3_value*);
SQLITE_API int SQLITE_STDCALL sqlite3_bind_zeroblob(sqlite3_stmt*, int, int n);
SQLITE_API int SQLITE_STDCALL sqlite3_bind_parameter_count(sqlite3_stmt*);
SQLITE_API const char *SQLITE_STDCALL sqlite3_bind_parameter_name(sqlite3_stmt*, int);
SQLITE_API int SQLITE_STDCALL sqlite3_bind_parameter_index(sqlite3_stmt*, const char *zName);
SQLITE_API int SQLITE_STDCALL sqlite3_clear_bindings(sqlite3_stmt*);
SQLITE_API int SQLITE_STDCALL sqlite3_column_count(sqlite3_stmt *pStmt);
SQLITE_API const char *SQLITE_STDCALL sqlite3_column_name(sqlite3_stmt*, int N);
SQLITE_API const void *SQLITE_STDCALL sqlite3_column_name16(sqlite3_stmt*, int N);
SQLITE_API const char *SQLITE_STDCALL sqlite3_column_database_name(sqlite3_stmt*,int);
SQLITE_API const void *SQLITE_STDCALL sqlite3_column_database_name16(sqlite3_stmt*,int);
SQLITE_API const char *SQLITE_STDCALL sqlite3_column_table_name(sqlite3_stmt*,int);
SQLITE_API const void *SQLITE_STDCALL sqlite3_column_table_name16(sqlite3_stmt*,int);
SQLITE_API const char *SQLITE_STDCALL sqlite3_column_origin_name(sqlite3_stmt*,int);
SQLITE_API const void *SQLITE_STDCALL sqlite3_column_origin_name16(sqlite3_stmt*,int);
SQLITE_API const char *SQLITE_STDCALL sqlite3_column_decltype(sqlite3_stmt*,int);
SQLITE_API const void *SQLITE_STDCALL sqlite3_column_decltype16(sqlite3_stmt*,int);
SQLITE_API int SQLITE_STDCALL sqlite3_step(sqlite3_stmt*);
SQLITE_API int SQLITE_STDCALL sqlite3_data_count(sqlite3_stmt *pStmt);
#define SQLITE_INTEGER  1
#define SQLITE_FLOAT    2
#define SQLITE_BLOB     4
#define SQLITE_NULL     5
# undef SQLITE_TEXT
# define SQLITE_TEXT     3
#define SQLITE3_TEXT     3
SQLITE_API const void *SQLITE_STDCALL sqlite3_column_blob(sqlite3_stmt*, int iCol);
SQLITE_API int SQLITE_STDCALL sqlite3_column_bytes(sqlite3_stmt*, int iCol);
SQLITE_API int SQLITE_STDCALL sqlite3_column_bytes16(sqlite3_stmt*, int iCol);
SQLITE_API double SQLITE_STDCALL sqlite3_column_double(sqlite3_stmt*, int iCol);
SQLITE_API int SQLITE_STDCALL sqlite3_column_int(sqlite3_stmt*, int iCol);
SQLITE_API sqlite3_int64 SQLITE_STDCALL sqlite3_column_int64(sqlite3_stmt*, int iCol);
SQLITE_API const unsigned char *SQLITE_STDCALL sqlite3_column_text(sqlite3_stmt*, int iCol);
SQLITE_API const void *SQLITE_STDCALL sqlite3_column_text16(sqlite3_stmt*, int iCol);
SQLITE_API int SQLITE_STDCALL sqlite3_column_type(sqlite3_stmt*, int iCol);
SQLITE_API sqlite3_value *SQLITE_STDCALL sqlite3_column_value(sqlite3_stmt*, int iCol);
SQLITE_API int SQLITE_STDCALL sqlite3_finalize(sqlite3_stmt *pStmt);
SQLITE_API int SQLITE_STDCALL sqlite3_reset(sqlite3_stmt *pStmt);
SQLITE_API int SQLITE_STDCALL sqlite3_create_function(
sqlite3 *db,
const char *zFunctionName,
int nArg,
int eTextRep,
void *pApp,
void (*xFunc)(sqlite3_context*,int,sqlite3_value**),
void (*xStep)(sqlite3_context*,int,sqlite3_value**),
void (*xFinal)(sqlite3_context*)
);
SQLITE_API int SQLITE_STDCALL sqlite3_create_function16(
sqlite3 *db,
const void *zFunctionName,
int nArg,
int eTextRep,
void *pApp,
void (*xFunc)(sqlite3_context*,int,sqlite3_value**),
void (*xStep)(sqlite3_context*,int,sqlite3_value**),
void (*xFinal)(sqlite3_context*)
);
SQLITE_API int SQLITE_STDCALL sqlite3_create_function_v2(
sqlite3 *db,
const char *zFunctionName,
int nArg,
int eTextRep,
void *pApp,
void (*xFunc)(sqlite3_context*,int,sqlite3_value**),
void (*xStep)(sqlite3_context*,int,sqlite3_value**),
void (*xFinal)(sqlite3_context*),
void(*xDestroy)(void*)
);
#define SQLITE_UTF8           1
#define SQLITE_UTF16LE        2
#define SQLITE_UTF16BE        3
#define SQLITE_UTF16          4
#define SQLITE_ANY            5
#define SQLITE_UTF16_ALIGNED  8
#define SQLITE_DETERMINISTIC    0x800
SQLITE_API SQLITE_DEPRECATED int SQLITE_STDCALL sqlite3_aggregate_count(sqlite3_context*);
SQLITE_API SQLITE_DEPRECATED int SQLITE_STDCALL sqlite3_expired(sqlite3_stmt*);
SQLITE_API SQLITE_DEPRECATED int SQLITE_STDCALL sqlite3_transfer_bindings(sqlite3_stmt*, sqlite3_stmt*);
SQLITE_API SQLITE_DEPRECATED int SQLITE_STDCALL sqlite3_global_recover(void);
SQLITE_API SQLITE_DEPRECATED void SQLITE_STDCALL sqlite3_thread_cleanup(void);
SQLITE_API SQLITE_DEPRECATED int SQLITE_STDCALL sqlite3_memory_alarm(void(*)(void*,sqlite3_int64,int),
void*,sqlite3_int64);
SQLITE_API const void *SQLITE_STDCALL sqlite3_value_blob(sqlite3_value*);
SQLITE_API int SQLITE_STDCALL sqlite3_value_bytes(sqlite3_value*);
SQLITE_API int SQLITE_STDCALL sqlite3_value_bytes16(sqlite3_value*);
SQLITE_API double SQLITE_STDCALL sqlite3_value_double(sqlite3_value*);
SQLITE_API int SQLITE_STDCALL sqlite3_value_int(sqlite3_value*);
SQLITE_API sqlite3_int64 SQLITE_STDCALL sqlite3_value_int64(sqlite3_value*);
SQLITE_API const unsigned char *SQLITE_STDCALL sqlite3_value_text(sqlite3_value*);
SQLITE_API const void *SQLITE_STDCALL sqlite3_value_text16(sqlite3_value*);
SQLITE_API const void *SQLITE_STDCALL sqlite3_value_text16le(sqlite3_value*);
SQLITE_API const void *SQLITE_STDCALL sqlite3_value_text16be(sqlite3_value*);
SQLITE_API int SQLITE_STDCALL sqlite3_value_type(sqlite3_value*);
SQLITE_API int SQLITE_STDCALL sqlite3_value_numeric_type(sqlite3_value*);
SQLITE_API void *SQLITE_STDCALL sqlite3_aggregate_context(sqlite3_context*, int nBytes);
SQLITE_API void *SQLITE_STDCALL sqlite3_user_data(sqlite3_context*);
SQLITE_API sqlite3 *SQLITE_STDCALL sqlite3_context_db_handle(sqlite3_context*);
SQLITE_API void *SQLITE_STDCALL sqlite3_get_auxdata(sqlite3_context*, int N);
SQLITE_API void SQLITE_STDCALL sqlite3_set_auxdata(sqlite3_context*, int N, void*, void (*)(void*));
typedef void (*sqlite3_destructor_type)(void*);
#define SQLITE_STATIC      ((sqlite3_destructor_type)0)
#define SQLITE_TRANSIENT   ((sqlite3_destructor_type)-1)
SQLITE_API void SQLITE_STDCALL sqlite3_result_blob(sqlite3_context*, const void*, int, void(*)(void*));
SQLITE_API void SQLITE_STDCALL sqlite3_result_blob64(sqlite3_context*,const void*,
sqlite3_uint64,void(*)(void*));
SQLITE_API void SQLITE_STDCALL sqlite3_result_double(sqlite3_context*, double);
SQLITE_API void SQLITE_STDCALL sqlite3_result_error(sqlite3_context*, const char*, int);
SQLITE_API void SQLITE_STDCALL sqlite3_result_error16(sqlite3_context*, const void*, int);
SQLITE_API void SQLITE_STDCALL sqlite3_result_error_toobig(sqlite3_context*);
SQLITE_API void SQLITE_STDCALL sqlite3_result_error_nomem(sqlite3_context*);
SQLITE_API void SQLITE_STDCALL sqlite3_result_error_code(sqlite3_context*, int);
SQLITE_API void SQLITE_STDCALL sqlite3_result_int(sqlite3_context*, int);
SQLITE_API void SQLITE_STDCALL sqlite3_result_int64(sqlite3_context*, sqlite3_int64);
SQLITE_API void SQLITE_STDCALL sqlite3_result_null(sqlite3_context*);
SQLITE_API void SQLITE_STDCALL sqlite3_result_text(sqlite3_context*, const char*, int, void(*)(void*));
SQLITE_API void SQLITE_STDCALL sqlite3_result_text64(sqlite3_context*, const char*,sqlite3_uint64,
void(*)(void*), unsigned char encoding);
SQLITE_API void SQLITE_STDCALL sqlite3_result_text16(sqlite3_context*, const void*, int, void(*)(void*));
SQLITE_API void SQLITE_STDCALL sqlite3_result_text16le(sqlite3_context*, const void*, int,void(*)(void*));
SQLITE_API void SQLITE_STDCALL sqlite3_result_text16be(sqlite3_context*, const void*, int,void(*)(void*));
SQLITE_API void SQLITE_STDCALL sqlite3_result_value(sqlite3_context*, sqlite3_value*);
SQLITE_API void SQLITE_STDCALL sqlite3_result_zeroblob(sqlite3_context*, int n);
SQLITE_API int SQLITE_STDCALL sqlite3_create_collation(
sqlite3*,
const char *zName,
int eTextRep,
void *pArg,
int(*xCompare)(void*,int,const void*,int,const void*)
);
SQLITE_API int SQLITE_STDCALL sqlite3_create_collation_v2(
sqlite3*,
const char *zName,
int eTextRep,
void *pArg,
int(*xCompare)(void*,int,const void*,int,const void*),
void(*xDestroy)(void*)
);
SQLITE_API int SQLITE_STDCALL sqlite3_create_collation16(
sqlite3*,
const void *zName,
int eTextRep,
void *pArg,
int(*xCompare)(void*,int,const void*,int,const void*)
);
SQLITE_API int SQLITE_STDCALL sqlite3_collation_needed(
sqlite3*,
void*,
void(*)(void*,sqlite3*,int eTextRep,const char*)
);
SQLITE_API int SQLITE_STDCALL sqlite3_collation_needed16(
sqlite3*,
void*,
void(*)(void*,sqlite3*,int eTextRep,const void*)
);
SQLITE_API int SQLITE_STDCALL sqlite3_key(
sqlite3 *db,
const void *pKey, int nKey
);
SQLITE_API int SQLITE_STDCALL sqlite3_key_v2(
sqlite3 *db,
const char *zDbName,
const void *pKey, int nKey
);
SQLITE_API int SQLITE_STDCALL sqlite3_rekey(
sqlite3 *db,
const void *pKey, int nKey
);
SQLITE_API int SQLITE_STDCALL sqlite3_rekey_v2(
sqlite3 *db,
const char *zDbName,
const void *pKey, int nKey
);
SQLITE_API void SQLITE_STDCALL sqlite3_activate_see(
const char *zPassPhrase
);
SQLITE_API void SQLITE_STDCALL sqlite3_activate_cerod(
const char *zPassPhrase
);
SQLITE_API int SQLITE_STDCALL sqlite3_sleep(int);
SQLITE_API SQLITE_EXTERN char *sqlite3_temp_directory;
SQLITE_API SQLITE_EXTERN char *sqlite3_data_directory;
SQLITE_API int SQLITE_STDCALL sqlite3_get_autocommit(sqlite3*);
SQLITE_API sqlite3 *SQLITE_STDCALL sqlite3_db_handle(sqlite3_stmt*);
SQLITE_API const char *SQLITE_STDCALL sqlite3_db_filename(sqlite3 *db, const char *zDbName);
SQLITE_API int SQLITE_STDCALL sqlite3_db_readonly(sqlite3 *db, const char *zDbName);
SQLITE_API sqlite3_stmt *SQLITE_STDCALL sqlite3_next_stmt(sqlite3 *pDb, sqlite3_stmt *pStmt);
SQLITE_API void *SQLITE_STDCALL sqlite3_commit_hook(sqlite3*, int(*)(void*), void*);
SQLITE_API void *SQLITE_STDCALL sqlite3_rollback_hook(sqlite3*, void(*)(void *), void*);
SQLITE_API void *SQLITE_STDCALL sqlite3_update_hook(
sqlite3*,
void(*)(void *,int ,char const *,char const *,sqlite3_int64),
void*
);
SQLITE_API int SQLITE_STDCALL sqlite3_enable_shared_cache(int);
SQLITE_API int SQLITE_STDCALL sqlite3_release_memory(int);
SQLITE_API int SQLITE_STDCALL sqlite3_db_release_memory(sqlite3*);
SQLITE_API sqlite3_int64 SQLITE_STDCALL sqlite3_soft_heap_limit64(sqlite3_int64 N);
SQLITE_API SQLITE_DEPRECATED void SQLITE_STDCALL sqlite3_soft_heap_limit(int N);
SQLITE_API int SQLITE_STDCALL sqlite3_table_column_metadata(
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
SQLITE_API int SQLITE_STDCALL sqlite3_load_extension(
sqlite3 *db,
const char *zFile,
const char *zProc,
char **pzErrMsg
);
SQLITE_API int SQLITE_STDCALL sqlite3_enable_load_extension(sqlite3 *db, int onoff);
SQLITE_API int SQLITE_STDCALL sqlite3_auto_extension(void (*xEntryPoint)(void));
SQLITE_API int SQLITE_STDCALL sqlite3_cancel_auto_extension(void (*xEntryPoint)(void));
SQLITE_API void SQLITE_STDCALL sqlite3_reset_auto_extension(void);
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
SQLITE_API int SQLITE_STDCALL sqlite3_create_module(
sqlite3 *db,
const char *zName,
const sqlite3_module *p,
void *pClientData
);
SQLITE_API int SQLITE_STDCALL sqlite3_create_module_v2(
sqlite3 *db,
const char *zName,
const sqlite3_module *p,
void *pClientData,
void(*xDestroy)(void*)
);
struct sqlite3_vtab ;
struct sqlite3_vtab_cursor ;
SQLITE_API int SQLITE_STDCALL sqlite3_declare_vtab(sqlite3*, const char *zSQL);
SQLITE_API int SQLITE_STDCALL sqlite3_overload_function(sqlite3*, const char *zFuncName, int nArg);
typedef struct sqlite3_blob sqlite3_blob;
SQLITE_API int SQLITE_STDCALL sqlite3_blob_open(
sqlite3*,
const char *zDb,
const char *zTable,
const char *zColumn,
sqlite3_int64 iRow,
int flags,
sqlite3_blob **ppBlob
);
SQLITE_API SQLITE_EXPERIMENTAL int SQLITE_STDCALL sqlite3_blob_reopen(sqlite3_blob *, sqlite3_int64);
SQLITE_API int SQLITE_STDCALL sqlite3_blob_close(sqlite3_blob *);
SQLITE_API int SQLITE_STDCALL sqlite3_blob_bytes(sqlite3_blob *);
SQLITE_API int SQLITE_STDCALL sqlite3_blob_read(sqlite3_blob *, void *Z, int N, int iOffset);
SQLITE_API int SQLITE_STDCALL sqlite3_blob_write(sqlite3_blob *, const void *z, int n, int iOffset);
SQLITE_API sqlite3_vfs *SQLITE_STDCALL sqlite3_vfs_find(const char *zVfsName);
SQLITE_API int SQLITE_STDCALL sqlite3_vfs_register(sqlite3_vfs*, int makeDflt);
SQLITE_API int SQLITE_STDCALL sqlite3_vfs_unregister(sqlite3_vfs*);
SQLITE_API sqlite3_mutex *SQLITE_STDCALL sqlite3_mutex_alloc(int);
SQLITE_API void SQLITE_STDCALL sqlite3_mutex_free(sqlite3_mutex*);
SQLITE_API void SQLITE_STDCALL sqlite3_mutex_enter(sqlite3_mutex*);
SQLITE_API int SQLITE_STDCALL sqlite3_mutex_try(sqlite3_mutex*);
SQLITE_API void SQLITE_STDCALL sqlite3_mutex_leave(sqlite3_mutex*);
typedef struct sqlite3_mutex_methods sqlite3_mutex_methods;
struct sqlite3_mutex_methods ;
SQLITE_API int SQLITE_STDCALL sqlite3_mutex_held(sqlite3_mutex*);
SQLITE_API int SQLITE_STDCALL sqlite3_mutex_notheld(sqlite3_mutex*);
#define SQLITE_MUTEX_FAST             0
#define SQLITE_MUTEX_RECURSIVE        1
#define SQLITE_MUTEX_STATIC_MASTER    2
#define SQLITE_MUTEX_STATIC_MEM       3
#define SQLITE_MUTEX_STATIC_MEM2      4
#define SQLITE_MUTEX_STATIC_OPEN      4
#define SQLITE_MUTEX_STATIC_PRNG      5
#define SQLITE_MUTEX_STATIC_LRU       6
#define SQLITE_MUTEX_STATIC_LRU2      7
#define SQLITE_MUTEX_STATIC_PMEM      7
#define SQLITE_MUTEX_STATIC_APP1      8
#define SQLITE_MUTEX_STATIC_APP2      9
#define SQLITE_MUTEX_STATIC_APP3     10
SQLITE_API sqlite3_mutex *SQLITE_STDCALL sqlite3_db_mutex(sqlite3*);
SQLITE_API int SQLITE_STDCALL sqlite3_file_control(sqlite3*, const char *zDbName, int op, void*);
SQLITE_API int SQLITE_CDECL sqlite3_test_control(int op, ...);
#define SQLITE_TESTCTRL_FIRST                    5
#define SQLITE_TESTCTRL_PRNG_SAVE                5
#define SQLITE_TESTCTRL_PRNG_RESTORE             6
#define SQLITE_TESTCTRL_PRNG_RESET               7
#define SQLITE_TESTCTRL_BITVEC_TEST              8
#define SQLITE_TESTCTRL_FAULT_INSTALL            9
#define SQLITE_TESTCTRL_BENIGN_MALLOC_HOOKS     10
#define SQLITE_TESTCTRL_PENDING_BYTE            11
#define SQLITE_TESTCTRL_ASSERT                  12
#define SQLITE_TESTCTRL_ALWAYS                  13
#define SQLITE_TESTCTRL_RESERVE                 14
#define SQLITE_TESTCTRL_OPTIMIZATIONS           15
#define SQLITE_TESTCTRL_ISKEYWORD               16
#define SQLITE_TESTCTRL_SCRATCHMALLOC           17
#define SQLITE_TESTCTRL_LOCALTIME_FAULT         18
#define SQLITE_TESTCTRL_EXPLAIN_STMT            19
#define SQLITE_TESTCTRL_NEVER_CORRUPT           20
#define SQLITE_TESTCTRL_VDBE_COVERAGE           21
#define SQLITE_TESTCTRL_BYTEORDER               22
#define SQLITE_TESTCTRL_ISINIT                  23
#define SQLITE_TESTCTRL_SORTER_MMAP             24
#define SQLITE_TESTCTRL_IMPOSTER                25
#define SQLITE_TESTCTRL_LAST                    25
SQLITE_API int SQLITE_STDCALL sqlite3_status(int op, int *pCurrent, int *pHighwater, int resetFlag);
SQLITE_API int SQLITE_STDCALL sqlite3_status64(
int op,
sqlite3_int64 *pCurrent,
sqlite3_int64 *pHighwater,
int resetFlag
);
#define SQLITE_STATUS_MEMORY_USED          0
#define SQLITE_STATUS_PAGECACHE_USED       1
#define SQLITE_STATUS_PAGECACHE_OVERFLOW   2
#define SQLITE_STATUS_SCRATCH_USED         3
#define SQLITE_STATUS_SCRATCH_OVERFLOW     4
#define SQLITE_STATUS_MALLOC_SIZE          5
#define SQLITE_STATUS_PARSER_STACK         6
#define SQLITE_STATUS_PAGECACHE_SIZE       7
#define SQLITE_STATUS_SCRATCH_SIZE         8
#define SQLITE_STATUS_MALLOC_COUNT         9
SQLITE_API int SQLITE_STDCALL sqlite3_db_status(sqlite3*, int op, int *pCur, int *pHiwtr, int resetFlg);
#define SQLITE_DBSTATUS_LOOKASIDE_USED       0
#define SQLITE_DBSTATUS_CACHE_USED           1
#define SQLITE_DBSTATUS_SCHEMA_USED          2
#define SQLITE_DBSTATUS_STMT_USED            3
#define SQLITE_DBSTATUS_LOOKASIDE_HIT        4
#define SQLITE_DBSTATUS_LOOKASIDE_MISS_SIZE  5
#define SQLITE_DBSTATUS_LOOKASIDE_MISS_FULL  6
#define SQLITE_DBSTATUS_CACHE_HIT            7
#define SQLITE_DBSTATUS_CACHE_MISS           8
#define SQLITE_DBSTATUS_CACHE_WRITE          9
#define SQLITE_DBSTATUS_DEFERRED_FKS        10
#define SQLITE_DBSTATUS_MAX                 10
SQLITE_API int SQLITE_STDCALL sqlite3_stmt_status(sqlite3_stmt*, int op,int resetFlg);
#define SQLITE_STMTSTATUS_FULLSCAN_STEP     1
#define SQLITE_STMTSTATUS_SORT              2
#define SQLITE_STMTSTATUS_AUTOINDEX         3
#define SQLITE_STMTSTATUS_VM_STEP           4
typedef struct sqlite3_pcache sqlite3_pcache;
typedef struct sqlite3_pcache_page sqlite3_pcache_page;
struct sqlite3_pcache_page ;
typedef struct sqlite3_pcache_methods2 sqlite3_pcache_methods2;
struct sqlite3_pcache_methods2 ;
typedef struct sqlite3_pcache_methods sqlite3_pcache_methods;
struct sqlite3_pcache_methods ;
typedef struct sqlite3_backup sqlite3_backup;
SQLITE_API sqlite3_backup *SQLITE_STDCALL sqlite3_backup_init(
sqlite3 *pDest,
const char *zDestName,
sqlite3 *pSource,
const char *zSourceName
);
SQLITE_API int SQLITE_STDCALL sqlite3_backup_step(sqlite3_backup *p, int nPage);
SQLITE_API int SQLITE_STDCALL sqlite3_backup_finish(sqlite3_backup *p);
SQLITE_API int SQLITE_STDCALL sqlite3_backup_remaining(sqlite3_backup *p);
SQLITE_API int SQLITE_STDCALL sqlite3_backup_pagecount(sqlite3_backup *p);
SQLITE_API int SQLITE_STDCALL sqlite3_unlock_notify(
sqlite3 *pBlocked,
void (*xNotify)(void **apArg, int nArg),
void *pNotifyArg
);
SQLITE_API int SQLITE_STDCALL sqlite3_stricmp(const char *, const char *);
SQLITE_API int SQLITE_STDCALL sqlite3_strnicmp(const char *, const char *, int);
SQLITE_API int SQLITE_STDCALL sqlite3_strglob(const char *zGlob, const char *zStr);
SQLITE_API void SQLITE_CDECL sqlite3_log(int iErrCode, const char *zFormat, ...);
SQLITE_API void *SQLITE_STDCALL sqlite3_wal_hook(
sqlite3*,
int(*)(void *,sqlite3*,const char*,int),
void*
);
SQLITE_API int SQLITE_STDCALL sqlite3_wal_autocheckpoint(sqlite3 *db, int N);
SQLITE_API int SQLITE_STDCALL sqlite3_wal_checkpoint(sqlite3 *db, const char *zDb);
SQLITE_API int SQLITE_STDCALL sqlite3_wal_checkpoint_v2(
sqlite3 *db,
const char *zDb,
int eMode,
int *pnLog,
int *pnCkpt
);
#define SQLITE_CHECKPOINT_PASSIVE  0
#define SQLITE_CHECKPOINT_FULL     1
#define SQLITE_CHECKPOINT_RESTART  2
#define SQLITE_CHECKPOINT_TRUNCATE 3
SQLITE_API int SQLITE_CDECL sqlite3_vtab_config(sqlite3*, int op, ...);
#define SQLITE_VTAB_CONSTRAINT_SUPPORT 1
SQLITE_API int SQLITE_STDCALL sqlite3_vtab_on_conflict(sqlite3 *);
#define SQLITE_ROLLBACK 1
#define SQLITE_SCANSTAT_NLOOP    0
#define SQLITE_SCANSTAT_NVISIT   1
#define SQLITE_SCANSTAT_EST      2
#define SQLITE_SCANSTAT_NAME     3
#define SQLITE_SCANSTAT_EXPLAIN  4
#define SQLITE_SCANSTAT_SELECTID 5
SQLITE_API SQLITE_EXPERIMENTAL int SQLITE_STDCALL sqlite3_stmt_scanstatus(
sqlite3_stmt *pStmt,
int idx,
int iScanStatusOp,
void *pOut
);
SQLITE_API SQLITE_EXPERIMENTAL void SQLITE_STDCALL sqlite3_stmt_scanstatus_reset(sqlite3_stmt*);
# undef double
#define _SQLITE3RTREE_H_
typedef struct sqlite3_rtree_geometry sqlite3_rtree_geometry;
typedef struct sqlite3_rtree_query_info sqlite3_rtree_query_info;
typedef sqlite3_int64 sqlite3_rtree_dbl;
typedef double sqlite3_rtree_dbl;
SQLITE_API int SQLITE_STDCALL sqlite3_rtree_geometry_callback(
sqlite3 *db,
const char *zGeom,
int (*xGeom)(sqlite3_rtree_geometry*, int, sqlite3_rtree_dbl*,int*),
void *pContext
);
struct sqlite3_rtree_geometry ;
SQLITE_API int SQLITE_STDCALL sqlite3_rtree_query_callback(
sqlite3 *db,
const char *zQueryFunc,
int (*xQueryFunc)(sqlite3_rtree_query_info*),
void *pContext,
void (*xDestructor)(void*)
);
struct sqlite3_rtree_query_info ;
#define NOT_WITHIN       0
#define PARTLY_WITHIN    1
#define FULLY_WITHIN     2
#define _SQLITE3USERAUTH_H_
#undef SQLITE_USER_AUTHENTICATION
#if defined(BDBSQL_USER_AUTHENTICATION) || \
defined(BDBSQL_USER_AUTHENTICATION_KEYSTORE)
#define SQLITE_USER_AUTHENTICATION 1
#if defined(BDBSQL_USER_AUTHENTICATION_KEYSTORE) && !defined(SQLITE_HAS_CODEC)
#undef BDBSQL_USER_AUTHENTICATION_KEYSTORE
SQLITE_API int SQLITE_STDCALL sqlite3_user_authenticate(
sqlite3 *db,
const char *zUsername,
const char *aPW,
int nPW
);
SQLITE_API int SQLITE_STDCALL sqlite3_user_add(
sqlite3 *db,
const char *zUsername,
const char *aPW,
int nPW,
int isAdmin
);
SQLITE_API int SQLITE_STDCALL sqlite3_user_change(
sqlite3 *db,
const char *zUsername,
const char *aPW,
int nPW,
int isAdmin
);
SQLITE_API int SQLITE_STDCALL sqlite3_user_delete(
sqlite3 *db,
const char *zUsername
);
