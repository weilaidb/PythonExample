#define SQLITE_CORE 1
#define SQLITE_AMALGAMATION 1
# define SQLITE_PRIVATE static
#define _SQLITEINT_H_
#define _MSVC_H_
#if defined(_MSC_VER)
#if defined(__RTP__) || defined(_WRS_KERNEL)
#define OS_VXWORKS 1
#define SQLITE_OS_OTHER 0
#define SQLITE_HOMEGROWN_RECURSIVE_MUTEX 1
#define SQLITE_OMIT_LOAD_EXTENSION 1
#define SQLITE_ENABLE_LOCKING_STYLE 0
#define HAVE_UTIME 1
#define OS_VXWORKS 0
# define _LARGE_FILE       1
# ifndef _FILE_OFFSET_BITS
#   define _FILE_OFFSET_BITS 64
# endif
# define _LARGEFILE_SOURCE 1
#if defined(__GNUC__) && !defined(_GNU_SOURCE)
# define _GNU_SOURCE
#if defined(__OpenBSD__) && !defined(_BSD_SOURCE)
# define _BSD_SOURCE
#if defined(_HAVE_MINGW_H)
# include "mingw.h"
#elif defined(_HAVE__MINGW_H)
# include "_mingw.h"
#if !defined(_USE_32BIT_TIME_T) && !defined(_USE_64BIT_TIME_T) && \
defined(_WIN32) && !defined(_WIN64) && \
defined(__MINGW_MAJOR_VERSION) && __MINGW_MAJOR_VERSION >= 4 && \
defined(__MSVCRT__)
# define _USE_32BIT_TIME_T
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
SQLITE_API const char sqlite3_version[] = SQLITE_VERSION;
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
SQLITE_API char *sqlite3_temp_directory;
SQLITE_API char *sqlite3_data_directory;
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
# define SQLITE_MAX_LENGTH 1000000000
# define SQLITE_MAX_COLUMN 2000
# define SQLITE_MAX_SQL_LENGTH 1000000000
# define SQLITE_MAX_EXPR_DEPTH 1000
# define SQLITE_MAX_COMPOUND_SELECT 500
# define SQLITE_MAX_VDBE_OP 25000
# define SQLITE_MAX_FUNCTION_ARG 127
# define SQLITE_DEFAULT_CACHE_SIZE  5000
#define SQLITE_DEFAULT_WAL_AUTOCHECKPOINT \
SQLITE_DEFAULT_JOURNAL_SIZE_LIMIT / SQLITE_DEFAULT_PAGE_SIZE
# define SQLITE_MAX_ATTACHED 10
# define SQLITE_MAX_VARIABLE_NUMBER 999
# undef SQLITE_MAX_PAGE_SIZE
#define SQLITE_MAX_PAGE_SIZE 65536
# define SQLITE_DEFAULT_PAGE_SIZE 4096
#if SQLITE_DEFAULT_PAGE_SIZE>SQLITE_MAX_PAGE_SIZE
# undef SQLITE_DEFAULT_PAGE_SIZE
# define SQLITE_DEFAULT_PAGE_SIZE SQLITE_MAX_PAGE_SIZE
# define SQLITE_MAX_DEFAULT_PAGE_SIZE 8192
#if SQLITE_MAX_DEFAULT_PAGE_SIZE>SQLITE_MAX_PAGE_SIZE
# undef SQLITE_MAX_DEFAULT_PAGE_SIZE
# define SQLITE_MAX_DEFAULT_PAGE_SIZE SQLITE_MAX_PAGE_SIZE
# define SQLITE_MAX_PAGE_COUNT 1073741823
# define SQLITE_MAX_LIKE_PATTERN_LENGTH 50000
# define SQLITE_MAX_TRIGGER_DEPTH 1000
#if defined(__BORLANDC__)
#if defined(__PTRDIFF_TYPE__)
# define SQLITE_INT_TO_PTR(X)  ((void*)(__PTRDIFF_TYPE__)(X))
# define SQLITE_PTR_TO_INT(X)  ((int)(__PTRDIFF_TYPE__)(X))
#elif !defined(__GNUC__)
# define SQLITE_INT_TO_PTR(X)  ((void*)&((char*)0)[X])
# define SQLITE_PTR_TO_INT(X)  ((int)(((char*)X)-(char*)0))
#elif defined(HAVE_STDINT_H)
# define SQLITE_INT_TO_PTR(X)  ((void*)(intptr_t)(X))
# define SQLITE_PTR_TO_INT(X)  ((int)(intptr_t)(X))
# define SQLITE_INT_TO_PTR(X)  ((void*)(X))
# define SQLITE_PTR_TO_INT(X)  ((int)(X))
#if defined(__GNUC__)
#  define SQLITE_NOINLINE  __attribute__((noinline))
#elif defined(_MSC_VER) && _MSC_VER>=1310
#  define SQLITE_NOINLINE  __declspec(noinline)
#  define SQLITE_NOINLINE
#if !defined(SQLITE_THREADSAFE)
# if defined(THREADSAFE)
#   define SQLITE_THREADSAFE THREADSAFE
# else
#   define SQLITE_THREADSAFE 1
# endif
# define SQLITE_POWERSAFE_OVERWRITE 1
#if !defined(SQLITE_DEFAULT_MEMSTATUS)
# define SQLITE_DEFAULT_MEMSTATUS 1
#if defined(SQLITE_SYSTEM_MALLOC) \
+ defined(SQLITE_WIN32_MALLOC) \
+ defined(SQLITE_ZERO_MALLOC) \
+ defined(SQLITE_MEMDEBUG)>1
# error "Two or more of the following compile-time configuration options\
are defined but at most one is allowed:\
SQLITE_SYSTEM_MALLOC, SQLITE_WIN32_MALLOC, SQLITE_MEMDEBUG,\
SQLITE_ZERO_MALLOC"
#if defined(SQLITE_SYSTEM_MALLOC) \
+ defined(SQLITE_WIN32_MALLOC) \
+ defined(SQLITE_ZERO_MALLOC) \
+ defined(SQLITE_MEMDEBUG)==0
# define SQLITE_SYSTEM_MALLOC 1
#if !defined(SQLITE_MALLOC_SOFT_LIMIT)
# define SQLITE_MALLOC_SOFT_LIMIT 1024
#if !defined(_XOPEN_SOURCE) && !defined(__DARWIN__) && !defined(__APPLE__)
#  define _XOPEN_SOURCE 600
#if !defined(NDEBUG) && !defined(SQLITE_DEBUG)
# define NDEBUG 1
#if defined(NDEBUG) && defined(SQLITE_DEBUG)
# undef NDEBUG
#if !defined(SQLITE_ENABLE_EXPLAIN_COMMENTS) && defined(SQLITE_DEBUG)
# define SQLITE_ENABLE_EXPLAIN_COMMENTS 1
SQLITE_PRIVATE   void sqlite3Coverage(int);
# define testcase(X)  if( X )
# define testcase(X)
#if !defined(NDEBUG) || defined(SQLITE_COVERAGE_TEST)
# define TESTONLY(X)  X
# define TESTONLY(X)
# define VVA_ONLY(X)  X
# define VVA_ONLY(X)
#if defined(SQLITE_COVERAGE_TEST)
# define ALWAYS(X)      (1)
# define NEVER(X)       (0)
#elif !defined(NDEBUG)
# define ALWAYS(X)      ((X)?1:(assert(0),0))
# define NEVER(X)       ((X)?(assert(0),1):0)
# define ALWAYS(X)      (X)
# define NEVER(X)       (X)
#if defined(SQLITE_FORCE_OS_TRACE) || defined(SQLITE_TEST) || \
(defined(SQLITE_DEBUG) && SQLITE_OS_WIN)
extern int sqlite3OSTrace;
# define OSTRACE(X)          if( sqlite3OSTrace ) sqlite3DebugPrintf X
# define SQLITE_HAVE_OS_TRACE
# define OSTRACE(X)
# undef  SQLITE_HAVE_OS_TRACE
#if defined(SQLITE_HAVE_OS_TRACE) || defined(SQLITE_TEST) || \
(defined(SQLITE_DEBUG) && SQLITE_OS_WIN)
# define SQLITE_NEED_ERR_NAME
# undef  SQLITE_NEED_ERR_NAME
#define IS_BIG_INT(X)  (((X)&~(i64)0xffffffff)!=0)
#define likely(X)    (X)
#define unlikely(X)  (X)
#define _SQLITE_HASH_H_
typedef struct Hash Hash;
typedef struct HashElem HashElem;
struct Hash ;
struct HashElem ;
SQLITE_PRIVATE void sqlite3HashInit(Hash*);
SQLITE_PRIVATE void *sqlite3HashInsert(Hash*, const char *pKey, void *pData);
SQLITE_PRIVATE void *sqlite3HashFind(const Hash*, const char *pKey);
SQLITE_PRIVATE void sqlite3HashClear(Hash*);
#define sqliteHashFirst(H)  ((H)->first)
#define sqliteHashNext(E)   ((E)->next)
#define sqliteHashData(E)   ((E)->data)
#define TK_SEMI                             1
#define TK_EXPLAIN                          2
#define TK_QUERY                            3
#define TK_PLAN                             4
#define TK_BEGIN                            5
#define TK_TRANSACTION                      6
#define TK_DEFERRED                         7
#define TK_IMMEDIATE                        8
#define TK_EXCLUSIVE                        9
#define TK_COMMIT                          10
#define TK_END                             11
#define TK_ROLLBACK                        12
#define TK_SAVEPOINT                       13
#define TK_RELEASE                         14
#define TK_TO                              15
#define TK_TABLE                           16
#define TK_CREATE                          17
#define TK_IF                              18
#define TK_NOT                             19
#define TK_EXISTS                          20
#define TK_TEMP                            21
#define TK_LP                              22
#define TK_RP                              23
#define TK_AS                              24
#define TK_WITHOUT                         25
#define TK_COMMA                           26
#define TK_ID                              27
#define TK_INDEXED                         28
#define TK_ABORT                           29
#define TK_ACTION                          30
#define TK_AFTER                           31
#define TK_ANALYZE                         32
#define TK_ASC                             33
#define TK_ATTACH                          34
#define TK_BEFORE                          35
#define TK_BY                              36
#define TK_CASCADE                         37
#define TK_CAST                            38
#define TK_COLUMNKW                        39
#define TK_CONFLICT                        40
#define TK_DATABASE                        41
#define TK_DESC                            42
#define TK_DETACH                          43
#define TK_EACH                            44
#define TK_FAIL                            45
#define TK_FOR                             46
#define TK_IGNORE                          47
#define TK_INITIALLY                       48
#define TK_INSTEAD                         49
#define TK_LIKE_KW                         50
#define TK_MATCH                           51
#define TK_NO                              52
#define TK_KEY                             53
#define TK_OF                              54
#define TK_OFFSET                          55
#define TK_PRAGMA                          56
#define TK_RAISE                           57
#define TK_RECURSIVE                       58
#define TK_REPLACE                         59
#define TK_RESTRICT                        60
#define TK_ROW                             61
#define TK_TRIGGER                         62
#define TK_VACUUM                          63
#define TK_VIEW                            64
#define TK_VIRTUAL                         65
#define TK_WITH                            66
#define TK_REINDEX                         67
#define TK_RENAME                          68
#define TK_CTIME_KW                        69
#define TK_ANY                             70
#define TK_OR                              71
#define TK_AND                             72
#define TK_IS                              73
#define TK_BETWEEN                         74
#define TK_IN                              75
#define TK_ISNULL                          76
#define TK_NOTNULL                         77
#define TK_NE                              78
#define TK_EQ                              79
#define TK_GT                              80
#define TK_LE                              81
#define TK_LT                              82
#define TK_GE                              83
#define TK_ESCAPE                          84
#define TK_BITAND                          85
#define TK_BITOR                           86
#define TK_LSHIFT                          87
#define TK_RSHIFT                          88
#define TK_PLUS                            89
#define TK_MINUS                           90
#define TK_STAR                            91
#define TK_SLASH                           92
#define TK_REM                             93
#define TK_CONCAT                          94
#define TK_COLLATE                         95
#define TK_BITNOT                          96
#define TK_STRING                          97
#define TK_JOIN_KW                         98
#define TK_CONSTRAINT                      99
#define TK_DEFAULT                        100
#define TK_NULL                           101
#define TK_PRIMARY                        102
#define TK_UNIQUE                         103
#define TK_CHECK                          104
#define TK_REFERENCES                     105
#define TK_AUTOINCR                       106
#define TK_ON                             107
#define TK_INSERT                         108
#define TK_DELETE                         109
#define TK_UPDATE                         110
#define TK_SET                            111
#define TK_DEFERRABLE                     112
#define TK_FOREIGN                        113
#define TK_DROP                           114
#define TK_UNION                          115
#define TK_ALL                            116
#define TK_EXCEPT                         117
#define TK_INTERSECT                      118
#define TK_SELECT                         119
#define TK_VALUES                         120
#define TK_DISTINCT                       121
#define TK_DOT                            122
#define TK_FROM                           123
#define TK_JOIN                           124
#define TK_USING                          125
#define TK_ORDER                          126
#define TK_GROUP                          127
#define TK_HAVING                         128
#define TK_LIMIT                          129
#define TK_WHERE                          130
#define TK_INTO                           131
#define TK_INTEGER                        132
#define TK_FLOAT                          133
#define TK_BLOB                           134
#define TK_VARIABLE                       135
#define TK_CASE                           136
#define TK_WHEN                           137
#define TK_THEN                           138
#define TK_ELSE                           139
#define TK_INDEX                          140
#define TK_ALTER                          141
#define TK_ADD                            142
#define TK_TO_TEXT                        143
#define TK_TO_BLOB                        144
#define TK_TO_NUMERIC                     145
#define TK_TO_INT                         146
#define TK_TO_REAL                        147
#define TK_ISNOT                          148
#define TK_END_OF_FILE                    149
#define TK_ILLEGAL                        150
#define TK_SPACE                          151
#define TK_UNCLOSED_STRING                152
#define TK_FUNCTION                       153
#define TK_COLUMN                         154
#define TK_AGG_FUNCTION                   155
#define TK_AGG_COLUMN                     156
#define TK_UMINUS                         157
#define TK_UPLUS                          158
#define TK_REGISTER                       159
# define double sqlite_int64
# define float sqlite_int64
# define LONGDOUBLE_TYPE sqlite_int64
# ifndef SQLITE_BIG_DBL
#   define SQLITE_BIG_DBL (((sqlite3_int64)1)<<50)
# endif
# define SQLITE_OMIT_DATETIME_FUNCS 1
# define SQLITE_OMIT_TRACE 1
# undef SQLITE_MIXED_ENDIAN_64BIT_FLOAT
# undef SQLITE_HAVE_ISNAN
# define SQLITE_BIG_DBL (1e99)
#define OMIT_TEMPDB 1
#define OMIT_TEMPDB 0
#define SQLITE_MAX_FILE_FORMAT 4
# define SQLITE_DEFAULT_FILE_FORMAT 4
# define SQLITE_DEFAULT_RECURSIVE_TRIGGERS 0
# define SQLITE_TEMP_STORE 1
# define SQLITE_TEMP_STORE_xc 1
#if SQLITE_TEMP_STORE==3 || SQLITE_THREADSAFE==0
# undef SQLITE_MAX_WORKER_THREADS
# define SQLITE_MAX_WORKER_THREADS 0
# define SQLITE_MAX_WORKER_THREADS 8
# define SQLITE_DEFAULT_WORKER_THREADS 0
#if SQLITE_DEFAULT_WORKER_THREADS>SQLITE_MAX_WORKER_THREADS
# undef SQLITE_MAX_WORKER_THREADS
# define SQLITE_MAX_WORKER_THREADS SQLITE_DEFAULT_WORKER_THREADS
#define offsetof(STRUCTURE,FIELD) ((int)((char*)&((STRUCTURE*)0)->FIELD))
#define MIN(A,B) ((A)<(B)?(A):(B))
#define MAX(A,B) ((A)>(B)?(A):(B))
#define SWAP(TYPE,A,B)
#if 'A' == '\301'
# define SQLITE_EBCDIC 1
# define SQLITE_ASCII 1
# ifdef HAVE_UINT32_T
#  define UINT32_TYPE uint32_t
# else
#  define UINT32_TYPE unsigned int
# endif
# ifdef HAVE_UINT16_T
#  define UINT16_TYPE uint16_t
# else
#  define UINT16_TYPE unsigned short int
# endif
# ifdef HAVE_INT16_T
#  define INT16_TYPE int16_t
# else
#  define INT16_TYPE short int
# endif
# ifdef HAVE_UINT8_T
#  define UINT8_TYPE uint8_t
# else
#  define UINT8_TYPE unsigned char
# endif
# ifdef HAVE_INT8_T
#  define INT8_TYPE int8_t
# else
#  define INT8_TYPE signed char
# endif
# define LONGDOUBLE_TYPE long double
typedef sqlite_int64 i64;
typedef sqlite_uint64 u64;
typedef UINT32_TYPE u32;
#define U32_TYPE_DEFINED
typedef UINT16_TYPE u16;
#define U16_TYPE_DEFINED
typedef INT16_TYPE i16;
typedef UINT8_TYPE u8;
#define U8_TYPE_DEFINED
typedef INT8_TYPE i8;
#define SQLITE_MAX_U32  ((((u64)1)<<32)-1)
typedef u64 tRowcnt;
typedef u32 tRowcnt;
typedef INT16_TYPE LogEst;
# if defined(__SIZEOF_POINTER__)
#   define SQLITE_PTRSIZE __SIZEOF_POINTER__
# elif defined(i386)     || defined(__i386__)   || defined(_M_IX86) ||    \
defined(_M_ARM)   || defined(__arm__)    || defined(__x86)
#   define SQLITE_PTRSIZE 4
# else
#   define SQLITE_PTRSIZE 8
# endif
SQLITE_PRIVATE const int sqlite3one = 1;
SQLITE_PRIVATE const int sqlite3one;
#if (defined(i386)     || defined(__i386__)   || defined(_M_IX86) ||    \
defined(__x86_64) || defined(__x86_64__) || defined(_M_X64)  ||    \
defined(_M_AMD64) || defined(_M_ARM)     || defined(__x86)   ||    \
defined(__arm__)) && !defined(SQLITE_RUNTIME_BYTEORDER)
# define SQLITE_BYTEORDER    1234
# define SQLITE_BIGENDIAN    0
# define SQLITE_LITTLEENDIAN 1
# define SQLITE_UTF16NATIVE  SQLITE_UTF16LE
#if (defined(sparc)    || defined(__ppc__))  \
&& !defined(SQLITE_RUNTIME_BYTEORDER)
# define SQLITE_BYTEORDER    4321
# define SQLITE_BIGENDIAN    1
# define SQLITE_LITTLEENDIAN 0
# define SQLITE_UTF16NATIVE  SQLITE_UTF16BE
#if !defined(SQLITE_BYTEORDER)
# define SQLITE_BYTEORDER    0
# define SQLITE_BIGENDIAN    (*(char *)(&sqlite3one)==0)
# define SQLITE_LITTLEENDIAN (*(char *)(&sqlite3one)==1)
# define SQLITE_UTF16NATIVE  (SQLITE_BIGENDIAN?SQLITE_UTF16BE:SQLITE_UTF16LE)
#define LARGEST_INT64  (0xffffffff|(((i64)0x7fffffff)<<32))
#define SMALLEST_INT64 (((i64)-1) - LARGEST_INT64)
#define ROUND8(x)     (((x)+7)&~7)
#define ROUNDDOWN8(x) ((x)&~7)
# define EIGHT_BYTE_ALIGNMENT(X)   ((((char*)(X) - (char*)0)&3)==0)
# define EIGHT_BYTE_ALIGNMENT(X)   ((((char*)(X) - (char*)0)&7)==0)
#if defined(__OpenBSD__) || defined(__QNXNTO__)
# undef SQLITE_MAX_MMAP_SIZE
# define SQLITE_MAX_MMAP_SIZE 0
# include <TargetConditionals.h>
# if TARGET_OS_IPHONE
#   undef SQLITE_MAX_MMAP_SIZE
#   define SQLITE_MAX_MMAP_SIZE 0
# endif
# if defined(__linux__) \
|| defined(_WIN32) \
|| (defined(__APPLE__) && defined(__MACH__)) \
|| defined(__sun)
#   define SQLITE_MAX_MMAP_SIZE 0x7fff0000
# else
#   define SQLITE_MAX_MMAP_SIZE 0
# endif
# define SQLITE_MAX_MMAP_SIZE_xc 1
# define SQLITE_DEFAULT_MMAP_SIZE 0
# define SQLITE_DEFAULT_MMAP_SIZE_xc 1
#if SQLITE_DEFAULT_MMAP_SIZE>SQLITE_MAX_MMAP_SIZE
# undef SQLITE_DEFAULT_MMAP_SIZE
# define SQLITE_DEFAULT_MMAP_SIZE SQLITE_MAX_MMAP_SIZE
# undef SQLITE_ENABLE_STAT3
# define SQLITE_ENABLE_STAT3_OR_STAT4 1
#elif SQLITE_ENABLE_STAT3
# define SQLITE_ENABLE_STAT3_OR_STAT4 1
#elif SQLITE_ENABLE_STAT3_OR_STAT4
# undef SQLITE_ENABLE_STAT3_OR_STAT4
#if defined(SQLITE_DEBUG) || defined(SQLITE_ENABLE_SELECTTRACE)
# define SELECTTRACE_ENABLED 1
# define SELECTTRACE_ENABLED 0
typedef struct BusyHandler BusyHandler;
struct BusyHandler ;
#define MASTER_NAME       "sqlite_master"
#define TEMP_MASTER_NAME  "sqlite_temp_master"
#define MASTER_ROOT       1
#define SCHEMA_TABLE(x)  ((!OMIT_TEMPDB)&&(x==1)?TEMP_MASTER_NAME:MASTER_NAME)
#define ArraySize(X)    ((int)(sizeof(X)/sizeof(X[0])))
#define IsPowerOfTwo(X) (((X)&((X)-1))==0)
#define SQLITE_DYNAMIC   ((sqlite3_destructor_type)sqlite3MallocSize)
#define SQLITE_WSD const
#define GLOBAL(t,v) (*(t*)sqlite3_wsd_find((void*)&(v), sizeof(v)))
#define sqlite3GlobalConfig GLOBAL(struct Sqlite3Config, sqlite3Config)
SQLITE_API int SQLITE_STDCALL sqlite3_wsd_init(int N, int J);
SQLITE_API void *SQLITE_STDCALL sqlite3_wsd_find(void *K, int L);
#define SQLITE_WSD
#define GLOBAL(t,v) v
#define sqlite3GlobalConfig sqlite3Config
#define UNUSED_PARAMETER(x) (void)(x)
#define UNUSED_PARAMETER2(x,y) UNUSED_PARAMETER(x),UNUSED_PARAMETER(y)
typedef struct AggInfo AggInfo;
typedef struct AuthContext AuthContext;
typedef struct AutoincInfo AutoincInfo;
typedef struct Bitvec Bitvec;
typedef struct CollSeq CollSeq;
typedef struct Column Column;
typedef struct Db Db;
typedef struct Schema Schema;
typedef struct Expr Expr;
typedef struct ExprList ExprList;
typedef struct ExprSpan ExprSpan;
typedef struct FKey FKey;
typedef struct FuncDestructor FuncDestructor;
typedef struct FuncDef FuncDef;
typedef struct FuncDefHash FuncDefHash;
typedef struct IdList IdList;
typedef struct Index Index;
typedef struct IndexSample IndexSample;
typedef struct KeyClass KeyClass;
typedef struct KeyInfo KeyInfo;
typedef struct Lookaside Lookaside;
typedef struct LookasideSlot LookasideSlot;
typedef struct Module Module;
typedef struct NameContext NameContext;
typedef struct Parse Parse;
typedef struct PrintfArguments PrintfArguments;
typedef struct RowSet RowSet;
typedef struct Savepoint Savepoint;
typedef struct Select Select;
typedef struct SQLiteThread SQLiteThread;
typedef struct SelectDest SelectDest;
typedef struct SrcList SrcList;
typedef struct StrAccum StrAccum;
typedef struct Table Table;
typedef struct TableLock TableLock;
typedef struct Token Token;
typedef struct TreeView TreeView;
typedef struct Trigger Trigger;
typedef struct TriggerPrg TriggerPrg;
typedef struct TriggerStep TriggerStep;
typedef struct UnpackedRecord UnpackedRecord;
typedef struct VTable VTable;
typedef struct VtabCtx VtabCtx;
typedef struct Walker Walker;
typedef struct WhereInfo WhereInfo;
typedef struct With With;
#define _BTREE_H_
#define SQLITE_N_BTREE_META 16
#define SQLITE_DEFAULT_AUTOVACUUM 0
#define BTREE_AUTOVACUUM_NONE 0
#define BTREE_AUTOVACUUM_FULL 1
#define BTREE_AUTOVACUUM_INCR 2
typedef struct Btree Btree;
typedef struct BtCursor BtCursor;
typedef struct BtShared BtShared;
SQLITE_PRIVATE int sqlite3BtreeOpen(
sqlite3_vfs *pVfs,
const char *zFilename,
sqlite3 *db,
Btree **ppBtree,
int flags,
int vfsFlags
);
#define BTREE_OMIT_JOURNAL  1
#define BTREE_MEMORY        2
#define BTREE_SINGLE        4
#define BTREE_UNORDERED     8
SQLITE_PRIVATE int sqlite3BtreeClose(Btree*);
SQLITE_PRIVATE int sqlite3BtreeSetCacheSize(Btree*,int);
#if SQLITE_MAX_MMAP_SIZE>0
SQLITE_PRIVATE   int sqlite3BtreeSetMmapLimit(Btree*,sqlite3_int64);
SQLITE_PRIVATE int sqlite3BtreeSetPagerFlags(Btree*,unsigned);
SQLITE_PRIVATE int sqlite3BtreeSyncDisabled(Btree*);
SQLITE_PRIVATE int sqlite3BtreeSetPageSize(Btree *p, int nPagesize, int nReserve, int eFix);
SQLITE_PRIVATE int sqlite3BtreeGetPageSize(Btree*);
SQLITE_PRIVATE int sqlite3BtreeMaxPageCount(Btree*,int);
SQLITE_PRIVATE u32 sqlite3BtreeLastPage(Btree*);
SQLITE_PRIVATE int sqlite3BtreeSecureDelete(Btree*,int);
SQLITE_PRIVATE int sqlite3BtreeGetOptimalReserve(Btree*);
SQLITE_PRIVATE int sqlite3BtreeGetReserveNoMutex(Btree *p);
SQLITE_PRIVATE int sqlite3BtreeSetAutoVacuum(Btree *, int);
SQLITE_PRIVATE int sqlite3BtreeGetAutoVacuum(Btree *);
SQLITE_PRIVATE int sqlite3BtreeBeginTrans(Btree*,int);
SQLITE_PRIVATE int sqlite3BtreeCommitPhaseOne(Btree*, const char *zMaster);
SQLITE_PRIVATE int sqlite3BtreeCommitPhaseTwo(Btree*, int);
SQLITE_PRIVATE int sqlite3BtreeCommit(Btree*);
SQLITE_PRIVATE int sqlite3BtreeRollback(Btree*,int,int);
SQLITE_PRIVATE int sqlite3BtreeBeginStmt(Btree*,int);
SQLITE_PRIVATE int sqlite3BtreeCreateTable(Btree*, int*, int flags);
SQLITE_PRIVATE int sqlite3BtreeIsInTrans(Btree*);
SQLITE_PRIVATE int sqlite3BtreeIsInReadTrans(Btree*);
SQLITE_PRIVATE int sqlite3BtreeIsInBackup(Btree*);
SQLITE_PRIVATE void *sqlite3BtreeSchema(Btree *, int, void(*)(void *));
SQLITE_PRIVATE int sqlite3BtreeSchemaLocked(Btree *pBtree);
SQLITE_PRIVATE int sqlite3BtreeLockTable(Btree *pBtree, int iTab, u8 isWriteLock);
SQLITE_PRIVATE int sqlite3BtreeSavepoint(Btree *, int, int);
SQLITE_PRIVATE const char *sqlite3BtreeGetFilename(Btree *);
SQLITE_PRIVATE const char *sqlite3BtreeGetJournalname(Btree *);
SQLITE_PRIVATE int sqlite3BtreeCopyFile(Btree *, Btree *);
SQLITE_PRIVATE int sqlite3BtreeIncrVacuum(Btree *);
#define BTREE_INTKEY     1
#define BTREE_BLOBKEY    2
SQLITE_PRIVATE int sqlite3BtreeDropTable(Btree*, int, int*);
SQLITE_PRIVATE int sqlite3BtreeClearTable(Btree*, int, int*);
SQLITE_PRIVATE int sqlite3BtreeClearTableOfCursor(BtCursor*);
SQLITE_PRIVATE int sqlite3BtreeTripAllCursors(Btree*, int, int);
SQLITE_PRIVATE void sqlite3BtreeGetMeta(Btree *pBtree, int idx, u32 *pValue);
SQLITE_PRIVATE int sqlite3BtreeUpdateMeta(Btree*, int idx, u32 value);
SQLITE_PRIVATE int sqlite3BtreeNewDb(Btree *p);
SQLITE_PRIVATE int sqlite3BtreeHandleCacheFixup(Btree *, int);
#define BTREE_FREE_PAGE_COUNT     0
#define BTREE_SCHEMA_VERSION      1
#define BTREE_FILE_FORMAT         2
#define BTREE_DEFAULT_CACHE_SIZE  3
#define BTREE_LARGEST_ROOT_PAGE   4
#define BTREE_TEXT_ENCODING       5
#define BTREE_USER_VERSION        6
#define BTREE_INCR_VACUUM         7
#define BTREE_APPLICATION_ID      8
#define BTREE_DATA_VERSION        15
#define BTREE_BULKLOAD 0x00000001
#define BTREE_SEEK_EQ  0x00000002
SQLITE_PRIVATE int sqlite3BtreeCursor(
Btree*,
int iTable,
int wrFlag,
struct KeyInfo*,
BtCursor *pCursor
);
SQLITE_PRIVATE int sqlite3BtreeCursorSize(void);
SQLITE_PRIVATE void sqlite3BtreeCursorZero(BtCursor*);
SQLITE_PRIVATE int sqlite3BtreeCloseCursor(BtCursor*);
SQLITE_PRIVATE int sqlite3BtreeMovetoUnpacked(
BtCursor*,
UnpackedRecord *pUnKey,
i64 intKey,
int bias,
int *pRes
);
SQLITE_PRIVATE int sqlite3BtreeCursorHasMoved(BtCursor*);
SQLITE_PRIVATE int sqlite3BtreeCursorRestore(BtCursor*, int*);
SQLITE_PRIVATE int sqlite3BtreeDelete(BtCursor*);
SQLITE_PRIVATE int sqlite3BtreeInsert(BtCursor*, const void *pKey, i64 nKey,
const void *pData, int nData,
int nZero, int bias, int seekResult);
SQLITE_PRIVATE int sqlite3BtreeFirst(BtCursor*, int *pRes);
SQLITE_PRIVATE int sqlite3BtreeLast(BtCursor*, int *pRes);
SQLITE_PRIVATE int sqlite3BtreeNext(BtCursor*, int *pRes);
SQLITE_PRIVATE int sqlite3BtreeEof(BtCursor*);
SQLITE_PRIVATE int sqlite3BtreePrevious(BtCursor*, int *pRes);
SQLITE_PRIVATE int sqlite3BtreeKeySize(BtCursor*, i64 *pSize);
SQLITE_PRIVATE int sqlite3BtreeKey(BtCursor*, u32 offset, u32 amt, void*);
SQLITE_PRIVATE const void *sqlite3BtreeKeyFetch(BtCursor*, u32 *pAmt);
SQLITE_PRIVATE const void *sqlite3BtreeDataFetch(BtCursor*, u32 *pAmt);
SQLITE_PRIVATE int sqlite3BtreeDataSize(BtCursor*, u32 *pSize);
SQLITE_PRIVATE int sqlite3BtreeData(BtCursor*, u32 offset, u32 amt, void*);
SQLITE_PRIVATE char *sqlite3BtreeIntegrityCheck(Btree*, int *aRoot, int nRoot, int, int*);
SQLITE_PRIVATE struct Pager *sqlite3BtreePager(Btree*);
SQLITE_PRIVATE int sqlite3BtreePutData(BtCursor*, u32 offset, u32 amt, void*);
SQLITE_PRIVATE void sqlite3BtreeIncrblobCursor(BtCursor *);
SQLITE_PRIVATE void sqlite3BtreeClearCursor(BtCursor *);
SQLITE_PRIVATE int sqlite3BtreeSetVersion(Btree *pBt, int iVersion);
SQLITE_PRIVATE void sqlite3BtreeCursorHints(BtCursor *, unsigned int mask);
SQLITE_PRIVATE int sqlite3BtreeCursorHasHint(BtCursor*, unsigned int mask);
SQLITE_PRIVATE int sqlite3BtreeIsReadonly(Btree *pBt);
SQLITE_PRIVATE int sqlite3HeaderSizeBtree(void);
SQLITE_PRIVATE int sqlite3BtreeCursorIsValid(BtCursor*);
SQLITE_PRIVATE int sqlite3BtreeCount(BtCursor *, i64 *);
SQLITE_PRIVATE int sqlite3BtreeCursorInfo(BtCursor*, int*, int);
SQLITE_PRIVATE void sqlite3BtreeCursorList(Btree*);
SQLITE_PRIVATE   int sqlite3BtreeCheckpoint(Btree*, int, int *, int *);
SQLITE_PRIVATE   void sqlite3BtreeEnter(Btree*);
SQLITE_PRIVATE   void sqlite3BtreeEnterAll(sqlite3*);
# define sqlite3BtreeEnter(X)
# define sqlite3BtreeEnterAll(X)
#if !defined(SQLITE_OMIT_SHARED_CACHE) && SQLITE_THREADSAFE
SQLITE_PRIVATE   int sqlite3BtreeSharable(Btree*);
SQLITE_PRIVATE   void sqlite3BtreeLeave(Btree*);
SQLITE_PRIVATE   void sqlite3BtreeEnterCursor(BtCursor*);
SQLITE_PRIVATE   void sqlite3BtreeLeaveCursor(BtCursor*);
SQLITE_PRIVATE   void sqlite3BtreeLeaveAll(sqlite3*);
SQLITE_PRIVATE   int sqlite3BtreeHoldsMutex(Btree*);
SQLITE_PRIVATE   int sqlite3BtreeHoldsAllMutexes(sqlite3*);
SQLITE_PRIVATE   int sqlite3SchemaMutexHeld(sqlite3*,int,Schema*);
# define sqlite3BtreeSharable(X) 0
# define sqlite3BtreeLeave(X)
# define sqlite3BtreeEnterCursor(X)
# define sqlite3BtreeLeaveCursor(X)
# define sqlite3BtreeLeaveAll(X)
# define sqlite3BtreeHoldsMutex(X) 1
# define sqlite3BtreeHoldsAllMutexes(X) 1
# define sqlite3SchemaMutexHeld(X,Y,Z) 1
#define _SQLITE_VDBE_H_
typedef struct Vdbe Vdbe;
typedef struct Mem Mem;
typedef struct SubProgram SubProgram;
struct VdbeOp ;
typedef struct VdbeOp VdbeOp;
struct SubProgram ;
struct VdbeOpList ;
typedef struct VdbeOpList VdbeOpList;
#define P4_NOTUSED    0
#define P4_DYNAMIC  (-1)
#define P4_STATIC   (-2)
#define P4_COLLSEQ  (-4)
#define P4_FUNCDEF  (-5)
#define P4_KEYINFO  (-6)
#define P4_MEM      (-8)
#define P4_TRANSIENT  0
#define P4_VTAB     (-10)
#define P4_MPRINTF  (-11)
#define P4_REAL     (-12)
#define P4_INT64    (-13)
#define P4_INT32    (-14)
#define P4_INTARRAY (-15)
#define P4_SUBPROGRAM  (-18)
#define P4_ADVANCE  (-19)
#define P5_ConstraintNotNull 1
#define P5_ConstraintUnique  2
#define P5_ConstraintCheck   3
#define P5_ConstraintFK      4
#define COLNAME_NAME     0
#define COLNAME_DECLTYPE 1
#define COLNAME_DATABASE 2
#define COLNAME_TABLE    3
#define COLNAME_COLUMN   4
# define COLNAME_N        5
# ifdef SQLITE_OMIT_DECLTYPE
#   define COLNAME_N      1
# else
#   define COLNAME_N      2
# endif
#define ADDR(X)  (-1-(X))
#define OP_Function        1
#define OP_Savepoint       2
#define OP_AutoCommit      3
#define OP_Transaction     4
#define OP_SorterNext      5
#define OP_PrevIfOpen      6
#define OP_NextIfOpen      7
#define OP_Prev            8
#define OP_Next            9
#define OP_AggStep        10
#define OP_Checkpoint     11
#define OP_JournalMode    12
#define OP_Vacuum         13
#define OP_VFilter        14
#define OP_VUpdate        15
#define OP_Goto           16
#define OP_Gosub          17
#define OP_Return         18
#define OP_Not            19
#define OP_InitCoroutine  20
#define OP_EndCoroutine   21
#define OP_Yield          22
#define OP_HaltIfNull     23
#define OP_Halt           24
#define OP_Integer        25
#define OP_Int64          26
#define OP_String         27
#define OP_Null           28
#define OP_SoftNull       29
#define OP_Blob           30
#define OP_Variable       31
#define OP_Move           32
#define OP_Copy           33
#define OP_SCopy          34
#define OP_ResultRow      35
#define OP_CollSeq        36
#define OP_AddImm         37
#define OP_MustBeInt      38
#define OP_RealAffinity   39
#define OP_Cast           40
#define OP_Permutation    41
#define OP_Compare        42
#define OP_Jump           43
#define OP_Once           44
#define OP_If             45
#define OP_IfNot          46
#define OP_Column         47
#define OP_Affinity       48
#define OP_MakeRecord     49
#define OP_Count          50
#define OP_ReadCookie     51
#define OP_SetCookie      52
#define OP_ReopenIdx      53
#define OP_OpenRead       54
#define OP_OpenWrite      55
#define OP_OpenAutoindex  56
#define OP_OpenEphemeral  57
#define OP_SorterOpen     58
#define OP_SequenceTest   59
#define OP_OpenPseudo     60
#define OP_Close          61
#define OP_SeekLT         62
#define OP_SeekLE         63
#define OP_SeekGE         64
#define OP_SeekGT         65
#define OP_Seek           66
#define OP_NoConflict     67
#define OP_NotFound       68
#define OP_Found          69
#define OP_NotExists      70
#define OP_Or             71
#define OP_And            72
#define OP_Sequence       73
#define OP_NewRowid       74
#define OP_Insert         75
#define OP_IsNull         76
#define OP_NotNull        77
#define OP_Ne             78
#define OP_Eq             79
#define OP_Gt             80
#define OP_Le             81
#define OP_Lt             82
#define OP_Ge             83
#define OP_InsertInt      84
#define OP_BitAnd         85
#define OP_BitOr          86
#define OP_ShiftLeft      87
#define OP_ShiftRight     88
#define OP_Add            89
#define OP_Subtract       90
#define OP_Multiply       91
#define OP_Divide         92
#define OP_Remainder      93
#define OP_Concat         94
#define OP_Delete         95
#define OP_BitNot         96
#define OP_String8        97
#define OP_ResetCount     98
#define OP_SorterCompare  99
#define OP_SorterData    100
#define OP_RowKey        101
#define OP_RowData       102
#define OP_Rowid         103
#define OP_NullRow       104
#define OP_Last          105
#define OP_SorterSort    106
#define OP_Sort          107
#define OP_Rewind        108
#define OP_SorterInsert  109
#define OP_IdxInsert     110
#define OP_IdxDelete     111
#define OP_IdxRowid      112
#define OP_IdxLE         113
#define OP_IdxGT         114
#define OP_IdxLT         115
#define OP_IdxGE         116
#define OP_Destroy       117
#define OP_Clear         118
#define OP_ResetSorter   119
#define OP_CreateIndex   120
#define OP_CreateTable   121
#define OP_ParseSchema   122
#define OP_LoadAnalysis  123
#define OP_DropTable     124
#define OP_DropIndex     125
#define OP_DropTrigger   126
#define OP_IntegrityCk   127
#define OP_RowSetAdd     128
#define OP_RowSetRead    129
#define OP_RowSetTest    130
#define OP_Program       131
#define OP_Param         132
#define OP_Real          133
#define OP_FkCounter     134
#define OP_FkIfZero      135
#define OP_MemMax        136
#define OP_IfPos         137
#define OP_IfNeg         138
#define OP_IfNotZero     139
#define OP_DecrJumpZero  140
#define OP_JumpZeroIncr  141
#define OP_AggFinal      142
#define OP_IncrVacuum    143
#define OP_Expire        144
#define OP_TableLock     145
#define OP_VBegin        146
#define OP_VCreate       147
#define OP_VDestroy      148
#define OP_VOpen         149
#define OP_VColumn       150
#define OP_VNext         151
#define OP_VRename       152
#define OP_Pagecount     153
#define OP_MaxPgcnt      154
#define OP_Init          155
#define OP_Noop          156
#define OP_Explain       157
#define OPFLG_JUMP            0x0001
#define OPFLG_IN1             0x0002
#define OPFLG_IN2             0x0004
#define OPFLG_IN3             0x0008
#define OPFLG_OUT2            0x0010
#define OPFLG_OUT3            0x0020
#define OPFLG_INITIALIZER
SQLITE_PRIVATE Vdbe *sqlite3VdbeCreate(Parse*);
SQLITE_PRIVATE int sqlite3VdbeAddOp0(Vdbe*,int);
SQLITE_PRIVATE int sqlite3VdbeAddOp1(Vdbe*,int,int);
SQLITE_PRIVATE int sqlite3VdbeAddOp2(Vdbe*,int,int,int);
SQLITE_PRIVATE int sqlite3VdbeAddOp3(Vdbe*,int,int,int,int);
SQLITE_PRIVATE int sqlite3VdbeAddOp4(Vdbe*,int,int,int,int,const char *zP4,int);
SQLITE_PRIVATE int sqlite3VdbeAddOp4Int(Vdbe*,int,int,int,int,int);
SQLITE_PRIVATE int sqlite3VdbeAddOpList(Vdbe*, int nOp, VdbeOpList const *aOp, int iLineno);
SQLITE_PRIVATE void sqlite3VdbeAddParseSchemaOp(Vdbe*,int,char*);
SQLITE_PRIVATE void sqlite3VdbeChangeP1(Vdbe*, u32 addr, int P1);
SQLITE_PRIVATE void sqlite3VdbeChangeP2(Vdbe*, u32 addr, int P2);
SQLITE_PRIVATE void sqlite3VdbeChangeP3(Vdbe*, u32 addr, int P3);
SQLITE_PRIVATE void sqlite3VdbeChangeP5(Vdbe*, u8 P5);
SQLITE_PRIVATE void sqlite3VdbeJumpHere(Vdbe*, int addr);
SQLITE_PRIVATE void sqlite3VdbeChangeToNoop(Vdbe*, int addr);
SQLITE_PRIVATE int sqlite3VdbeDeletePriorOpcode(Vdbe*, u8 op);
SQLITE_PRIVATE void sqlite3VdbeChangeP4(Vdbe*, int addr, const char *zP4, int N);
SQLITE_PRIVATE void sqlite3VdbeSetP4KeyInfo(Parse*, Index*);
SQLITE_PRIVATE void sqlite3VdbeUsesBtree(Vdbe*, int);
SQLITE_PRIVATE VdbeOp *sqlite3VdbeGetOp(Vdbe*, int);
SQLITE_PRIVATE int sqlite3VdbeMakeLabel(Vdbe*);
SQLITE_PRIVATE void sqlite3VdbeRunOnlyOnce(Vdbe*);
SQLITE_PRIVATE void sqlite3VdbeDelete(Vdbe*);
SQLITE_PRIVATE void sqlite3VdbeClearObject(sqlite3*,Vdbe*);
SQLITE_PRIVATE void sqlite3VdbeMakeReady(Vdbe*,Parse*);
SQLITE_PRIVATE int sqlite3VdbeFinalize(Vdbe*);
SQLITE_PRIVATE void sqlite3VdbeResolveLabel(Vdbe*, int);
SQLITE_PRIVATE int sqlite3VdbeCurrentAddr(Vdbe*);
SQLITE_PRIVATE   int sqlite3VdbeAssertMayAbort(Vdbe *, int);
SQLITE_PRIVATE void sqlite3VdbeResetStepResult(Vdbe*);
SQLITE_PRIVATE void sqlite3VdbeRewind(Vdbe*);
SQLITE_PRIVATE int sqlite3VdbeReset(Vdbe*);
SQLITE_PRIVATE void sqlite3VdbeSetNumCols(Vdbe*,int);
SQLITE_PRIVATE int sqlite3VdbeSetColName(Vdbe*, int, int, const char *, void(*)(void*));
SQLITE_PRIVATE void sqlite3VdbeCountChanges(Vdbe*);
SQLITE_PRIVATE sqlite3 *sqlite3VdbeDb(Vdbe*);
SQLITE_PRIVATE void sqlite3VdbeSetSql(Vdbe*, const char *z, int n, int);
SQLITE_PRIVATE void sqlite3VdbeSwap(Vdbe*,Vdbe*);
SQLITE_PRIVATE VdbeOp *sqlite3VdbeTakeOpArray(Vdbe*, int*, int*);
SQLITE_PRIVATE sqlite3_value *sqlite3VdbeGetBoundValue(Vdbe*, int, u8);
SQLITE_PRIVATE void sqlite3VdbeSetVarmask(Vdbe*, int);
SQLITE_PRIVATE   char *sqlite3VdbeExpandSql(Vdbe*, const char*);
SQLITE_PRIVATE int sqlite3MemCompare(const Mem*, const Mem*, const CollSeq*);
SQLITE_PRIVATE void sqlite3VdbeRecordUnpack(KeyInfo*,int,const void*,UnpackedRecord*);
SQLITE_PRIVATE int sqlite3VdbeRecordCompare(int,const void*,UnpackedRecord*);
SQLITE_PRIVATE int sqlite3VdbeRecordCompareWithSkip(int, const void *, UnpackedRecord *, int);
SQLITE_PRIVATE UnpackedRecord *sqlite3VdbeAllocUnpackedRecord(KeyInfo *, char *, int, char **);
typedef int (*RecordCompare)(int,const void*,UnpackedRecord*);
SQLITE_PRIVATE RecordCompare sqlite3VdbeFindCompare(UnpackedRecord*);
SQLITE_PRIVATE void sqlite3VdbeLinkSubProgram(Vdbe *, SubProgram *);
SQLITE_PRIVATE   void sqlite3VdbeComment(Vdbe*, const char*, ...);
# define VdbeComment(X)  sqlite3VdbeComment X
SQLITE_PRIVATE   void sqlite3VdbeNoopComment(Vdbe*, const char*, ...);
# define VdbeNoopComment(X)  sqlite3VdbeNoopComment X
# ifdef SQLITE_ENABLE_MODULE_COMMENTS
#   define VdbeModuleComment(X)  sqlite3VdbeNoopComment X
# else
#   define VdbeModuleComment(X)
# endif
# define VdbeComment(X)
# define VdbeNoopComment(X)
# define VdbeModuleComment(X)
SQLITE_PRIVATE   void sqlite3VdbeSetLineNumber(Vdbe*,int);
# define VdbeCoverage(v) sqlite3VdbeSetLineNumber(v,__LINE__)
# define VdbeCoverageIf(v,x) if(x)sqlite3VdbeSetLineNumber(v,__LINE__)
# define VdbeCoverageAlwaysTaken(v) sqlite3VdbeSetLineNumber(v,2);
# define VdbeCoverageNeverTaken(v) sqlite3VdbeSetLineNumber(v,1);
# define VDBE_OFFSET_LINENO(x) (__LINE__+x)
# define VdbeCoverage(v)
# define VdbeCoverageIf(v,x)
# define VdbeCoverageAlwaysTaken(v)
# define VdbeCoverageNeverTaken(v)
# define VDBE_OFFSET_LINENO(x) 0
SQLITE_PRIVATE void sqlite3VdbeScanStatus(Vdbe*, int, int, int, LogEst, const char*);
# define sqlite3VdbeScanStatus(a,b,c,d,e)
#undef DB_TIMEOUT
typedef struct Pager Pager;
typedef struct PgHdr DbPage;
typedef db_pgno_t Pgno;
#define	PAGER_OMIT_JOURNAL  0x0001
#define	PAGER_NO_READLOCK   0x0002
#define	PAGER_LOCKINGMODE_QUERY      -1
#define	PAGER_LOCKINGMODE_NORMAL      0
#define	PAGER_LOCKINGMODE_EXCLUSIVE   1
#define	PAGER_JOURNALMODE_QUERY      -1
#define	PAGER_JOURNALMODE_DELETE      0
#define	PAGER_JOURNALMODE_PERSIST     1
#define	PAGER_JOURNALMODE_OFF         2
#define	PAGER_JOURNALMODE_TRUNCATE    3
#define	PAGER_JOURNALMODE_MEMORY      4
#define	PAGER_JOURNALMODE_WAL         5
#define PAGER_GET_NOCONTENT     0x01
#define PAGER_GET_READONLY      0x02
#define PAGER_SYNCHRONOUS_OFF       0x01
#define PAGER_SYNCHRONOUS_NORMAL    0x02
#define PAGER_SYNCHRONOUS_FULL      0x03
#define PAGER_SYNCHRONOUS_MASK      0x03
#define PAGER_FULLFSYNC             0x04
#define PAGER_CKPT_FULLFSYNC        0x08
#define PAGER_CACHESPILL            0x10
#define PAGER_FLAGS_MASK            0x1c
#define SQLITE_DEFAULT_JOURNAL_SIZE_LIMIT 2 * 1024 * 1024
SQLITE_PRIVATE const char *sqlite3PagerFilename(Pager *pPager, int);
SQLITE_PRIVATE void sqlite3PagerCacheStat(Pager *, int, int, int *);
SQLITE_PRIVATE int sqlite3PagerExclusiveLock(Pager *pPager);
SQLITE_PRIVATE sqlite3_file *sqlite3PagerFile(Pager*);
SQLITE_PRIVATE int sqlite3PagerGetJournalMode(Pager *pPager);
SQLITE_PRIVATE int sqlite3PagerIsMemdb(Pager*);
SQLITE_PRIVATE u8 sqlite3PagerIsreadonly(Pager*);
SQLITE_PRIVATE int sqlite3PagerJournalMode(Pager *, int);
SQLITE_PRIVATE i64 sqlite3PagerJournalSizeLimit(Pager *, i64);
SQLITE_PRIVATE int sqlite3PagerLockingMode(Pager *, int);
SQLITE_PRIVATE int sqlite3PagerMemUsed(Pager *pPager);
SQLITE_PRIVATE int sqlite3PagerOkToChangeJournalMode(Pager *pPager);
SQLITE_PRIVATE int sqlite3PagerPagecount(Pager*, int*);
SQLITE_PRIVATE void sqlite3PagerSetFlags(Pager*,unsigned);
SQLITE_PRIVATE int sqlite3PagerSetJournalMode(Pager *pPager, int eMode);
SQLITE_PRIVATE void sqlite3PagerShrink(Pager*);
SQLITE_PRIVATE int sqlite3PagerWalCallback(Pager *pPager);
SQLITE_PRIVATE int sqlite3PagerCheckpoint(Pager *pPager);
SQLITE_PRIVATE int sqlite3PagerCloseWal(Pager *pPager);
SQLITE_PRIVATE int sqlite3PagerWalSupported(Pager *pPager);
#define	disable_simulated_io_errors()
#define	enable_simulated_io_errors()
SQLITE_PRIVATE int *sqlite3PagerStats(Pager*);
typedef struct PgHdr PgHdr;
struct PgHdr ;
SQLITE_PRIVATE int sqlite3PcacheInitialize(void);
SQLITE_PRIVATE void sqlite3PcacheShutdown(void);
SQLITE_PRIVATE void sqlite3PCacheBufferSetup(void *p, int sz, int n);
SQLITE_PRIVATE void sqlite3PCacheSetDefault(void);
SQLITE_PRIVATE void sqlite3PcacheStats(int *a,int *b,int *c,int *d);
SQLITE_PRIVATE int sqlite3PcacheReleaseMemory(int nReq);
#define _SQLITE_OS_H_
#define _OS_SETUP_H_
#if defined(SQLITE_OS_OTHER)
#  if SQLITE_OS_OTHER==1
#    undef SQLITE_OS_UNIX
#    define SQLITE_OS_UNIX 0
#    undef SQLITE_OS_WIN
#    define SQLITE_OS_WIN 0
#  else
#    undef SQLITE_OS_OTHER
#  endif
#if !defined(SQLITE_OS_UNIX) && !defined(SQLITE_OS_OTHER)
#  define SQLITE_OS_OTHER 0
#  ifndef SQLITE_OS_WIN
#    if defined(_WIN32) || defined(WIN32) || defined(__CYGWIN__) || \
defined(__MINGW32__) || defined(__BORLANDC__)
#      define SQLITE_OS_WIN 1
#      define SQLITE_OS_UNIX 0
#    else
#      define SQLITE_OS_WIN 0
#      define SQLITE_OS_UNIX 1
#    endif
#  else
#    define SQLITE_OS_UNIX 0
#  endif
#  ifndef SQLITE_OS_WIN
#    define SQLITE_OS_WIN 0
#  endif
# define SET_FULLSYNC(x,y)
# define SQLITE_DEFAULT_SECTOR_SIZE 4096
# define SQLITE_TEMP_FILE_PREFIX "etilqs_"
#define NO_LOCK         0
#define SHARED_LOCK     1
#define RESERVED_LOCK   2
#define PENDING_LOCK    3
#define EXCLUSIVE_LOCK  4
# define PENDING_BYTE     (0x40000000)
# define PENDING_BYTE      sqlite3PendingByte
#define RESERVED_BYTE     (PENDING_BYTE+1)
#define SHARED_FIRST      (PENDING_BYTE+2)
#define SHARED_SIZE       510
SQLITE_PRIVATE int sqlite3OsInit(void);
SQLITE_PRIVATE int sqlite3OsClose(sqlite3_file*);
SQLITE_PRIVATE int sqlite3OsRead(sqlite3_file*, void*, int amt, i64 offset);
SQLITE_PRIVATE int sqlite3OsWrite(sqlite3_file*, const void*, int amt, i64 offset);
SQLITE_PRIVATE int sqlite3OsTruncate(sqlite3_file*, i64 size);
SQLITE_PRIVATE int sqlite3OsSync(sqlite3_file*, int);
SQLITE_PRIVATE int sqlite3OsFileSize(sqlite3_file*, i64 *pSize);
SQLITE_PRIVATE int sqlite3OsLock(sqlite3_file*, int);
SQLITE_PRIVATE int sqlite3OsUnlock(sqlite3_file*, int);
SQLITE_PRIVATE int sqlite3OsCheckReservedLock(sqlite3_file *id, int *pResOut);
SQLITE_PRIVATE int sqlite3OsFileControl(sqlite3_file*,int,void*);
SQLITE_PRIVATE void sqlite3OsFileControlHint(sqlite3_file*,int,void*);
#define SQLITE_FCNTL_DB_UNCHANGED 0xca093fa0
SQLITE_PRIVATE int sqlite3OsSectorSize(sqlite3_file *id);
SQLITE_PRIVATE int sqlite3OsDeviceCharacteristics(sqlite3_file *id);
SQLITE_PRIVATE int sqlite3OsShmMap(sqlite3_file *,int,int,int,void volatile **);
SQLITE_PRIVATE int sqlite3OsShmLock(sqlite3_file *id, int, int, int);
SQLITE_PRIVATE void sqlite3OsShmBarrier(sqlite3_file *id);
SQLITE_PRIVATE int sqlite3OsShmUnmap(sqlite3_file *id, int);
SQLITE_PRIVATE int sqlite3OsFetch(sqlite3_file *id, i64, int, void **);
SQLITE_PRIVATE int sqlite3OsUnfetch(sqlite3_file *, i64, void *);
SQLITE_PRIVATE int sqlite3OsOpen(sqlite3_vfs *, const char *, sqlite3_file*, int, int *);
SQLITE_PRIVATE int sqlite3OsDelete(sqlite3_vfs *, const char *, int);
SQLITE_PRIVATE int sqlite3OsAccess(sqlite3_vfs *, const char *, int, int *pResOut);
SQLITE_PRIVATE int sqlite3OsFullPathname(sqlite3_vfs *, const char *, int, char *);
SQLITE_PRIVATE void *sqlite3OsDlOpen(sqlite3_vfs *, const char *);
SQLITE_PRIVATE void sqlite3OsDlError(sqlite3_vfs *, int, char *);
SQLITE_PRIVATE void (*sqlite3OsDlSym(sqlite3_vfs *, void *, const char *))(void);
SQLITE_PRIVATE void sqlite3OsDlClose(sqlite3_vfs *, void *);
SQLITE_PRIVATE int sqlite3OsRandomness(sqlite3_vfs *, int, char *);
SQLITE_PRIVATE int sqlite3OsSleep(sqlite3_vfs *, int);
SQLITE_PRIVATE int sqlite3OsCurrentTimeInt64(sqlite3_vfs *, sqlite3_int64*);
SQLITE_PRIVATE int sqlite3OsOpenMalloc(sqlite3_vfs *, const char *, sqlite3_file **, int,int*);
SQLITE_PRIVATE int sqlite3OsCloseFree(sqlite3_file *);
#if !SQLITE_THREADSAFE
# define SQLITE_MUTEX_OMIT
#if SQLITE_THREADSAFE && !defined(SQLITE_MUTEX_NOOP)
#  if SQLITE_OS_UNIX
#    define SQLITE_MUTEX_PTHREADS
#  elif SQLITE_OS_WIN
#    define SQLITE_MUTEX_W32
#  else
#    define SQLITE_MUTEX_NOOP
#  endif
#define sqlite3_mutex_alloc(X)    ((sqlite3_mutex*)8)
#define sqlite3_mutex_free(X)
#define sqlite3_mutex_enter(X)
#define sqlite3_mutex_try(X)      SQLITE_OK
#define sqlite3_mutex_leave(X)
#define sqlite3_mutex_held(X)     ((void)(X),1)
#define sqlite3_mutex_notheld(X)  ((void)(X),1)
#define sqlite3MutexAlloc(X)      ((sqlite3_mutex*)8)
#define sqlite3MutexInit()        SQLITE_OK
#define sqlite3MutexEnd()
#define MUTEX_LOGIC(X)
#define MUTEX_LOGIC(X)            X
struct Db ;
struct Schema ;
#define DbHasProperty(D,I,P)     (((D)->aDb[I].pSchema->schemaFlags&(P))==(P))
#define DbHasAnyProperty(D,I,P)  (((D)->aDb[I].pSchema->schemaFlags&(P))!=0)
#define DbSetProperty(D,I,P)     (D)->aDb[I].pSchema->schemaFlags|=(P)
#define DbClearProperty(D,I,P)   (D)->aDb[I].pSchema->schemaFlags&=~(P)
#define DB_SchemaLoaded    0x0001
#define DB_UnresetViews    0x0002
#define DB_Empty           0x0004
#define SQLITE_N_LIMIT (SQLITE_LIMIT_WORKER_THREADS+1)
struct Lookaside ;
struct LookasideSlot ;
struct FuncDefHash ;
typedef struct sqlite3_userauth sqlite3_userauth;
struct sqlite3_userauth ;
#define UAUTH_Unknown     0
#define UAUTH_Fail        1
#define UAUTH_User        2
#define UAUTH_Admin       3
SQLITE_PRIVATE int sqlite3UserAuthTable(const char*);
SQLITE_PRIVATE int sqlite3UserAuthCheckLogin(sqlite3*,const char*,u8*);
SQLITE_PRIVATE void sqlite3UserAuthInit(sqlite3*);
SQLITE_PRIVATE void sqlite3CryptFunc(sqlite3_context*,int,sqlite3_value**);
typedef int (*sqlite3_xauth)(void*,int,const char*,const char*,const char*,
const char*, const char*);
typedef int (*sqlite3_xauth)(void*,int,const char*,const char*,const char*,
const char*);
struct sqlite3 ;
#define SCHEMA_ENC(db) ((db)->aDb[0].pSchema->enc)
#define ENC(db)        ((db)->enc)
#define SQLITE_VdbeTrace      0x00000001
#define SQLITE_InternChanges  0x00000002
#define SQLITE_FullFSync      0x00000004
#define SQLITE_CkptFullFSync  0x00000008
#define SQLITE_CacheSpill     0x00000010
#define SQLITE_FullColNames   0x00000020
#define SQLITE_ShortColNames  0x00000040
#define SQLITE_CountRows      0x00000080
#define SQLITE_NullCallback   0x00000100
#define SQLITE_SqlTrace       0x00000200
#define SQLITE_VdbeListing    0x00000400
#define SQLITE_WriteSchema    0x00000800
#define SQLITE_VdbeAddopTrace 0x00001000
#define SQLITE_IgnoreChecks   0x00002000
#define SQLITE_ReadUncommitted 0x0004000
#define SQLITE_LegacyFileFmt  0x00008000
#define SQLITE_RecoveryMode   0x00010000
#define SQLITE_ReverseOrder   0x00020000
#define SQLITE_RecTriggers    0x00040000
#define SQLITE_ForeignKeys    0x00080000
#define SQLITE_AutoIndex      0x00100000
#define SQLITE_PreferBuiltin  0x00200000
#define SQLITE_LoadExtension  0x00400000
#define SQLITE_EnableTrigger  0x00800000
#define SQLITE_DeferFKs       0x01000000
#define SQLITE_QueryOnly      0x02000000
#define SQLITE_VdbeEQP        0x04000000
#define SQLITE_Vacuum         0x08000000
#define SQLITE_QueryFlattener 0x0001
#define SQLITE_ColumnCache    0x0002
#define SQLITE_GroupByOrder   0x0004
#define SQLITE_FactorOutConst 0x0008
#define SQLITE_CoverIdxScan   0x0040
#define SQLITE_OrderByIdxJoin 0x0080
#define SQLITE_SubqCoroutine  0x0100
#define SQLITE_Transitive     0x0200
#define SQLITE_OmitNoopJoin   0x0400
#define SQLITE_Stat34         0x0800
#define SQLITE_AllOpts        0xffff
#define OptimizationDisabled(db, mask)  (((db)->dbOptFlags&(mask))!=0)
#define OptimizationEnabled(db, mask)   (((db)->dbOptFlags&(mask))==0)
#define OptimizationDisabled(db, mask)  0
#define OptimizationEnabled(db, mask)   1
#define ConstFactorOk(P) ((P)->okConstFactor)
#define SQLITE_MAGIC_OPEN     0xa029a697
#define SQLITE_MAGIC_CLOSED   0x9f3c2d33
#define SQLITE_MAGIC_SICK     0x4b771290
#define SQLITE_MAGIC_BUSY     0xf03b7906
#define SQLITE_MAGIC_ERROR    0xb5357930
#define SQLITE_MAGIC_ZOMBIE   0x64cffc7f
struct FuncDef ;
struct FuncDestructor ;
#define SQLITE_FUNC_ENCMASK  0x003
#define SQLITE_FUNC_LIKE     0x004
#define SQLITE_FUNC_CASE     0x008
#define SQLITE_FUNC_EPHEM    0x010
#define SQLITE_FUNC_NEEDCOLL 0x020
#define SQLITE_FUNC_LENGTH   0x040
#define SQLITE_FUNC_TYPEOF   0x080
#define SQLITE_FUNC_COUNT    0x100
#define SQLITE_FUNC_COALESCE 0x200
#define SQLITE_FUNC_UNLIKELY 0x400
#define SQLITE_FUNC_CONSTANT 0x800
#define SQLITE_FUNC_MINMAX  0x1000
#define FUNCTION(zName, nArg, iArg, bNC, xFunc) \
#define VFUNCTION(zName, nArg, iArg, bNC, xFunc) \
#define FUNCTION2(zName, nArg, iArg, bNC, xFunc, extraFlags) \
#define STR_FUNCTION(zName, nArg, pArg, bNC, xFunc) \
#define LIKEFUNC(zName, nArg, arg, flags) \
#define AGGREGATE(zName, nArg, arg, nc, xStep, xFinal) \
#define AGGREGATE2(zName, nArg, arg, nc, xStep, xFinal, extraFlags) \
struct Savepoint ;
#define SAVEPOINT_BEGIN      0
#define SAVEPOINT_RELEASE    1
#define SAVEPOINT_ROLLBACK   2
struct Module ;
struct Column ;
#define COLFLAG_PRIMKEY  0x0001
#define COLFLAG_HIDDEN   0x0002
struct CollSeq ;
#define SQLITE_SO_ASC       0
#define SQLITE_SO_DESC      1
#define SQLITE_AFF_NONE     'A'
#define SQLITE_AFF_TEXT     'B'
#define SQLITE_AFF_NUMERIC  'C'
#define SQLITE_AFF_INTEGER  'D'
#define SQLITE_AFF_REAL     'E'
#define sqlite3IsNumericAffinity(X)  ((X)>=SQLITE_AFF_NUMERIC)
#define SQLITE_AFF_MASK     0x47
#define SQLITE_JUMPIFNULL   0x10
#define SQLITE_STOREP2      0x20
#define SQLITE_NULLEQ       0x80
#define SQLITE_NOTNULL      0x90
struct VTable ;
struct Table ;
#define TF_Readonly        0x01
#define TF_Ephemeral       0x02
#define TF_HasPrimaryKey   0x04
#define TF_Autoincrement   0x08
#define TF_Virtual         0x10
#define TF_WithoutRowid    0x20
#define TF_OOOHidden       0x40
#  define IsVirtual(X)      (((X)->tabFlags & TF_Virtual)!=0)
#  define IsHiddenColumn(X) (((X)->colFlags & COLFLAG_HIDDEN)!=0)
#  define IsVirtual(X)      0
#  define IsHiddenColumn(X) 0
#define HasRowid(X)     (((X)->tabFlags & TF_WithoutRowid)==0)
struct FKey ;
#define OE_None     0
#define OE_Rollback 1
#define OE_Abort    2
#define OE_Fail     3
#define OE_Ignore   4
#define OE_Replace  5
#define OE_Restrict 6
#define OE_SetNull  7
#define OE_SetDflt  8
#define OE_Cascade  9
#define OE_Default  10
struct KeyInfo ;
struct UnpackedRecord ;
struct Index ;
#define SQLITE_IDXTYPE_APPDEF      0
#define SQLITE_IDXTYPE_UNIQUE      1
#define SQLITE_IDXTYPE_PRIMARYKEY  2
#define IsPrimaryKeyIndex(X)  ((X)->idxType==SQLITE_IDXTYPE_PRIMARYKEY)
#define IsUniqueIndex(X)      ((X)->onError!=OE_None)
struct IndexSample ;
struct Token ;
struct AggInfo ;
#if SQLITE_MAX_VARIABLE_NUMBER<=32767
typedef i16 ynVar;
typedef int ynVar;
struct Expr ;
#define EP_FromJoin  0x000001
#define EP_Agg       0x000002
#define EP_Resolved  0x000004
#define EP_Error     0x000008
#define EP_Distinct  0x000010
#define EP_VarSelect 0x000020
#define EP_DblQuoted 0x000040
#define EP_InfixFunc 0x000080
#define EP_Collate   0x000100
#define EP_Generic   0x000200
#define EP_IntValue  0x000400
#define EP_xIsSelect 0x000800
#define EP_Skip      0x001000
#define EP_Reduced   0x002000
#define EP_TokenOnly 0x004000
#define EP_Static    0x008000
#define EP_MemToken  0x010000
#define EP_NoReduce  0x020000
#define EP_Unlikely  0x040000
#define EP_ConstFunc 0x080000
#define EP_CanBeNull 0x100000
#define EP_Subquery  0x200000
#define EP_Propagate (EP_Collate|EP_Subquery)
#define ExprHasProperty(E,P)     (((E)->flags&(P))!=0)
#define ExprHasAllProperty(E,P)  (((E)->flags&(P))==(P))
#define ExprSetProperty(E,P)     (E)->flags|=(P)
#define ExprClearProperty(E,P)   (E)->flags&=~(P)
# define ExprSetVVAProperty(E,P)  (E)->flags|=(P)
# define ExprSetVVAProperty(E,P)
#define EXPR_FULLSIZE           sizeof(Expr)
#define EXPR_REDUCEDSIZE        offsetof(Expr,iTable)
#define EXPR_TOKENONLYSIZE      offsetof(Expr,pLeft)
#define EXPRDUP_REDUCE         0x0001
struct ExprList ;
struct ExprSpan ;
struct IdList ;
typedef u64 Bitmask;
#define BMS  ((int)(sizeof(Bitmask)*8))
#define MASKBIT(n)   (((Bitmask)1)<<(n))
#define MASKBIT32(n) (((unsigned int)1)<<(n))
struct SrcList ;
#define JT_INNER     0x0001
#define JT_CROSS     0x0002
#define JT_NATURAL   0x0004
#define JT_LEFT      0x0008
#define JT_RIGHT     0x0010
#define JT_OUTER     0x0020
#define JT_ERROR     0x0040
#define WHERE_ORDERBY_NORMAL   0x0000
#define WHERE_ORDERBY_MIN      0x0001
#define WHERE_ORDERBY_MAX      0x0002
#define WHERE_ONEPASS_DESIRED  0x0004
#define WHERE_DUPLICATES_OK    0x0008
#define WHERE_OMIT_OPEN_CLOSE  0x0010
#define WHERE_FORCE_TABLE      0x0020
#define WHERE_ONETABLE_ONLY    0x0040
#define WHERE_NO_AUTOINDEX     0x0080
#define WHERE_GROUPBY          0x0100
#define WHERE_DISTINCTBY       0x0200
#define WHERE_WANT_DISTINCT    0x0400
#define WHERE_SORTBYGROUP      0x0800
#define WHERE_REOPEN_IDX       0x1000
#define WHERE_DISTINCT_NOOP      0
#define WHERE_DISTINCT_UNIQUE    1
#define WHERE_DISTINCT_ORDERED   2
#define WHERE_DISTINCT_UNORDERED 3
struct NameContext ;
#define NC_AllowAgg  0x0001
#define NC_HasAgg    0x0002
#define NC_IsCheck   0x0004
#define NC_InAggFunc 0x0008
#define NC_PartIdx   0x0010
#define NC_MinMaxAgg 0x1000
struct Select ;
#define SF_Distinct        0x0001
#define SF_Resolved        0x0002
#define SF_Aggregate       0x0004
#define SF_UsesEphemeral   0x0008
#define SF_Expanded        0x0010
#define SF_HasTypeInfo     0x0020
#define SF_Compound        0x0040
#define SF_Values          0x0080
#define SF_MultiValue      0x0100
#define SF_NestedFrom      0x0200
#define SF_MaybeConvert    0x0400
#define SF_Recursive       0x0800
#define SF_MinMaxAgg       0x1000
#define SF_Converted       0x2000
#define SRT_Union        1
#define SRT_Except       2
#define SRT_Exists       3
#define SRT_Discard      4
#define SRT_Fifo         5
#define SRT_DistFifo     6
#define SRT_Queue        7
#define SRT_DistQueue    8
#define IgnorableOrderby(X) ((X->eDest)<=SRT_DistQueue)
#define SRT_Output       9
#define SRT_Mem         10
#define SRT_Set         11
#define SRT_EphemTab    12
#define SRT_Coroutine   13
#define SRT_Table       14
struct SelectDest ;
struct AutoincInfo ;
# define SQLITE_N_COLCACHE 10
struct TriggerPrg ;
#if SQLITE_MAX_ATTACHED>30
typedef unsigned char yDbMask[(SQLITE_MAX_ATTACHED+9)/8];
# define DbMaskTest(M,I)    (((M)[(I)/8]&(1<<((I)&7)))!=0)
# define DbMaskZero(M)      memset((M),0,sizeof(M))
# define DbMaskSet(M,I)     (M)[(I)/8]|=(1<<((I)&7))
# define DbMaskAllZero(M)   sqlite3DbMaskAllZero(M)
# define DbMaskNonZero(M)   (sqlite3DbMaskAllZero(M)==0)
typedef unsigned int yDbMask;
# define DbMaskTest(M,I)    (((M)&(((yDbMask)1)<<(I)))!=0)
# define DbMaskZero(M)      (M)=0
# define DbMaskSet(M,I)     (M)|=(((yDbMask)1)<<(I))
# define DbMaskAllZero(M)   (M)==0
# define DbMaskNonZero(M)   (M)!=0
struct Parse ;
#define IN_DECLARE_VTAB 0
#define IN_DECLARE_VTAB (pParse->declareVtab)
struct AuthContext ;
#define OPFLAG_NCHANGE       0x01
#define OPFLAG_EPHEM         0x01
#define OPFLAG_LASTROWID     0x02
#define OPFLAG_ISUPDATE      0x04
#define OPFLAG_APPEND        0x08
#define OPFLAG_USESEEKRESULT 0x10
#define OPFLAG_LENGTHARG     0x40
#define OPFLAG_TYPEOFARG     0x80
#define OPFLAG_BULKCSR       0x01
#define OPFLAG_SEEKEQ        0x02
#define OPFLAG_P2ISREG       0x04
#define OPFLAG_PERMUTE       0x01
struct Trigger ;
#define TRIGGER_BEFORE  1
#define TRIGGER_AFTER   2
struct TriggerStep ;
typedef struct DbFixer DbFixer;
struct DbFixer ;
struct StrAccum ;
#define STRACCUM_NOMEM   1
#define STRACCUM_TOOBIG  2
typedef struct  InitData;
struct Sqlite3Config ;
#define CORRUPT_DB  (sqlite3Config.neverCorrupt==0)
struct Walker ;
SQLITE_PRIVATE int sqlite3WalkExpr(Walker*, Expr*);
SQLITE_PRIVATE int sqlite3WalkExprList(Walker*, ExprList*);
SQLITE_PRIVATE int sqlite3WalkSelect(Walker*, Select*);
SQLITE_PRIVATE int sqlite3WalkSelectExpr(Walker*, Select*);
SQLITE_PRIVATE int sqlite3WalkSelectFrom(Walker*, Select*);
#define WRC_Continue    0
#define WRC_Prune       1
#define WRC_Abort       2
struct With ;
struct TreeView ;
#define SQLITE_SKIP_UTF8(zIn)
SQLITE_PRIVATE int sqlite3CorruptError(int);
SQLITE_PRIVATE int sqlite3MisuseError(int);
SQLITE_PRIVATE int sqlite3CantopenError(int);
#define SQLITE_CORRUPT_BKPT sqlite3CorruptError(__LINE__)
#define SQLITE_MISUSE_BKPT sqlite3MisuseError(__LINE__)
#define SQLITE_CANTOPEN_BKPT sqlite3CantopenError(__LINE__)
#if defined(SQLITE_ENABLE_FTS4) && !defined(SQLITE_ENABLE_FTS3)
# define SQLITE_ENABLE_FTS3 1
#if !defined(SQLITE_ASCII) || \
(defined(SQLITE_ENABLE_FTS3) && defined(SQLITE_AMALGAMATION))
# include <ctype.h>
# define sqlite3Toupper(x)  ((x)&~(sqlite3CtypeMap[(unsigned char)(x)]&0x20))
# define sqlite3Isspace(x)   (sqlite3CtypeMap[(unsigned char)(x)]&0x01)
# define sqlite3Isalnum(x)   (sqlite3CtypeMap[(unsigned char)(x)]&0x06)
# define sqlite3Isalpha(x)   (sqlite3CtypeMap[(unsigned char)(x)]&0x02)
# define sqlite3Isdigit(x)   (sqlite3CtypeMap[(unsigned char)(x)]&0x04)
# define sqlite3Isxdigit(x)  (sqlite3CtypeMap[(unsigned char)(x)]&0x08)
# define sqlite3Tolower(x)   (sqlite3UpperToLower[(unsigned char)(x)])
# define sqlite3Toupper(x)   toupper((unsigned char)(x))
# define sqlite3Isspace(x)   isspace((unsigned char)(x))
# define sqlite3Isalnum(x)   isalnum((unsigned char)(x))
# define sqlite3Isalpha(x)   isalpha((unsigned char)(x))
# define sqlite3Isdigit(x)   isdigit((unsigned char)(x))
# define sqlite3Isxdigit(x)  isxdigit((unsigned char)(x))
# define sqlite3Tolower(x)   tolower((unsigned char)(x))
SQLITE_PRIVATE int sqlite3IsIdChar(u8);
#define sqlite3StrICmp sqlite3_stricmp
SQLITE_PRIVATE int sqlite3Strlen30(const char*);
#define sqlite3StrNICmp sqlite3_strnicmp
SQLITE_PRIVATE int sqlite3MallocInit(void);
SQLITE_PRIVATE void sqlite3MallocEnd(void);
SQLITE_PRIVATE void *sqlite3Malloc(u64);
SQLITE_PRIVATE void *sqlite3MallocZero(u64);
SQLITE_PRIVATE void *sqlite3DbMallocZero(sqlite3*, u64);
SQLITE_PRIVATE void *sqlite3DbMallocRaw(sqlite3*, u64);
SQLITE_PRIVATE char *sqlite3DbStrDup(sqlite3*,const char*);
SQLITE_PRIVATE char *sqlite3DbStrNDup(sqlite3*,const char*, u64);
SQLITE_PRIVATE void *sqlite3Realloc(void*, u64);
SQLITE_PRIVATE void *sqlite3DbReallocOrFree(sqlite3 *, void *, u64);
SQLITE_PRIVATE void *sqlite3DbRealloc(sqlite3 *, void *, u64);
SQLITE_PRIVATE void sqlite3DbFree(sqlite3*, void*);
SQLITE_PRIVATE int sqlite3MallocSize(void*);
SQLITE_PRIVATE int sqlite3DbMallocSize(sqlite3*, void*);
SQLITE_PRIVATE void *sqlite3ScratchMalloc(int);
SQLITE_PRIVATE void sqlite3ScratchFree(void*);
SQLITE_PRIVATE void *sqlite3PageMalloc(int);
SQLITE_PRIVATE void sqlite3PageFree(void*);
SQLITE_PRIVATE void sqlite3MemSetDefault(void);
SQLITE_PRIVATE void sqlite3BenignMallocHooks(void (*)(void), void (*)(void));
SQLITE_PRIVATE int sqlite3HeapNearlyFull(void);
# define sqlite3StackAllocRaw(D,N)   alloca(N)
# define sqlite3StackAllocZero(D,N)  memset(alloca(N), 0, N)
# define sqlite3StackFree(D,P)
# define sqlite3StackAllocRaw(D,N)   sqlite3DbMallocRaw(D,N)
# define sqlite3StackAllocZero(D,N)  sqlite3DbMallocZero(D,N)
# define sqlite3StackFree(D,P)       sqlite3DbFree(D,P)
SQLITE_PRIVATE const sqlite3_mem_methods *sqlite3MemGetMemsys3(void);
SQLITE_PRIVATE const sqlite3_mem_methods *sqlite3MemGetMemsys5(void);
SQLITE_PRIVATE   sqlite3_mutex_methods const *sqlite3DefaultMutex(void);
SQLITE_PRIVATE   sqlite3_mutex_methods const *sqlite3NoopMutex(void);
SQLITE_PRIVATE   sqlite3_mutex *sqlite3MutexAlloc(int);
SQLITE_PRIVATE   int sqlite3MutexInit(void);
SQLITE_PRIVATE   int sqlite3MutexEnd(void);
SQLITE_PRIVATE sqlite3_int64 sqlite3StatusValue(int);
SQLITE_PRIVATE void sqlite3StatusUp(int, int);
SQLITE_PRIVATE void sqlite3StatusDown(int, int);
SQLITE_PRIVATE void sqlite3StatusSet(int, int);
SQLITE_PRIVATE sqlite3_mutex *sqlite3Pcache1Mutex(void);
SQLITE_PRIVATE sqlite3_mutex *sqlite3MallocMutex(void);
SQLITE_PRIVATE   int sqlite3IsNaN(double);
# define sqlite3IsNaN(X)  0
struct PrintfArguments ;
#define SQLITE_PRINTF_INTERNAL 0x01
#define SQLITE_PRINTF_SQLFUNC  0x02
SQLITE_PRIVATE void sqlite3VXPrintf(StrAccum*, u32, const char*, va_list);
SQLITE_PRIVATE void sqlite3XPrintf(StrAccum*, u32, const char*, ...);
SQLITE_PRIVATE char *sqlite3MPrintf(sqlite3*,const char*, ...);
SQLITE_PRIVATE char *sqlite3VMPrintf(sqlite3*,const char*, va_list);
SQLITE_PRIVATE char *sqlite3MAppendf(sqlite3*,char*,const char*,...);
#if defined(SQLITE_DEBUG) || defined(SQLITE_HAVE_OS_TRACE)
SQLITE_PRIVATE   void sqlite3DebugPrintf(const char*, ...);
#if defined(SQLITE_TEST)
SQLITE_PRIVATE   void *sqlite3TestTextToPtr(const char*);
#if defined(SQLITE_DEBUG)
SQLITE_PRIVATE   TreeView *sqlite3TreeViewPush(TreeView*,u8);
SQLITE_PRIVATE   void sqlite3TreeViewPop(TreeView*);
SQLITE_PRIVATE   void sqlite3TreeViewLine(TreeView*, const char*, ...);
SQLITE_PRIVATE   void sqlite3TreeViewItem(TreeView*, const char*, u8);
SQLITE_PRIVATE   void sqlite3TreeViewExpr(TreeView*, const Expr*, u8);
SQLITE_PRIVATE   void sqlite3TreeViewExprList(TreeView*, const ExprList*, u8, const char*);
SQLITE_PRIVATE   void sqlite3TreeViewSelect(TreeView*, const Select*, u8);
SQLITE_PRIVATE void sqlite3SetString(char **, sqlite3*, const char*, ...);
SQLITE_PRIVATE void sqlite3ErrorMsg(Parse*, const char*, ...);
SQLITE_PRIVATE int sqlite3Dequote(char*);
SQLITE_PRIVATE int sqlite3KeywordCode(const unsigned char*, int);
SQLITE_PRIVATE int sqlite3RunParser(Parse*, const char*, char **);
SQLITE_PRIVATE void sqlite3FinishCoding(Parse*);
SQLITE_PRIVATE int sqlite3GetTempReg(Parse*);
SQLITE_PRIVATE void sqlite3ReleaseTempReg(Parse*,int);
SQLITE_PRIVATE int sqlite3GetTempRange(Parse*,int);
SQLITE_PRIVATE void sqlite3ReleaseTempRange(Parse*,int,int);
SQLITE_PRIVATE void sqlite3ClearTempRegCache(Parse*);
SQLITE_PRIVATE Expr *sqlite3ExprAlloc(sqlite3*,int,const Token*,int);
SQLITE_PRIVATE Expr *sqlite3Expr(sqlite3*,int,const char*);
SQLITE_PRIVATE void sqlite3ExprAttachSubtrees(sqlite3*,Expr*,Expr*,Expr*);
SQLITE_PRIVATE Expr *sqlite3PExpr(Parse*, int, Expr*, Expr*, const Token*);
SQLITE_PRIVATE Expr *sqlite3ExprAnd(sqlite3*,Expr*, Expr*);
SQLITE_PRIVATE Expr *sqlite3ExprFunction(Parse*,ExprList*, Token*);
SQLITE_PRIVATE void sqlite3ExprAssignVarNumber(Parse*, Expr*);
SQLITE_PRIVATE void sqlite3ExprDelete(sqlite3*, Expr*);
SQLITE_PRIVATE ExprList *sqlite3ExprListAppend(Parse*,ExprList*,Expr*);
SQLITE_PRIVATE void sqlite3ExprListSetName(Parse*,ExprList*,Token*,int);
SQLITE_PRIVATE void sqlite3ExprListSetSpan(Parse*,ExprList*,ExprSpan*);
SQLITE_PRIVATE void sqlite3ExprListDelete(sqlite3*, ExprList*);
SQLITE_PRIVATE u32 sqlite3ExprListFlags(const ExprList*);
SQLITE_PRIVATE int sqlite3Init(sqlite3*, char**);
SQLITE_PRIVATE int sqlite3InitCallback(void*, int, char**, char**);
SQLITE_PRIVATE void sqlite3Pragma(Parse*,Token*,Token*,Token*,int);
SQLITE_PRIVATE void sqlite3ResetAllSchemasOfConnection(sqlite3*);
SQLITE_PRIVATE void sqlite3ResetOneSchema(sqlite3*,int);
SQLITE_PRIVATE void sqlite3CollapseDatabaseArray(sqlite3*);
SQLITE_PRIVATE void sqlite3BeginParse(Parse*,int);
SQLITE_PRIVATE void sqlite3CommitInternalChanges(sqlite3*);
SQLITE_PRIVATE Table *sqlite3ResultSetOfSelect(Parse*,Select*);
SQLITE_PRIVATE void sqlite3OpenMasterTable(Parse *, int);
SQLITE_PRIVATE Index *sqlite3PrimaryKeyIndex(Table*);
SQLITE_PRIVATE i16 sqlite3ColumnOfIndex(Index*, i16);
SQLITE_PRIVATE void sqlite3StartTable(Parse*,Token*,Token*,int,int,int,int);
SQLITE_PRIVATE void sqlite3AddColumn(Parse*,Token*);
SQLITE_PRIVATE void sqlite3AddNotNull(Parse*, int);
SQLITE_PRIVATE void sqlite3AddPrimaryKey(Parse*, ExprList*, int, int, int);
SQLITE_PRIVATE void sqlite3AddCheckConstraint(Parse*, Expr*);
SQLITE_PRIVATE void sqlite3AddColumnType(Parse*,Token*);
SQLITE_PRIVATE void sqlite3AddDefaultValue(Parse*,ExprSpan*);
SQLITE_PRIVATE void sqlite3AddCollateType(Parse*, Token*);
SQLITE_PRIVATE void sqlite3EndTable(Parse*,Token*,Token*,u8,Select*);
SQLITE_PRIVATE int sqlite3ParseUri(const char*,const char*,unsigned int*,
sqlite3_vfs**,char**,char **);
SQLITE_PRIVATE Btree *sqlite3DbNameToBtree(sqlite3*,const char*);
SQLITE_PRIVATE int sqlite3CodeOnce(Parse *);
# define sqlite3FaultSim(X) SQLITE_OK
SQLITE_PRIVATE   int sqlite3FaultSim(int);
SQLITE_PRIVATE Bitvec *sqlite3BitvecCreate(u32);
SQLITE_PRIVATE int sqlite3BitvecTest(Bitvec*, u32);
SQLITE_PRIVATE int sqlite3BitvecSet(Bitvec*, u32);
SQLITE_PRIVATE void sqlite3BitvecClear(Bitvec*, u32, void*);
SQLITE_PRIVATE void sqlite3BitvecDestroy(Bitvec*);
SQLITE_PRIVATE u32 sqlite3BitvecSize(Bitvec*);
SQLITE_PRIVATE int sqlite3BitvecBuiltinTest(int,int*);
SQLITE_PRIVATE RowSet *sqlite3RowSetInit(sqlite3*, void*, unsigned int);
SQLITE_PRIVATE void sqlite3RowSetClear(RowSet*);
SQLITE_PRIVATE void sqlite3RowSetInsert(RowSet*, i64);
SQLITE_PRIVATE int sqlite3RowSetTest(RowSet*, int iBatch, i64);
SQLITE_PRIVATE int sqlite3RowSetNext(RowSet*, i64*);
SQLITE_PRIVATE void sqlite3CreateView(Parse*,Token*,Token*,Token*,Select*,int,int);
#if !defined(SQLITE_OMIT_VIEW) || !defined(SQLITE_OMIT_VIRTUALTABLE)
SQLITE_PRIVATE   int sqlite3ViewGetColumnNames(Parse*,Table*);
# define sqlite3ViewGetColumnNames(A,B) 0
#if SQLITE_MAX_ATTACHED>30
SQLITE_PRIVATE   int sqlite3DbMaskAllZero(yDbMask);
SQLITE_PRIVATE void sqlite3DropTable(Parse*, SrcList*, int, int);
SQLITE_PRIVATE void sqlite3CodeDropTable(Parse*, Table*, int, int);
SQLITE_PRIVATE void sqlite3DeleteTable(sqlite3*, Table*);
SQLITE_PRIVATE   void sqlite3AutoincrementBegin(Parse *pParse);
SQLITE_PRIVATE   void sqlite3AutoincrementEnd(Parse *pParse);
# define sqlite3AutoincrementBegin(X)
# define sqlite3AutoincrementEnd(X)
SQLITE_PRIVATE void sqlite3Insert(Parse*, SrcList*, Select*, IdList*, int);
SQLITE_PRIVATE void *sqlite3ArrayAllocate(sqlite3*,void*,int,int*,int*);
SQLITE_PRIVATE IdList *sqlite3IdListAppend(sqlite3*, IdList*, Token*);
SQLITE_PRIVATE int sqlite3IdListIndex(IdList*,const char*);
SQLITE_PRIVATE SrcList *sqlite3SrcListEnlarge(sqlite3*, SrcList*, int, int);
SQLITE_PRIVATE SrcList *sqlite3SrcListAppend(sqlite3*, SrcList*, Token*, Token*);
SQLITE_PRIVATE SrcList *sqlite3SrcListAppendFromTerm(Parse*, SrcList*, Token*, Token*,
Token*, Select*, Expr*, IdList*);
SQLITE_PRIVATE void sqlite3SrcListIndexedBy(Parse *, SrcList *, Token *);
SQLITE_PRIVATE int sqlite3IndexedByLookup(Parse *, struct SrcList_item *);
SQLITE_PRIVATE void sqlite3SrcListShiftJoinType(SrcList*);
SQLITE_PRIVATE void sqlite3SrcListAssignCursors(Parse*, SrcList*);
SQLITE_PRIVATE void sqlite3IdListDelete(sqlite3*, IdList*);
SQLITE_PRIVATE void sqlite3SrcListDelete(sqlite3*, SrcList*);
SQLITE_PRIVATE Index *sqlite3AllocateIndexObject(sqlite3*,i16,int,char**);
SQLITE_PRIVATE Index *sqlite3CreateIndex(Parse*,Token*,Token*,SrcList*,ExprList*,int,Token*,
Expr*, int, int);
SQLITE_PRIVATE void sqlite3DropIndex(Parse*, SrcList*, int);
SQLITE_PRIVATE int sqlite3Select(Parse*, Select*, SelectDest*);
SQLITE_PRIVATE Select *sqlite3SelectNew(Parse*,ExprList*,SrcList*,Expr*,ExprList*,
Expr*,ExprList*,u16,Expr*,Expr*);
SQLITE_PRIVATE void sqlite3SelectDelete(sqlite3*, Select*);
SQLITE_PRIVATE Table *sqlite3SrcListLookup(Parse*, SrcList*);
SQLITE_PRIVATE int sqlite3IsReadOnly(Parse*, Table*, int);
SQLITE_PRIVATE void sqlite3OpenTable(Parse*, int iCur, int iDb, Table*, int);
#if defined(SQLITE_ENABLE_UPDATE_DELETE_LIMIT) && !defined(SQLITE_OMIT_SUBQUERY)
SQLITE_PRIVATE Expr *sqlite3LimitWhere(Parse*,SrcList*,Expr*,ExprList*,Expr*,Expr*,char*);
SQLITE_PRIVATE void sqlite3DeleteFrom(Parse*, SrcList*, Expr*);
SQLITE_PRIVATE void sqlite3Update(Parse*, SrcList*, ExprList*, Expr*, int);
SQLITE_PRIVATE WhereInfo *sqlite3WhereBegin(Parse*,SrcList*,Expr*,ExprList*,ExprList*,u16,int);
SQLITE_PRIVATE void sqlite3WhereEnd(WhereInfo*);
SQLITE_PRIVATE u64 sqlite3WhereOutputRowCount(WhereInfo*);
SQLITE_PRIVATE int sqlite3WhereIsDistinct(WhereInfo*);
SQLITE_PRIVATE int sqlite3WhereIsOrdered(WhereInfo*);
SQLITE_PRIVATE int sqlite3WhereIsSorted(WhereInfo*);
SQLITE_PRIVATE int sqlite3WhereContinueLabel(WhereInfo*);
SQLITE_PRIVATE int sqlite3WhereBreakLabel(WhereInfo*);
SQLITE_PRIVATE int sqlite3WhereOkOnePass(WhereInfo*, int*);
SQLITE_PRIVATE int sqlite3ExprCodeGetColumn(Parse*, Table*, int, int, int, u8);
SQLITE_PRIVATE void sqlite3ExprCodeGetColumnOfTable(Vdbe*, Table*, int, int, int);
SQLITE_PRIVATE void sqlite3ExprCodeMove(Parse*, int, int, int);
SQLITE_PRIVATE void sqlite3ExprCacheStore(Parse*, int, int, int);
SQLITE_PRIVATE void sqlite3ExprCachePush(Parse*);
SQLITE_PRIVATE void sqlite3ExprCachePop(Parse*);
SQLITE_PRIVATE void sqlite3ExprCacheRemove(Parse*, int, int);
SQLITE_PRIVATE void sqlite3ExprCacheClear(Parse*);
SQLITE_PRIVATE void sqlite3ExprCacheAffinityChange(Parse*, int, int);
SQLITE_PRIVATE void sqlite3ExprCode(Parse*, Expr*, int);
SQLITE_PRIVATE void sqlite3ExprCodeFactorable(Parse*, Expr*, int);
SQLITE_PRIVATE void sqlite3ExprCodeAtInit(Parse*, Expr*, int, u8);
SQLITE_PRIVATE int sqlite3ExprCodeTemp(Parse*, Expr*, int*);
SQLITE_PRIVATE int sqlite3ExprCodeTarget(Parse*, Expr*, int);
SQLITE_PRIVATE void sqlite3ExprCodeAndCache(Parse*, Expr*, int);
SQLITE_PRIVATE int sqlite3ExprCodeExprList(Parse*, ExprList*, int, u8);
#define SQLITE_ECEL_DUP      0x01
#define SQLITE_ECEL_FACTOR   0x02
SQLITE_PRIVATE void sqlite3ExprIfTrue(Parse*, Expr*, int, int);
SQLITE_PRIVATE void sqlite3ExprIfFalse(Parse*, Expr*, int, int);
SQLITE_PRIVATE Table *sqlite3FindTable(sqlite3*,const char*, const char*);
SQLITE_PRIVATE Table *sqlite3LocateTable(Parse*,int isView,const char*, const char*);
SQLITE_PRIVATE Table *sqlite3LocateTableItem(Parse*,int isView,struct SrcList_item *);
SQLITE_PRIVATE Index *sqlite3FindIndex(sqlite3*,const char*, const char*);
SQLITE_PRIVATE void sqlite3UnlinkAndDeleteTable(sqlite3*,int,const char*);
SQLITE_PRIVATE void sqlite3UnlinkAndDeleteIndex(sqlite3*,int,const char*);
SQLITE_PRIVATE void sqlite3Vacuum(Parse*);
SQLITE_PRIVATE int sqlite3RunVacuum(char**, sqlite3*);
SQLITE_PRIVATE char *sqlite3NameFromToken(sqlite3*, Token*);
SQLITE_PRIVATE int sqlite3ExprCompare(Expr*, Expr*, int);
SQLITE_PRIVATE int sqlite3ExprListCompare(ExprList*, ExprList*, int);
SQLITE_PRIVATE int sqlite3ExprImpliesExpr(Expr*, Expr*, int);
SQLITE_PRIVATE void sqlite3ExprAnalyzeAggregates(NameContext*, Expr*);
SQLITE_PRIVATE void sqlite3ExprAnalyzeAggList(NameContext*,ExprList*);
SQLITE_PRIVATE int sqlite3FunctionUsesThisSrc(Expr*, SrcList*);
SQLITE_PRIVATE Vdbe *sqlite3GetVdbe(Parse*);
SQLITE_PRIVATE void sqlite3PrngSaveState(void);
SQLITE_PRIVATE void sqlite3PrngRestoreState(void);
SQLITE_PRIVATE void sqlite3RollbackAll(sqlite3*,int);
SQLITE_PRIVATE void sqlite3CodeVerifySchema(Parse*, int);
SQLITE_PRIVATE void sqlite3CodeVerifyNamedSchema(Parse*, const char *zDb);
SQLITE_PRIVATE void sqlite3BeginTransaction(Parse*, int);
SQLITE_PRIVATE void sqlite3CommitTransaction(Parse*);
SQLITE_PRIVATE void sqlite3RollbackTransaction(Parse*);
SQLITE_PRIVATE void sqlite3Savepoint(Parse*, int, Token*);
SQLITE_PRIVATE void sqlite3CloseSavepoints(sqlite3 *);
SQLITE_PRIVATE void sqlite3LeaveMutexAndCloseZombie(sqlite3*);
SQLITE_PRIVATE int sqlite3ExprIsConstant(Expr*);
SQLITE_PRIVATE int sqlite3ExprIsConstantNotJoin(Expr*);
SQLITE_PRIVATE int sqlite3ExprIsConstantOrFunction(Expr*, u8);
SQLITE_PRIVATE int sqlite3ExprIsTableConstant(Expr*,int);
SQLITE_PRIVATE int sqlite3ExprIsInteger(Expr*, int*);
SQLITE_PRIVATE int sqlite3ExprCanBeNull(const Expr*);
SQLITE_PRIVATE int sqlite3ExprNeedsNoAffinityChange(const Expr*, char);
SQLITE_PRIVATE int sqlite3IsRowid(const char*);
SQLITE_PRIVATE void sqlite3GenerateRowDelete(Parse*,Table*,Trigger*,int,int,int,i16,u8,u8,u8);
SQLITE_PRIVATE void sqlite3GenerateRowIndexDelete(Parse*, Table*, int, int, int*);
SQLITE_PRIVATE int sqlite3GenerateIndexKey(Parse*, Index*, int, int, int, int*,Index*,int);
SQLITE_PRIVATE void sqlite3ResolvePartIdxLabel(Parse*,int);
SQLITE_PRIVATE void sqlite3GenerateConstraintChecks(Parse*,Table*,int*,int,int,int,int,
u8,u8,int,int*);
SQLITE_PRIVATE void sqlite3CompleteInsertion(Parse*,Table*,int,int,int,int*,int,int,int);
SQLITE_PRIVATE int sqlite3OpenTableAndIndices(Parse*, Table*, int, int, u8*, int*, int*);
SQLITE_PRIVATE void sqlite3BeginWriteOperation(Parse*, int, int);
SQLITE_PRIVATE void sqlite3MultiWrite(Parse*);
SQLITE_PRIVATE void sqlite3MayAbort(Parse*);
SQLITE_PRIVATE void sqlite3HaltConstraint(Parse*, int, int, char*, i8, u8);
SQLITE_PRIVATE void sqlite3UniqueConstraint(Parse*, int, Index*);
SQLITE_PRIVATE void sqlite3RowidConstraint(Parse*, int, Table*);
SQLITE_PRIVATE Expr *sqlite3ExprDup(sqlite3*,Expr*,int);
SQLITE_PRIVATE ExprList *sqlite3ExprListDup(sqlite3*,ExprList*,int);
SQLITE_PRIVATE SrcList *sqlite3SrcListDup(sqlite3*,SrcList*,int);
SQLITE_PRIVATE IdList *sqlite3IdListDup(sqlite3*,IdList*);
SQLITE_PRIVATE Select *sqlite3SelectDup(sqlite3*,Select*,int);
#if SELECTTRACE_ENABLED
SQLITE_PRIVATE void sqlite3SelectSetName(Select*,const char*);
# define sqlite3SelectSetName(A,B)
SQLITE_PRIVATE void sqlite3FuncDefInsert(FuncDefHash*, FuncDef*);
SQLITE_PRIVATE FuncDef *sqlite3FindFunction(sqlite3*,const char*,int,int,u8,u8);
SQLITE_PRIVATE void sqlite3RegisterBuiltinFunctions(sqlite3*);
SQLITE_PRIVATE void sqlite3RegisterDateTimeFunctions(void);
SQLITE_PRIVATE void sqlite3RegisterGlobalFunctions(void);
SQLITE_PRIVATE int sqlite3SafetyCheckOk(sqlite3*);
SQLITE_PRIVATE int sqlite3SafetyCheckSickOrOk(sqlite3*);
SQLITE_PRIVATE void sqlite3ChangeCookie(Parse*, int);
#if !defined(SQLITE_OMIT_VIEW) && !defined(SQLITE_OMIT_TRIGGER)
SQLITE_PRIVATE void sqlite3MaterializeView(Parse*, Table*, Expr*, int);
SQLITE_PRIVATE   void sqlite3BeginTrigger(Parse*, Token*,Token*,int,int,IdList*,SrcList*,
Expr*,int, int);
SQLITE_PRIVATE   void sqlite3FinishTrigger(Parse*, TriggerStep*, Token*);
SQLITE_PRIVATE   void sqlite3DropTrigger(Parse*, SrcList*, int);
SQLITE_PRIVATE   void sqlite3DropTriggerPtr(Parse*, Trigger*);
SQLITE_PRIVATE   Trigger *sqlite3TriggersExist(Parse *, Table*, int, ExprList*, int *pMask);
SQLITE_PRIVATE   Trigger *sqlite3TriggerList(Parse *, Table *);
SQLITE_PRIVATE   void sqlite3CodeRowTrigger(Parse*, Trigger *, int, ExprList*, int, Table *,
int, int, int);
SQLITE_PRIVATE   void sqlite3CodeRowTriggerDirect(Parse *, Trigger *, Table *, int, int, int);
void sqliteViewTriggers(Parse*, Table*, Expr*, int, ExprList*);
SQLITE_PRIVATE   void sqlite3DeleteTriggerStep(sqlite3*, TriggerStep*);
SQLITE_PRIVATE   TriggerStep *sqlite3TriggerSelectStep(sqlite3*,Select*);
SQLITE_PRIVATE   TriggerStep *sqlite3TriggerInsertStep(sqlite3*,Token*, IdList*,
Select*,u8);
SQLITE_PRIVATE   TriggerStep *sqlite3TriggerUpdateStep(sqlite3*,Token*,ExprList*, Expr*, u8);
SQLITE_PRIVATE   TriggerStep *sqlite3TriggerDeleteStep(sqlite3*,Token*, Expr*);
SQLITE_PRIVATE   void sqlite3DeleteTrigger(sqlite3*, Trigger*);
SQLITE_PRIVATE   void sqlite3UnlinkAndDeleteTrigger(sqlite3*,int,const char*);
SQLITE_PRIVATE   u32 sqlite3TriggerColmask(Parse*,Trigger*,ExprList*,int,int,Table*,int);
# define sqlite3ParseToplevel(p) ((p)->pToplevel ? (p)->pToplevel : (p))
# define sqlite3TriggersExist(B,C,D,E,F) 0
# define sqlite3DeleteTrigger(A,B)
# define sqlite3DropTriggerPtr(A,B)
# define sqlite3UnlinkAndDeleteTrigger(A,B,C)
# define sqlite3CodeRowTrigger(A,B,C,D,E,F,G,H,I)
# define sqlite3CodeRowTriggerDirect(A,B,C,D,E,F)
# define sqlite3TriggerList(X, Y) 0
# define sqlite3ParseToplevel(p) p
# define sqlite3TriggerColmask(A,B,C,D,E,F,G) 0
SQLITE_PRIVATE int sqlite3JoinType(Parse*, Token*, Token*, Token*);
SQLITE_PRIVATE void sqlite3CreateForeignKey(Parse*, ExprList*, Token*, ExprList*, int);
SQLITE_PRIVATE void sqlite3DeferForeignKey(Parse*, int);
SQLITE_PRIVATE   void sqlite3AuthRead(Parse*,Expr*,Schema*,SrcList*);
SQLITE_PRIVATE   int sqlite3AuthCheck(Parse*,int, const char*, const char*, const char*);
SQLITE_PRIVATE   void sqlite3AuthContextPush(Parse*, AuthContext*, const char*);
SQLITE_PRIVATE   void sqlite3AuthContextPop(AuthContext*);
SQLITE_PRIVATE   int sqlite3AuthReadCol(Parse*, const char *, const char *, int);
# define sqlite3AuthRead(a,b,c,d)
# define sqlite3AuthCheck(a,b,c,d,e)    SQLITE_OK
# define sqlite3AuthContextPush(a,b,c)
# define sqlite3AuthContextPop(a)  ((void)(a))
SQLITE_PRIVATE void sqlite3Attach(Parse*, Expr*, Expr*, Expr*);
SQLITE_PRIVATE void sqlite3Detach(Parse*, Expr*);
SQLITE_PRIVATE void sqlite3FixInit(DbFixer*, Parse*, int, const char*, const Token*);
SQLITE_PRIVATE int sqlite3FixSrcList(DbFixer*, SrcList*);
SQLITE_PRIVATE int sqlite3FixSelect(DbFixer*, Select*);
SQLITE_PRIVATE int sqlite3FixExpr(DbFixer*, Expr*);
SQLITE_PRIVATE int sqlite3FixExprList(DbFixer*, ExprList*);
SQLITE_PRIVATE int sqlite3FixTriggerStep(DbFixer*, TriggerStep*);
SQLITE_PRIVATE int sqlite3AtoF(const char *z, double*, int, u8);
SQLITE_PRIVATE int sqlite3GetInt32(const char *, int*);
SQLITE_PRIVATE int sqlite3Atoi(const char*);
SQLITE_PRIVATE int sqlite3Utf16ByteLen(const void *pData, int nChar);
SQLITE_PRIVATE int sqlite3Utf8CharLen(const char *pData, int nByte);
SQLITE_PRIVATE u32 sqlite3Utf8Read(const u8**);
SQLITE_PRIVATE LogEst sqlite3LogEst(u64);
SQLITE_PRIVATE LogEst sqlite3LogEstAdd(LogEst,LogEst);
SQLITE_PRIVATE LogEst sqlite3LogEstFromDouble(double);
SQLITE_PRIVATE u64 sqlite3LogEstToInt(LogEst);
SQLITE_PRIVATE int sqlite3PutVarint(unsigned char*, u64);
SQLITE_PRIVATE u8 sqlite3GetVarint(const unsigned char *, u64 *);
SQLITE_PRIVATE u8 sqlite3GetVarint32(const unsigned char *, u32 *);
SQLITE_PRIVATE int sqlite3VarintLen(u64 v);
#define getVarint32(A,B)  \
(u8)((*(A)<(u8)0x80)?((B)=(u32)*(A)),1:sqlite3GetVarint32((A),(u32 *)&(B)))
#define putVarint32(A,B)  \
(u8)(((u32)(B)<(u32)0x80)?(*(A)=(unsigned char)(B)),1:\
sqlite3PutVarint((A),(B)))
#define getVarint    sqlite3GetVarint
#define putVarint    sqlite3PutVarint
SQLITE_PRIVATE const char *sqlite3IndexAffinityStr(Vdbe *, Index *);
SQLITE_PRIVATE void sqlite3TableAffinity(Vdbe*, Table*, int);
SQLITE_PRIVATE char sqlite3CompareAffinity(Expr *pExpr, char aff2);
SQLITE_PRIVATE int sqlite3IndexAffinityOk(Expr *pExpr, char idx_affinity);
SQLITE_PRIVATE char sqlite3ExprAffinity(Expr *pExpr);
SQLITE_PRIVATE int sqlite3Atoi64(const char*, i64*, int, u8);
SQLITE_PRIVATE int sqlite3DecOrHexToI64(const char*, i64*);
SQLITE_PRIVATE void sqlite3ErrorWithMsg(sqlite3*, int, const char*,...);
SQLITE_PRIVATE void sqlite3Error(sqlite3*,int);
SQLITE_PRIVATE void *sqlite3HexToBlob(sqlite3*, const char *z, int n);
SQLITE_PRIVATE u8 sqlite3HexToInt(int h);
SQLITE_PRIVATE int sqlite3TwoPartName(Parse *, Token *, Token *, Token **);
#if defined(SQLITE_NEED_ERR_NAME)
SQLITE_PRIVATE const char *sqlite3ErrName(int);
SQLITE_PRIVATE const char *sqlite3ErrStr(int);
SQLITE_PRIVATE int sqlite3ReadSchema(Parse *pParse);
SQLITE_PRIVATE CollSeq *sqlite3FindCollSeq(sqlite3*,u8 enc, const char*,int);
SQLITE_PRIVATE CollSeq *sqlite3LocateCollSeq(Parse *pParse, const char*zName);
SQLITE_PRIVATE CollSeq *sqlite3ExprCollSeq(Parse *pParse, Expr *pExpr);
SQLITE_PRIVATE Expr *sqlite3ExprAddCollateToken(Parse *pParse, Expr*, const Token*, int);
SQLITE_PRIVATE Expr *sqlite3ExprAddCollateString(Parse*,Expr*,const char*);
SQLITE_PRIVATE Expr *sqlite3ExprSkipCollate(Expr*);
SQLITE_PRIVATE int sqlite3CheckCollSeq(Parse *, CollSeq *);
SQLITE_PRIVATE int sqlite3CheckObjectName(Parse *, const char *);
SQLITE_PRIVATE void sqlite3VdbeSetChanges(sqlite3 *, int);
SQLITE_PRIVATE int sqlite3AddInt64(i64*,i64);
SQLITE_PRIVATE int sqlite3SubInt64(i64*,i64);
SQLITE_PRIVATE int sqlite3MulInt64(i64*,i64);
SQLITE_PRIVATE int sqlite3AbsInt32(int);
SQLITE_PRIVATE void sqlite3FileSuffix3(const char*, char*);
# define sqlite3FileSuffix3(X,Y)
SQLITE_PRIVATE u8 sqlite3GetBoolean(const char *z,u8);
SQLITE_PRIVATE const void *sqlite3ValueText(sqlite3_value*, u8);
SQLITE_PRIVATE int sqlite3ValueBytes(sqlite3_value*, u8);
SQLITE_PRIVATE void sqlite3ValueSetStr(sqlite3_value*, int, const void *,u8,
void(*)(void*));
SQLITE_PRIVATE void sqlite3ValueSetNull(sqlite3_value*);
SQLITE_PRIVATE void sqlite3ValueFree(sqlite3_value*);
SQLITE_PRIVATE sqlite3_value *sqlite3ValueNew(sqlite3 *);
SQLITE_PRIVATE char *sqlite3Utf16to8(sqlite3 *, const void*, int, u8);
SQLITE_PRIVATE int sqlite3ValueFromExpr(sqlite3 *, Expr *, u8, u8, sqlite3_value **);
SQLITE_PRIVATE void sqlite3ValueApplyAffinity(sqlite3_value *, u8, u8);
SQLITE_PRIVATE const unsigned char sqlite3OpcodeProperty[];
SQLITE_PRIVATE const unsigned char sqlite3UpperToLower[];
SQLITE_PRIVATE const unsigned char sqlite3CtypeMap[];
SQLITE_PRIVATE const Token sqlite3IntTokens[];
SQLITE_PRIVATE SQLITE_WSD struct Sqlite3Config sqlite3Config;
SQLITE_PRIVATE SQLITE_WSD FuncDefHash sqlite3GlobalFunctions;
SQLITE_PRIVATE int sqlite3PendingByte;
SQLITE_PRIVATE void sqlite3RootPageMoved(sqlite3*, int, int, int);
SQLITE_PRIVATE void sqlite3Reindex(Parse*, Token*, Token*);
SQLITE_PRIVATE void sqlite3AlterFunctions(void);
SQLITE_PRIVATE void sqlite3AlterRenameTable(Parse*, SrcList*, Token*);
SQLITE_PRIVATE int sqlite3GetToken(const unsigned char *, int *);
SQLITE_PRIVATE void sqlite3NestedParse(Parse*, const char*, ...);
SQLITE_PRIVATE void sqlite3ExpirePreparedStatements(sqlite3*);
SQLITE_PRIVATE int sqlite3CodeSubselect(Parse *, Expr *, int, int);
SQLITE_PRIVATE void sqlite3SelectPrep(Parse*, Select*, NameContext*);
SQLITE_PRIVATE int sqlite3MatchSpanName(const char*, const char*, const char*, const char*);
SQLITE_PRIVATE int sqlite3ResolveExprNames(NameContext*, Expr*);
SQLITE_PRIVATE void sqlite3ResolveSelectNames(Parse*, Select*, NameContext*);
SQLITE_PRIVATE void sqlite3ResolveSelfReference(Parse*,Table*,int,Expr*,ExprList*);
SQLITE_PRIVATE int sqlite3ResolveOrderGroupBy(Parse*, Select*, ExprList*, const char*);
SQLITE_PRIVATE void sqlite3ColumnDefault(Vdbe *, Table *, int, int);
SQLITE_PRIVATE void sqlite3AlterFinishAddColumn(Parse *, Token *);
SQLITE_PRIVATE void sqlite3AlterBeginAddColumn(Parse *, SrcList *);
SQLITE_PRIVATE CollSeq *sqlite3GetCollSeq(Parse*, u8, CollSeq *, const char*);
SQLITE_PRIVATE char sqlite3AffinityType(const char*, u8*);
SQLITE_PRIVATE void sqlite3Analyze(Parse*, Token*, Token*);
SQLITE_PRIVATE int sqlite3InvokeBusyHandler(BusyHandler*);
SQLITE_PRIVATE int sqlite3FindDb(sqlite3*, Token*);
SQLITE_PRIVATE int sqlite3FindDbName(sqlite3 *, const char *);
SQLITE_PRIVATE int sqlite3AnalysisLoad(sqlite3*,int iDB);
SQLITE_PRIVATE void sqlite3DeleteIndexSamples(sqlite3*,Index*);
SQLITE_PRIVATE void sqlite3DefaultRowEst(Index*);
SQLITE_PRIVATE void sqlite3RegisterLikeFunctions(sqlite3*, int);
SQLITE_PRIVATE int sqlite3IsLikeFunction(sqlite3*,Expr*,int*,char*);
SQLITE_PRIVATE void sqlite3MinimumFileFormat(Parse*, int, int);
SQLITE_PRIVATE void sqlite3SchemaClear(void *);
SQLITE_PRIVATE Schema *sqlite3SchemaGet(sqlite3 *, Btree *);
SQLITE_PRIVATE int sqlite3SchemaToIndex(sqlite3 *db, Schema *);
SQLITE_PRIVATE KeyInfo *sqlite3KeyInfoAlloc(sqlite3*,int,int);
SQLITE_PRIVATE void sqlite3KeyInfoUnref(KeyInfo*);
SQLITE_PRIVATE KeyInfo *sqlite3KeyInfoRef(KeyInfo*);
SQLITE_PRIVATE KeyInfo *sqlite3KeyInfoOfIndex(Parse*, Index*);
SQLITE_PRIVATE int sqlite3KeyInfoIsWriteable(KeyInfo*);
SQLITE_PRIVATE int sqlite3CreateFunc(sqlite3 *, const char *, int, int, void *,
void (*)(sqlite3_context*,int,sqlite3_value **),
void (*)(sqlite3_context*,int,sqlite3_value **), void (*)(sqlite3_context*),
FuncDestructor *pDestructor
);
SQLITE_PRIVATE int sqlite3ApiExit(sqlite3 *db, int);
SQLITE_PRIVATE int sqlite3OpenTempDatabase(Parse *);
SQLITE_PRIVATE void sqlite3StrAccumInit(StrAccum*, sqlite3*, char*, int, int);
SQLITE_PRIVATE void sqlite3StrAccumAppend(StrAccum*,const char*,int);
SQLITE_PRIVATE void sqlite3StrAccumAppendAll(StrAccum*,const char*);
SQLITE_PRIVATE void sqlite3AppendChar(StrAccum*,int,char);
SQLITE_PRIVATE char *sqlite3StrAccumFinish(StrAccum*);
SQLITE_PRIVATE void sqlite3StrAccumReset(StrAccum*);
SQLITE_PRIVATE void sqlite3SelectDestInit(SelectDest*,int,int);
SQLITE_PRIVATE Expr *sqlite3CreateColumnExpr(sqlite3 *, SrcList *, int, int);
SQLITE_PRIVATE void sqlite3BackupRestart(sqlite3_backup *);
SQLITE_PRIVATE void sqlite3BackupUpdate(sqlite3_backup *, Pgno, const u8 *);
SQLITE_PRIVATE void sqlite3AnalyzeFunctions(void);
SQLITE_PRIVATE int sqlite3Stat4ProbeSetValue(Parse*,Index*,UnpackedRecord**,Expr*,u8,int,int*);
SQLITE_PRIVATE int sqlite3Stat4ValueFromExpr(Parse*, Expr*, u8, sqlite3_value**);
SQLITE_PRIVATE void sqlite3Stat4ProbeFree(UnpackedRecord*);
SQLITE_PRIVATE int sqlite3Stat4Column(sqlite3*, const void*, int, int, sqlite3_value**);
SQLITE_PRIVATE void *sqlite3ParserAlloc(void*(*)(u64));
SQLITE_PRIVATE void sqlite3ParserFree(void*, void(*)(void*));
SQLITE_PRIVATE void sqlite3Parser(void*, int, Token, Parse*);
SQLITE_PRIVATE   int sqlite3ParserStackPeak(void*);
SQLITE_PRIVATE void sqlite3AutoLoadExtensions(sqlite3*);
SQLITE_PRIVATE   void sqlite3CloseExtensions(sqlite3*);
# define sqlite3CloseExtensions(X)
SQLITE_PRIVATE   void sqlite3TableLock(Parse *, int, int, u8, const char *);
#define sqlite3TableLock(v,w,x,y,z)
SQLITE_PRIVATE   int sqlite3Utf8To8(unsigned char*);
#  define sqlite3VtabClear(Y)
#  define sqlite3VtabSync(X,Y) SQLITE_OK
#  define sqlite3VtabRollback(X)
#  define sqlite3VtabCommit(X)
#  define sqlite3VtabInSync(db) 0
#  define sqlite3VtabLock(X)
#  define sqlite3VtabUnlock(X)
#  define sqlite3VtabUnlockList(X)
#  define sqlite3VtabSavepoint(X, Y, Z) SQLITE_OK
#  define sqlite3GetVTable(X,Y)  ((VTable*)0)
SQLITE_PRIVATE    void sqlite3VtabClear(sqlite3 *db, Table*);
SQLITE_PRIVATE    void sqlite3VtabDisconnect(sqlite3 *db, Table *p);
SQLITE_PRIVATE    int sqlite3VtabSync(sqlite3 *db, Vdbe*);
SQLITE_PRIVATE    int sqlite3VtabRollback(sqlite3 *db);
SQLITE_PRIVATE    int sqlite3VtabCommit(sqlite3 *db);
SQLITE_PRIVATE    void sqlite3VtabLock(VTable *);
SQLITE_PRIVATE    void sqlite3VtabUnlock(VTable *);
SQLITE_PRIVATE    void sqlite3VtabUnlockList(sqlite3*);
SQLITE_PRIVATE    int sqlite3VtabSavepoint(sqlite3 *, int, int);
SQLITE_PRIVATE    void sqlite3VtabImportErrmsg(Vdbe*, sqlite3_vtab*);
SQLITE_PRIVATE    VTable *sqlite3GetVTable(sqlite3*, Table*);
#  define sqlite3VtabInSync(db) ((db)->nVTrans>0 && (db)->aVTrans==0)
SQLITE_PRIVATE void sqlite3VtabMakeWritable(Parse*,Table*);
SQLITE_PRIVATE void sqlite3VtabBeginParse(Parse*, Token*, Token*, Token*, int);
SQLITE_PRIVATE void sqlite3VtabFinishParse(Parse*, Token*);
SQLITE_PRIVATE void sqlite3VtabArgInit(Parse*);
SQLITE_PRIVATE void sqlite3VtabArgExtend(Parse*, Token*);
SQLITE_PRIVATE int sqlite3VtabCallCreate(sqlite3*, int, const char *, char **);
SQLITE_PRIVATE int sqlite3VtabCallConnect(Parse*, Table*);
SQLITE_PRIVATE int sqlite3VtabCallDestroy(sqlite3*, int, const char *);
SQLITE_PRIVATE int sqlite3VtabBegin(sqlite3 *, VTable *);
SQLITE_PRIVATE FuncDef *sqlite3VtabOverloadFunction(sqlite3 *,FuncDef*, int nArg, Expr*);
SQLITE_PRIVATE void sqlite3InvalidFunction(sqlite3_context*,int,sqlite3_value**);
SQLITE_PRIVATE sqlite3_int64 sqlite3StmtCurrentTime(sqlite3_context*);
SQLITE_PRIVATE int sqlite3VdbeParameterIndex(Vdbe*, const char*, int);
SQLITE_PRIVATE int sqlite3TransferBindings(sqlite3_stmt *, sqlite3_stmt *);
SQLITE_PRIVATE void sqlite3ParserReset(Parse*);
SQLITE_PRIVATE int sqlite3Reprepare(Vdbe*);
SQLITE_PRIVATE void sqlite3ExprListCheckLength(Parse*, ExprList*, const char*);
SQLITE_PRIVATE CollSeq *sqlite3BinaryCompareCollSeq(Parse *, Expr *, Expr *);
SQLITE_PRIVATE int sqlite3TempInMemory(const sqlite3*);
SQLITE_PRIVATE const char *sqlite3JournalModename(int);
SQLITE_PRIVATE   int sqlite3Checkpoint(sqlite3*, int, int, int*, int*);
SQLITE_PRIVATE   int sqlite3WalDefaultHook(void*,sqlite3*,const char*,int);
SQLITE_PRIVATE   With *sqlite3WithAdd(Parse*,With*,Token*,ExprList*,Select*);
SQLITE_PRIVATE   void sqlite3WithDelete(sqlite3*,With*);
SQLITE_PRIVATE   void sqlite3WithPush(Parse*, With*, u8);
#define sqlite3WithPush(x,y,z)
#define sqlite3WithDelete(x,y)
#if !defined(SQLITE_OMIT_FOREIGN_KEY) && !defined(SQLITE_OMIT_TRIGGER)
SQLITE_PRIVATE   void sqlite3FkCheck(Parse*, Table*, int, int, int*, int);
SQLITE_PRIVATE   void sqlite3FkDropTable(Parse*, SrcList *, Table*);
SQLITE_PRIVATE   void sqlite3FkActions(Parse*, Table*, ExprList*, int, int*, int);
SQLITE_PRIVATE   int sqlite3FkRequired(Parse*, Table*, int*, int);
SQLITE_PRIVATE   u32 sqlite3FkOldmask(Parse*, Table*);
SQLITE_PRIVATE   FKey *sqlite3FkReferences(Table *);
#define sqlite3FkActions(a,b,c,d,e,f)
#define sqlite3FkCheck(a,b,c,d,e,f)
#define sqlite3FkDropTable(a,b,c)
#define sqlite3FkOldmask(a,b)         0
#define sqlite3FkRequired(a,b,c,d)    0
SQLITE_PRIVATE   void sqlite3FkDelete(sqlite3 *, Table*);
SQLITE_PRIVATE   int sqlite3FkLocateIndex(Parse*,Table*,FKey*,Index**,int**);
#define sqlite3FkDelete(a,b)
#define sqlite3FkLocateIndex(a,b,c,d,e)
#define SQLITE_FAULTINJECTOR_MALLOC     0
#define SQLITE_FAULTINJECTOR_COUNT      1
SQLITE_PRIVATE   void sqlite3BeginBenignMalloc(void);
SQLITE_PRIVATE   void sqlite3EndBenignMalloc(void);
#define sqlite3BeginBenignMalloc()
#define sqlite3EndBenignMalloc()
#define IN_INDEX_ROWID        1
#define IN_INDEX_EPH          2
#define IN_INDEX_INDEX_ASC    3
#define IN_INDEX_INDEX_DESC   4
#define IN_INDEX_NOOP         5
#define IN_INDEX_NOOP_OK     0x0001
#define IN_INDEX_MEMBERSHIP  0x0002
#define IN_INDEX_LOOP        0x0004
SQLITE_PRIVATE int sqlite3FindInIndex(Parse *, Expr *, u32, int*);
SQLITE_PRIVATE   int sqlite3JournalOpen(sqlite3_vfs *, const char *, sqlite3_file *, int, int);
SQLITE_PRIVATE   int sqlite3JournalSize(sqlite3_vfs *);
SQLITE_PRIVATE   int sqlite3JournalCreate(sqlite3_file *);
SQLITE_PRIVATE   int sqlite3JournalExists(sqlite3_file *p);
#define sqlite3JournalSize(pVfs) ((pVfs)->szOsFile)
#define sqlite3JournalExists(p) 1
SQLITE_PRIVATE void sqlite3MemJournalOpen(sqlite3_file *);
SQLITE_PRIVATE int sqlite3MemJournalSize(void);
SQLITE_PRIVATE int sqlite3IsMemJournal(sqlite3_file *);
SQLITE_PRIVATE void sqlite3ExprSetHeightAndFlags(Parse *pParse, Expr *p);
#if SQLITE_MAX_EXPR_DEPTH>0
SQLITE_PRIVATE   int sqlite3SelectExprHeight(Select *);
SQLITE_PRIVATE   int sqlite3ExprCheckHeight(Parse*, int);
#define sqlite3SelectExprHeight(x) 0
#define sqlite3ExprCheckHeight(x,y)
SQLITE_PRIVATE u32 sqlite3Get4byte(const u8*);
SQLITE_PRIVATE void sqlite3Put4byte(u8*, u32);
SQLITE_PRIVATE   void sqlite3ConnectionBlocked(sqlite3 *, sqlite3 *);
SQLITE_PRIVATE   void sqlite3ConnectionUnlocked(sqlite3 *db);
SQLITE_PRIVATE   void sqlite3ConnectionClosed(sqlite3 *db);
#define sqlite3ConnectionBlocked(x,y)
#define sqlite3ConnectionUnlocked(x)
#define sqlite3ConnectionClosed(x)
SQLITE_PRIVATE   void sqlite3ParserTrace(FILE*, char *);
# define IOTRACE(A)  if( sqlite3IoTrace )
SQLITE_PRIVATE   void sqlite3VdbeIOTraceSql(Vdbe*);
SQLITE_API SQLITE_EXTERN void (SQLITE_CDECL *sqlite3IoTrace)(const char*,...);
# define IOTRACE(A)
# define sqlite3VdbeIOTraceSql(X)
SQLITE_PRIVATE   void sqlite3MemdebugSetType(void*,u8);
SQLITE_PRIVATE   int sqlite3MemdebugHasType(void*,u8);
SQLITE_PRIVATE   int sqlite3MemdebugNoType(void*,u8);
# define sqlite3MemdebugSetType(X,Y)
# define sqlite3MemdebugHasType(X,Y)  1
# define sqlite3MemdebugNoType(X,Y)   1
#define MEMTYPE_HEAP       0x01
#define MEMTYPE_LOOKASIDE  0x02
#define MEMTYPE_SCRATCH    0x04
#define MEMTYPE_PCACHE     0x08
#if SQLITE_MAX_WORKER_THREADS>0
SQLITE_PRIVATE int sqlite3ThreadCreate(SQLiteThread**,void*(*)(void*),void*);
SQLITE_PRIVATE int sqlite3ThreadJoin(SQLiteThread*, void**);
SQLITE_PRIVATE const unsigned char sqlite3UpperToLower[] = ;
SQLITE_PRIVATE const unsigned char sqlite3CtypeMap[256] = ;
# define  SQLITE_USE_URI 0
# define SQLITE_ALLOW_COVERING_INDEX_SCAN 1
# define SQLITE_SORTER_PMASZ 250
SQLITE_PRIVATE SQLITE_WSD struct Sqlite3Config sqlite3Config = ;
SQLITE_PRIVATE SQLITE_WSD FuncDefHash sqlite3GlobalFunctions;
SQLITE_PRIVATE const Token sqlite3IntTokens[] = ;
SQLITE_PRIVATE int sqlite3PendingByte = 0x40000000;
SQLITE_PRIVATE const unsigned char sqlite3OpcodeProperty[] = OPFLG_INITIALIZER;
static const char * const azCompileOpt[] = ;
SQLITE_API int SQLITE_STDCALL sqlite3_compileoption_used(const char *zOptName)
SQLITE_API const char *SQLITE_STDCALL sqlite3_compileoption_get(int N)
#define _VDBEINT_H_
# define SQLITE_MAX_SCHEMA_RETRY 50
typedef struct VdbeOp Op;
typedef unsigned Bool;
typedef struct VdbeSorter VdbeSorter;
typedef struct Explain Explain;
typedef struct AuxData AuxData;
struct VdbeCursor ;
typedef struct VdbeCursor VdbeCursor;
typedef struct VdbeFrame VdbeFrame;
struct VdbeFrame ;
#define VdbeFrameMem(p) ((Mem *)&((u8 *)p)[ROUND8(sizeof(VdbeFrame))])
#define CACHE_STALE 0
struct Mem ;
#define MEM_Null      0x0001
#define MEM_Str       0x0002
#define MEM_Int       0x0004
#define MEM_Real      0x0008
#define MEM_Blob      0x0010
#define MEM_AffMask   0x001f
#define MEM_RowSet    0x0020
#define MEM_Frame     0x0040
#define MEM_Undefined 0x0080
#define MEM_Cleared   0x0100
#define MEM_TypeMask  0x01ff
#define MEM_Term      0x0200
#define MEM_Dyn       0x0400
#define MEM_Static    0x0800
#define MEM_Ephem     0x1000
#define MEM_Agg       0x2000
#define MEM_Zero      0x4000
#undef MEM_Zero
#define MEM_Zero 0x0000
#define MemSetTypeFlag(p, f) \
((p)->flags = ((p)->flags&~(MEM_TypeMask|MEM_Zero))|f)
#define memIsValid(M)  ((M)->flags & MEM_Undefined)==0
struct AuxData ;
struct sqlite3_context ;
struct Explain ;
typedef unsigned bft;
typedef struct ScanStatus ScanStatus;
struct ScanStatus ;
struct Vdbe ;
#define VDBE_MAGIC_INIT     0x26bceaa5
#define VDBE_MAGIC_RUN      0xbdf20da3
#define VDBE_MAGIC_HALT     0x519c2973
#define VDBE_MAGIC_DEAD     0xb606c3c8
SQLITE_PRIVATE void sqlite3VdbeFreeCursor(Vdbe *, VdbeCursor*);
void sqliteVdbePopStack(Vdbe*,int);
SQLITE_PRIVATE int sqlite3VdbeCursorMoveto(VdbeCursor*);
SQLITE_PRIVATE int sqlite3VdbeCursorRestore(VdbeCursor*);
#if defined(SQLITE_DEBUG) || defined(VDBE_PROFILE)
SQLITE_PRIVATE void sqlite3VdbePrintOp(FILE*, int, Op*);
SQLITE_PRIVATE u32 sqlite3VdbeSerialTypeLen(u32);
SQLITE_PRIVATE u32 sqlite3VdbeSerialType(Mem*, int);
SQLITE_PRIVATE u32 sqlite3VdbeSerialPut(unsigned char*, Mem*, u32);
SQLITE_PRIVATE u32 sqlite3VdbeSerialGet(const unsigned char*, u32, Mem*);
SQLITE_PRIVATE void sqlite3VdbeDeleteAuxData(Vdbe*, int, int);
int sqlite2BtreeKeyCompare(BtCursor *, const void *, int, int, int *);
SQLITE_PRIVATE int sqlite3VdbeIdxKeyCompare(sqlite3*,VdbeCursor*,UnpackedRecord*,int*);
SQLITE_PRIVATE int sqlite3VdbeIdxRowid(sqlite3*, BtCursor*, i64*);
SQLITE_PRIVATE int sqlite3VdbeExec(Vdbe*);
SQLITE_PRIVATE int sqlite3VdbeList(Vdbe*);
SQLITE_PRIVATE int sqlite3VdbeHalt(Vdbe*);
SQLITE_PRIVATE int sqlite3VdbeChangeEncoding(Mem *, int);
SQLITE_PRIVATE int sqlite3VdbeMemTooBig(Mem*);
SQLITE_PRIVATE int sqlite3VdbeMemCopy(Mem*, const Mem*);
SQLITE_PRIVATE void sqlite3VdbeMemShallowCopy(Mem*, const Mem*, int);
SQLITE_PRIVATE void sqlite3VdbeMemMove(Mem*, Mem*);
SQLITE_PRIVATE int sqlite3VdbeMemNulTerminate(Mem*);
SQLITE_PRIVATE int sqlite3VdbeMemSetStr(Mem*, const char*, int, u8, void(*)(void*));
SQLITE_PRIVATE void sqlite3VdbeMemSetInt64(Mem*, i64);
# define sqlite3VdbeMemSetDouble sqlite3VdbeMemSetInt64
SQLITE_PRIVATE   void sqlite3VdbeMemSetDouble(Mem*, double);
SQLITE_PRIVATE void sqlite3VdbeMemInit(Mem*,sqlite3*,u16);
SQLITE_PRIVATE void sqlite3VdbeMemSetNull(Mem*);
SQLITE_PRIVATE void sqlite3VdbeMemSetZeroBlob(Mem*,int);
SQLITE_PRIVATE void sqlite3VdbeMemSetRowSet(Mem*);
SQLITE_PRIVATE int sqlite3VdbeMemMakeWriteable(Mem*);
SQLITE_PRIVATE int sqlite3VdbeMemStringify(Mem*, u8, u8);
SQLITE_PRIVATE i64 sqlite3VdbeIntValue(Mem*);
SQLITE_PRIVATE int sqlite3VdbeMemIntegerify(Mem*);
SQLITE_PRIVATE double sqlite3VdbeRealValue(Mem*);
SQLITE_PRIVATE void sqlite3VdbeIntegerAffinity(Mem*);
SQLITE_PRIVATE int sqlite3VdbeMemRealify(Mem*);
SQLITE_PRIVATE int sqlite3VdbeMemNumerify(Mem*);
SQLITE_PRIVATE void sqlite3VdbeMemCast(Mem*,u8,u8);
SQLITE_PRIVATE int sqlite3VdbeMemFromBtree(BtCursor*,u32,u32,int,Mem*);
SQLITE_PRIVATE void sqlite3VdbeMemRelease(Mem *p);
#define VdbeMemDynamic(X)  \
(((X)->flags&(MEM_Agg|MEM_Dyn|MEM_RowSet|MEM_Frame))!=0)
SQLITE_PRIVATE int sqlite3VdbeMemFinalize(Mem*, FuncDef*);
SQLITE_PRIVATE const char *sqlite3OpcodeName(int);
SQLITE_PRIVATE int sqlite3VdbeMemGrow(Mem *pMem, int n, int preserve);
SQLITE_PRIVATE int sqlite3VdbeMemClearAndResize(Mem *pMem, int n);
SQLITE_PRIVATE int sqlite3VdbeCloseStatement(Vdbe *, int);
SQLITE_PRIVATE void sqlite3VdbeFrameDelete(VdbeFrame*);
SQLITE_PRIVATE int sqlite3VdbeFrameRestore(VdbeFrame *);
SQLITE_PRIVATE int sqlite3VdbeTransferError(Vdbe *p);
SQLITE_PRIVATE int sqlite3VdbeSorterInit(sqlite3 *, int, VdbeCursor *);
SQLITE_PRIVATE void sqlite3VdbeSorterReset(sqlite3 *, VdbeSorter *);
SQLITE_PRIVATE void sqlite3VdbeSorterClose(sqlite3 *, VdbeCursor *);
SQLITE_PRIVATE int sqlite3VdbeSorterRowkey(const VdbeCursor *, Mem *);
SQLITE_PRIVATE int sqlite3VdbeSorterNext(sqlite3 *, const VdbeCursor *, int *);
SQLITE_PRIVATE int sqlite3VdbeSorterRewind(const VdbeCursor *, int *);
SQLITE_PRIVATE int sqlite3VdbeSorterWrite(const VdbeCursor *, Mem *);
SQLITE_PRIVATE int sqlite3VdbeSorterCompare(const VdbeCursor *, Mem *, int, int *);
#if !defined(SQLITE_OMIT_SHARED_CACHE) && SQLITE_THREADSAFE>0
SQLITE_PRIVATE   void sqlite3VdbeEnter(Vdbe*);
SQLITE_PRIVATE   void sqlite3VdbeLeave(Vdbe*);
# define sqlite3VdbeEnter(X)
# define sqlite3VdbeLeave(X)
SQLITE_PRIVATE void sqlite3VdbeMemAboutToChange(Vdbe*,Mem*);
SQLITE_PRIVATE int sqlite3VdbeCheckMemInvariants(Mem*);
SQLITE_PRIVATE int sqlite3VdbeCheckFk(Vdbe *, int);
# define sqlite3VdbeCheckFk(p,i) 0
SQLITE_PRIVATE int sqlite3VdbeMemTranslate(Mem*, u8);
SQLITE_PRIVATE   void sqlite3VdbePrintSql(Vdbe*);
SQLITE_PRIVATE   void sqlite3VdbeMemPrettyPrint(Mem *pMem, char *zBuf);
SQLITE_PRIVATE int sqlite3VdbeMemHandleBom(Mem *pMem);
SQLITE_PRIVATE   int sqlite3VdbeMemExpandBlob(Mem *);
#define ExpandBlob(P) (((P)->flags&MEM_Zero)?sqlite3VdbeMemExpandBlob(P):0)
#define sqlite3VdbeMemExpandBlob(x) SQLITE_OK
#define ExpandBlob(P) SQLITE_OK
typedef struct sqlite3StatType sqlite3StatType;
static SQLITE_WSD struct sqlite3StatType  sqlite3Stat = ;
static const char statMutex[] = ;
# define wsdStatInit  sqlite3StatType *x = &GLOBAL(sqlite3StatType,sqlite3Stat)
# define wsdStat x[0]
# define wsdStatInit
# define wsdStat sqlite3Stat
SQLITE_PRIVATE sqlite3_int64 sqlite3StatusValue(int op)
SQLITE_PRIVATE void sqlite3StatusUp(int op, int N)
SQLITE_PRIVATE void sqlite3StatusDown(int op, int N)
SQLITE_PRIVATE void sqlite3StatusSet(int op, int X)
SQLITE_API int SQLITE_STDCALL sqlite3_status64(
int op,
sqlite3_int64 *pCurrent,
sqlite3_int64 *pHighwater,
int resetFlag
)
SQLITE_API int SQLITE_STDCALL sqlite3_status(int op, int *pCurrent, int *pHighwater, int resetFlag)
SQLITE_API int SQLITE_STDCALL sqlite3_db_status(
sqlite3 *db,
int op,
int *pCurrent,
int *pHighwater,
int resetFlag
)
typedef struct DateTime DateTime;
struct DateTime ;
static int getDigits(const char *zDate, ...)
static int parseTimezone(const char *zDate, DateTime *p)
static int parseHhMmSs(const char *zDate, DateTime *p)
static void computeJD(DateTime *p)
static int parseYyyyMmDd(const char *zDate, DateTime *p)
static int setDateTimeToCurrent(sqlite3_context *context, DateTime *p)
static int parseDateOrTime(
sqlite3_context *context,
const char *zDate,
DateTime *p
)
static void computeYMD(DateTime *p)
static void computeHMS(DateTime *p)
static void computeYMD_HMS(DateTime *p)
static void clearYMD_HMS_TZ(DateTime *p)
#if !HAVE_LOCALTIME_R && !HAVE_LOCALTIME_S \
&& defined(_MSC_VER) && defined(_CRT_INSECURE_DEPRECATE)
#undef  HAVE_LOCALTIME_S
#define HAVE_LOCALTIME_S 1
static int osLocaltime(time_t *t, struct tm *pTm)
static sqlite3_int64 localtimeOffset(
DateTime *p,
sqlite3_context *pCtx,
int *pRc
)
static int parseModifier(sqlite3_context *pCtx, const char *zMod, DateTime *p)
static int isDate(
sqlite3_context *context,
int argc,
sqlite3_value **argv,
DateTime *p
)
static void juliandayFunc(
sqlite3_context *context,
int argc,
sqlite3_value **argv
)
static void datetimeFunc(
sqlite3_context *context,
int argc,
sqlite3_value **argv
)
static void timeFunc(
sqlite3_context *context,
int argc,
sqlite3_value **argv
)
static void dateFunc(
sqlite3_context *context,
int argc,
sqlite3_value **argv
)
static void strftimeFunc(
sqlite3_context *context,
int argc,
sqlite3_value **argv
)
static void ctimeFunc(
sqlite3_context *context,
int NotUsed,
sqlite3_value **NotUsed2
)
static void cdateFunc(
sqlite3_context *context,
int NotUsed,
sqlite3_value **NotUsed2
)
static void ctimestampFunc(
sqlite3_context *context,
int NotUsed,
sqlite3_value **NotUsed2
)
static void currentTimeFunc(
sqlite3_context *context,
int argc,
sqlite3_value **argv
)
SQLITE_PRIVATE void sqlite3RegisterDateTimeFunctions(void)
#define _SQLITE_OS_C_ 1
#undef _SQLITE_OS_C_
#if defined(SQLITE_TEST)
SQLITE_API int sqlite3_memdebug_vfs_oom_test = 1;
#define DO_OS_MALLOC_TEST(x)                                       \
if (sqlite3_memdebug_vfs_oom_test && (!x || !sqlite3IsMemJournal(x)))
#define DO_OS_MALLOC_TEST(x)
SQLITE_PRIVATE int sqlite3OsClose(sqlite3_file *pId)
SQLITE_PRIVATE int sqlite3OsRead(sqlite3_file *id, void *pBuf, int amt, i64 offset)
SQLITE_PRIVATE int sqlite3OsWrite(sqlite3_file *id, const void *pBuf, int amt, i64 offset)
SQLITE_PRIVATE int sqlite3OsTruncate(sqlite3_file *id, i64 size)
SQLITE_PRIVATE int sqlite3OsSync(sqlite3_file *id, int flags)
SQLITE_PRIVATE int sqlite3OsFileSize(sqlite3_file *id, i64 *pSize)
SQLITE_PRIVATE int sqlite3OsLock(sqlite3_file *id, int lockType)
SQLITE_PRIVATE int sqlite3OsUnlock(sqlite3_file *id, int lockType)
SQLITE_PRIVATE int sqlite3OsCheckReservedLock(sqlite3_file *id, int *pResOut)
SQLITE_PRIVATE int sqlite3OsFileControl(sqlite3_file *id, int op, void *pArg)
SQLITE_PRIVATE void sqlite3OsFileControlHint(sqlite3_file *id, int op, void *pArg)
SQLITE_PRIVATE int sqlite3OsSectorSize(sqlite3_file *id)
SQLITE_PRIVATE int sqlite3OsDeviceCharacteristics(sqlite3_file *id)
SQLITE_PRIVATE int sqlite3OsShmLock(sqlite3_file *id, int offset, int n, int flags)
SQLITE_PRIVATE void sqlite3OsShmBarrier(sqlite3_file *id)
SQLITE_PRIVATE int sqlite3OsShmUnmap(sqlite3_file *id, int deleteFlag)
SQLITE_PRIVATE int sqlite3OsShmMap(
sqlite3_file *id,
int iPage,
int pgsz,
int bExtend,
void volatile **pp
)
#if SQLITE_MAX_MMAP_SIZE>0
SQLITE_PRIVATE int sqlite3OsFetch(sqlite3_file *id, i64 iOff, int iAmt, void **pp)
SQLITE_PRIVATE int sqlite3OsUnfetch(sqlite3_file *id, i64 iOff, void *p)
SQLITE_PRIVATE int sqlite3OsFetch(sqlite3_file *id, i64 iOff, int iAmt, void **pp)
SQLITE_PRIVATE int sqlite3OsUnfetch(sqlite3_file *id, i64 iOff, void *p)
SQLITE_PRIVATE int sqlite3OsOpen(
sqlite3_vfs *pVfs,
const char *zPath,
sqlite3_file *pFile,
int flags,
int *pFlagsOut
)
SQLITE_PRIVATE int sqlite3OsDelete(sqlite3_vfs *pVfs, const char *zPath, int dirSync)
SQLITE_PRIVATE int sqlite3OsAccess(
sqlite3_vfs *pVfs,
const char *zPath,
int flags,
int *pResOut
)
SQLITE_PRIVATE int sqlite3OsFullPathname(
sqlite3_vfs *pVfs,
const char *zPath,
int nPathOut,
char *zPathOut
)
SQLITE_PRIVATE void *sqlite3OsDlOpen(sqlite3_vfs *pVfs, const char *zPath)
SQLITE_PRIVATE void sqlite3OsDlError(sqlite3_vfs *pVfs, int nByte, char *zBufOut)
SQLITE_PRIVATE void (*sqlite3OsDlSym(sqlite3_vfs *pVfs, void *pHdle, const char *zSym))(void)
SQLITE_PRIVATE void sqlite3OsDlClose(sqlite3_vfs *pVfs, void *pHandle)
SQLITE_PRIVATE int sqlite3OsRandomness(sqlite3_vfs *pVfs, int nByte, char *zBufOut)
SQLITE_PRIVATE int sqlite3OsSleep(sqlite3_vfs *pVfs, int nMicro)
SQLITE_PRIVATE int sqlite3OsCurrentTimeInt64(sqlite3_vfs *pVfs, sqlite3_int64 *pTimeOut)
SQLITE_PRIVATE int sqlite3OsOpenMalloc(
sqlite3_vfs *pVfs,
const char *zFile,
sqlite3_file **ppFile,
int flags,
int *pOutFlags
)
SQLITE_PRIVATE int sqlite3OsCloseFree(sqlite3_file *pFile)
SQLITE_PRIVATE int sqlite3OsInit(void)
static sqlite3_vfs * SQLITE_WSD vfsList = 0;
#define vfsList GLOBAL(sqlite3_vfs *, vfsList)
SQLITE_API sqlite3_vfs *SQLITE_STDCALL sqlite3_vfs_find(const char *zVfs)
static void vfsUnlink(sqlite3_vfs *pVfs)
SQLITE_API int SQLITE_STDCALL sqlite3_vfs_register(sqlite3_vfs *pVfs, int makeDflt)
SQLITE_API int SQLITE_STDCALL sqlite3_vfs_unregister(sqlite3_vfs *pVfs)
typedef struct BenignMallocHooks BenignMallocHooks;
static SQLITE_WSD struct BenignMallocHooks  sqlite3Hooks = ;
# define wsdHooksInit \
BenignMallocHooks *x = &GLOBAL(BenignMallocHooks,sqlite3Hooks)
# define wsdHooks x[0]
# define wsdHooksInit
# define wsdHooks sqlite3Hooks
SQLITE_PRIVATE void sqlite3BenignMallocHooks(
void (*xBenignBegin)(void),
void (*xBenignEnd)(void)
)
SQLITE_PRIVATE void sqlite3BeginBenignMalloc(void)
SQLITE_PRIVATE void sqlite3EndBenignMalloc(void)
static void *sqlite3MemMalloc(int nByte)
static void sqlite3MemFree(void *pPrior)
static void *sqlite3MemRealloc(void *pPrior, int nByte)
static int sqlite3MemSize(void *pPrior)
static int sqlite3MemRoundup(int n)
static int sqlite3MemInit(void *NotUsed)
static void sqlite3MemShutdown(void *NotUsed)
SQLITE_PRIVATE void sqlite3MemSetDefault(void)
#if defined(__APPLE__) && !defined(SQLITE_WITHOUT_ZONEMALLOC)
static malloc_zone_t* _sqliteZone_;
#define SQLITE_MALLOC(x) malloc_zone_malloc(_sqliteZone_, (x))
#define SQLITE_FREE(x) malloc_zone_free(_sqliteZone_, (x));
#define SQLITE_REALLOC(x,y) malloc_zone_realloc(_sqliteZone_, (x), (y))
#define SQLITE_MALLOCSIZE(x) \
(_sqliteZone_ ? _sqliteZone_->size(_sqliteZone_,x) : malloc_size(x))
#define SQLITE_MALLOC(x)             malloc(x)
#define SQLITE_FREE(x)               free(x)
#define SQLITE_REALLOC(x,y)          realloc((x),(y))
#if HAVE_MALLOC_H && HAVE_MALLOC_USABLE_SIZE
#  define SQLITE_USE_MALLOC_H 1
#  define SQLITE_USE_MALLOC_USABLE_SIZE 1
#elif defined(_MSC_VER) && !defined(SQLITE_WITHOUT_MSIZE)
#  define SQLITE_USE_MALLOC_H
#  define SQLITE_USE_MSIZE
#if defined(SQLITE_USE_MALLOC_H)
#  include <malloc.h>
#  if defined(SQLITE_USE_MALLOC_USABLE_SIZE)
#    if !defined(SQLITE_MALLOCSIZE)
#      define SQLITE_MALLOCSIZE(x)   malloc_usable_size(x)
#    endif
#  elif defined(SQLITE_USE_MSIZE)
#    if !defined(SQLITE_MALLOCSIZE)
#      define SQLITE_MALLOCSIZE      _msize
#    endif
#  endif
static void *sqlite3MemMalloc(int nByte)
static void sqlite3MemFree(void *pPrior)
static int sqlite3MemSize(void *pPrior)
static void *sqlite3MemRealloc(void *pPrior, int nByte)
static int sqlite3MemRoundup(int n)
static int sqlite3MemInit(void *NotUsed)
static void sqlite3MemShutdown(void *NotUsed)
SQLITE_PRIVATE void sqlite3MemSetDefault(void)
extern int backtrace(void**,int);
extern void backtrace_symbols_fd(void*const*,int,int);
# define backtrace(A,B) 1
# define backtrace_symbols_fd(A,B,C)
struct MemBlockHdr ;
#define FOREGUARD 0x80F5E153
#define REARGUARD 0xE4676B53
#define NCSIZE  1000
static struct  mem;
static void adjustStats(int iSize, int increment)
static struct MemBlockHdr *sqlite3MemsysGetHeader(void *pAllocation)
static int sqlite3MemSize(void *p)
static int sqlite3MemInit(void *NotUsed)
static void sqlite3MemShutdown(void *NotUsed)
static int sqlite3MemRoundup(int n)
static void randomFill(char *pBuf, int nByte)
static void *sqlite3MemMalloc(int nByte)
static void sqlite3MemFree(void *pPrior)
static void *sqlite3MemRealloc(void *pPrior, int nByte)
SQLITE_PRIVATE void sqlite3MemSetDefault(void)
SQLITE_PRIVATE void sqlite3MemdebugSetType(void *p, u8 eType)
SQLITE_PRIVATE int sqlite3MemdebugHasType(void *p, u8 eType)
SQLITE_PRIVATE int sqlite3MemdebugNoType(void *p, u8 eType)
SQLITE_PRIVATE void sqlite3MemdebugBacktrace(int depth)
SQLITE_PRIVATE void sqlite3MemdebugBacktraceCallback(void (*xBacktrace)(int, int, void **))
SQLITE_PRIVATE void sqlite3MemdebugSettitle(const char *zTitle)
SQLITE_PRIVATE void sqlite3MemdebugSync()
SQLITE_PRIVATE void sqlite3MemdebugDump(const char *zFilename)
SQLITE_PRIVATE int sqlite3MemdebugMallocCount()
#define MX_SMALL 10
#define N_HASH  61
typedef struct Mem3Block Mem3Block;
struct Mem3Block ;
static SQLITE_WSD struct Mem3Global  mem3 = ;
#define mem3 GLOBAL(struct Mem3Global, mem3)
static void memsys3UnlinkFromList(u32 i, u32 *pRoot)
static void memsys3Unlink(u32 i)
static void memsys3LinkIntoList(u32 i, u32 *pRoot)
static void memsys3Link(u32 i)
static void memsys3Enter(void)
static void memsys3Leave(void)
static void memsys3OutOfMemory(int nByte)
static void *memsys3Checkout(u32 i, u32 nBlock)
static void *memsys3FromMaster(u32 nBlock)
static void memsys3Merge(u32 *pRoot)
static void *memsys3MallocUnsafe(int nByte)
static void memsys3FreeUnsafe(void *pOld)
static int memsys3Size(void *p)
static int memsys3Roundup(int n)
static void *memsys3Malloc(int nBytes)
static void memsys3Free(void *pPrior)
static void *memsys3Realloc(void *pPrior, int nBytes)
static int memsys3Init(void *NotUsed)
static void memsys3Shutdown(void *NotUsed)
SQLITE_PRIVATE void sqlite3Memsys3Dump(const char *zFilename)
SQLITE_PRIVATE const sqlite3_mem_methods *sqlite3MemGetMemsys3(void)
typedef struct Mem5Link Mem5Link;
struct Mem5Link ;
#define LOGMAX 30
#define CTRL_LOGSIZE  0x1f
#define CTRL_FREE     0x20
static SQLITE_WSD struct Mem5Global  mem5;
#define mem5 GLOBAL(struct Mem5Global, mem5)
#define MEM5LINK(idx) ((Mem5Link *)(&mem5.zPool[(idx)*mem5.szAtom]))
static void memsys5Unlink(int i, int iLogsize)
static void memsys5Link(int i, int iLogsize)
static void memsys5Enter(void)
static void memsys5Leave(void)
static int memsys5Size(void *p)
static void *memsys5MallocUnsafe(int nByte)
static void memsys5FreeUnsafe(void *pOld)
static void *memsys5Malloc(int nBytes)
static void memsys5Free(void *pPrior)
static void *memsys5Realloc(void *pPrior, int nBytes)
static int memsys5Roundup(int n)
static int memsys5Log(int iValue)
static int memsys5Init(void *NotUsed)
static void memsys5Shutdown(void *NotUsed)
SQLITE_PRIVATE void sqlite3Memsys5Dump(const char *zFilename)
SQLITE_PRIVATE const sqlite3_mem_methods *sqlite3MemGetMemsys5(void)
#if defined(SQLITE_DEBUG) && !defined(SQLITE_MUTEX_OMIT)
static SQLITE_WSD int mutexIsInit = 0;
SQLITE_PRIVATE int sqlite3MutexInit(void)
SQLITE_PRIVATE int sqlite3MutexEnd(void)
SQLITE_API sqlite3_mutex *SQLITE_STDCALL sqlite3_mutex_alloc(int id)
SQLITE_PRIVATE sqlite3_mutex *sqlite3MutexAlloc(int id)
SQLITE_API void SQLITE_STDCALL sqlite3_mutex_free(sqlite3_mutex *p)
SQLITE_API void SQLITE_STDCALL sqlite3_mutex_enter(sqlite3_mutex *p)
SQLITE_API int SQLITE_STDCALL sqlite3_mutex_try(sqlite3_mutex *p)
SQLITE_API void SQLITE_STDCALL sqlite3_mutex_leave(sqlite3_mutex *p)
SQLITE_API int SQLITE_STDCALL sqlite3_mutex_held(sqlite3_mutex *p)
SQLITE_API int SQLITE_STDCALL sqlite3_mutex_notheld(sqlite3_mutex *p)
static int noopMutexInit(void)
static int noopMutexEnd(void)
static sqlite3_mutex *noopMutexAlloc(int id)
static void noopMutexFree(sqlite3_mutex *p)
static void noopMutexEnter(sqlite3_mutex *p)
static int noopMutexTry(sqlite3_mutex *p)
static void noopMutexLeave(sqlite3_mutex *p)
SQLITE_PRIVATE sqlite3_mutex_methods const *sqlite3NoopMutex(void)
typedef struct sqlite3_debug_mutex  sqlite3_debug_mutex;
static int debugMutexHeld(sqlite3_mutex *pX)
static int debugMutexNotheld(sqlite3_mutex *pX)
static int debugMutexInit(void)
static int debugMutexEnd(void)
static sqlite3_mutex *debugMutexAlloc(int id)
static void debugMutexFree(sqlite3_mutex *pX)
static void debugMutexEnter(sqlite3_mutex *pX)
static int debugMutexTry(sqlite3_mutex *pX)
static void debugMutexLeave(sqlite3_mutex *pX)
SQLITE_PRIVATE sqlite3_mutex_methods const *sqlite3NoopMutex(void)
SQLITE_PRIVATE sqlite3_mutex_methods const *sqlite3DefaultMutex(void)
#if defined(SQLITE_DEBUG) || defined(SQLITE_HOMEGROWN_RECURSIVE_MUTEX)
# define SQLITE_MUTEX_NREF 1
# define SQLITE_MUTEX_NREF 0
struct sqlite3_mutex ;
#if SQLITE_MUTEX_NREF
#define SQLITE3_MUTEX_INITIALIZER
#define SQLITE3_MUTEX_INITIALIZER
#if !defined(NDEBUG) || defined(SQLITE_DEBUG)
static int pthreadMutexHeld(sqlite3_mutex *p)
static int pthreadMutexNotheld(sqlite3_mutex *p)
static int pthreadMutexInit(void)
static int pthreadMutexEnd(void)
static sqlite3_mutex *pthreadMutexAlloc(int iType)
static void pthreadMutexFree(sqlite3_mutex *p)
static void pthreadMutexEnter(sqlite3_mutex *p)
static int pthreadMutexTry(sqlite3_mutex *p)
static void pthreadMutexLeave(sqlite3_mutex *p)
SQLITE_PRIVATE sqlite3_mutex_methods const *sqlite3DefaultMutex(void)
#if SQLITE_OS_WIN
#define _OS_COMMON_H_
# error "The MEMORY_DEBUG macro is obsolete.  Use SQLITE_DEBUG instead."
#define _HWTIME_H_
#if (defined(__GNUC__) || defined(_MSC_VER)) && \
(defined(i386) || defined(__i386__) || defined(_M_IX86))
#if defined(__GNUC__)
__inline__ sqlite_uint64 sqlite3Hwtime(void)
#elif defined(_MSC_VER)
__declspec(naked) __inline sqlite_uint64 __cdecl sqlite3Hwtime(void)
#elif (defined(__GNUC__) && defined(__x86_64__))
__inline__ sqlite_uint64 sqlite3Hwtime(void)
#elif (defined(__GNUC__) && defined(__ppc__))
__inline__ sqlite_uint64 sqlite3Hwtime(void)
#error Need implementation of sqlite3Hwtime() for your platform.
SQLITE_PRIVATE   sqlite_uint64 sqlite3Hwtime(void)
static sqlite_uint64 g_start;
static sqlite_uint64 g_elapsed;
#define TIMER_START       g_start=sqlite3Hwtime()
#define TIMER_END         g_elapsed=sqlite3Hwtime()-g_start
#define TIMER_ELAPSED     g_elapsed
#define TIMER_START
#define TIMER_END
#define TIMER_ELAPSED     ((sqlite_uint64)0)
SQLITE_API extern int sqlite3_io_error_hit;
SQLITE_API extern int sqlite3_io_error_hardhit;
SQLITE_API extern int sqlite3_io_error_pending;
SQLITE_API extern int sqlite3_io_error_persist;
SQLITE_API extern int sqlite3_io_error_benign;
SQLITE_API extern int sqlite3_diskfull_pending;
SQLITE_API extern int sqlite3_diskfull;
#define SimulateIOErrorBenign(X) sqlite3_io_error_benign=(X)
#define SimulateIOError(CODE)  \
if( (sqlite3_io_error_persist && sqlite3_io_error_hit) \
|| sqlite3_io_error_pending-- == 1 )  \
static void local_ioerr()
#define SimulateDiskfullError(CODE) \
if( sqlite3_diskfull_pending )
#define SimulateIOErrorBenign(X)
#define SimulateIOError(A)
#define SimulateDiskfullError(A)
SQLITE_API extern int sqlite3_open_file_count;
#define OpenCounter(X)  sqlite3_open_file_count+=(X)
#define OpenCounter(X)
#define _OS_WIN_H_
# include <sys/cygwin.h>
#if SQLITE_OS_WIN && !defined(SQLITE_OS_WINNT)
# define SQLITE_OS_WINNT 1
#if defined(_WIN32_WCE)
# define SQLITE_OS_WINCE 1
# define SQLITE_OS_WINCE 0
#if !defined(SQLITE_OS_WINRT)
# define SQLITE_OS_WINRT 0
#if SQLITE_OS_WINCE
# define SQLITE_WIN32_VOLATILE
# define SQLITE_WIN32_VOLATILE volatile
#if SQLITE_OS_WIN && !SQLITE_OS_WINCE && !SQLITE_OS_WINRT && \
SQLITE_THREADSAFE>0 && !defined(__CYGWIN__)
# define SQLITE_OS_WIN_THREADS 1
# define SQLITE_OS_WIN_THREADS 0
struct sqlite3_mutex ;
#define SQLITE_W32_MUTEX_INITIALIZER
#define SQLITE3_MUTEX_INITIALIZER
#define SQLITE3_MUTEX_INITIALIZER
static int winMutexHeld(sqlite3_mutex *p)
static int winMutexNotheld2(sqlite3_mutex *p, DWORD tid)
static int winMutexNotheld(sqlite3_mutex *p)
static sqlite3_mutex winMutex_staticMutexes[] = ;
static int winMutex_isInit = 0;
static int winMutex_isNt = -1;
static LONG SQLITE_WIN32_VOLATILE winMutex_lock = 0;
SQLITE_API int SQLITE_STDCALL sqlite3_win32_is_nt(void);
SQLITE_API void SQLITE_STDCALL sqlite3_win32_sleep(DWORD milliseconds);
static int winMutexInit(void)
static int winMutexEnd(void)
static sqlite3_mutex *winMutexAlloc(int iType)
static void winMutexFree(sqlite3_mutex *p)
static void winMutexEnter(sqlite3_mutex *p)
static int winMutexTry(sqlite3_mutex *p)
static void winMutexLeave(sqlite3_mutex *p)
SQLITE_PRIVATE sqlite3_mutex_methods const *sqlite3DefaultMutex(void)
SQLITE_API int SQLITE_STDCALL sqlite3_release_memory(int n)
typedef struct ScratchFreeslot  ScratchFreeslot;
static SQLITE_WSD struct Mem0Global  mem0 = ;
#define mem0 GLOBAL(struct Mem0Global, mem0)
SQLITE_PRIVATE sqlite3_mutex *sqlite3MallocMutex(void)
static void softHeapLimitEnforcer(
void *NotUsed,
sqlite3_int64 NotUsed2,
int allocSize
)
static int sqlite3MemoryAlarm(
void(*xCallback)(void *pArg, sqlite3_int64 used,int N),
void *pArg,
sqlite3_int64 iThreshold
)
SQLITE_API int SQLITE_STDCALL sqlite3_memory_alarm(
void(*xCallback)(void *pArg, sqlite3_int64 used,int N),
void *pArg,
sqlite3_int64 iThreshold
)
SQLITE_API sqlite3_int64 SQLITE_STDCALL sqlite3_soft_heap_limit64(sqlite3_int64 n)
SQLITE_API void SQLITE_STDCALL sqlite3_soft_heap_limit(int n)
SQLITE_PRIVATE int sqlite3MallocInit(void)
SQLITE_PRIVATE int sqlite3HeapNearlyFull(void)
SQLITE_PRIVATE void sqlite3MallocEnd(void)
SQLITE_API sqlite3_int64 SQLITE_STDCALL sqlite3_memory_used(void)
SQLITE_API sqlite3_int64 SQLITE_STDCALL sqlite3_memory_highwater(int resetFlag)
static void sqlite3MallocAlarm(int nByte)
static int mallocWithAlarm(int n, void **pp)
SQLITE_PRIVATE void *sqlite3Malloc(u64 n)
SQLITE_API void *SQLITE_STDCALL sqlite3_malloc(int n)
SQLITE_API void *SQLITE_STDCALL sqlite3_malloc64(sqlite3_uint64 n)
#if SQLITE_THREADSAFE==0 && !defined(NDEBUG)
static int scratchAllocOut = 0;
SQLITE_PRIVATE void *sqlite3ScratchMalloc(int n)
SQLITE_PRIVATE void sqlite3ScratchFree(void *p)
static int isLookaside(sqlite3 *db, void *p)
#define isLookaside(A,B) 0
SQLITE_PRIVATE int sqlite3MallocSize(void *p)
SQLITE_PRIVATE int sqlite3DbMallocSize(sqlite3 *db, void *p)
SQLITE_API sqlite3_uint64 SQLITE_STDCALL sqlite3_msize(void *p)
SQLITE_API void SQLITE_STDCALL sqlite3_free(void *p)
static SQLITE_NOINLINE void measureAllocationSize(sqlite3 *db, void *p)
SQLITE_PRIVATE void sqlite3DbFree(sqlite3 *db, void *p)
SQLITE_PRIVATE void *sqlite3Realloc(void *pOld, u64 nBytes)
SQLITE_API void *SQLITE_STDCALL sqlite3_realloc(void *pOld, int n)
SQLITE_API void *SQLITE_STDCALL sqlite3_realloc64(void *pOld, sqlite3_uint64 n)
SQLITE_PRIVATE void *sqlite3MallocZero(u64 n)
SQLITE_PRIVATE void *sqlite3DbMallocZero(sqlite3 *db, u64 n)
SQLITE_PRIVATE void *sqlite3DbMallocRaw(sqlite3 *db, u64 n)
SQLITE_PRIVATE void *sqlite3DbRealloc(sqlite3 *db, void *p, u64 n)
SQLITE_PRIVATE void *sqlite3DbReallocOrFree(sqlite3 *db, void *p, u64 n)
SQLITE_PRIVATE char *sqlite3DbStrDup(sqlite3 *db, const char *z)
SQLITE_PRIVATE char *sqlite3DbStrNDup(sqlite3 *db, const char *z, u64 n)
SQLITE_PRIVATE void sqlite3SetString(char **pz, sqlite3 *db, const char *zFormat, ...)
static SQLITE_NOINLINE int apiOomError(sqlite3 *db)
SQLITE_PRIVATE int sqlite3ApiExit(sqlite3* db, int rc)
#define etRADIX       1
#define etFLOAT       2
#define etEXP         3
#define etGENERIC     4
#define etSIZE        5
#define etSTRING      6
#define etDYNSTRING   7
#define etPERCENT     8
#define etCHARX       9
#define etSQLESCAPE  10
#define etSQLESCAPE2 11
#define etTOKEN      12
#define etSRCLIST    13
#define etPOINTER    14
#define etSQLESCAPE3 15
#define etORDINAL    16
#define etINVALID     0
typedef unsigned char etByte;
typedef struct et_info  et_info;
#define FLAG_SIGNED  1
#define FLAG_INTERN  2
#define FLAG_STRING  4
static const char aDigits[] = "0123456789ABCDEF0123456789abcdef";
static const char aPrefix[] = "-x0\000X0";
static const et_info fmtinfo[] = ;
static char et_getdigit(LONGDOUBLE_TYPE *val, int *cnt)
static void setStrAccumError(StrAccum *p, u8 eError)
static sqlite3_int64 getIntArg(PrintfArguments *p)
static double getDoubleArg(PrintfArguments *p)
static char *getTextArg(PrintfArguments *p)
# define SQLITE_PRINT_BUF_SIZE 70
#define etBUFSIZE SQLITE_PRINT_BUF_SIZE
SQLITE_PRIVATE void sqlite3VXPrintf(
StrAccum *pAccum,
u32 bFlags,
const char *fmt,
va_list ap
)
static int sqlite3StrAccumEnlarge(StrAccum *p, int N)
SQLITE_PRIVATE void sqlite3AppendChar(StrAccum *p, int N, char c)
static void SQLITE_NOINLINE enlargeAndAppend(StrAccum *p, const char *z, int N)
SQLITE_PRIVATE void sqlite3StrAccumAppend(StrAccum *p, const char *z, int N)
SQLITE_PRIVATE void sqlite3StrAccumAppendAll(StrAccum *p, const char *z)
SQLITE_PRIVATE char *sqlite3StrAccumFinish(StrAccum *p)
SQLITE_PRIVATE void sqlite3StrAccumReset(StrAccum *p)
SQLITE_PRIVATE void sqlite3StrAccumInit(StrAccum *p, sqlite3 *db, char *zBase, int n, int mx)
SQLITE_PRIVATE char *sqlite3VMPrintf(sqlite3 *db, const char *zFormat, va_list ap)
SQLITE_PRIVATE char *sqlite3MPrintf(sqlite3 *db, const char *zFormat, ...)
SQLITE_PRIVATE char *sqlite3MAppendf(sqlite3 *db, char *zStr, const char *zFormat, ...)
SQLITE_API char *SQLITE_STDCALL sqlite3_vmprintf(const char *zFormat, va_list ap)
SQLITE_API char *SQLITE_CDECL sqlite3_mprintf(const char *zFormat, ...)
SQLITE_API char *SQLITE_STDCALL sqlite3_vsnprintf(int n, char *zBuf, const char *zFormat, va_list ap)
SQLITE_API char *SQLITE_CDECL sqlite3_snprintf(int n, char *zBuf, const char *zFormat, ...)
static void renderLogMsg(int iErrCode, const char *zFormat, va_list ap)
SQLITE_API void SQLITE_CDECL sqlite3_log(int iErrCode, const char *zFormat, ...)
#if defined(SQLITE_DEBUG) || defined(SQLITE_HAVE_OS_TRACE)
SQLITE_PRIVATE void sqlite3DebugPrintf(const char *zFormat, ...)
SQLITE_PRIVATE TreeView *sqlite3TreeViewPush(TreeView *p, u8 moreToFollow)
SQLITE_PRIVATE void sqlite3TreeViewPop(TreeView *p)
SQLITE_PRIVATE void sqlite3TreeViewLine(TreeView *p, const char *zFormat, ...)
SQLITE_PRIVATE void sqlite3TreeViewItem(TreeView *p, const char *zLabel, u8 moreToFollow)
SQLITE_PRIVATE void sqlite3XPrintf(StrAccum *p, u32 bFlags, const char *zFormat, ...)
static SQLITE_WSD struct sqlite3PrngType  sqlite3Prng;
SQLITE_API void SQLITE_STDCALL sqlite3_randomness(int N, void *pBuf)
static SQLITE_WSD struct sqlite3PrngType sqlite3SavedPrng;
SQLITE_PRIVATE void sqlite3PrngSaveState(void)
SQLITE_PRIVATE void sqlite3PrngRestoreState(void)
#if SQLITE_OS_WIN
#if SQLITE_MAX_WORKER_THREADS>0
#if SQLITE_OS_UNIX && defined(SQLITE_MUTEX_PTHREADS) && SQLITE_THREADSAFE>0
#define SQLITE_THREADS_IMPLEMENTED 1
struct SQLiteThread ;
SQLITE_PRIVATE int sqlite3ThreadCreate(
SQLiteThread **ppThread,
void *(*xTask)(void*),
void *pIn
)
SQLITE_PRIVATE int sqlite3ThreadJoin(SQLiteThread *p, void **ppOut)
#if SQLITE_OS_WIN_THREADS
#define SQLITE_THREADS_IMPLEMENTED 1
struct SQLiteThread ;
static unsigned __stdcall sqlite3ThreadProc(
void *pArg
)
SQLITE_PRIVATE int sqlite3ThreadCreate(
SQLiteThread **ppThread,
void *(*xTask)(void*),
void *pIn
)
SQLITE_PRIVATE DWORD sqlite3Win32Wait(HANDLE hObject);
SQLITE_PRIVATE int sqlite3ThreadJoin(SQLiteThread *p, void **ppOut)
struct SQLiteThread ;
SQLITE_PRIVATE int sqlite3ThreadCreate(
SQLiteThread **ppThread,
void *(*xTask)(void*),
void *pIn
)
SQLITE_PRIVATE int sqlite3ThreadJoin(SQLiteThread *p, void **ppOut)
SQLITE_PRIVATE const int sqlite3one = 1;
static const unsigned char sqlite3Utf8Trans1[] = ;
#define WRITE_UTF8(zOut, c)
#define WRITE_UTF16LE(zOut, c)
#define WRITE_UTF16BE(zOut, c)
#define READ_UTF16LE(zIn, TERM, c)
#define READ_UTF16BE(zIn, TERM, c)
#define READ_UTF8(zIn, zTerm, c)                           \
c = *(zIn++);                                            \
if( c>=0xc0 )
SQLITE_PRIVATE u32 sqlite3Utf8Read(
const unsigned char **pz
)
SQLITE_PRIVATE SQLITE_NOINLINE int sqlite3VdbeMemTranslate(Mem *pMem, u8 desiredEnc)
SQLITE_PRIVATE int sqlite3VdbeMemHandleBom(Mem *pMem)
SQLITE_PRIVATE int sqlite3Utf8CharLen(const char *zIn, int nByte)
#if defined(SQLITE_TEST) && defined(SQLITE_DEBUG)
SQLITE_PRIVATE int sqlite3Utf8To8(unsigned char *zIn)
SQLITE_PRIVATE char *sqlite3Utf16to8(sqlite3 *db, const void *z, int nByte, u8 enc)
SQLITE_PRIVATE int sqlite3Utf16ByteLen(const void *zIn, int nChar)
#if defined(SQLITE_TEST)
SQLITE_PRIVATE void sqlite3UtfSelfTest(void)
#if HAVE_ISNAN || SQLITE_HAVE_ISNAN
# include <math.h>
SQLITE_PRIVATE void sqlite3Coverage(int x)
SQLITE_PRIVATE int sqlite3FaultSim(int iTest)
SQLITE_PRIVATE int sqlite3IsNaN(double x)
SQLITE_PRIVATE int sqlite3Strlen30(const char *z)
SQLITE_PRIVATE void sqlite3Error(sqlite3 *db, int err_code)
SQLITE_PRIVATE void sqlite3ErrorWithMsg(sqlite3 *db, int err_code, const char *zFormat, ...)
SQLITE_PRIVATE void sqlite3ErrorMsg(Parse *pParse, const char *zFormat, ...)
SQLITE_PRIVATE int sqlite3Dequote(char *z)
#define UpperToLower sqlite3UpperToLower
SQLITE_API int SQLITE_STDCALL sqlite3_stricmp(const char *zLeft, const char *zRight)
SQLITE_API int SQLITE_STDCALL sqlite3_strnicmp(const char *zLeft, const char *zRight, int N)
SQLITE_PRIVATE int sqlite3AtoF(const char *z, double *pResult, int length, u8 enc)
static int compare2pow63(const char *zNum, int incr)
SQLITE_PRIVATE int sqlite3Atoi64(const char *zNum, i64 *pNum, int length, u8 enc)
SQLITE_PRIVATE int sqlite3DecOrHexToI64(const char *z, i64 *pOut)
SQLITE_PRIVATE int sqlite3GetInt32(const char *zNum, int *pValue)
SQLITE_PRIVATE int sqlite3Atoi(const char *z)
static int SQLITE_NOINLINE putVarint64(unsigned char *p, u64 v)
SQLITE_PRIVATE int sqlite3PutVarint(unsigned char *p, u64 v)
#define SLOT_2_0     0x001fc07f
#define SLOT_4_2_0   0xf01fc07f
SQLITE_PRIVATE u8 sqlite3GetVarint(const unsigned char *p, u64 *v)
SQLITE_PRIVATE u8 sqlite3GetVarint32(const unsigned char *p, u32 *v)
SQLITE_PRIVATE int sqlite3VarintLen(u64 v)
SQLITE_PRIVATE u32 sqlite3Get4byte(const u8 *p)
SQLITE_PRIVATE void sqlite3Put4byte(unsigned char *p, u32 v)
SQLITE_PRIVATE u8 sqlite3HexToInt(int h)
#if !defined(SQLITE_OMIT_BLOB_LITERAL) || defined(SQLITE_HAS_CODEC)
SQLITE_PRIVATE void *sqlite3HexToBlob(sqlite3 *db, const char *z, int n)
static void logBadConnection(const char *zType)
SQLITE_PRIVATE int sqlite3SafetyCheckOk(sqlite3 *db)
SQLITE_PRIVATE int sqlite3SafetyCheckSickOrOk(sqlite3 *db)
SQLITE_PRIVATE int sqlite3AddInt64(i64 *pA, i64 iB)
SQLITE_PRIVATE int sqlite3SubInt64(i64 *pA, i64 iB)
#define TWOPOWER32 (((i64)1)<<32)
#define TWOPOWER31 (((i64)1)<<31)
SQLITE_PRIVATE int sqlite3MulInt64(i64 *pA, i64 iB)
SQLITE_PRIVATE int sqlite3AbsInt32(int x)
SQLITE_PRIVATE void sqlite3FileSuffix3(const char *zBaseFilename, char *z)
SQLITE_PRIVATE LogEst sqlite3LogEstAdd(LogEst a, LogEst b)
SQLITE_PRIVATE LogEst sqlite3LogEst(u64 x)
SQLITE_PRIVATE LogEst sqlite3LogEstFromDouble(double x)
SQLITE_PRIVATE u64 sqlite3LogEstToInt(LogEst x)
SQLITE_PRIVATE void sqlite3HashInit(Hash *pNew)
SQLITE_PRIVATE void sqlite3HashClear(Hash *pH)
static unsigned int strHash(const char *z)
static void insertElement(
Hash *pH,
struct _ht *pEntry,
HashElem *pNew
)
static int rehash(Hash *pH, unsigned int new_size)
static HashElem *findElementWithHash(
const Hash *pH,
const char *pKey,
unsigned int *pHash
)
static void removeElementGivenHash(
Hash *pH,
HashElem* elem,
unsigned int h
)
SQLITE_PRIVATE void *sqlite3HashFind(const Hash *pH, const char *pKey)
SQLITE_PRIVATE void *sqlite3HashInsert(Hash *pH, const char *pKey, void *data)
#if !defined(SQLITE_OMIT_EXPLAIN) || defined(VDBE_PROFILE) || defined(SQLITE_DEBUG)
#if defined(SQLITE_ENABLE_EXPLAIN_COMMENTS) || defined(SQLITE_DEBUG)
# define OpHelp(X) "\0" X
# define OpHelp(X)
SQLITE_PRIVATE const char *sqlite3OpcodeName(int i)
#if SQLITE_OS_UNIX
#if !defined(SQLITE_ENABLE_LOCKING_STYLE)
#  if defined(__APPLE__)
#    define SQLITE_ENABLE_LOCKING_STYLE 1
#  else
#    define SQLITE_ENABLE_LOCKING_STYLE 0
#  endif
#if !defined(SQLITE_OMIT_WAL) || SQLITE_MAX_MMAP_SIZE>0
# include <sys/mman.h>
#if SQLITE_ENABLE_LOCKING_STYLE
# include <sys/ioctl.h>
# include <sys/file.h>
# include <sys/param.h>
#if defined(__APPLE__) && ((__MAC_OS_X_VERSION_MIN_REQUIRED > 1050) || \
(__IPHONE_OS_VERSION_MIN_REQUIRED > 2000))
#  if (!defined(TARGET_OS_EMBEDDED) || (TARGET_OS_EMBEDDED==0)) \
&& (!defined(TARGET_IPHONE_SIMULATOR) || (TARGET_IPHONE_SIMULATOR==0))
#    define HAVE_GETHOSTUUID 1
#  else
#    warning "gethostuuid() is disabled."
#  endif
#if OS_VXWORKS
# include <semaphore.h>
# include <limits.h>
#if defined(__APPLE__) || SQLITE_ENABLE_LOCKING_STYLE
# include <sys/mount.h>
# include <utime.h>
#define SQLITE_FSFLAGS_IS_MSDOS     0x1
#if SQLITE_THREADSAFE
# define SQLITE_UNIX_THREADS 1
# define SQLITE_DEFAULT_FILE_PERMISSIONS 0644
# define SQLITE_DEFAULT_PROXYDIR_PERMISSIONS 0755
#define MAX_PATHNAME 512
#define osGetpid(X) (pid_t)getpid()
#define IS_LOCK_ERROR(x)  ((x != SQLITE_OK) && (x != SQLITE_BUSY))
typedef struct unixShm unixShm;
typedef struct unixShmNode unixShmNode;
typedef struct unixInodeInfo unixInodeInfo;
typedef struct UnixUnusedFd UnixUnusedFd;
struct UnixUnusedFd ;
typedef struct unixFile unixFile;
struct unixFile ;
static pid_t randomnessPid = 0;
#define UNIXFILE_EXCL        0x01
#define UNIXFILE_RDONLY      0x02
#define UNIXFILE_PERSIST_WAL 0x04
# define UNIXFILE_DIRSYNC    0x08
# define UNIXFILE_DIRSYNC    0x00
#define UNIXFILE_PSOW        0x10
#define UNIXFILE_DELETE      0x20
#define UNIXFILE_URI         0x40
#define UNIXFILE_NOLOCK      0x80
#define UNIXFILE_WARNED    0x0100
#define UNIXFILE_BLOCK     0x0200
#define _OS_COMMON_H_
# error "The MEMORY_DEBUG macro is obsolete.  Use SQLITE_DEBUG instead."
#define _HWTIME_H_
#if (defined(__GNUC__) || defined(_MSC_VER)) && \
(defined(i386) || defined(__i386__) || defined(_M_IX86))
#if defined(__GNUC__)
__inline__ sqlite_uint64 sqlite3Hwtime(void)
#elif defined(_MSC_VER)
__declspec(naked) __inline sqlite_uint64 __cdecl sqlite3Hwtime(void)
#elif (defined(__GNUC__) && defined(__x86_64__))
__inline__ sqlite_uint64 sqlite3Hwtime(void)
#elif (defined(__GNUC__) && defined(__ppc__))
__inline__ sqlite_uint64 sqlite3Hwtime(void)
#error Need implementation of sqlite3Hwtime() for your platform.
SQLITE_PRIVATE   sqlite_uint64 sqlite3Hwtime(void)
static sqlite_uint64 g_start;
static sqlite_uint64 g_elapsed;
#define TIMER_START       g_start=sqlite3Hwtime()
#define TIMER_END         g_elapsed=sqlite3Hwtime()-g_start
#define TIMER_ELAPSED     g_elapsed
#define TIMER_START
#define TIMER_END
#define TIMER_ELAPSED     ((sqlite_uint64)0)
SQLITE_API extern int sqlite3_io_error_hit;
SQLITE_API extern int sqlite3_io_error_hardhit;
SQLITE_API extern int sqlite3_io_error_pending;
SQLITE_API extern int sqlite3_io_error_persist;
SQLITE_API extern int sqlite3_io_error_benign;
SQLITE_API extern int sqlite3_diskfull_pending;
SQLITE_API extern int sqlite3_diskfull;
#define SimulateIOErrorBenign(X) sqlite3_io_error_benign=(X)
#define SimulateIOError(CODE)  \
if( (sqlite3_io_error_persist && sqlite3_io_error_hit) \
|| sqlite3_io_error_pending-- == 1 )  \
static void local_ioerr()
#define SimulateDiskfullError(CODE) \
if( sqlite3_diskfull_pending )
#define SimulateIOErrorBenign(X)
#define SimulateIOError(A)
#define SimulateDiskfullError(A)
SQLITE_API extern int sqlite3_open_file_count;
#define OpenCounter(X)  sqlite3_open_file_count+=(X)
#define OpenCounter(X)
SQLITE_API int sqlite3_io_error_hit = 0;
SQLITE_API int sqlite3_io_error_hardhit = 0;
SQLITE_API int sqlite3_io_error_pending = 0;
SQLITE_API int sqlite3_io_error_persist = 0;
SQLITE_API int sqlite3_io_error_benign = 0;
SQLITE_API int sqlite3_diskfull_pending = 0;
SQLITE_API int sqlite3_diskfull = 0;
SQLITE_API int sqlite3_open_file_count = 0;
# define O_LARGEFILE 0
# undef O_LARGEFILE
# define O_LARGEFILE 0
# define O_NOFOLLOW 0
# define O_BINARY 0
#if SQLITE_THREADSAFE
#define threadid pthread_self()
#define threadid 0
#if !defined(HAVE_MREMAP)
# if defined(__linux__) && defined(_GNU_SOURCE)
#  define HAVE_MREMAP 1
# else
#  define HAVE_MREMAP 0
# endif
# define lseek lseek64
static int posixOpen(const char *zFile, int flags, int mode)
static int posixFchown(int fd, uid_t uid, gid_t gid)
static int openDirectory(const char*, int*);
static int unixGetpagesize(void);
static struct unix_syscall  aSyscall[] = ;
static int unixSetSystemCall(
sqlite3_vfs *pNotUsed,
const char *zName,
sqlite3_syscall_ptr pNewFunc
)
static sqlite3_syscall_ptr unixGetSystemCall(
sqlite3_vfs *pNotUsed,
const char *zName
)
static const char *unixNextSystemCall(sqlite3_vfs *p, const char *zName)
# define SQLITE_MINIMUM_FILE_DESCRIPTOR 3
static int robust_open(const char *z, int f, mode_t m)
static void unixEnterMutex(void)
static void unixLeaveMutex(void)
static int unixMutexHeld(void)
static const char *azFileLock(int eFileLock)
static int lockTrace(int fd, int op, struct flock *p)
#undef osFcntl
#define osFcntl lockTrace
static int robust_ftruncate(int h, sqlite3_int64 sz)
static int sqliteErrorFromPosixError(int posixError, int sqliteIOErr)
struct vxworksFileId ;
#if OS_VXWORKS
static struct vxworksFileId *vxworksFileList = 0;
static int vxworksSimplifyName(char *z, int n)
static struct vxworksFileId *vxworksFindFileId(const char *zAbsoluteName)
static void vxworksReleaseFileId(struct vxworksFileId *pId)
struct unixFileId ;
struct unixInodeInfo ;
static unixInodeInfo *inodeList = 0;
#define unixLogError(a,b,c)     unixLogErrorAtLine(a,b,c,__LINE__)
static int unixLogErrorAtLine(
int errcode,
const char *zFunc,
const char *zPath,
int iLine
)
static void robust_close(unixFile *pFile, int h, int lineno)
static void storeLastErrno(unixFile *pFile, int error)
static void closePendingFds(unixFile *pFile)
static void releaseInodeInfo(unixFile *pFile)
static int findInodeInfo(
unixFile *pFile,
unixInodeInfo **ppInode
)
static int fileHasMoved(unixFile *pFile)
static void verifyDbFile(unixFile *pFile)
static int unixCheckReservedLock(sqlite3_file *id, int *pResOut)
static int unixFileLock(unixFile *pFile, struct flock *pLock)
static int unixLock(sqlite3_file *id, int eFileLock)
static void setPendingFd(unixFile *pFile)
static int posixUnlock(sqlite3_file *id, int eFileLock, int handleNFSUnlock)
static int unixUnlock(sqlite3_file *id, int eFileLock)
#if SQLITE_MAX_MMAP_SIZE>0
static int unixMapfile(unixFile *pFd, i64 nByte);
static void unixUnmapfile(unixFile *pFd);
static int closeUnixFile(sqlite3_file *id)
static int unixClose(sqlite3_file *id)
static int nolockCheckReservedLock(sqlite3_file *NotUsed, int *pResOut)
static int nolockLock(sqlite3_file *NotUsed, int NotUsed2)
static int nolockUnlock(sqlite3_file *NotUsed, int NotUsed2)
static int nolockClose(sqlite3_file *id)
#define DOTLOCK_SUFFIX ".lock"
static int dotlockCheckReservedLock(sqlite3_file *id, int *pResOut)
static int dotlockLock(sqlite3_file *id, int eFileLock)
static int dotlockUnlock(sqlite3_file *id, int eFileLock)
static int dotlockClose(sqlite3_file *id)
#if SQLITE_ENABLE_LOCKING_STYLE
static int robust_flock(int fd, int op)
# define robust_flock(a,b) flock(a,b)
static int flockCheckReservedLock(sqlite3_file *id, int *pResOut)
static int flockLock(sqlite3_file *id, int eFileLock)
static int flockUnlock(sqlite3_file *id, int eFileLock)
static int flockClose(sqlite3_file *id)
#if OS_VXWORKS
static int semXCheckReservedLock(sqlite3_file *id, int *pResOut)
static int semXLock(sqlite3_file *id, int eFileLock)
static int semXUnlock(sqlite3_file *id, int eFileLock)
static int semXClose(sqlite3_file *id)
#if defined(__APPLE__) && SQLITE_ENABLE_LOCKING_STYLE
typedef struct afpLockingContext afpLockingContext;
struct afpLockingContext ;
struct ByteRangeLockPB2
;
#define afpfsByteRangeLock2FSCTL        _IOWR('z', 23, struct ByteRangeLockPB2)
static int afpSetLock(
const char *path,
unixFile *pFile,
unsigned long long offset,
unsigned long long length,
int setLockFlag
)
static int afpCheckReservedLock(sqlite3_file *id, int *pResOut)
static int afpLock(sqlite3_file *id, int eFileLock)
static int afpUnlock(sqlite3_file *id, int eFileLock)
static int afpClose(sqlite3_file *id)
#if defined(__APPLE__) && SQLITE_ENABLE_LOCKING_STYLE
static int nfsUnlock(sqlite3_file *id, int eFileLock)
static int seekAndRead(unixFile *id, sqlite3_int64 offset, void *pBuf, int cnt)
static int unixRead(
sqlite3_file *id,
void *pBuf,
int amt,
sqlite3_int64 offset
)
static int seekAndWriteFd(
int fd,
i64 iOff,
const void *pBuf,
int nBuf,
int *piErrno
)
static int seekAndWrite(unixFile *id, i64 offset, const void *pBuf, int cnt)
static int unixWrite(
sqlite3_file *id,
const void *pBuf,
int amt,
sqlite3_int64 offset
)
SQLITE_API int sqlite3_sync_count = 0;
SQLITE_API int sqlite3_fullsync_count = 0;
#if !defined(fdatasync) && !HAVE_FDATASYNC
# define fdatasync fsync
# define HAVE_FULLFSYNC 1
# define HAVE_FULLFSYNC 0
static int full_fsync(int fd, int fullSync, int dataOnly)
static int openDirectory(const char *zFilename, int *pFd)
static int unixSync(sqlite3_file *id, int flags)
static int unixTruncate(sqlite3_file *id, i64 nByte)
static int unixFileSize(sqlite3_file *id, i64 *pSize)
#if SQLITE_ENABLE_LOCKING_STYLE && defined(__APPLE__)
static int proxyFileControl(sqlite3_file*,int,void*);
static int fcntlSizeHint(unixFile *pFile, i64 nByte)
static void unixModeBit(unixFile *pFile, unsigned char mask, int *pArg)
static int unixGetTempname(int nBuf, char *zBuf);
static int unixFileControl(sqlite3_file *id, int op, void *pArg){
unixFile *pFile = (unixFile*)id;
switch( op )
static int unixSectorSize(sqlite3_file *NotUsed)
static int unixSectorSize(sqlite3_file *id)
static int unixDeviceCharacteristics(sqlite3_file *id)
#if !defined(SQLITE_OMIT_WAL) || SQLITE_MAX_MMAP_SIZE>0
static int unixGetpagesize(void)
struct unixShmNode ;
struct unixShm ;
#define UNIX_SHM_BASE   ((22+SQLITE_SHM_NLOCK)*4)
#define UNIX_SHM_DMS    (UNIX_SHM_BASE+SQLITE_SHM_NLOCK)
static int unixShmSystemLock(
unixFile *pFile,
int lockType,
int ofst,
int n
)
static int unixShmRegionPerMap(void)
static void unixShmPurge(unixFile *pFd)
static int unixOpenSharedMemory(unixFile *pDbFd)
static int unixShmMap(
sqlite3_file *fd,
int iRegion,
int szRegion,
int bExtend,
void volatile **pp
)
static int unixShmLock(
sqlite3_file *fd,
int ofst,
int n,
int flags
)
static void unixShmBarrier(
sqlite3_file *fd
)
static int unixShmUnmap(
sqlite3_file *fd,
int deleteFlag
)
# define unixShmMap     0
# define unixShmLock    0
# define unixShmBarrier 0
# define unixShmUnmap   0
#if SQLITE_MAX_MMAP_SIZE>0
static void unixUnmapfile(unixFile *pFd)
static void unixRemapfile(
unixFile *pFd,
i64 nNew
)
static int unixMapfile(unixFile *pFd, i64 nByte)
static int unixFetch(sqlite3_file *fd, i64 iOff, int nAmt, void **pp)
static int unixUnfetch(sqlite3_file *fd, i64 iOff, void *p)
#define IOMETHODS(FINDER,METHOD,VERSION,CLOSE,LOCK,UNLOCK,CKLOCK,SHMMAP)     \
static const sqlite3_io_methods METHOD = ;                                                                           \
static const sqlite3_io_methods *FINDER##Impl(const char *z, unixFile *p)                                                                            \
static const sqlite3_io_methods *(*const FINDER)(const char*,unixFile *p)    \
= FINDER##Impl;
IOMETHODS(
posixIoFinder,
posixIoMethods,
3,
unixClose,
unixLock,
unixUnlock,
unixCheckReservedLock,
unixShmMap
)
IOMETHODS(
nolockIoFinder,
nolockIoMethods,
3,
nolockClose,
nolockLock,
nolockUnlock,
nolockCheckReservedLock,
0
)
IOMETHODS(
dotlockIoFinder,
dotlockIoMethods,
1,
dotlockClose,
dotlockLock,
dotlockUnlock,
dotlockCheckReservedLock,
0
)
#if SQLITE_ENABLE_LOCKING_STYLE
IOMETHODS(
flockIoFinder,
flockIoMethods,
1,
flockClose,
flockLock,
flockUnlock,
flockCheckReservedLock,
0
)
#if OS_VXWORKS
IOMETHODS(
semIoFinder,
semIoMethods,
1,
semXClose,
semXLock,
semXUnlock,
semXCheckReservedLock,
0
)
#if defined(__APPLE__) && SQLITE_ENABLE_LOCKING_STYLE
IOMETHODS(
afpIoFinder,
afpIoMethods,
1,
afpClose,
afpLock,
afpUnlock,
afpCheckReservedLock,
0
)
#if defined(__APPLE__) && SQLITE_ENABLE_LOCKING_STYLE
static int proxyClose(sqlite3_file*);
static int proxyLock(sqlite3_file*, int);
static int proxyUnlock(sqlite3_file*, int);
static int proxyCheckReservedLock(sqlite3_file*, int*);
IOMETHODS(
proxyIoFinder,
proxyIoMethods,
1,
proxyClose,
proxyLock,
proxyUnlock,
proxyCheckReservedLock,
0
)
#if defined(__APPLE__) && SQLITE_ENABLE_LOCKING_STYLE
IOMETHODS(
nfsIoFinder,
nfsIoMethods,
1,
unixClose,
unixLock,
nfsUnlock,
unixCheckReservedLock,
0
)
#if defined(__APPLE__) && SQLITE_ENABLE_LOCKING_STYLE
static const sqlite3_io_methods *autolockIoFinderImpl(
const char *filePath,
unixFile *pNew
)
static const sqlite3_io_methods
*(*const autolockIoFinder)(const char*,unixFile*) = autolockIoFinderImpl;
#if OS_VXWORKS
static const sqlite3_io_methods *vxworksIoFinderImpl(
const char *filePath,
unixFile *pNew
)
static const sqlite3_io_methods
*(*const vxworksIoFinder)(const char*,unixFile*) = vxworksIoFinderImpl;
typedef const sqlite3_io_methods *(*finder_type)(const char*,unixFile*);
static int fillInUnixFile(
sqlite3_vfs *pVfs,
int h,
sqlite3_file *pId,
const char *zFilename,
int ctrlFlags
)
static const char *unixTempFileDir(void)
static int unixGetTempname(int nBuf, char *zBuf)
#if SQLITE_ENABLE_LOCKING_STYLE && defined(__APPLE__)
static int proxyTransformUnixFile(unixFile*, const char*);
static UnixUnusedFd *findReusableFd(const char *zPath, int flags)
static int findCreateFileMode(
const char *zPath,
int flags,
mode_t *pMode,
uid_t *pUid,
gid_t *pGid
)
static int unixOpen(
sqlite3_vfs *pVfs,
const char *zPath,
sqlite3_file *pFile,
int flags,
int *pOutFlags
)
static int unixDelete(
sqlite3_vfs *NotUsed,
const char *zPath,
int dirSync
)
static int unixAccess(
sqlite3_vfs *NotUsed,
const char *zPath,
int flags,
int *pResOut
)
static int unixFullPathname(
sqlite3_vfs *pVfs,
const char *zPath,
int nOut,
char *zOut
)
static void *unixDlOpen(sqlite3_vfs *NotUsed, const char *zFilename)
static void unixDlError(sqlite3_vfs *NotUsed, int nBuf, char *zBufOut)
static void (*unixDlSym(sqlite3_vfs *NotUsed, void *p, const char*zSym))(void)
static void unixDlClose(sqlite3_vfs *NotUsed, void *pHandle)
#define unixDlOpen  0
#define unixDlError 0
#define unixDlSym   0
#define unixDlClose 0
static int unixRandomness(sqlite3_vfs *NotUsed, int nBuf, char *zBuf)
static int unixSleep(sqlite3_vfs *NotUsed, int microseconds)
SQLITE_API int sqlite3_current_time = 0;
static int unixCurrentTimeInt64(sqlite3_vfs *NotUsed, sqlite3_int64 *piNow)
static int unixCurrentTime(sqlite3_vfs *NotUsed, double *prNow)
static int unixGetLastError(sqlite3_vfs *NotUsed, int NotUsed2, char *NotUsed3)
#if defined(__APPLE__) && SQLITE_ENABLE_LOCKING_STYLE
typedef struct proxyLockingContext proxyLockingContext;
struct proxyLockingContext ;
static int proxyGetLockPath(const char *dbPath, char *lPath, size_t maxLen)
static int proxyCreateLockPath(const char *lockPath)
static int proxyCreateUnixFile(
const char *path,
unixFile **ppFile,
int islockfile
)
SQLITE_API int sqlite3_hostid_num = 0;
#define PROXY_HOSTIDLEN    16
extern int gethostuuid(uuid_t id, const struct timespec *wait);
static int proxyGetHostID(unsigned char *pHostID, int *pError)
#define PROXY_CONCHVERSION 2
#define PROXY_HEADERLEN    1
#define PROXY_PATHINDEX    (PROXY_HEADERLEN+PROXY_HOSTIDLEN)
#define PROXY_MAXCONCHLEN  (PROXY_HEADERLEN+PROXY_HOSTIDLEN+MAXPATHLEN)
static int proxyBreakConchLock(unixFile *pFile, uuid_t myHostID)
static int proxyConchLock(unixFile *pFile, uuid_t myHostID, int lockType)
static int proxyTakeConch(unixFile *pFile)
static int proxyReleaseConch(unixFile *pFile)
static int proxyCreateConchPathname(char *dbPath, char **pConchPath)
static int switchLockProxyPath(unixFile *pFile, const char *path)
static int proxyGetDbPathForUnixFile(unixFile *pFile, char *dbPath)
static int proxyTransformUnixFile(unixFile *pFile, const char *path)
static int proxyFileControl(sqlite3_file *id, int op, void *pArg)
static int proxyCheckReservedLock(sqlite3_file *id, int *pResOut)
static int proxyLock(sqlite3_file *id, int eFileLock)
static int proxyUnlock(sqlite3_file *id, int eFileLock)
static int proxyClose(sqlite3_file *id)
SQLITE_API int SQLITE_STDCALL sqlite3_os_init(void)
SQLITE_API int SQLITE_STDCALL sqlite3_os_end(void)
#if SQLITE_OS_WIN
#define _OS_COMMON_H_
# error "The MEMORY_DEBUG macro is obsolete.  Use SQLITE_DEBUG instead."
#define _HWTIME_H_
#if (defined(__GNUC__) || defined(_MSC_VER)) && \
(defined(i386) || defined(__i386__) || defined(_M_IX86))
#if defined(__GNUC__)
__inline__ sqlite_uint64 sqlite3Hwtime(void)
#elif defined(_MSC_VER)
__declspec(naked) __inline sqlite_uint64 __cdecl sqlite3Hwtime(void)
#elif (defined(__GNUC__) && defined(__x86_64__))
__inline__ sqlite_uint64 sqlite3Hwtime(void)
#elif (defined(__GNUC__) && defined(__ppc__))
__inline__ sqlite_uint64 sqlite3Hwtime(void)
#error Need implementation of sqlite3Hwtime() for your platform.
SQLITE_PRIVATE   sqlite_uint64 sqlite3Hwtime(void)
static sqlite_uint64 g_start;
static sqlite_uint64 g_elapsed;
#define TIMER_START       g_start=sqlite3Hwtime()
#define TIMER_END         g_elapsed=sqlite3Hwtime()-g_start
#define TIMER_ELAPSED     g_elapsed
#define TIMER_START
#define TIMER_END
#define TIMER_ELAPSED     ((sqlite_uint64)0)
SQLITE_API extern int sqlite3_io_error_hit;
SQLITE_API extern int sqlite3_io_error_hardhit;
SQLITE_API extern int sqlite3_io_error_pending;
SQLITE_API extern int sqlite3_io_error_persist;
SQLITE_API extern int sqlite3_io_error_benign;
SQLITE_API extern int sqlite3_diskfull_pending;
SQLITE_API extern int sqlite3_diskfull;
#define SimulateIOErrorBenign(X) sqlite3_io_error_benign=(X)
#define SimulateIOError(CODE)  \
if( (sqlite3_io_error_persist && sqlite3_io_error_hit) \
|| sqlite3_io_error_pending-- == 1 )  \
static void local_ioerr()
#define SimulateDiskfullError(CODE) \
if( sqlite3_diskfull_pending )
#define SimulateIOErrorBenign(X)
#define SimulateIOError(A)
#define SimulateDiskfullError(A)
SQLITE_API extern int sqlite3_open_file_count;
#define OpenCounter(X)  sqlite3_open_file_count+=(X)
#define OpenCounter(X)
SQLITE_API int sqlite3_io_error_hit = 0;
SQLITE_API int sqlite3_io_error_hardhit = 0;
SQLITE_API int sqlite3_io_error_pending = 0;
SQLITE_API int sqlite3_io_error_persist = 0;
SQLITE_API int sqlite3_io_error_benign = 0;
SQLITE_API int sqlite3_diskfull_pending = 0;
SQLITE_API int sqlite3_diskfull = 0;
SQLITE_API int sqlite3_open_file_count = 0;
#if !SQLITE_OS_WINNT && !defined(SQLITE_OMIT_WAL)
#  error "WAL mode requires support from the Windows NT kernel, compile\
with SQLITE_OMIT_WAL."
#if !SQLITE_OS_WINNT && SQLITE_MAX_MMAP_SIZE>0
#  error "Memory mapped files require support from the Windows NT kernel,\
compile with SQLITE_MAX_MMAP_SIZE=0."
#if !SQLITE_OS_WINCE && !SQLITE_OS_WINRT && !defined(SQLITE_WIN32_NO_ANSI)
#  define SQLITE_WIN32_HAS_ANSI
#if (SQLITE_OS_WINCE || SQLITE_OS_WINNT || SQLITE_OS_WINRT) && \
!defined(SQLITE_WIN32_NO_WIDE)
#  define SQLITE_WIN32_HAS_WIDE
#if !defined(SQLITE_WIN32_HAS_ANSI) && !defined(SQLITE_WIN32_HAS_WIDE)
#  error "At least one of SQLITE_WIN32_HAS_ANSI and SQLITE_WIN32_HAS_WIDE\
must be defined."
#  define NTDDI_WIN8                        0x06020000
#  define NTDDI_WINBLUE                     0x06030000
#  if defined(NTDDI_VERSION) && NTDDI_VERSION >= NTDDI_WINBLUE
#    define SQLITE_WIN32_GETVERSIONEX   0
#  else
#    define SQLITE_WIN32_GETVERSIONEX   1
#  endif
#  define MAX_PATH                      (260)
#  define SQLITE_WIN32_MAX_PATH_CHARS   (MAX_PATH)
#  define UNICODE_STRING_MAX_CHARS      (32767)
#  define SQLITE_WINNT_MAX_PATH_CHARS   (UNICODE_STRING_MAX_CHARS)
#  define SQLITE_WIN32_MAX_PATH_BYTES   (SQLITE_WIN32_MAX_PATH_CHARS*4)
#  define SQLITE_WINNT_MAX_PATH_BYTES   \
(sizeof(WCHAR) * SQLITE_WINNT_MAX_PATH_CHARS)
#  define SQLITE_WIN32_MAX_ERRMSG_CHARS (1024)
#  define winIsDirSep(a)                (((a) == '/') || ((a) == '\\'))
#  define UNUSED_VARIABLE_VALUE(x)      (void)(x)
#  define winGetDirSep()                '\\'
#if SQLITE_WIN32_FILEMAPPING_API && \
(!defined(SQLITE_OMIT_WAL) || SQLITE_MAX_MMAP_SIZE>0)
#if SQLITE_OS_WINRT
WINBASEAPI HANDLE WINAPI CreateFileMappingFromApp(HANDLE, \
LPSECURITY_ATTRIBUTES, ULONG, ULONG64, LPCWSTR);
WINBASEAPI LPVOID WINAPI MapViewOfFileFromApp(HANDLE, ULONG, ULONG64, SIZE_T);
#if defined(SQLITE_WIN32_HAS_ANSI)
WINBASEAPI HANDLE WINAPI CreateFileMappingA(HANDLE, LPSECURITY_ATTRIBUTES, \
DWORD, DWORD, DWORD, LPCSTR);
#if defined(SQLITE_WIN32_HAS_WIDE)
WINBASEAPI HANDLE WINAPI CreateFileMappingW(HANDLE, LPSECURITY_ATTRIBUTES, \
DWORD, DWORD, DWORD, LPCWSTR);
WINBASEAPI LPVOID WINAPI MapViewOfFile(HANDLE, DWORD, DWORD, DWORD, SIZE_T);
WINBASEAPI BOOL WINAPI FlushViewOfFile(LPCVOID, SIZE_T);
WINBASEAPI BOOL WINAPI UnmapViewOfFile(LPCVOID);
# define INVALID_FILE_ATTRIBUTES ((DWORD)-1)
# define FILE_FLAG_MASK          (0xFF3C0000)
# define FILE_ATTRIBUTE_MASK     (0x0003FFF7)
typedef struct winShm winShm;
typedef struct winShmNode winShmNode;
#if SQLITE_OS_WINCE
typedef struct winceLock  winceLock;
typedef struct winFile winFile;
struct winFile ;
#define WINFILE_RDONLY          0x02
#define WINFILE_PERSIST_WAL     0x04
#define WINFILE_PSOW            0x10
#  define SQLITE_WIN32_DBG_BUF_SIZE   ((int)(4096-sizeof(DWORD)))
#  define SQLITE_WIN32_DATA_DIRECTORY_TYPE (1)
#  define SQLITE_WIN32_TEMP_DIRECTORY_TYPE (2)
#  define SQLITE_WIN32_HEAP_CREATE    (TRUE)
#  define SQLITE_WIN32_HEAP_INIT_SIZE ((SQLITE_DEFAULT_CACHE_SIZE) * \
(SQLITE_DEFAULT_PAGE_SIZE) + 4194304)
#  define SQLITE_WIN32_HEAP_MAX_SIZE  (0)
#  define SQLITE_WIN32_HEAP_FLAGS     (0)
typedef struct winMemData winMemData;
struct winMemData ;
#define WINMEM_MAGIC1     0x42b2830b
#define WINMEM_MAGIC2     0xbd4d7cf4
static struct winMemData win_mem_data = ;
#define winMemAssertMagic1() assert( win_mem_data.magic1==WINMEM_MAGIC1 )
#define winMemAssertMagic2() assert( win_mem_data.magic2==WINMEM_MAGIC2 )
#define winMemAssertMagic()  winMemAssertMagic1(); winMemAssertMagic2();
#define winMemAssertMagic()
#define winMemGetDataPtr()  &win_mem_data
#define winMemGetHeap()     win_mem_data.hHeap
#define winMemGetOwned()    win_mem_data.bOwned
static void *winMemMalloc(int nBytes);
static void winMemFree(void *pPrior);
static void *winMemRealloc(void *pPrior, int nBytes);
static int winMemSize(void *p);
static int winMemRoundup(int n);
static int winMemInit(void *pAppData);
static void winMemShutdown(void *pAppData);
SQLITE_PRIVATE const sqlite3_mem_methods *sqlite3MemGetWin32(void);
SQLITE_API LONG SQLITE_WIN32_VOLATILE sqlite3_os_type = 0;
static LONG SQLITE_WIN32_VOLATILE sqlite3_os_type = 0;
#  define SYSCALL sqlite3_syscall_ptr
#if SQLITE_OS_WINCE || SQLITE_OS_WINRT
#  define osAreFileApisANSI()       1
static struct win_syscall  aSyscall[] = ;
static int winSetSystemCall(
sqlite3_vfs *pNotUsed,
const char *zName,
sqlite3_syscall_ptr pNewFunc
)
static sqlite3_syscall_ptr winGetSystemCall(
sqlite3_vfs *pNotUsed,
const char *zName
)
static const char *winNextSystemCall(sqlite3_vfs *p, const char *zName)
SQLITE_API int SQLITE_STDCALL sqlite3_win32_compact_heap(LPUINT pnLargest)
SQLITE_API int SQLITE_STDCALL sqlite3_win32_reset_heap()
SQLITE_API void SQLITE_STDCALL sqlite3_win32_write_debug(const char *zBuf, int nBuf)
#if SQLITE_OS_WINRT
static HANDLE sleepObj = NULL;
SQLITE_API void SQLITE_STDCALL sqlite3_win32_sleep(DWORD milliseconds)
#if SQLITE_MAX_WORKER_THREADS>0 && !SQLITE_OS_WINCE && !SQLITE_OS_WINRT && \
SQLITE_THREADSAFE>0
SQLITE_PRIVATE DWORD sqlite3Win32Wait(HANDLE hObject)
#if !defined(SQLITE_WIN32_GETVERSIONEX) || !SQLITE_WIN32_GETVERSIONEX
# define osIsNT()  (1)
#elif SQLITE_OS_WINCE || SQLITE_OS_WINRT || !defined(SQLITE_WIN32_HAS_ANSI)
# define osIsNT()  (1)
#elif !defined(SQLITE_WIN32_HAS_WIDE)
# define osIsNT()  (0)
# define osIsNT()  ((sqlite3_os_type==2) || sqlite3_win32_is_nt())
SQLITE_API int SQLITE_STDCALL sqlite3_win32_is_nt(void)
static void *winMemMalloc(int nBytes)
static void winMemFree(void *pPrior)
static void *winMemRealloc(void *pPrior, int nBytes)
static int winMemSize(void *p)
static int winMemRoundup(int n)
static int winMemInit(void *pAppData)
static void winMemShutdown(void *pAppData)
SQLITE_PRIVATE const sqlite3_mem_methods *sqlite3MemGetWin32(void)
SQLITE_PRIVATE void sqlite3MemSetDefault(void)
static LPWSTR winUtf8ToUnicode(const char *zFilename)
static char *winUnicodeToUtf8(LPCWSTR zWideFilename)
static LPWSTR winMbcsToUnicode(const char *zFilename)
static char *winUnicodeToMbcs(LPCWSTR zWideFilename)
SQLITE_API char *SQLITE_STDCALL sqlite3_win32_mbcs_to_utf8(const char *zFilename)
SQLITE_API char *SQLITE_STDCALL sqlite3_win32_utf8_to_mbcs(const char *zFilename)
SQLITE_API int SQLITE_STDCALL sqlite3_win32_set_directory(DWORD type, LPCWSTR zValue)
static int winGetLastErrorMsg(DWORD lastErrno, int nBuf, char *zBuf)
#define winLogError(a,b,c,d)   winLogErrorAtLine(a,b,c,d,__LINE__)
static int winLogErrorAtLine(
int errcode,
DWORD lastErrno,
const char *zFunc,
const char *zPath,
int iLine
)
# define SQLITE_WIN32_IOERR_RETRY 10
# define SQLITE_WIN32_IOERR_RETRY_DELAY 25
static int winIoerrRetry = SQLITE_WIN32_IOERR_RETRY;
static int winIoerrRetryDelay = SQLITE_WIN32_IOERR_RETRY_DELAY;
#if !defined(winIoerrCanRetry1)
#define winIoerrCanRetry1(a) (((a)==ERROR_ACCESS_DENIED)        || \
((a)==ERROR_SHARING_VIOLATION)    || \
((a)==ERROR_LOCK_VIOLATION)       || \
((a)==ERROR_DEV_NOT_EXIST)        || \
((a)==ERROR_NETNAME_DELETED)      || \
((a)==ERROR_SEM_TIMEOUT)          || \
((a)==ERROR_NETWORK_UNREACHABLE))
static int winRetryIoerr(int *pnRetry, DWORD *pError)
static void winLogIoerr(int nRetry, int lineno)
#if SQLITE_OS_WINCE
#if !defined(SQLITE_MSVC_LOCALTIME_API) || !SQLITE_MSVC_LOCALTIME_API
struct tm *__cdecl localtime(const time_t *t)
#define HANDLE_TO_WINFILE(a) (winFile*)&((char*)a)[-(int)offsetof(winFile,h)]
static void winceMutexAcquire(HANDLE h)
#define winceMutexRelease(h) ReleaseMutex(h)
static int winceCreateLock(const char *zFilename, winFile *pFile)
static void winceDestroyLock(winFile *pFile)
static BOOL winceLockFile(
LPHANDLE phFile,
DWORD dwFileOffsetLow,
DWORD dwFileOffsetHigh,
DWORD nNumberOfBytesToLockLow,
DWORD nNumberOfBytesToLockHigh
)
static BOOL winceUnlockFile(
LPHANDLE phFile,
DWORD dwFileOffsetLow,
DWORD dwFileOffsetHigh,
DWORD nNumberOfBytesToUnlockLow,
DWORD nNumberOfBytesToUnlockHigh
)
static BOOL winLockFile(
LPHANDLE phFile,
DWORD flags,
DWORD offsetLow,
DWORD offsetHigh,
DWORD numBytesLow,
DWORD numBytesHigh
)
static BOOL winUnlockFile(
LPHANDLE phFile,
DWORD offsetLow,
DWORD offsetHigh,
DWORD numBytesLow,
DWORD numBytesHigh
)
# define INVALID_SET_FILE_POINTER ((DWORD)-1)
static int winSeekFile(winFile *pFile, sqlite3_int64 iOffset)
#if SQLITE_MAX_MMAP_SIZE>0
static int winMapfile(winFile*, sqlite3_int64);
static int winUnmapfile(winFile*);
#define MX_CLOSE_ATTEMPT 3
static int winClose(sqlite3_file *id)
static int winRead(
sqlite3_file *id,
void *pBuf,
int amt,
sqlite3_int64 offset
){
#if !SQLITE_OS_WINCE && !defined(SQLITE_WIN32_NO_OVERLAPPED)
OVERLAPPED overlapped;
winFile *pFile = (winFile*)id;
DWORD nRead;
int nRetry = 0;
assert( id!=0 );
assert( amt>0 );
assert( offset>=0 );
SimulateIOError(return SQLITE_IOERR_READ);
OSTRACE(("READ pid=%lu, pFile=%p, file=%p, buffer=%p, amount=%d, "
"offset=%lld, lock=%d\n", osGetCurrentProcessId(), pFile,
pFile->h, pBuf, amt, offset, pFile->locktype));
#if SQLITE_MAX_MMAP_SIZE>0
if( offset<pFile->mmapSize )
#if SQLITE_OS_WINCE || defined(SQLITE_WIN32_NO_OVERLAPPED)
if( winSeekFile(pFile, offset) )
while( !osReadFile(pFile->h, pBuf, amt, &nRead, 0) )
static int winWrite(
sqlite3_file *id,
const void *pBuf,
int amt,
sqlite3_int64 offset
){
int rc = 0;
winFile *pFile = (winFile*)id;
int nRetry = 0;
assert( amt>0 );
assert( pFile );
SimulateIOError(return SQLITE_IOERR_WRITE);
SimulateDiskfullError(return SQLITE_FULL);
OSTRACE(("WRITE pid=%lu, pFile=%p, file=%p, buffer=%p, amount=%d, "
"offset=%lld, lock=%d\n", osGetCurrentProcessId(), pFile,
pFile->h, pBuf, amt, offset, pFile->locktype));
#if SQLITE_MAX_MMAP_SIZE>0
if( offset<pFile->mmapSize )
#if SQLITE_OS_WINCE || defined(SQLITE_WIN32_NO_OVERLAPPED)
rc = winSeekFile(pFile, offset);
if( rc==0 ){
static int winTruncate(sqlite3_file *id, sqlite3_int64 nByte)
SQLITE_API int sqlite3_sync_count = 0;
SQLITE_API int sqlite3_fullsync_count = 0;
static int winSync(sqlite3_file *id, int flags)
static int winFileSize(sqlite3_file *id, sqlite3_int64 *pSize)
# define LOCKFILE_FAIL_IMMEDIATELY 1
# define LOCKFILE_EXCLUSIVE_LOCK 2
# define SQLITE_LOCKFILE_FLAGS   (LOCKFILE_FAIL_IMMEDIATELY | \
LOCKFILE_EXCLUSIVE_LOCK)
# define SQLITE_LOCKFILEEX_FLAGS (LOCKFILE_FAIL_IMMEDIATELY)
static int winGetReadLock(winFile *pFile)
static int winUnlockReadLock(winFile *pFile)
static int winLock(sqlite3_file *id, int locktype)
static int winCheckReservedLock(sqlite3_file *id, int *pResOut)
static int winUnlock(sqlite3_file *id, int locktype)
static void winModeBit(winFile *pFile, unsigned char mask, int *pArg)
static int winGetTempname(sqlite3_vfs *, char **);
static int winIsDir(const void *);
static BOOL winIsDriveLetterAndColon(const char *);
static int winFileControl(sqlite3_file *id, int op, void *pArg)
static int winSectorSize(sqlite3_file *id)
static int winDeviceCharacteristics(sqlite3_file *id)
static SYSTEM_INFO winSysInfo;
static void winShmEnterMutex(void)
static void winShmLeaveMutex(void)
static int winShmMutexHeld(void)
struct winShmNode ;
static winShmNode *winShmNodeList = 0;
struct winShm ;
#define WIN_SHM_BASE   ((22+SQLITE_SHM_NLOCK)*4)
#define WIN_SHM_DMS    (WIN_SHM_BASE+SQLITE_SHM_NLOCK)
#define _SHM_UNLCK  1
#define _SHM_RDLCK  2
#define _SHM_WRLCK  3
static int winShmSystemLock(
winShmNode *pFile,
int lockType,
int ofst,
int nByte
)
static int winOpen(sqlite3_vfs*,const char*,sqlite3_file*,int,int*);
static int winDelete(sqlite3_vfs *,const char*,int);
static void winShmPurge(sqlite3_vfs *pVfs, int deleteFlag)
static int winOpenSharedMemory(winFile *pDbFd)
static int winShmUnmap(
sqlite3_file *fd,
int deleteFlag
)
static int winShmLock(
sqlite3_file *fd,
int ofst,
int n,
int flags
)
static void winShmBarrier(
sqlite3_file *fd
){
UNUSED_PARAMETER(fd);
static int winShmMap(
sqlite3_file *fd,
int iRegion,
int szRegion,
int isWrite,
void volatile **pp
)
# define winShmMap     0
# define winShmLock    0
# define winShmBarrier 0
# define winShmUnmap   0
#if SQLITE_MAX_MMAP_SIZE>0
static int winUnmapfile(winFile *pFile)
static int winMapfile(winFile *pFd, sqlite3_int64 nByte)
static int winFetch(sqlite3_file *fd, i64 iOff, int nAmt, void **pp)
static int winUnfetch(sqlite3_file *fd, i64 iOff, void *p)
static const sqlite3_io_methods winIoMethod = ;
#if defined(__CYGWIN__)
static char *winConvertToUtf8Filename(const void *zFilename)
static void *winConvertFromUtf8Filename(const char *zFilename)
static int winMakeEndInDirSep(int nBuf, char *zBuf)
static int winGetTempname(sqlite3_vfs *pVfs, char **pzBuf)
static int winIsDir(const void *zConverted)
static int winOpen(
sqlite3_vfs *pVfs,
const char *zName,
sqlite3_file *id,
int flags,
int *pOutFlags
)
static int winDelete(
sqlite3_vfs *pVfs,
const char *zFilename,
int syncDir
)
static int winAccess(
sqlite3_vfs *pVfs,
const char *zFilename,
int flags,
int *pResOut
)
static BOOL winIsDriveLetterAndColon(
const char *zPathname
)
static BOOL winIsVerbatimPathname(
const char *zPathname
)
static int winFullPathname(
sqlite3_vfs *pVfs,
const char *zRelative,
int nFull,
char *zFull
)
static void *winDlOpen(sqlite3_vfs *pVfs, const char *zFilename)
static void winDlError(sqlite3_vfs *pVfs, int nBuf, char *zBufOut)
static void (*winDlSym(sqlite3_vfs *pVfs,void *pH,const char *zSym))(void)
static void winDlClose(sqlite3_vfs *pVfs, void *pHandle)
#define winDlOpen  0
#define winDlError 0
#define winDlSym   0
#define winDlClose 0
static int winRandomness(sqlite3_vfs *pVfs, int nBuf, char *zBuf)
static int winSleep(sqlite3_vfs *pVfs, int microsec)
SQLITE_API int sqlite3_current_time = 0;
static int winCurrentTimeInt64(sqlite3_vfs *pVfs, sqlite3_int64 *piNow)
static int winCurrentTime(sqlite3_vfs *pVfs, double *prNow)
static int winGetLastError(sqlite3_vfs *pVfs, int nBuf, char *zBuf)
SQLITE_API int SQLITE_STDCALL sqlite3_os_init(void)
SQLITE_API int SQLITE_STDCALL sqlite3_os_end(void)
#define BITVEC_SZ        512
#define BITVEC_USIZE     (((BITVEC_SZ-(3*sizeof(u32)))/sizeof(Bitvec*))*sizeof(Bitvec*))
#define BITVEC_TELEM     u8
#define BITVEC_SZELEM    8
#define BITVEC_NELEM     (BITVEC_USIZE/sizeof(BITVEC_TELEM))
#define BITVEC_NBIT      (BITVEC_NELEM*BITVEC_SZELEM)
#define BITVEC_NINT      (BITVEC_USIZE/sizeof(u32))
#define BITVEC_MXHASH    (BITVEC_NINT/2)
#define BITVEC_HASH(X)   (((X)*1)%BITVEC_NINT)
#define BITVEC_NPTR      (BITVEC_USIZE/sizeof(Bitvec *))
struct Bitvec ;
SQLITE_PRIVATE Bitvec *sqlite3BitvecCreate(u32 iSize)
SQLITE_PRIVATE int sqlite3BitvecTest(Bitvec *p, u32 i)
SQLITE_PRIVATE int sqlite3BitvecSet(Bitvec *p, u32 i)
SQLITE_PRIVATE void sqlite3BitvecClear(Bitvec *p, u32 i, void *pBuf)
SQLITE_PRIVATE void sqlite3BitvecDestroy(Bitvec *p)
SQLITE_PRIVATE u32 sqlite3BitvecSize(Bitvec *p)
#define SETBIT(V,I)      V[I>>3] |= (1<<(I&7))
#define CLEARBIT(V,I)    V[I>>3] &= ~(1<<(I&7))
#define TESTBIT(V,I)     (V[I>>3]&(1<<(I&7)))!=0
SQLITE_PRIVATE int sqlite3BitvecBuiltinTest(int sz, int *aOp)
SQLITE_PRIVATE int sqlite3PcacheInitialize(void)
SQLITE_PRIVATE void sqlite3PcacheShutdown(void)
SQLITE_PRIVATE void sqlite3PCacheBufferSetup(void *p, int sz, int n)
SQLITE_PRIVATE void sqlite3PCacheSetDefault(void)
SQLITE_PRIVATE void sqlite3PcacheStats(int *a,int *b,int *c,int *d)
SQLITE_PRIVATE int sqlite3HeaderSizePcache(void)
SQLITE_PRIVATE int sqlite3HeaderSizePcache1(void)
SQLITE_PRIVATE sqlite3_mutex *sqlite3Pcache1Mutex(void)
SQLITE_PRIVATE int sqlite3PcacheReleaseMemory(int nReq)
#define ROWSET_ALLOCATION_SIZE 1024
#define ROWSET_ENTRY_PER_CHUNK  \
((ROWSET_ALLOCATION_SIZE-8)/sizeof(struct RowSetEntry))
struct RowSetEntry ;
struct RowSetChunk ;
struct RowSet ;
#define ROWSET_SORTED  0x01
#define ROWSET_NEXT    0x02
SQLITE_PRIVATE RowSet *sqlite3RowSetInit(sqlite3 *db, void *pSpace, unsigned int N)
SQLITE_PRIVATE void sqlite3RowSetClear(RowSet *p)
static struct RowSetEntry *rowSetEntryAlloc(RowSet *p)
SQLITE_PRIVATE void sqlite3RowSetInsert(RowSet *p, i64 rowid)
static struct RowSetEntry *rowSetEntryMerge(
struct RowSetEntry *pA,
struct RowSetEntry *pB
)
static struct RowSetEntry *rowSetEntrySort(struct RowSetEntry *pIn)
static void rowSetTreeToList(
struct RowSetEntry *pIn,
struct RowSetEntry **ppFirst,
struct RowSetEntry **ppLast
)
static struct RowSetEntry *rowSetNDeepTree(
struct RowSetEntry **ppList,
int iDepth
)
static struct RowSetEntry *rowSetListToTree(struct RowSetEntry *pList)
static void rowSetToList(RowSet *p)
SQLITE_PRIVATE int sqlite3RowSetNext(RowSet *p, i64 *pRowid)
SQLITE_PRIVATE int sqlite3RowSetTest(RowSet *pRowSet, int iBatch, sqlite3_int64 iRowid)
extern int __db_check_chksum(ENV *, void *, DB_CIPHER *, u_int8_t *, void *,
size_t, int);
extern void __db_chksum(void *, u_int8_t *, size_t, u_int8_t *, u_int8_t *);
extern int __env_encrypt(DB_ENV *, u_int8_t *, u_int8_t *, size_t);
extern int __env_encrypt_adj_size(DB_ENV *, size_t, size_t *);
extern int __env_decrypt(DB_ENV *, u_int8_t *, u_int8_t *, size_t);
extern int __env_ref_get(DB_ENV *, u_int32_t *);
extern int __os_closehandle(ENV *, DB_FH *);
extern int __os_dirlist(ENV *, const char *, int, char ***, int *);
extern void __os_dirfree(ENV *, char **, int);
extern int __os_exists(ENV *, const char *, int *);
extern int __os_fileid(ENV *, const char *, int, u_int8_t *);
extern int __os_io(ENV *, int, DB_FH *, db_pgno_t, u_int32_t, u_int32_t,
u_int32_t, u_int8_t *, size_t *);
extern int __os_ioinfo(ENV *, const char *, DB_FH *, u_int32_t *, u_int32_t *,
u_int32_t *);
extern int __os_mkdir(ENV *, const char *, int);
extern int __os_open(ENV *, const char *, u_int32_t, u_int32_t, int, DB_FH **);
extern int __os_read(ENV *, DB_FH *, void *, size_t, size_t *);
extern int __os_rename(ENV *, const char *, const char *, u_int32_t);
extern int __os_seek(ENV *, DB_FH *, db_pgno_t, u_int32_t, off_t);
extern int __os_unlink(ENV *, const char *, int);
extern int __os_write(ENV *, DB_FH *, void *, size_t, size_t *);
extern void __os_yield(ENV *, u_long, u_long);
#define	BDBSQL_SINGLE_PROCESS
#define	INTKEY_BUFSIZE	(sizeof(i64) + 2)
#define	MULTI_BUFSIZE	SQLITE_MAX_PAGE_SIZE
#define	DBNAME_SIZE	20
#define	NUMMETA		16
#define	NUM_DB_PRAGMA	30
#define	CURSOR_BUFSIZE	32
#define	BT_MAX_PATH 512
#define BT_MAX_SEQ_NAME 128
# define BDBSQL_LARGE_RECORD_OPTIMIZATION 0
# define BDBSQL_LOG_REGIONMAX (300 * 1024)
# define BDBSQL_TXN_BULK_DEFAULT 0
# define BDBSQL_INCR_VACUUM_PAGES 128
# define BDBSQL_VACUUM_FILLPERCENT 85
#define	UINT32_MAX      4294967295U
#define	INT64_MAX ((((i64)0x7fffffff) << 32) | 0xffffffff)
#define	GIGABYTE 1073741824
#define	MAP_ERR(rc, ret, p)					\
((rc != SQLITE_OK) ? rc : (ret == 0) ? SQLITE_OK :	\
dberr2sqlite(ret, p))
#define	MAP_ERR_LOCKED(rc, ret, p)					\
((rc != SQLITE_OK) ? rc : (ret == 0) ? SQLITE_OK :	\
dberr2sqlitelocked(ret, p))
int add_sequence_functions(sqlite3 *db);
typedef int (*compareFunc)(void*,int,const void*,int,const void*);
typedef struct  CACHED_DB;
typedef struct  SEQ_COOKIE;
typedef struct  CACHED_META;
typedef struct  CACHED_PRAGMA;
typedef struct DELETED_TABLE DELETED_TABLE;
struct DELETED_TABLE ;
typedef struct  TableInfo;
typedef struct  LockFileInfo;
typedef enum  cleanup_mode_t;
typedef enum  storage_mode_t;
typedef enum  txn_mode_t;
typedef enum  lock_mode_t;
typedef enum  lsn_reset_t;
typedef enum  rep_site_type_t;
int btreeBeginTransInternal(Btree *p, int wrflag);
void *btreeCreateIndexKey(BtCursor *pCur);
void btreeGetErrorFile(const BtShared *pBt, char *fname);
Index *btreeGetIndex(Btree *p, int iTable);
int btreeGetPageCount(Btree *p, int **tables, u32 *pageCount, DB_TXN *txn);
int btreeGetUserTable(Btree *p, DB_TXN *pTxn, DB **pDb, int iTable);
int btreeGetTables(Btree *, int **, DB_TXN *);
int btreeLockSchema(Btree *p, lock_mode_t lockMode);
int btreeOpenEnvironment(Btree *p, int needLock);
int btreeOpenMetaTables(Btree *p, int *pCreating);
int btreeReopenEnvironment(Btree *p, int removingRep);
int btreeUpdateBtShared(Btree *p, int needLock);
int btreeIncrVacuum(Btree *p, u_int32_t *truncatedPages);
int btreeVacuum(Btree *p, char **pzErrMsg);
void btreeFreeVacuumInfo(Btree *p);
int dberr2sqlite(int, Btree *p);
int closeDB(Btree *p, DB *dbp, u_int32_t flags);
void *allocateCursorIndex(BtCursor *pCur, u_int32_t amount);
int splitIndexKey(BtCursor *pCur);
int isDupIndex(int flags, int storage, KeyInfo *keyInfo, DB *db);
int btreeScopedFileLock(Btree *p, int iswrite, int dontreopen);
int btreeScopedFileUnlock(Btree *p, int iswrite);
int btreeHasFileLock(Btree *p, int iswrite);
SQLITE_PRIVATE int sqlite3CodecAttach(sqlite3*, int, const void*, int);
int getPersistentPragma(Btree *p, const char *pragma_name, char **value,
Parse *pParse);
int setPersistentPragma(Btree *p, const char *pragma_name, const char *value,
Parse *pParse);
int encodeI64(u_int8_t *buf, i64 num);
int cleanPragmaCache(Btree *p);
int getHostPort(const char *hpstr, char **host, u_int *port);
int setRepVerboseFile(BtShared *pBt, DB_ENV *dbenv, const char *fname,
char *msg);
int unsetRepVerboseFile(BtShared *pBt, DB_ENV *dbenv, char **msg);
void *getThreadID(sqlite3 *db);
int isCurrentThread(void *tid);
#define	CLEAR_PWD(pBt)	do  while (0)
#define	OPEN_MUTEX(store)	((store == DB_STORE_NAMED) ?	\
SQLITE_MUTEX_STATIC_OPEN : SQLITE_MUTEX_STATIC_LRU)
#define	BDBSQL_META_DATA_TABLE "metadata"
int getMetaDataFileName(const char *full_name, char **filename);
struct BtShared ;
struct BtCursor ;
struct Btree ;
typedef enum  loglevel_t;
#define	CURRENT_LOG_LEVEL	LOG_RELEASE
#define	log_msg(...)
void log_msg(loglevel_t level, const char *fmt, ...);
int btreeFindOrCreateDataTable(Btree *, int *, CACHED_DB **, int);
int btreeGetKeyInfo(Btree *p, int iTable, KeyInfo **pKeyInfo);
int btreeTableNameToId(const char *subdb, int len, int *pid);
#define	pDbEnv		(pBt->dbenv)
#define	pMetaDb		(pBt->metadb)
#define	pTablesDb	(pBt->tablesdb)
#define	pFamilyTxn	(p->family_txn)
#define	pReadTxn	(p->read_txn)
#define	pMainTxn	(p->main_txn)
#define	pSavepointTxn	(p->savepoint_txn)
#define	FIX_TABLENAME(pBt, fileName, tableName) do  while (0)
#define	FIX_TABLENAME(pBt, fileName, tableName) do  while (0)
#define	GET_AUTO_COMMIT(pBt, txn) (((pBt)->transactional &&	\
(!(txn) || (txn) == pFamilyTxn)) ? DB_AUTO_COMMIT : 0)
#define	UPDATE_DURING_BACKUP(p)  \
if (p->nBackup > 0)     \
p->updateDuringBackup++;
#define	INT32_MAX		2147483647
extern int __log_current_lsn(ENV *, DB_LSN *, u_int32_t *, u_int32_t *);
static sqlite3_file nullfile;
SQLITE_PRIVATE int sqlite3PagerIsMemdb(Pager *pPager)
SQLITE_PRIVATE int sqlite3PagerJournalMode(Pager *pPager, int mode)
SQLITE_PRIVATE i64 sqlite3PagerJournalSizeLimit(Pager *pPager, i64 limit)
SQLITE_PRIVATE int sqlite3PagerLockingMode(Pager *pPager, int mode)
SQLITE_PRIVATE int sqlite3PagerPagecount(Pager *pPager, int *pCount)
SQLITE_PRIVATE sqlite3_file *sqlite3PagerFile(Pager *pPager)
SQLITE_PRIVATE const char *sqlite3PagerFilename(Pager *pPager, int nullIfMemDb)
SQLITE_PRIVATE u8 sqlite3PagerIsreadonly(Pager *pPager)
SQLITE_PRIVATE void sqlite3PagerShrink(Pager *pPager)
SQLITE_PRIVATE int sqlite3PagerGetJournalMode(Pager *pPager)
SQLITE_PRIVATE int sqlite3PagerMemUsed(Pager *pPager)
SQLITE_PRIVATE int sqlite3PagerOkToChangeJournalMode(Pager *pPager)
SQLITE_PRIVATE int sqlite3PagerSetJournalMode(Pager *pPager, int eMode)
SQLITE_PRIVATE int sqlite3PagerExclusiveLock(Pager *pPager)
SQLITE_PRIVATE int sqlite3PagerWalCallback(Pager *pPager)
SQLITE_PRIVATE int sqlite3PagerCheckpoint(Pager *pPager)
SQLITE_PRIVATE int sqlite3PagerCloseWal(Pager *pPager)
SQLITE_PRIVATE int sqlite3PagerWalSupported(Pager *pPager)
SQLITE_PRIVATE void sqlite3PagerCacheStat(Pager *pPager, int eStat, int reset, int *pnVal)
SQLITE_API int sqlite3_pager_readdb_count = 0;
SQLITE_API int sqlite3_pager_writedb_count = 0;
SQLITE_API int sqlite3_pager_writej_count = 0;
SQLITE_API int sqlite3_opentemp_count = 0;
SQLITE_PRIVATE int *sqlite3PagerStats(Pager *pPager)
SQLITE_PRIVATE int sqlite3PagerGet(Pager *pPager, Pgno pgno, DbPage **ppPage)
SQLITE_PRIVATE void *sqlite3PagerGetData(DbPage *pPg)
SQLITE_PRIVATE void sqlite3PagerUnref(DbPage *pPg)
SQLITE_API SQLITE_API void SQLITE_STDCALL sqlite3_get_pager_stats(sqlite3_int64 *totalBytesOut,
sqlite3_int64 *referencedBytesOut, sqlite3_int64 *dbBytesOut,
int *numPagersOut)
#if defined(SQLITE_DEBUG) && !defined(SQLITE_OMIT_WAL)
SQLITE_PRIVATE int sqlite3WalTrace = 0;
SQLITE_PRIVATE void sqlite3BtreeEnter(Btree *p)
SQLITE_PRIVATE void sqlite3BtreeLeave(Btree *p)
SQLITE_PRIVATE void sqlite3BtreeEnterCursor(BtCursor *pCur)
SQLITE_PRIVATE void sqlite3BtreeLeaveCursor(BtCursor *pCur)
SQLITE_PRIVATE void sqlite3BtreeEnterAll(sqlite3 *db)
SQLITE_PRIVATE void sqlite3BtreeLeaveAll(sqlite3 *db)
SQLITE_PRIVATE int sqlite3BtreeHoldsMutex(Btree *db)
SQLITE_PRIVATE int sqlite3BtreeHoldsAllMutexes(sqlite3 *db)
SQLITE_PRIVATE int sqlite3SchemaMutexHeld(sqlite3 *db, int iDb, Schema *pSchema)
SQLITE_PRIVATE int sqlite3BtreeSharable(Btree *p)
#if defined(BDBSQL_CONVERT_SQLITE) && defined(BDBSQL_FILE_PER_TABLE)
#error BDBSQL_CONVERT_SQLITE is incompatible with BDBSQL_FILE_PER_TABLE
#error BDBSQL_OMIT_SHARING has been replaced by BDBSQL_SINGLE_PROCESS
#define	sqlite3_malloc malloc
#define	sqlite3_free free
#define	sqlite3_strdup strdup
#define	sqlite3_strdup btreeStrdup
typedef struct  DB_SQL_LOCKER;
#define	DB_MIN_CACHESIZE 20
#define	US_PER_SEC 1000000
#define	ROWIDMAXSIZE 10
static int btreeCloseCursor(BtCursor *pCur, int removeList);
static int btreeConfigureDbHandle(Btree *p, int iTable, DB **dbpp, int);
static int btreeCreateDataTable(Btree *, int, CACHED_DB **);
static int btreeCreateSharedBtree(
Btree *, const char *, u_int8_t *, sqlite3 *, int, storage_mode_t);
static int btreeCreateTable(Btree *p, int *piTable, int flags);
static void btreeHandleDbError(
const DB_ENV *dbenv, const char *errpfx, const char *msg);
static int btreeDbHandleIsLocked(CACHED_DB *cached_db);
static int btreeDbHandleLock(Btree *p, CACHED_DB *cached_db);
static int btreeDbHandleUnlock(Btree *p, CACHED_DB *cached_db);
static void btreeFreeSharedBtree(BtShared *p, int clear_cache);
static int btreeGetSharedBtree(
BtShared **, u_int8_t *, sqlite3 *, storage_mode_t, int);
static int btreeHandleCacheCleanup(Btree *p, cleanup_mode_t cleanup);
static int btreeHandleCacheClear(Btree *p);
static int btreeHandleCacheLockUpdate(Btree *p, cleanup_mode_t cleanup);
static int btreeLoadBufferIntoTable(BtCursor *pCur);
static int btreeMoveto(BtCursor *pCur,
const void *pKey, i64 nKey, int bias, int *pRes);
static int btreePrepareEnvironment(Btree *p);
static int btreeRepIsClient(Btree *p);
static int btreeRepStartupFinished(Btree *p);
static int btreeRestoreCursorPosition(BtCursor *pCur, int skipMoveto);
static int btreeSetUpReplication(Btree *p, int master, u8 *replicate);
static int btreeTripAll(Btree *p, int iTable, int incrblobUpdate);
static int btreeTripWatchers(BtCursor *pBt, int incrblobUpdate);
static int indexIsCollated(KeyInfo *keyInfo);
static int supportsDuplicates(DB *db);
static int btreeFileLock(Btree *p);
static int btreeFileUnlock(Btree *p);
static int btreeReopenPrivateEnvironment(Btree *p);
static int btreeSetupLockfile(Btree *p, int *createdFile);
#define BTREE_CREATE 4
struct BtShared *g_shared_btrees = NULL;
DB_ENV *g_tmp_env;
u_int32_t g_uid_next = 0;
#define	MAX_SMALLS 100
#define	BUSY_RETRY_COUNT	100
#define	PATH_SEPARATOR	"/"
#define	pBDb	(pCur->cached_db->dbp)
#define	pDbc	(pCur->dbc)
#define	pIntKey	((pCur->flags & BTREE_INTKEY) != 0)
#define	pIsBuffer	(pCur->pBtree->pBt->resultsBuffer)
#define	GET_TABLENAME(b, sz, i, prefix)	do  while (0)
#define	GET_DURABLE(pBt)					\
((pBt)->dbStorage == DB_STORE_NAMED &&			\
((pBt)->flags & BTREE_OMIT_JOURNAL) == 0)
#define	IS_ENV_READONLY(pBt)					\
(pBt->readonly ? 1 : 0)
#define	GET_ENV_READONLY(pBt)					\
(IS_ENV_READONLY(pBt) ? DB_RDONLY : 0)
#define	IS_BTREE_READONLY(p)					\
((p->readonly || IS_ENV_READONLY(p->pBt)) ? 1 : 0)
#define	RMW(pCur)						\
(pCur->wrFlag && pCur->pBtree->pBt->dbStorage == DB_STORE_NAMED ?	\
DB_RMW : 0)
#define	RMW(pCur) 0
#define	GET_BTREE_ISOLATION(p)	0
#define	GET_BTREE_ISOLATION(p) (!p->pBt->transactional ? 0 :	\
((p->pBt->blobs_enabled) ? DB_READ_COMMITTED :		\
(((p->db->flags & SQLITE_ReadUncommitted) ?		\
DB_READ_UNCOMMITTED : DB_READ_COMMITTED) |		\
((p->pBt->read_txn_flags & DB_TXN_SNAPSHOT) ?		\
DB_TXN_SNAPSHOT : 0))))
#define	HANDLE_INCRBLOB_DEADLOCK(ret, pCur)			\
if (ret == DB_LOCK_DEADLOCK && pCur->isIncrblobHandle)
#define	GET_META_TXN(p)					\
(p->txn_excl ? pSavepointTxn :			\
(pReadTxn ? pReadTxn : pFamilyTxn))
#define	GET_META_FLAGS(p)				\
((p->txn_excl ? DB_RMW : 0) |			\
(GET_BTREE_ISOLATION(p) & ~DB_TXN_SNAPSHOT))
int dberr2sqlite(int err, Btree *p)
int closeDB(Btree *p, DB *dbp, u_int32_t flags)
#define ERR_FILE_NAME "sql-errors.txt"
void btreeGetErrorFile(const BtShared *pBt, char *fname)
static void btreeHandleDbError(
const DB_ENV *dbenv,
const char *errpfx,
const char *msg
)
static int dberr2sqlitelocked(int err, Btree *p)
void log_msg(loglevel_t level, const char *fmt, ...)
int getMetaDataFileName(const char *full_name, char **filename)
static void *btreeMalloc(size_t size)
static void *btreeRealloc(void * buff, size_t size)
static char *btreeStrdup(const char *sq)
static void btreeEventNotification(
DB_ENV *dbenv,
u_int32_t event,
void *event_info
)
static int btreeCompareIntKey(DB *dbp,
const DBT *dbt1, const DBT *dbt2, size_t *locp)
static int btreeCompareDup(DB *dbp,
const DBT *dbt1, const DBT *dbt2, size_t *locp)
static int btreeConvertSqlite(BtShared *pBt, DB_ENV *tmp_env)
int btreeOpenMetaTables(Btree *p, int *pCreating)
int btreeTableNameToId(const char *subdb, int len, int *pid)
static int btreePreloadHandles(Btree *p)
static void btreeFreeSharedBtree(BtShared *p, int clear_cache)
static int btreeCheckEnvPrepare(Btree *p)
static int btreeCheckEnvOpen(Btree *p, int createdDir, u8 replicate)
static int btreeSetUpReplication(Btree *p, int master, u8 *replicate)
static int btreeRepIsClient(Btree *p)
static int btreeRepStartupFinished(Btree *p)
static int btreePrepareEnvironment(Btree *p)
int btreeUpdateBtShared(Btree *p, int needLock)
int btreeReopenEnvironment(Btree *p, int removingRep)
int btreeOpenEnvironment(Btree *p, int needLock)
static int btreeGetSharedBtree(
BtShared **ppBt,
u_int8_t *fileid,
sqlite3 *db,
storage_mode_t store,
int vfsFlags)
static int btreeCreateSharedBtree(
Btree *p,
const char *zFilename,
u_int8_t *fileid,
sqlite3 *db,
int flags,
storage_mode_t store)
SQLITE_PRIVATE int sqlite3BtreeOpen(
sqlite3_vfs *pVfs,
const char *zFilename,
sqlite3 *db,
Btree **ppBtree,
int flags,
int vfsFlags)
static int btreeCloseAllCursors(Btree *p, DB_TXN *txn)
SQLITE_PRIVATE int sqlite3BtreeClose(Btree *p)
SQLITE_PRIVATE int sqlite3BtreeSetCacheSize(Btree *p, int mxPage)
SQLITE_PRIVATE int sqlite3BtreeSetMmapLimit(Btree *p, sqlite3_int64 szMmap)
SQLITE_PRIVATE int sqlite3BtreeSetPagerFlags(
Btree *p,
unsigned pgFlags)
SQLITE_PRIVATE int sqlite3BtreeHandleCacheFixup(Btree *p, int schema_changed)
static int btreeHandleCacheClear(Btree *p)
static int btreeHandleCacheLockUpdate(Btree *p, cleanup_mode_t cleanup)
static int btreeHandleCacheCleanup(Btree *p, cleanup_mode_t cleanup)
int btreeBeginTransInternal(Btree *p, int wrflag)
SQLITE_PRIVATE int sqlite3BtreeBeginTrans(Btree *p, int wrflag)
SQLITE_PRIVATE int sqlite3BtreeCommitPhaseOne(Btree *p, const char *zMaster)
SQLITE_PRIVATE int sqlite3BtreeCommitPhaseTwo(Btree *p, int bCleanup)
SQLITE_PRIVATE int sqlite3BtreeCommit(Btree *p)
SQLITE_PRIVATE int sqlite3BtreeRollback(Btree *p, int tripCode, int writeOnly)
SQLITE_PRIVATE int sqlite3BtreeBeginStmt(Btree *p, int iStatement)
static int btreeCompare(
DB *dbp,
const DBT *dbt1,
const DBT *dbt2,
struct KeyInfo *keyInfo)
static int btreeCompareKeyInfo(DB *dbp,
const DBT *dbt1, const DBT *dbt2, size_t *locp)
static int btreeCompareShared(DB *dbp,
const DBT *dbt1, const DBT *dbt2, size_t *locp)
static int btreeConfigureDbHandle(Btree *p, int iTable, DB **dbpp, int skipdup)
int btreeFindOrCreateDataTable(
Btree *p,
int *piTable,
CACHED_DB **ppCachedDb,
int flags)
static int btreeCreateDataTable(
Btree *p,
int iTable,
CACHED_DB **ppCachedDb)
int isDupIndex(int flags, int storage, KeyInfo *keyInfo, DB *db)
SQLITE_PRIVATE int sqlite3BtreeCursor(
Btree *p,
int iTable,
int wrFlag,
struct KeyInfo *keyInfo,
BtCursor *pCur)
SQLITE_PRIVATE int sqlite3BtreeCursorSize(void)
SQLITE_PRIVATE void sqlite3BtreeCursorZero(BtCursor *pCur)
static int btreeCloseCursor(BtCursor *pCur, int listRemove)
SQLITE_PRIVATE int sqlite3BtreeCloseCursor(BtCursor *pCur)
int indexIsCollated(KeyInfo *keyInfo)
int supportsDuplicates(DB *db)
int splitIndexKey(BtCursor *pCur)
SQLITE_PRIVATE int sqlite3BtreeMovetoUnpacked(
BtCursor *pCur, UnpackedRecord *pUnKey, i64 nKey, int bias, int *pRes)
int btreeMoveto(BtCursor *pCur, const void *pKey, i64 nKey, int bias, int *pRes)
static int btreeTripCursor(BtCursor *pCur, int incrBlobUpdate)
static int btreeTripWatchers(BtCursor *pCur, int incrBlobUpdate)
static int btreeTripAll(Btree *p, int iTable, int incrBlobUpdate)
static int btreeRestoreCursorPosition(BtCursor *pCur, int skipMoveto)
static int btreeLoadBufferIntoTable(BtCursor *pCur)
SQLITE_PRIVATE int sqlite3BtreeKeySize(BtCursor *pCur, i64 *pSize)
SQLITE_PRIVATE int sqlite3BtreeDataSize(BtCursor *pCur, u32 *pSize)
SQLITE_PRIVATE int sqlite3BtreeKey(BtCursor *pCur, u32 offset, u32 amt, void *pBuf)
SQLITE_PRIVATE int sqlite3BtreeData(BtCursor *pCur, u32 offset, u32 amt, void *pBuf)
void *allocateCursorIndex(BtCursor *pCur, u_int32_t amount)
void *btreeCreateIndexKey(BtCursor *pCur)
SQLITE_PRIVATE const void *sqlite3BtreeKeyFetch(BtCursor *pCur, u32 *pAmt)
SQLITE_PRIVATE const void *sqlite3BtreeDataFetch(BtCursor *pCur, u32 *pAmt)
SQLITE_PRIVATE void sqlite3BtreeClearCursor(BtCursor *pCur)
static int decodeResults(BtCursor *pCur)
static int cursorGet(BtCursor *pCur, int op, int *pRes)
SQLITE_PRIVATE int sqlite3BtreeFirst(BtCursor *pCur, int *pRes)
SQLITE_PRIVATE int sqlite3BtreeLast(BtCursor *pCur, int *pRes)
SQLITE_PRIVATE int sqlite3BtreeEof(BtCursor *pCur)
SQLITE_PRIVATE int sqlite3BtreeNext(BtCursor *pCur, int *pRes)
SQLITE_PRIVATE int sqlite3BtreePrevious(BtCursor *pCur, int *pRes)
static int insertData(BtCursor *pCur, int nZero, int nData)
SQLITE_PRIVATE int sqlite3BtreeInsert(
BtCursor *pCur,
const void *pKey, i64 nKey,
const void *pData, int nData,
int nZero,
int appendBias,
int seekResult)
SQLITE_PRIVATE int sqlite3BtreeDelete(BtCursor *pCur)
static int btreeCreateTable(Btree *p, int *piTable, int flags)
SQLITE_PRIVATE int sqlite3BtreeCreateTable(Btree *p, int *piTable, int flags)
SQLITE_PRIVATE int sqlite3BtreeClearTable(Btree *p, int iTable, int *pnChange)
SQLITE_PRIVATE int sqlite3BtreeDropTable(Btree *p, int iTable, int *piMoved)
SQLITE_PRIVATE void sqlite3BtreeGetMeta(Btree *p, int idx, u32 *pMeta)
SQLITE_PRIVATE int sqlite3BtreeUpdateMeta(Btree *p, int idx, u32 iMeta)
SQLITE_PRIVATE int sqlite3BtreeCount(BtCursor *pCur, i64 *pnEntry)
SQLITE_PRIVATE char *sqlite3BtreeIntegrityCheck(
Btree *pBt,
int *aRoot,
int nRoot,
int mxErr,
int *pnErr)
SQLITE_PRIVATE const char *sqlite3BtreeGetFilename(Btree *p)
SQLITE_PRIVATE int sqlite3BtreeIsInTrans(Btree *p)
SQLITE_PRIVATE int sqlite3BtreeCheckpoint(Btree *p, int eMode, int *pnLog, int *pnCkpt)
SQLITE_PRIVATE int sqlite3BtreeCursorHasMoved(BtCursor *pCur)
SQLITE_PRIVATE int sqlite3BtreeCursorIsValid(BtCursor *pCur)
SQLITE_PRIVATE int sqlite3BtreePutData(BtCursor *pCur, u32 offset, u32 amt, void *z)
SQLITE_PRIVATE int sqlite3BtreeIsInReadTrans(Btree *p)
SQLITE_PRIVATE int sqlite3BtreeTripAllCursors(Btree*	p, int errCode, int writeOnly)
int btreeLockSchema(Btree *p, lock_mode_t lockMode)
SQLITE_PRIVATE int sqlite3BtreeLockTable(Btree *p, int iTable, u8 isWriteLock)
SQLITE_PRIVATE int sqlite3BtreeSchemaLocked(Btree *p)
SQLITE_PRIVATE int sqlite3BtreeSyncDisabled(Btree *p)
#if !defined(SQLITE_OMIT_PAGER_PRAGMAS) || !defined(SQLITE_OMIT_VACUUM)
SQLITE_PRIVATE int sqlite3BtreeSetPageSize(Btree *p, int pageSize, int nReserve, int iFix)
SQLITE_PRIVATE int sqlite3BtreeGetPageSize(Btree *p)
SQLITE_PRIVATE int sqlite3BtreeGetReserveNoMutex(Btree *p)
SQLITE_PRIVATE u32 sqlite3BtreeLastPage(Btree *p)
SQLITE_PRIVATE int sqlite3BtreeSetVersion(Btree *pBtree, int iVersion)
SQLITE_PRIVATE int sqlite3BtreeMaxPageCount(Btree *p, int mxPage)
SQLITE_PRIVATE int sqlite3BtreeSecureDelete(Btree *p, int newFlag)
SQLITE_PRIVATE const char *sqlite3BtreeGetJournalname(Btree *p)
SQLITE_PRIVATE void *sqlite3BtreeSchema(Btree *p, int nBytes, void (*xFree)(void *))
Index *btreeGetIndex(Btree *p, int iTable)
int btreeGetKeyInfo(Btree *p, int iTable, KeyInfo **pKeyInfo)
SQLITE_PRIVATE int sqlite3BtreeIncrVacuum(Btree *p)
SQLITE_PRIVATE int sqlite3BtreeIsInBackup(Btree *p)
SQLITE_PRIVATE int sqlite3BtreeGetAutoVacuum(Btree *p)
SQLITE_PRIVATE int sqlite3BtreeSetAutoVacuum(Btree *p, int autoVacuum)
SQLITE_PRIVATE sqlite3_int64 sqlite3BtreeGetCachedRowid(BtCursor *pCur)
SQLITE_PRIVATE void sqlite3BtreeSetCachedRowid(BtCursor *pCur, sqlite3_int64 iRowid)
SQLITE_PRIVATE int sqlite3BtreeSavepoint(Btree *p, int op, int iSavepoint)
SQLITE_PRIVATE Pager *sqlite3BtreePager(Btree *p)
SQLITE_API int SQLITE_STDCALL sqlite3_enable_shared_cache(int enable)
int btreeGetUserTable(Btree *p, DB_TXN *pTxn, DB **pDb, int iTable)
int btreeGetTables(Btree *p, int **iTables, DB_TXN *txn)
int btreeGetPageCount(Btree *p, int **tables, u32 *pageCount, DB_TXN *txn)
static int btreeDbHandleLock(Btree *p, CACHED_DB *cached_db)
static int btreeDbHandleUnlock(Btree *p, CACHED_DB *cached_db)
static int btreeDbHandleIsLocked(CACHED_DB *cached_db)
extern int __db_isbigendian(void);
#define	CMP_INT_1BYTE_MAX 0x7F
#define	CMP_INT_2BYTE_MAX 0x407F
#define	CMP_INT_3BYTE_MAX 0x20407F
#define	CMP_INT_4BYTE_MAX 0x1020407F
#if defined(_MSC_VER) && _MSC_VER < 1300
#define	CMP_INT_5BYTE_MAX 0x081020407Fi64
#define	CMP_INT_6BYTE_MAX 0x01081020407Fi64
#define	CMP_INT_7BYTE_MAX 0x0101081020407Fi64
#define	CMP_INT_8BYTE_MAX 0x010101081020407Fi64
#define	CMP_INT_5BYTE_MAX 0x081020407FLL
#define	CMP_INT_6BYTE_MAX 0x01081020407FLL
#define	CMP_INT_7BYTE_MAX 0x0101081020407FLL
#define	CMP_INT_8BYTE_MAX 0x010101081020407FLL
#define	CMP_INT_2BYTE_VAL 0x80
#define	CMP_INT_3BYTE_VAL 0xC0
#define	CMP_INT_4BYTE_VAL 0xE0
#define	CMP_INT_5BYTE_VAL 0xF0
#define	CMP_INT_6BYTE_VAL 0xF8
#define	CMP_INT_7BYTE_VAL 0xF9
#define	CMP_INT_8BYTE_VAL 0xFA
#define	CMP_INT_9BYTE_VAL 0xFB
#define	CMP_INT_2BYTE_MASK 0x3F
#define	CMP_INT_3BYTE_MASK 0x1F
#define	CMP_INT_4BYTE_MASK 0x0F
#define	CMP_INT_5BYTE_MASK 0x07
static const u_int8_t __dbsql_marshaled_int_size[] = ;
SQLITE_PRIVATE void sqlite3BtreeCursorHints(BtCursor *pCsr, unsigned int mask)
#undef sqlite3_malloc
#undef sqlite3_free
#undef sqlite3_strdup
static int openPrivateEnvironment(Btree *p, int startFamily)
static int btreeReopenPrivateEnvironment(Btree *p)
static int lockFile(int fd, int isread)
static int unlockFile(int fd)
static int btreeSetupLockfile(Btree *p, int *createdFile)
static int btreeReadlock(Btree *p, int dontreopen)
static int btreeWritelock(Btree *p, int dontReopen)
int btreeScopedFileLock(Btree *p, int iswrite, int dontreopen)
static int btreeFileLock(Btree *p)
int btreeScopedFileUnlock(Btree *p, int iswrite)
static int btreeFileUnlock(Btree *p)
int btreeHasFileLock(Btree *p, int iswrite)
void *getThreadID(sqlite3 *db)
int isCurrentThread(void *tid)
#elif defined(SQLITE_MUTEX_PTHREADS)
void *getThreadID(sqlite3 *db)
int isCurrentThread(void *tid)
#elif defined(SQLITE_MUTEX_W32)
void *getThreadID(sqlite3 *db)
int isCurrentThread(void *tid)
void *getThreadID(sqlite3 *db)
int isCurrentThread(void *tid)
SQLITE_PRIVATE int sqlite3BtreeClearTableOfCursor(BtCursor *pCur)
SQLITE_PRIVATE void sqlite3BtreeIncrblobCursor(BtCursor *pCur)
#define restoreCursorPosition(p) \
(p->eState >= CURSOR_REQUIRESEEK ? \
btreeRestoreCursorPosition(p, 0) : \
SQLITE_OK)
SQLITE_PRIVATE int sqlite3BtreeCursorRestore(BtCursor *pCur, int *pDifferentRow)
SQLITE_PRIVATE int sqlite3BtreeIsReadonly(Btree *p)
SQLITE_PRIVATE int sqlite3HeaderSizeBtree(void)
SQLITE_PRIVATE int sqlite3BtreeCursorHasHint(BtCursor *pCsr, unsigned int mask)
SQLITE_PRIVATE int sqlite3BtreeGetOptimalReserve(Btree *p)
static int btreeCopyPages(sqlite3_backup *p, int *pages);
static char *BACKUP_SUFFIX="-tmpBackup";
struct sqlite3_backup ;
static Btree *findBtree(sqlite3 *pErrorDb, sqlite3 *pDb, const char *zDb)
SQLITE_API sqlite3_backup *SQLITE_STDCALL sqlite3_backup_init(sqlite3* pDestDb, const char *zDestDb,
sqlite3* pSrcDb, const char *zSrcDb)
static int btreeCleanupEnv(const char *home)
int btreeDeleteEnvironment(Btree *p, const char *home, int rename)
static int backupCleanup(sqlite3_backup *p)
static void backupReset(sqlite3_backup *p)
SQLITE_API int SQLITE_STDCALL sqlite3_backup_step(sqlite3_backup *p, int nPage)
SQLITE_API int SQLITE_STDCALL sqlite3_backup_finish(sqlite3_backup *p)
SQLITE_API int SQLITE_STDCALL sqlite3_backup_remaining(sqlite3_backup *p)
SQLITE_API int SQLITE_STDCALL sqlite3_backup_pagecount(sqlite3_backup *p)
static int btreeCopyPages(sqlite3_backup *p, int *pages)
SQLITE_PRIVATE void sqlite3CodecGetKey(sqlite3*, int, void**, int*);
#define	pDbEnv		(pBt->dbenv)
SQLITE_API int SQLITE_STDCALL sqlite3_key(sqlite3 *db, const void *key, int nkey)
SQLITE_API int SQLITE_STDCALL sqlite3_key_v2(
sqlite3 *db, const char *zDbName, const void *key, int nkey)
SQLITE_API int SQLITE_STDCALL sqlite3_rekey(sqlite3 *db, const void *key, int nkey)
SQLITE_API int SQLITE_STDCALL sqlite3_rekey_v2(
sqlite3 *db, const char *zDbName, const void *key, int nkey)
SQLITE_API void SQLITE_STDCALL sqlite3_activate_see(const char *zPassPhrase)
SQLITE_PRIVATE int sqlite3CodecAttach(sqlite3 *db, int backend, const void *key, int nkey)
SQLITE_PRIVATE void sqlite3CodecGetKey(sqlite3 *db, int backend, void **keyp, int *nkeyp)
extern void returnSingleInt(Parse *, const char *, i64);
static const char *PRAGMA_FILE = "pragma";
static const char *PRAGMA_VERSION = "1.0";
static const char *ACK_POLICY_ALL = "all_sites";
static const char *ACK_POLICY_ALL_AVAILABLE = "all_available";
static const char *ACK_POLICY_NONE = "none";
static const char *ACK_POLICY_ONE = "one";
static const char *ACK_POLICY_QUORUM = "quorum";
static const char *REP_SITE_MASTER = "MASTER";
static const char *REP_SITE_CLIENT = "CLIENT";
static const char *REP_SITE_UNKNOWN = "UNKNOWN";
static const u32 HDR_SIZE = 256;
static const u32 RECORD_HDR_SIZE = 8;
static const u32 VERSION_RECORD_SIZE = 12;
static const char *pragma_names[] = ;
static const u32 DEFINED_PRAGMAS = 8;
#define	PRAGMA_LOADED(index)	(p->pBt->pragma[index].offset)
#define	CACHE_LOADED	(p->pBt->cache_loaded)
#define	RECORD_OFFSET(pragma_index) ((pragma_index * 8) + 12)
#define	RECORD_SIZE(pragma_index) ((pragma_index * 8) + 8)
#define	pBtPragma (p->pBt->pragma)
#define	dbExists (pDb->pBt->pBt->full_name != NULL && \
!__os_exists(NULL, pDb->pBt->pBt->full_name, NULL))
static int textToAckPolicy(const char *policy)
static const char *ackPolicyToText(int policy)
static const char *repSiteTypeToText(rep_site_type_t type)
static u8 envIsClosed(Parse *pParse, Btree *p, const char *pragmaName)
static const int MVCC_MULTIPIER = 2;
int bdbsqlPragmaMultiversion(Parse *pParse, Btree *p, u8 on)
static int supportsReplication(Btree *p)
static int hasDatabaseConnections(Btree *p)
int setRepVerboseFile(BtShared *pBt, DB_ENV *dbenv, const char *fname,
char *msg)
int unsetRepVerboseFile(BtShared *pBt, DB_ENV *dbenv, char **msg)
int getHostPort(const char *hpstr, char **host, u_int *port)
static int getUserPwdIsadmin(const char* upiStr, char** user, char** pwd,
int* isAdmin)
static int getUserPwd(const char* upStr, char** user, char** pwd)
static int bdbsqlPragmaStartReplication(Parse *pParse, Db *pDb)
static int bdbsqlPragmaStopReplication(Parse *pParse, Db *pDb)
int bdbsqlPragma(Parse *pParse, char *zLeft, char *zRight, int iDb)
static int getPragmaIndex(const char *pragma_name)
static const char *getPragmaName(u32 pragma_index)
static int openPragmaFile(Btree *p, sqlite3_file **file, int flags,
int lock_type)
static void removeCorruptedRecords(Btree *p, int *corrupted, int num_corrupted,
sqlite3_file *pragma_file, Parse *pParse)
static int insertPragmaIntoFile(Btree *p, u32 pragma_index,
sqlite3_file *pragma_file, int exists, Parse *pParse)
static int readPragmaFromFile(Btree *p, sqlite3_file *pragma_file,
int pragma_index, Parse *pParse)
int getPersistentPragma(Btree *p, const char *pragma_name, char **value,
Parse *pParse)
int setPersistentPragma(Btree *p, const char *pragma_name, const char *value,
Parse *pParse)
int cleanPragmaCache(Btree *p)
#define	vsnprintf _vsnprintf
#define	SEQ_HANDLE_OPEN		0x0001
#define	SEQ_HANDLE_CREATE	0x0002
#define SEQ_TXN(c)							\
(((c)->cache == 0) ? p->savepoint_txn : p->family_txn)
#define	DB_SEQ_NEXT		0x0000
#define	DB_SEQ_CURRENT		0x0001
#define	MSG_CREATE_FAIL		"Sequence create failed: "
#define	MSG_MALLOC_FAIL		"Malloc failed during sequence operation."
#define	MSG_INTMPDB_FAIL	"Sequences do not support in-memory or"	\
" temporary databases."
#define CACHE_ENTRY_VALID(_e)						\
(_e != NULL &&							\
((((SEQ_COOKIE *)_e->cookie)->cache) == 0 || _e->dbp != NULL))
static int btreeSeqCreate(
sqlite3_context *context, Btree *p, SEQ_COOKIE *cookie);
static void btreeSeqError(
sqlite3_context *context, int code, const char *msg, ...);
static int btreeSeqExists(sqlite3_context *context, Btree *p, const char *name);
static int btreeSeqGetCookie(
sqlite3_context *context, Btree *p, SEQ_COOKIE *cookie, u_int32_t flags);
static int btreeSeqGetHandle(sqlite3_context *context, Btree *p,
int mode, SEQ_COOKIE *cookie);
static void btreeSeqGetVal(
sqlite3_context *context, const char *name, int next);
static int btreeSeqOpen(
sqlite3_context *context, Btree *p, SEQ_COOKIE *cookie);
static int btreeSeqPutCookie(
sqlite3_context *context, Btree *p, SEQ_COOKIE *cookie, u_int32_t flags);
static int btreeSeqRemoveHandle(
sqlite3_context *context, Btree *p, CACHED_DB *cache_entry);
static void btreeSeqSetSeqName(SEQ_COOKIE *cookie, const char *name);
static int btreeSeqStartTransaction(
sqlite3_context *context, Btree *p, int is_write);
static void db_seq_create_func(
sqlite3_context *context, int argc, sqlite3_value **argv)
static void db_seq_drop_func(
sqlite3_context *context, int argc, sqlite3_value **argv)
static void db_seq_nextval_func(
sqlite3_context *context, int argc, sqlite3_value **argv)
static void db_seq_currval_func(
sqlite3_context *context, int argc, sqlite3_value **argv)
static void btreeSeqGetVal(
sqlite3_context *context, const char * name, int mode)
int add_sequence_functions(sqlite3 *db)
static void btreeSeqError(
sqlite3_context *context, int code, const char *fmt, ...)
static int btreeSeqGetHandle(sqlite3_context *context, Btree *p,
int mode, SEQ_COOKIE *cookie)
static int btreeSeqRemoveHandle(
sqlite3_context *context, Btree *p, CACHED_DB *cache_entry)
static int btreeSeqOpen(
sqlite3_context *context, Btree *p, SEQ_COOKIE *cookie)
static int btreeSeqCreate(
sqlite3_context *context, Btree *p, SEQ_COOKIE *cookie)
static int btreeSeqExists(sqlite3_context *context, Btree *p, const char *name)
static int btreeSeqGetCookie(
sqlite3_context *context, Btree *p, SEQ_COOKIE *cookie, u_int32_t flags)
static int btreeSeqPutCookie(
sqlite3_context *context, Btree *p, SEQ_COOKIE *cookie, u_int32_t flags)
static void btreeSeqSetSeqName(SEQ_COOKIE *cookie, const char *name)
static int btreeSeqStartTransaction(
sqlite3_context *context, Btree *p, int is_write)
SQLITE_API int bdbSqlDbStatPrint(sqlite3 *db, FILE *msgfile, char *name)
SQLITE_API int bdbSqlEnvStatPrint(sqlite3 *db, FILE *msgfile)
SQLITE_API int bdbSqlRepSumStatPrint(sqlite3 *db, FILE *msgfile)
SQLITE_PRIVATE int sqlite3VdbeCheckMemInvariants(Mem *p)
SQLITE_PRIVATE int sqlite3VdbeChangeEncoding(Mem *pMem, int desiredEnc)
SQLITE_PRIVATE SQLITE_NOINLINE int sqlite3VdbeMemGrow(Mem *pMem, int n, int bPreserve)
SQLITE_PRIVATE int sqlite3VdbeMemClearAndResize(Mem *pMem, int szNew)
SQLITE_PRIVATE int sqlite3VdbeMemMakeWriteable(Mem *pMem)
SQLITE_PRIVATE int sqlite3VdbeMemExpandBlob(Mem *pMem)
static SQLITE_NOINLINE int vdbeMemAddTerminator(Mem *pMem)
SQLITE_PRIVATE int sqlite3VdbeMemNulTerminate(Mem *pMem)
SQLITE_PRIVATE int sqlite3VdbeMemStringify(Mem *pMem, u8 enc, u8 bForce)
SQLITE_PRIVATE int sqlite3VdbeMemFinalize(Mem *pMem, FuncDef *pFunc)
static SQLITE_NOINLINE void vdbeMemClearExternAndSetNull(Mem *p)
static SQLITE_NOINLINE void vdbeMemClear(Mem *p)
SQLITE_PRIVATE void sqlite3VdbeMemRelease(Mem *p)
static i64 doubleToInt64(double r)
SQLITE_PRIVATE i64 sqlite3VdbeIntValue(Mem *pMem)
SQLITE_PRIVATE double sqlite3VdbeRealValue(Mem *pMem)
SQLITE_PRIVATE void sqlite3VdbeIntegerAffinity(Mem *pMem)
SQLITE_PRIVATE int sqlite3VdbeMemIntegerify(Mem *pMem)
SQLITE_PRIVATE int sqlite3VdbeMemRealify(Mem *pMem)
SQLITE_PRIVATE int sqlite3VdbeMemNumerify(Mem *pMem)
SQLITE_PRIVATE void sqlite3VdbeMemCast(Mem *pMem, u8 aff, u8 encoding)
SQLITE_PRIVATE void sqlite3VdbeMemInit(Mem *pMem, sqlite3 *db, u16 flags)
SQLITE_PRIVATE void sqlite3VdbeMemSetNull(Mem *pMem)
SQLITE_PRIVATE void sqlite3ValueSetNull(sqlite3_value *p)
SQLITE_PRIVATE void sqlite3VdbeMemSetZeroBlob(Mem *pMem, int n)
static SQLITE_NOINLINE void vdbeReleaseAndSetInt64(Mem *pMem, i64 val)
SQLITE_PRIVATE void sqlite3VdbeMemSetInt64(Mem *pMem, i64 val)
SQLITE_PRIVATE void sqlite3VdbeMemSetDouble(Mem *pMem, double val)
SQLITE_PRIVATE void sqlite3VdbeMemSetRowSet(Mem *pMem)
SQLITE_PRIVATE int sqlite3VdbeMemTooBig(Mem *p)
SQLITE_PRIVATE void sqlite3VdbeMemAboutToChange(Vdbe *pVdbe, Mem *pMem)
#define MEMCELLSIZE offsetof(Mem,zMalloc)
SQLITE_PRIVATE void sqlite3VdbeMemShallowCopy(Mem *pTo, const Mem *pFrom, int srcType)
SQLITE_PRIVATE int sqlite3VdbeMemCopy(Mem *pTo, const Mem *pFrom)
SQLITE_PRIVATE void sqlite3VdbeMemMove(Mem *pTo, Mem *pFrom)
SQLITE_PRIVATE int sqlite3VdbeMemSetStr(
Mem *pMem,
const char *z,
int n,
u8 enc,
void (*xDel)(void*)
)
SQLITE_PRIVATE int sqlite3VdbeMemFromBtree(
BtCursor *pCur,
u32 offset,
u32 amt,
int key,
Mem *pMem
)
static SQLITE_NOINLINE const void *valueToText(sqlite3_value* pVal, u8 enc)
SQLITE_PRIVATE const void *sqlite3ValueText(sqlite3_value* pVal, u8 enc)
SQLITE_PRIVATE sqlite3_value *sqlite3ValueNew(sqlite3 *db)
struct ValueNewStat4Ctx ;
static sqlite3_value *valueNew(sqlite3 *db, struct ValueNewStat4Ctx *p)
static int valueFromFunction(
sqlite3 *db,
Expr *p,
u8 enc,
u8 aff,
sqlite3_value **ppVal,
struct ValueNewStat4Ctx *pCtx
)
# define valueFromFunction(a,b,c,d,e,f) SQLITE_OK
static int valueFromExpr(
sqlite3 *db,
Expr *pExpr,
u8 enc,
u8 affinity,
sqlite3_value **ppVal,
struct ValueNewStat4Ctx *pCtx
)
SQLITE_PRIVATE int sqlite3ValueFromExpr(
sqlite3 *db,
Expr *pExpr,
u8 enc,
u8 affinity,
sqlite3_value **ppVal
)
static void recordFunc(
sqlite3_context *context,
int argc,
sqlite3_value **argv
)
SQLITE_PRIVATE void sqlite3AnalyzeFunctions(void)
static int stat4ValueFromExpr(
Parse *pParse,
Expr *pExpr,
u8 affinity,
struct ValueNewStat4Ctx *pAlloc,
sqlite3_value **ppVal
)
SQLITE_PRIVATE int sqlite3Stat4ProbeSetValue(
Parse *pParse,
Index *pIdx,
UnpackedRecord **ppRec,
Expr *pExpr,
u8 affinity,
int iVal,
int *pbOk
)
SQLITE_PRIVATE int sqlite3Stat4ValueFromExpr(
Parse *pParse,
Expr *pExpr,
u8 affinity,
sqlite3_value **ppVal
)
SQLITE_PRIVATE int sqlite3Stat4Column(
sqlite3 *db,
const void *pRec,
int nRec,
int iCol,
sqlite3_value **ppVal
)
SQLITE_PRIVATE void sqlite3Stat4ProbeFree(UnpackedRecord *pRec)
SQLITE_PRIVATE void sqlite3ValueSetStr(
sqlite3_value *v,
int n,
const void *z,
u8 enc,
void (*xDel)(void*)
)
SQLITE_PRIVATE void sqlite3ValueFree(sqlite3_value *v)
SQLITE_PRIVATE int sqlite3ValueBytes(sqlite3_value *pVal, u8 enc)
SQLITE_PRIVATE Vdbe *sqlite3VdbeCreate(Parse *pParse)
SQLITE_PRIVATE void sqlite3VdbeSetSql(Vdbe *p, const char *z, int n, int isPrepareV2)
SQLITE_API const char *SQLITE_STDCALL sqlite3_sql(sqlite3_stmt *pStmt)
SQLITE_PRIVATE void sqlite3VdbeSwap(Vdbe *pA, Vdbe *pB)
static int growOpArray(Vdbe *v, int nOp)
static void test_addop_breakpoint(void)
SQLITE_PRIVATE int sqlite3VdbeAddOp3(Vdbe *p, int op, int p1, int p2, int p3)
SQLITE_PRIVATE int sqlite3VdbeAddOp0(Vdbe *p, int op)
SQLITE_PRIVATE int sqlite3VdbeAddOp1(Vdbe *p, int op, int p1)
SQLITE_PRIVATE int sqlite3VdbeAddOp2(Vdbe *p, int op, int p1, int p2)
SQLITE_PRIVATE int sqlite3VdbeAddOp4(
Vdbe *p,
int op,
int p1,
int p2,
int p3,
const char *zP4,
int p4type
)
SQLITE_PRIVATE void sqlite3VdbeAddParseSchemaOp(Vdbe *p, int iDb, char *zWhere)
SQLITE_PRIVATE int sqlite3VdbeAddOp4Int(
Vdbe *p,
int op,
int p1,
int p2,
int p3,
int p4
)
SQLITE_PRIVATE int sqlite3VdbeMakeLabel(Vdbe *v)
SQLITE_PRIVATE void sqlite3VdbeResolveLabel(Vdbe *v, int x)
SQLITE_PRIVATE void sqlite3VdbeRunOnlyOnce(Vdbe *p)
typedef struct VdbeOpIter VdbeOpIter;
struct VdbeOpIter ;
static Op *opIterNext(VdbeOpIter *p)
SQLITE_PRIVATE int sqlite3VdbeAssertMayAbort(Vdbe *v, int mayAbort)
static void resolveP2Values(Vdbe *p, int *pMaxFuncArgs)
SQLITE_PRIVATE int sqlite3VdbeCurrentAddr(Vdbe *p)
SQLITE_PRIVATE VdbeOp *sqlite3VdbeTakeOpArray(Vdbe *p, int *pnOp, int *pnMaxArg)
SQLITE_PRIVATE int sqlite3VdbeAddOpList(Vdbe *p, int nOp, VdbeOpList const *aOp, int iLineno)
#if defined(SQLITE_ENABLE_STMT_SCANSTATUS)
SQLITE_PRIVATE void sqlite3VdbeScanStatus(
Vdbe *p,
int addrExplain,
int addrLoop,
int addrVisit,
LogEst nEst,
const char *zName
)
SQLITE_PRIVATE void sqlite3VdbeChangeP1(Vdbe *p, u32 addr, int val)
SQLITE_PRIVATE void sqlite3VdbeChangeP2(Vdbe *p, u32 addr, int val)
SQLITE_PRIVATE void sqlite3VdbeChangeP3(Vdbe *p, u32 addr, int val)
SQLITE_PRIVATE void sqlite3VdbeChangeP5(Vdbe *p, u8 val)
SQLITE_PRIVATE void sqlite3VdbeJumpHere(Vdbe *p, int addr)
static void freeEphemeralFunction(sqlite3 *db, FuncDef *pDef)
static void vdbeFreeOpArray(sqlite3 *, Op *, int);
static void freeP4(sqlite3 *db, int p4type, void *p4)
static void vdbeFreeOpArray(sqlite3 *db, Op *aOp, int nOp)
SQLITE_PRIVATE void sqlite3VdbeLinkSubProgram(Vdbe *pVdbe, SubProgram *p)
SQLITE_PRIVATE void sqlite3VdbeChangeToNoop(Vdbe *p, int addr)
SQLITE_PRIVATE int sqlite3VdbeDeletePriorOpcode(Vdbe *p, u8 op)
SQLITE_PRIVATE void sqlite3VdbeChangeP4(Vdbe *p, int addr, const char *zP4, int n)
SQLITE_PRIVATE void sqlite3VdbeSetP4KeyInfo(Parse *pParse, Index *pIdx)
static void vdbeVComment(Vdbe *p, const char *zFormat, va_list ap)
SQLITE_PRIVATE void sqlite3VdbeComment(Vdbe *p, const char *zFormat, ...)
SQLITE_PRIVATE void sqlite3VdbeNoopComment(Vdbe *p, const char *zFormat, ...)
SQLITE_PRIVATE void sqlite3VdbeSetLineNumber(Vdbe *v, int iLine)
SQLITE_PRIVATE VdbeOp *sqlite3VdbeGetOp(Vdbe *p, int addr)
#if defined(SQLITE_ENABLE_EXPLAIN_COMMENTS)
static int translateP(char c, const Op *pOp)
static int displayComment(
const Op *pOp,
const char *zP4,
char *zTemp,
int nTemp
)
#if !defined(SQLITE_OMIT_EXPLAIN) || !defined(NDEBUG) \
|| defined(VDBE_PROFILE) || defined(SQLITE_DEBUG)
static char *displayP4(Op *pOp, char *zTemp, int nTemp)
SQLITE_PRIVATE void sqlite3VdbeUsesBtree(Vdbe *p, int i)
#if !defined(SQLITE_OMIT_SHARED_CACHE) && SQLITE_THREADSAFE>0
SQLITE_PRIVATE void sqlite3VdbeEnter(Vdbe *p)
#if !defined(SQLITE_OMIT_SHARED_CACHE) && SQLITE_THREADSAFE>0
SQLITE_PRIVATE void sqlite3VdbeLeave(Vdbe *p)
#if defined(VDBE_PROFILE) || defined(SQLITE_DEBUG)
SQLITE_PRIVATE void sqlite3VdbePrintOp(FILE *pOut, int pc, Op *pOp)
static void releaseMemArray(Mem *p, int N)
SQLITE_PRIVATE void sqlite3VdbeFrameDelete(VdbeFrame *p)
SQLITE_PRIVATE int sqlite3VdbeList(
Vdbe *p
)
SQLITE_PRIVATE void sqlite3VdbePrintSql(Vdbe *p)
#if !defined(SQLITE_OMIT_TRACE) && defined(SQLITE_ENABLE_IOTRACE)
SQLITE_PRIVATE void sqlite3VdbeIOTraceSql(Vdbe *p)
static void *allocSpace(
void *pBuf,
int nByte,
u8 **ppFrom,
u8 *pEnd,
int *pnByte
)
SQLITE_PRIVATE void sqlite3VdbeRewind(Vdbe *p)
SQLITE_PRIVATE void sqlite3VdbeMakeReady(
Vdbe *p,
Parse *pParse
)
SQLITE_PRIVATE void sqlite3VdbeFreeCursor(Vdbe *p, VdbeCursor *pCx)
static void closeCursorsInFrame(Vdbe *p)
SQLITE_PRIVATE int sqlite3VdbeFrameRestore(VdbeFrame *pFrame)
static void closeAllCursors(Vdbe *p)
static void Cleanup(Vdbe *p)
SQLITE_PRIVATE void sqlite3VdbeSetNumCols(Vdbe *p, int nResColumn)
SQLITE_PRIVATE int sqlite3VdbeSetColName(
Vdbe *p,
int idx,
int var,
const char *zName,
void (*xDel)(void*)
)
static int vdbeCommit(sqlite3 *db, Vdbe *p)
static void checkActiveVdbeCnt(sqlite3 *db)
#define checkActiveVdbeCnt(x)
SQLITE_PRIVATE int sqlite3VdbeCloseStatement(Vdbe *p, int eOp)
SQLITE_PRIVATE int sqlite3VdbeCheckFk(Vdbe *p, int deferred)
SQLITE_PRIVATE int sqlite3VdbeHalt(Vdbe *p)
SQLITE_PRIVATE void sqlite3VdbeResetStepResult(Vdbe *p)
SQLITE_PRIVATE int sqlite3VdbeTransferError(Vdbe *p)
static void vdbeInvokeSqllog(Vdbe *v)
# define vdbeInvokeSqllog(x)
SQLITE_PRIVATE int sqlite3VdbeReset(Vdbe *p)
SQLITE_PRIVATE int sqlite3VdbeFinalize(Vdbe *p)
SQLITE_PRIVATE void sqlite3VdbeDeleteAuxData(Vdbe *pVdbe, int iOp, int mask)
SQLITE_PRIVATE void sqlite3VdbeClearObject(sqlite3 *db, Vdbe *p)
SQLITE_PRIVATE void sqlite3VdbeDelete(Vdbe *p)
static int SQLITE_NOINLINE handleDeferredMoveto(VdbeCursor *p)
static int SQLITE_NOINLINE handleMovedCursor(VdbeCursor *p)
SQLITE_PRIVATE int sqlite3VdbeCursorRestore(VdbeCursor *p)
SQLITE_PRIVATE int sqlite3VdbeCursorMoveto(VdbeCursor *p)
SQLITE_PRIVATE u32 sqlite3VdbeSerialType(Mem *pMem, int file_format)
SQLITE_PRIVATE u32 sqlite3VdbeSerialTypeLen(u32 serial_type)
static u64 floatSwap(u64 in)
# define swapMixedEndianFloat(X)  X = floatSwap(X)
# define swapMixedEndianFloat(X)
SQLITE_PRIVATE u32 sqlite3VdbeSerialPut(u8 *buf, Mem *pMem, u32 serial_type)
#define ONE_BYTE_INT(x)    ((i8)(x)[0])
#define TWO_BYTE_INT(x)    (256*(i8)((x)[0])|(x)[1])
#define THREE_BYTE_INT(x)  (65536*(i8)((x)[0])|((x)[1]<<8)|(x)[2])
#define FOUR_BYTE_UINT(x)  (((u32)(x)[0]<<24)|((x)[1]<<16)|((x)[2]<<8)|(x)[3])
#define FOUR_BYTE_INT(x) (16777216*(i8)((x)[0])|((x)[1]<<16)|((x)[2]<<8)|(x)[3])
static u32 SQLITE_NOINLINE serialGet(
const unsigned char *buf,
u32 serial_type,
Mem *pMem
)
SQLITE_PRIVATE u32 sqlite3VdbeSerialGet(
const unsigned char *buf,
u32 serial_type,
Mem *pMem
)
SQLITE_PRIVATE UnpackedRecord *sqlite3VdbeAllocUnpackedRecord(
KeyInfo *pKeyInfo,
char *pSpace,
int szSpace,
char **ppFree
)
SQLITE_PRIVATE void sqlite3VdbeRecordUnpack(
KeyInfo *pKeyInfo,
int nKey,
const void *pKey,
UnpackedRecord *p
){
const unsigned char *aKey = (const unsigned char *)pKey;
int d;
u32 idx;
u16 u;
u32 szHdr;
Mem *pMem = p->aMem;
p->default_rc = 0;
assert( EIGHT_BYTE_ALIGNMENT(pMem) );
idx = getVarint32(aKey, szHdr);
d = szHdr;
u = 0;
while( idx<szHdr && d<=nKey )
#if SQLITE_DEBUG
static void vdbeAssertFieldCountWithinLimits(
int nKey, const void *pKey,
const KeyInfo *pKeyInfo
)
# define vdbeAssertFieldCountWithinLimits(A,B,C)
static int vdbeCompareMemString(
const Mem *pMem1,
const Mem *pMem2,
const CollSeq *pColl,
u8 *prcErr
)
static SQLITE_NOINLINE int sqlite3BlobCompare(const Mem *pB1, const Mem *pB2)
SQLITE_PRIVATE int sqlite3MemCompare(const Mem *pMem1, const Mem *pMem2, const CollSeq *pColl)
static i64 vdbeRecordDecodeInt(u32 serial_type, const u8 *aKey)
SQLITE_PRIVATE int sqlite3VdbeRecordCompareWithSkip(
int nKey1, const void *pKey1,
UnpackedRecord *pPKey2,
int bSkip
)
SQLITE_PRIVATE int sqlite3VdbeRecordCompare(
int nKey1, const void *pKey1,
UnpackedRecord *pPKey2
)
static int vdbeRecordCompareInt(
int nKey1, const void *pKey1,
UnpackedRecord *pPKey2
)
static int vdbeRecordCompareString(
int nKey1, const void *pKey1,
UnpackedRecord *pPKey2
)
SQLITE_PRIVATE RecordCompare sqlite3VdbeFindCompare(UnpackedRecord *p)
SQLITE_PRIVATE int sqlite3VdbeIdxRowid(sqlite3 *db, BtCursor *pCur, i64 *rowid)
SQLITE_PRIVATE int sqlite3VdbeIdxKeyCompare(
sqlite3 *db,
VdbeCursor *pC,
UnpackedRecord *pUnpacked,
int *res
)
SQLITE_PRIVATE void sqlite3VdbeSetChanges(sqlite3 *db, int nChange)
SQLITE_PRIVATE void sqlite3VdbeCountChanges(Vdbe *v)
SQLITE_PRIVATE void sqlite3ExpirePreparedStatements(sqlite3 *db)
SQLITE_PRIVATE sqlite3 *sqlite3VdbeDb(Vdbe *v)
SQLITE_PRIVATE sqlite3_value *sqlite3VdbeGetBoundValue(Vdbe *v, int iVar, u8 aff)
SQLITE_PRIVATE void sqlite3VdbeSetVarmask(Vdbe *v, int iVar)
SQLITE_PRIVATE void sqlite3VtabImportErrmsg(Vdbe *p, sqlite3_vtab *pVtab)
SQLITE_API int SQLITE_STDCALL sqlite3_expired(sqlite3_stmt *pStmt)
static int vdbeSafety(Vdbe *p)
static int vdbeSafetyNotNull(Vdbe *p)
SQLITE_API int SQLITE_STDCALL sqlite3_finalize(sqlite3_stmt *pStmt)
SQLITE_API int SQLITE_STDCALL sqlite3_reset(sqlite3_stmt *pStmt)
SQLITE_API int SQLITE_STDCALL sqlite3_clear_bindings(sqlite3_stmt *pStmt)
SQLITE_API const void *SQLITE_STDCALL sqlite3_value_blob(sqlite3_value *pVal)
SQLITE_API int SQLITE_STDCALL sqlite3_value_bytes(sqlite3_value *pVal)
SQLITE_API int SQLITE_STDCALL sqlite3_value_bytes16(sqlite3_value *pVal)
SQLITE_API double SQLITE_STDCALL sqlite3_value_double(sqlite3_value *pVal)
SQLITE_API int SQLITE_STDCALL sqlite3_value_int(sqlite3_value *pVal)
SQLITE_API sqlite_int64 SQLITE_STDCALL sqlite3_value_int64(sqlite3_value *pVal)
SQLITE_API const unsigned char *SQLITE_STDCALL sqlite3_value_text(sqlite3_value *pVal)
SQLITE_API const void *SQLITE_STDCALL sqlite3_value_text16(sqlite3_value* pVal)
SQLITE_API const void *SQLITE_STDCALL sqlite3_value_text16be(sqlite3_value *pVal)
SQLITE_API const void *SQLITE_STDCALL sqlite3_value_text16le(sqlite3_value *pVal)
SQLITE_API int SQLITE_STDCALL sqlite3_value_type(sqlite3_value* pVal)
static void setResultStrOrError(
sqlite3_context *pCtx,
const char *z,
int n,
u8 enc,
void (*xDel)(void*)
)
static int invokeValueDestructor(
const void *p,
void (*xDel)(void*),
sqlite3_context *pCtx
)
SQLITE_API void SQLITE_STDCALL sqlite3_result_blob(
sqlite3_context *pCtx,
const void *z,
int n,
void (*xDel)(void *)
)
SQLITE_API void SQLITE_STDCALL sqlite3_result_blob64(
sqlite3_context *pCtx,
const void *z,
sqlite3_uint64 n,
void (*xDel)(void *)
)
SQLITE_API void SQLITE_STDCALL sqlite3_result_double(sqlite3_context *pCtx, double rVal)
SQLITE_API void SQLITE_STDCALL sqlite3_result_error(sqlite3_context *pCtx, const char *z, int n)
SQLITE_API void SQLITE_STDCALL sqlite3_result_error16(sqlite3_context *pCtx, const void *z, int n)
SQLITE_API void SQLITE_STDCALL sqlite3_result_int(sqlite3_context *pCtx, int iVal)
SQLITE_API void SQLITE_STDCALL sqlite3_result_int64(sqlite3_context *pCtx, i64 iVal)
SQLITE_API void SQLITE_STDCALL sqlite3_result_null(sqlite3_context *pCtx)
SQLITE_API void SQLITE_STDCALL sqlite3_result_text(
sqlite3_context *pCtx,
const char *z,
int n,
void (*xDel)(void *)
)
SQLITE_API void SQLITE_STDCALL sqlite3_result_text64(
sqlite3_context *pCtx,
const char *z,
sqlite3_uint64 n,
void (*xDel)(void *),
unsigned char enc
)
SQLITE_API void SQLITE_STDCALL sqlite3_result_text16(
sqlite3_context *pCtx,
const void *z,
int n,
void (*xDel)(void *)
)
SQLITE_API void SQLITE_STDCALL sqlite3_result_text16be(
sqlite3_context *pCtx,
const void *z,
int n,
void (*xDel)(void *)
)
SQLITE_API void SQLITE_STDCALL sqlite3_result_text16le(
sqlite3_context *pCtx,
const void *z,
int n,
void (*xDel)(void *)
)
SQLITE_API void SQLITE_STDCALL sqlite3_result_value(sqlite3_context *pCtx, sqlite3_value *pValue)
SQLITE_API void SQLITE_STDCALL sqlite3_result_zeroblob(sqlite3_context *pCtx, int n)
SQLITE_API void SQLITE_STDCALL sqlite3_result_error_code(sqlite3_context *pCtx, int errCode)
SQLITE_API void SQLITE_STDCALL sqlite3_result_error_toobig(sqlite3_context *pCtx)
SQLITE_API void SQLITE_STDCALL sqlite3_result_error_nomem(sqlite3_context *pCtx)
static int doWalCallbacks(sqlite3 *db)
static int sqlite3Step(Vdbe *p)
SQLITE_API int SQLITE_STDCALL sqlite3_step(sqlite3_stmt *pStmt)
SQLITE_API void *SQLITE_STDCALL sqlite3_user_data(sqlite3_context *p)
SQLITE_API sqlite3 *SQLITE_STDCALL sqlite3_context_db_handle(sqlite3_context *p)
SQLITE_PRIVATE sqlite3_int64 sqlite3StmtCurrentTime(sqlite3_context *p)
SQLITE_PRIVATE void sqlite3InvalidFunction(
sqlite3_context *context,
int NotUsed,
sqlite3_value **NotUsed2
)
static SQLITE_NOINLINE void *createAggContext(sqlite3_context *p, int nByte)
SQLITE_API void *SQLITE_STDCALL sqlite3_aggregate_context(sqlite3_context *p, int nByte)
SQLITE_API void *SQLITE_STDCALL sqlite3_get_auxdata(sqlite3_context *pCtx, int iArg)
SQLITE_API void SQLITE_STDCALL sqlite3_set_auxdata(
sqlite3_context *pCtx,
int iArg,
void *pAux,
void (*xDelete)(void*)
)
SQLITE_API int SQLITE_STDCALL sqlite3_aggregate_count(sqlite3_context *p)
SQLITE_API int SQLITE_STDCALL sqlite3_column_count(sqlite3_stmt *pStmt)
SQLITE_API int SQLITE_STDCALL sqlite3_data_count(sqlite3_stmt *pStmt)
static const Mem *columnNullValue(void)
static Mem *columnMem(sqlite3_stmt *pStmt, int i)
static void columnMallocFailure(sqlite3_stmt *pStmt)
SQLITE_API const void *SQLITE_STDCALL sqlite3_column_blob(sqlite3_stmt *pStmt, int i)
SQLITE_API int SQLITE_STDCALL sqlite3_column_bytes(sqlite3_stmt *pStmt, int i)
SQLITE_API int SQLITE_STDCALL sqlite3_column_bytes16(sqlite3_stmt *pStmt, int i)
SQLITE_API double SQLITE_STDCALL sqlite3_column_double(sqlite3_stmt *pStmt, int i)
SQLITE_API int SQLITE_STDCALL sqlite3_column_int(sqlite3_stmt *pStmt, int i)
SQLITE_API sqlite_int64 SQLITE_STDCALL sqlite3_column_int64(sqlite3_stmt *pStmt, int i)
SQLITE_API const unsigned char *SQLITE_STDCALL sqlite3_column_text(sqlite3_stmt *pStmt, int i)
SQLITE_API sqlite3_value *SQLITE_STDCALL sqlite3_column_value(sqlite3_stmt *pStmt, int i)
SQLITE_API const void *SQLITE_STDCALL sqlite3_column_text16(sqlite3_stmt *pStmt, int i)
SQLITE_API int SQLITE_STDCALL sqlite3_column_type(sqlite3_stmt *pStmt, int i)
static const void *columnName(
sqlite3_stmt *pStmt,
int N,
const void *(*xFunc)(Mem*),
int useType
)
SQLITE_API const char *SQLITE_STDCALL sqlite3_column_name(sqlite3_stmt *pStmt, int N)
SQLITE_API const void *SQLITE_STDCALL sqlite3_column_name16(sqlite3_stmt *pStmt, int N)
#if defined(SQLITE_OMIT_DECLTYPE) && defined(SQLITE_ENABLE_COLUMN_METADATA)
# error "Must not define both SQLITE_OMIT_DECLTYPE \
and SQLITE_ENABLE_COLUMN_METADATA"
SQLITE_API const char *SQLITE_STDCALL sqlite3_column_decltype(sqlite3_stmt *pStmt, int N)
SQLITE_API const void *SQLITE_STDCALL sqlite3_column_decltype16(sqlite3_stmt *pStmt, int N)
SQLITE_API const char *SQLITE_STDCALL sqlite3_column_database_name(sqlite3_stmt *pStmt, int N)
SQLITE_API const void *SQLITE_STDCALL sqlite3_column_database_name16(sqlite3_stmt *pStmt, int N)
SQLITE_API const char *SQLITE_STDCALL sqlite3_column_table_name(sqlite3_stmt *pStmt, int N)
SQLITE_API const void *SQLITE_STDCALL sqlite3_column_table_name16(sqlite3_stmt *pStmt, int N)
SQLITE_API const char *SQLITE_STDCALL sqlite3_column_origin_name(sqlite3_stmt *pStmt, int N)
SQLITE_API const void *SQLITE_STDCALL sqlite3_column_origin_name16(sqlite3_stmt *pStmt, int N)
static int vdbeUnbind(Vdbe *p, int i)
static int bindText(
sqlite3_stmt *pStmt,
int i,
const void *zData,
int nData,
void (*xDel)(void*),
u8 encoding
)
SQLITE_API int SQLITE_STDCALL sqlite3_bind_blob(
sqlite3_stmt *pStmt,
int i,
const void *zData,
int nData,
void (*xDel)(void*)
)
SQLITE_API int SQLITE_STDCALL sqlite3_bind_blob64(
sqlite3_stmt *pStmt,
int i,
const void *zData,
sqlite3_uint64 nData,
void (*xDel)(void*)
)
SQLITE_API int SQLITE_STDCALL sqlite3_bind_double(sqlite3_stmt *pStmt, int i, double rValue)
SQLITE_API int SQLITE_STDCALL sqlite3_bind_int(sqlite3_stmt *p, int i, int iValue)
SQLITE_API int SQLITE_STDCALL sqlite3_bind_int64(sqlite3_stmt *pStmt, int i, sqlite_int64 iValue)
SQLITE_API int SQLITE_STDCALL sqlite3_bind_null(sqlite3_stmt *pStmt, int i)
SQLITE_API int SQLITE_STDCALL sqlite3_bind_text(
sqlite3_stmt *pStmt,
int i,
const char *zData,
int nData,
void (*xDel)(void*)
)
SQLITE_API int SQLITE_STDCALL sqlite3_bind_text64(
sqlite3_stmt *pStmt,
int i,
const char *zData,
sqlite3_uint64 nData,
void (*xDel)(void*),
unsigned char enc
)
SQLITE_API int SQLITE_STDCALL sqlite3_bind_text16(
sqlite3_stmt *pStmt,
int i,
const void *zData,
int nData,
void (*xDel)(void*)
)
SQLITE_API int SQLITE_STDCALL sqlite3_bind_value(sqlite3_stmt *pStmt, int i, const sqlite3_value *pValue)
SQLITE_API int SQLITE_STDCALL sqlite3_bind_zeroblob(sqlite3_stmt *pStmt, int i, int n)
SQLITE_API int SQLITE_STDCALL sqlite3_bind_parameter_count(sqlite3_stmt *pStmt)
SQLITE_API const char *SQLITE_STDCALL sqlite3_bind_parameter_name(sqlite3_stmt *pStmt, int i)
SQLITE_PRIVATE int sqlite3VdbeParameterIndex(Vdbe *p, const char *zName, int nName)
SQLITE_API int SQLITE_STDCALL sqlite3_bind_parameter_index(sqlite3_stmt *pStmt, const char *zName)
SQLITE_PRIVATE int sqlite3TransferBindings(sqlite3_stmt *pFromStmt, sqlite3_stmt *pToStmt)
SQLITE_API int SQLITE_STDCALL sqlite3_transfer_bindings(sqlite3_stmt *pFromStmt, sqlite3_stmt *pToStmt)
SQLITE_API sqlite3 *SQLITE_STDCALL sqlite3_db_handle(sqlite3_stmt *pStmt)
SQLITE_API int SQLITE_STDCALL sqlite3_stmt_readonly(sqlite3_stmt *pStmt)
SQLITE_API int SQLITE_STDCALL sqlite3_stmt_busy(sqlite3_stmt *pStmt)
SQLITE_API sqlite3_stmt *SQLITE_STDCALL sqlite3_next_stmt(sqlite3 *pDb, sqlite3_stmt *pStmt)
SQLITE_API int SQLITE_STDCALL sqlite3_stmt_status(sqlite3_stmt *pStmt, int op, int resetFlag)
SQLITE_API int SQLITE_STDCALL sqlite3_stmt_scanstatus(
sqlite3_stmt *pStmt,
int idx,
int iScanStatusOp,
void *pOut
)
SQLITE_API void SQLITE_STDCALL sqlite3_stmt_scanstatus_reset(sqlite3_stmt *pStmt)
static int findNextHostParameter(const char *zSql, int *pnToken)
SQLITE_PRIVATE char *sqlite3VdbeExpandSql(
Vdbe *p,
const char *zRawSql
)
# define memAboutToChange(P,M) sqlite3VdbeMemAboutToChange(P,M)
# define memAboutToChange(P,M)
SQLITE_API int sqlite3_search_count = 0;
SQLITE_API int sqlite3_interrupt_count = 0;
SQLITE_API int sqlite3_sort_count = 0;
SQLITE_API int sqlite3_max_blobsize = 0;
static void updateMaxBlobsize(Mem *p)
SQLITE_API int sqlite3_found_count = 0;
#if defined(SQLITE_TEST) && !defined(SQLITE_OMIT_BUILTIN_TEST)
# define UPDATE_MAX_BLOBSIZE(P)  updateMaxBlobsize(P)
# define UPDATE_MAX_BLOBSIZE(P)
#if !defined(SQLITE_VDBE_COVERAGE)
# define VdbeBranchTaken(I,M)
# define VdbeBranchTaken(I,M) vdbeTakeBranch(pOp->iSrcLine,I,M)
static void vdbeTakeBranch(int iSrcLine, u8 I, u8 M)
#define Stringify(P, enc) \
if(((P)->flags&(MEM_Str|MEM_Blob))==0 && sqlite3VdbeMemStringify(P,enc,0)) \
#define Deephemeralize(P) \
if( ((P)->flags&MEM_Ephem)!=0 \
&& sqlite3VdbeMemMakeWriteable(P) )
#define isSorter(x) ((x)->pSorter!=0)
static VdbeCursor *allocateCursor(
Vdbe *p,
int iCur,
int nField,
int iDb,
int isBtreeCursor
)
static void applyNumericAffinity(Mem *pRec, int bTryForInt)
static void applyAffinity(
Mem *pRec,
char affinity,
u8 enc
)
SQLITE_API int SQLITE_STDCALL sqlite3_value_numeric_type(sqlite3_value *pVal)
SQLITE_PRIVATE void sqlite3ValueApplyAffinity(
sqlite3_value *pVal,
u8 affinity,
u8 enc
)
static u16 SQLITE_NOINLINE computeNumericType(Mem *pMem)
static u16 numericType(Mem *pMem)
SQLITE_PRIVATE void sqlite3VdbeMemPrettyPrint(Mem *pMem, char *zBuf)
static void memTracePrint(Mem *p)
static void registerTrace(int iReg, Mem *p)
#  define REGISTER_TRACE(R,M) if(db->flags&SQLITE_VdbeTrace)registerTrace(R,M)
#  define REGISTER_TRACE(R,M)
#define _HWTIME_H_
#if (defined(__GNUC__) || defined(_MSC_VER)) && \
(defined(i386) || defined(__i386__) || defined(_M_IX86))
#if defined(__GNUC__)
__inline__ sqlite_uint64 sqlite3Hwtime(void)
#elif defined(_MSC_VER)
__declspec(naked) __inline sqlite_uint64 __cdecl sqlite3Hwtime(void)
#elif (defined(__GNUC__) && defined(__x86_64__))
__inline__ sqlite_uint64 sqlite3Hwtime(void)
#elif (defined(__GNUC__) && defined(__ppc__))
__inline__ sqlite_uint64 sqlite3Hwtime(void)
#error Need implementation of sqlite3Hwtime() for your platform.
SQLITE_PRIVATE   sqlite_uint64 sqlite3Hwtime(void)
static int checkSavepointCount(sqlite3 *db)
static Mem *out2Prerelease(Vdbe *p, VdbeOp *pOp)
SQLITE_PRIVATE int sqlite3VdbeExec(
Vdbe *p
)
typedef struct Incrblob Incrblob;
struct Incrblob ;
static int blobSeekToRow(Incrblob *p, sqlite3_int64 iRow, char **pzErr)
SQLITE_API int SQLITE_STDCALL sqlite3_blob_open(
sqlite3* db,
const char *zDb,
const char *zTable,
const char *zColumn,
sqlite_int64 iRow,
int flags,
sqlite3_blob **ppBlob
)
SQLITE_API int SQLITE_STDCALL sqlite3_blob_close(sqlite3_blob *pBlob)
static int blobReadWrite(
sqlite3_blob *pBlob,
void *z,
int n,
int iOffset,
int (*xCall)(BtCursor*, u32, u32, void*)
)
SQLITE_API int SQLITE_STDCALL sqlite3_blob_read(sqlite3_blob *pBlob, void *z, int n, int iOffset)
SQLITE_API int SQLITE_STDCALL sqlite3_blob_write(sqlite3_blob *pBlob, const void *z, int n, int iOffset)
SQLITE_API int SQLITE_STDCALL sqlite3_blob_bytes(sqlite3_blob *pBlob)
SQLITE_API int SQLITE_STDCALL sqlite3_blob_reopen(sqlite3_blob *pBlob, sqlite3_int64 iRow)
#define SQLITE_MAX_PMASZ    (1<<29)
typedef struct MergeEngine MergeEngine;
typedef struct PmaReader PmaReader;
typedef struct PmaWriter PmaWriter;
typedef struct SorterRecord SorterRecord;
typedef struct SortSubtask SortSubtask;
typedef struct SorterFile SorterFile;
typedef struct SorterList SorterList;
typedef struct IncrMerger IncrMerger;
struct SorterFile ;
struct SorterList ;
struct MergeEngine ;
typedef int (*SorterCompare)(SortSubtask*,int*,const void*,int,const void*,int);
struct SortSubtask ;
struct VdbeSorter ;
#define SORTER_TYPE_INTEGER 0x01
#define SORTER_TYPE_TEXT    0x02
struct PmaReader ;
struct IncrMerger ;
struct PmaWriter ;
struct SorterRecord ;
#define SRVAL(p) ((void*)((SorterRecord*)(p) + 1))
#define SORTER_MAX_MERGE_COUNT 16
static int vdbeIncrSwap(IncrMerger*);
static void vdbeIncrFree(IncrMerger *);
static void vdbePmaReaderClear(PmaReader *pReadr)
static int vdbePmaReadBlob(
PmaReader *p,
int nByte,
u8 **ppOut
)
static int vdbePmaReadVarint(PmaReader *p, u64 *pnOut)
static int vdbeSorterMapFile(SortSubtask *pTask, SorterFile *pFile, u8 **pp)
static int vdbePmaReaderSeek(
SortSubtask *pTask,
PmaReader *pReadr,
SorterFile *pFile,
i64 iOff
)
static int vdbePmaReaderNext(PmaReader *pReadr)
static int vdbePmaReaderInit(
SortSubtask *pTask,
SorterFile *pFile,
i64 iStart,
PmaReader *pReadr,
i64 *pnByte
)
static int vdbeSorterCompareTail(
SortSubtask *pTask,
int *pbKey2Cached,
const void *pKey1, int nKey1,
const void *pKey2, int nKey2
)
static int vdbeSorterCompare(
SortSubtask *pTask,
int *pbKey2Cached,
const void *pKey1, int nKey1,
const void *pKey2, int nKey2
)
static int vdbeSorterCompareText(
SortSubtask *pTask,
int *pbKey2Cached,
const void *pKey1, int nKey1,
const void *pKey2, int nKey2
)
static int vdbeSorterCompareInt(
SortSubtask *pTask,
int *pbKey2Cached,
const void *pKey1, int nKey1,
const void *pKey2, int nKey2
)
SQLITE_PRIVATE int sqlite3VdbeSorterInit(
sqlite3 *db,
int nField,
VdbeCursor *pCsr
)
#undef nWorker
static void vdbeSorterRecordFree(sqlite3 *db, SorterRecord *pRecord)
static void vdbeSortSubtaskCleanup(sqlite3 *db, SortSubtask *pTask)
static void vdbeSorterWorkDebug(SortSubtask *pTask, const char *zEvent)
static void vdbeSorterRewindDebug(const char *zEvent)
static void vdbeSorterPopulateDebug(
SortSubtask *pTask,
const char *zEvent
)
static void vdbeSorterBlockDebug(
SortSubtask *pTask,
int bBlocked,
const char *zEvent
)
# define vdbeSorterWorkDebug(x,y)
# define vdbeSorterRewindDebug(y)
# define vdbeSorterPopulateDebug(x,y)
# define vdbeSorterBlockDebug(x,y,z)
#if SQLITE_MAX_WORKER_THREADS>0
static int vdbeSorterJoinThread(SortSubtask *pTask)
static int vdbeSorterCreateThread(
SortSubtask *pTask,
void *(*xTask)(void*),
void *pIn
)
static int vdbeSorterJoinAll(VdbeSorter *pSorter, int rcin)
# define vdbeSorterJoinAll(x,rcin) (rcin)
# define vdbeSorterJoinThread(pTask) SQLITE_OK
static MergeEngine *vdbeMergeEngineNew(int nReader)
static void vdbeMergeEngineFree(MergeEngine *pMerger)
static void vdbeIncrFree(IncrMerger *pIncr)
SQLITE_PRIVATE void sqlite3VdbeSorterReset(sqlite3 *db, VdbeSorter *pSorter)
SQLITE_PRIVATE void sqlite3VdbeSorterClose(sqlite3 *db, VdbeCursor *pCsr)
#if SQLITE_MAX_MMAP_SIZE>0
static void vdbeSorterExtendFile(sqlite3 *db, sqlite3_file *pFd, i64 nByte)
# define vdbeSorterExtendFile(x,y,z)
static int vdbeSorterOpenTempFile(
sqlite3 *db,
i64 nExtend,
sqlite3_file **ppFd
)
static int vdbeSortAllocUnpacked(SortSubtask *pTask)
static void vdbeSorterMerge(
SortSubtask *pTask,
SorterRecord *p1,
SorterRecord *p2,
SorterRecord **ppOut
)
static SorterCompare vdbeSorterGetCompare(VdbeSorter *p)
static int vdbeSorterSort(SortSubtask *pTask, SorterList *pList)
static void vdbePmaWriterInit(
sqlite3_file *pFd,
PmaWriter *p,
int nBuf,
i64 iStart
)
static void vdbePmaWriteBlob(PmaWriter *p, u8 *pData, int nData)
static int vdbePmaWriterFinish(PmaWriter *p, i64 *piEof)
static void vdbePmaWriteVarint(PmaWriter *p, u64 iVal)
static int vdbeSorterListToPMA(SortSubtask *pTask, SorterList *pList)
static int vdbeMergeEngineStep(
MergeEngine *pMerger,
int *pbEof
)
#if SQLITE_MAX_WORKER_THREADS>0
static void *vdbeSorterFlushThread(void *pCtx)
static int vdbeSorterFlushPMA(VdbeSorter *pSorter)
SQLITE_PRIVATE int sqlite3VdbeSorterWrite(
const VdbeCursor *pCsr,
Mem *pVal
)
static int vdbeIncrPopulate(IncrMerger *pIncr)
#if SQLITE_MAX_WORKER_THREADS>0
static void *vdbeIncrPopulateThread(void *pCtx)
static int vdbeIncrBgPopulate(IncrMerger *pIncr)
static int vdbeIncrSwap(IncrMerger *pIncr)
static int vdbeIncrMergerNew(
SortSubtask *pTask,
MergeEngine *pMerger,
IncrMerger **ppOut
)
#if SQLITE_MAX_WORKER_THREADS>0
static void vdbeIncrMergerSetThreads(IncrMerger *pIncr)
static void vdbeMergeEngineCompare(
MergeEngine *pMerger,
int iOut
)
#define INCRINIT_NORMAL 0
#define INCRINIT_TASK   1
#define INCRINIT_ROOT   2
static int vdbePmaReaderIncrInit(PmaReader *pReadr, int eMode);
static int vdbeMergeEngineInit(
SortSubtask *pTask,
MergeEngine *pMerger,
int eMode
)
static int vdbePmaReaderIncrMergeInit(PmaReader *pReadr, int eMode)
#if SQLITE_MAX_WORKER_THREADS>0
static void *vdbePmaReaderBgIncrInit(void *pCtx)
static int vdbePmaReaderIncrInit(PmaReader *pReadr, int eMode)
static int vdbeMergeEngineLevel0(
SortSubtask *pTask,
int nPMA,
i64 *piOffset,
MergeEngine **ppOut
)
static int vdbeSorterTreeDepth(int nPMA)
static int vdbeSorterAddToTree(
SortSubtask *pTask,
int nDepth,
int iSeq,
MergeEngine *pRoot,
MergeEngine *pLeaf
)
static int vdbeSorterMergeTreeBuild(
VdbeSorter *pSorter,
MergeEngine **ppOut
)
static int vdbeSorterSetupMerge(VdbeSorter *pSorter)
SQLITE_PRIVATE int sqlite3VdbeSorterRewind(const VdbeCursor *pCsr, int *pbEof)
SQLITE_PRIVATE int sqlite3VdbeSorterNext(sqlite3 *db, const VdbeCursor *pCsr, int *pbEof)
static void *vdbeSorterRowkey(
const VdbeSorter *pSorter,
int *pnKey
)
SQLITE_PRIVATE int sqlite3VdbeSorterRowkey(const VdbeCursor *pCsr, Mem *pOut)
SQLITE_PRIVATE int sqlite3VdbeSorterCompare(
const VdbeCursor *pCsr,
Mem *pVal,
int nKeyCol,
int *pRes
)
struct JournalFile ;
typedef struct JournalFile JournalFile;
static int createFile(JournalFile *p)
static int jrnlClose(sqlite3_file *pJfd)
static int jrnlRead(
sqlite3_file *pJfd,
void *zBuf,
int iAmt,
sqlite_int64 iOfst
)
static int jrnlWrite(
sqlite3_file *pJfd,
const void *zBuf,
int iAmt,
sqlite_int64 iOfst
)
static int jrnlTruncate(sqlite3_file *pJfd, sqlite_int64 size)
static int jrnlSync(sqlite3_file *pJfd, int flags)
static int jrnlFileSize(sqlite3_file *pJfd, sqlite_int64 *pSize)
static struct sqlite3_io_methods JournalFileMethods = ;
SQLITE_PRIVATE int sqlite3JournalOpen(
sqlite3_vfs *pVfs,
const char *zName,
sqlite3_file *pJfd,
int flags,
int nBuf
)
SQLITE_PRIVATE int sqlite3JournalCreate(sqlite3_file *p)
SQLITE_PRIVATE int sqlite3JournalExists(sqlite3_file *p)
SQLITE_PRIVATE int sqlite3JournalSize(sqlite3_vfs *pVfs)
typedef struct MemJournal MemJournal;
typedef struct FilePoint FilePoint;
typedef struct FileChunk FileChunk;
#define JOURNAL_CHUNKSIZE ((int)(1024-sizeof(FileChunk*)))
struct FileChunk ;
struct FilePoint ;
struct MemJournal ;
static int memjrnlRead(
sqlite3_file *pJfd,
void *zBuf,
int iAmt,
sqlite_int64 iOfst
)
static int memjrnlWrite(
sqlite3_file *pJfd,
const void *zBuf,
int iAmt,
sqlite_int64 iOfst
)
static int memjrnlTruncate(sqlite3_file *pJfd, sqlite_int64 size)
static int memjrnlClose(sqlite3_file *pJfd)
static int memjrnlSync(sqlite3_file *NotUsed, int NotUsed2)
static int memjrnlFileSize(sqlite3_file *pJfd, sqlite_int64 *pSize)
static const struct sqlite3_io_methods MemJournalMethods = ;
SQLITE_PRIVATE void sqlite3MemJournalOpen(sqlite3_file *pJfd)
SQLITE_PRIVATE int sqlite3IsMemJournal(sqlite3_file *pJfd)
SQLITE_PRIVATE int sqlite3MemJournalSize(void)
SQLITE_PRIVATE int sqlite3WalkExpr(Walker *pWalker, Expr *pExpr)
SQLITE_PRIVATE int sqlite3WalkExprList(Walker *pWalker, ExprList *p)
SQLITE_PRIVATE int sqlite3WalkSelectExpr(Walker *pWalker, Select *p)
SQLITE_PRIVATE int sqlite3WalkSelectFrom(Walker *pWalker, Select *p)
SQLITE_PRIVATE int sqlite3WalkSelect(Walker *pWalker, Select *p)
static int incrAggDepth(Walker *pWalker, Expr *pExpr)
static void incrAggFunctionDepth(Expr *pExpr, int N)
static void resolveAlias(
Parse *pParse,
ExprList *pEList,
int iCol,
Expr *pExpr,
const char *zType,
int nSubquery
)
static int nameInUsingClause(IdList *pUsing, const char *zCol)
SQLITE_PRIVATE int sqlite3MatchSpanName(
const char *zSpan,
const char *zCol,
const char *zTab,
const char *zDb
)
static int lookupName(
Parse *pParse,
const char *zDb,
const char *zTab,
const char *zCol,
NameContext *pNC,
Expr *pExpr
)
SQLITE_PRIVATE Expr *sqlite3CreateColumnExpr(sqlite3 *db, SrcList *pSrc, int iSrc, int iCol)
static void notValidPartIdxWhere(
Parse *pParse,
NameContext *pNC,
const char *zMsg
)
static void notValidCheckConstraint(
Parse *pParse,
NameContext *pNC,
const char *zMsg
)
# define notValidCheckConstraint(P,N,M)
static int exprProbability(Expr *p)
static int resolveExprStep(Walker *pWalker, Expr *pExpr)
static int resolveAsName(
Parse *pParse,
ExprList *pEList,
Expr *pE
)
static int resolveOrderByTermToExprList(
Parse *pParse,
Select *pSelect,
Expr *pE
)
static void resolveOutOfRangeError(
Parse *pParse,
const char *zType,
int i,
int mx
)
static int resolveCompoundOrderBy(
Parse *pParse,
Select *pSelect
)
SQLITE_PRIVATE int sqlite3ResolveOrderGroupBy(
Parse *pParse,
Select *pSelect,
ExprList *pOrderBy,
const char *zType
)
static int resolveOrderGroupBy(
NameContext *pNC,
Select *pSelect,
ExprList *pOrderBy,
const char *zType
)
static int resolveSelectStep(Walker *pWalker, Select *p)
SQLITE_PRIVATE int sqlite3ResolveExprNames(
NameContext *pNC,
Expr *pExpr
)
SQLITE_PRIVATE void sqlite3ResolveSelectNames(
Parse *pParse,
Select *p,
NameContext *pOuterNC
)
SQLITE_PRIVATE void sqlite3ResolveSelfReference(
Parse *pParse,
Table *pTab,
int type,
Expr *pExpr,
ExprList *pList
)
SQLITE_PRIVATE char sqlite3ExprAffinity(Expr *pExpr)
SQLITE_PRIVATE Expr *sqlite3ExprAddCollateToken(
Parse *pParse,
Expr *pExpr,
const Token *pCollName,
int dequote
)
SQLITE_PRIVATE Expr *sqlite3ExprAddCollateString(Parse *pParse, Expr *pExpr, const char *zC)
SQLITE_PRIVATE Expr *sqlite3ExprSkipCollate(Expr *pExpr)
SQLITE_PRIVATE CollSeq *sqlite3ExprCollSeq(Parse *pParse, Expr *pExpr)
SQLITE_PRIVATE char sqlite3CompareAffinity(Expr *pExpr, char aff2)
static char comparisonAffinity(Expr *pExpr)
SQLITE_PRIVATE int sqlite3IndexAffinityOk(Expr *pExpr, char idx_affinity)
static u8 binaryCompareP5(Expr *pExpr1, Expr *pExpr2, int jumpIfNull)
SQLITE_PRIVATE CollSeq *sqlite3BinaryCompareCollSeq(
Parse *pParse,
Expr *pLeft,
Expr *pRight
)
static int codeCompare(
Parse *pParse,
Expr *pLeft,
Expr *pRight,
int opcode,
int in1, int in2,
int dest,
int jumpIfNull
)
#if SQLITE_MAX_EXPR_DEPTH>0
SQLITE_PRIVATE int sqlite3ExprCheckHeight(Parse *pParse, int nHeight)
static void heightOfExpr(Expr *p, int *pnHeight)
static void heightOfExprList(ExprList *p, int *pnHeight)
static void heightOfSelect(Select *p, int *pnHeight)
static void exprSetHeight(Expr *p)
SQLITE_PRIVATE void sqlite3ExprSetHeightAndFlags(Parse *pParse, Expr *p)
SQLITE_PRIVATE int sqlite3SelectExprHeight(Select *p)
SQLITE_PRIVATE void sqlite3ExprSetHeightAndFlags(Parse *pParse, Expr *p)
#define exprSetHeight(y)
SQLITE_PRIVATE Expr *sqlite3ExprAlloc(
sqlite3 *db,
int op,
const Token *pToken,
int dequote
)
SQLITE_PRIVATE Expr *sqlite3Expr(
sqlite3 *db,
int op,
const char *zToken
)
SQLITE_PRIVATE void sqlite3ExprAttachSubtrees(
sqlite3 *db,
Expr *pRoot,
Expr *pLeft,
Expr *pRight
)
SQLITE_PRIVATE Expr *sqlite3PExpr(
Parse *pParse,
int op,
Expr *pLeft,
Expr *pRight,
const Token *pToken
)
static int exprAlwaysTrue(Expr *p)
static int exprAlwaysFalse(Expr *p)
SQLITE_PRIVATE Expr *sqlite3ExprAnd(sqlite3 *db, Expr *pLeft, Expr *pRight)
SQLITE_PRIVATE Expr *sqlite3ExprFunction(Parse *pParse, ExprList *pList, Token *pToken)
SQLITE_PRIVATE void sqlite3ExprAssignVarNumber(Parse *pParse, Expr *pExpr)
SQLITE_PRIVATE void sqlite3ExprDelete(sqlite3 *db, Expr *p)
static int exprStructSize(Expr *p)
static int dupedExprStructSize(Expr *p, int flags)
static int dupedExprNodeSize(Expr *p, int flags)
static int dupedExprSize(Expr *p, int flags)
static Expr *exprDup(sqlite3 *db, Expr *p, int flags, u8 **pzBuffer)
static With *withDup(sqlite3 *db, With *p)
# define withDup(x,y) 0
SQLITE_PRIVATE Expr *sqlite3ExprDup(sqlite3 *db, Expr *p, int flags)
SQLITE_PRIVATE ExprList *sqlite3ExprListDup(sqlite3 *db, ExprList *p, int flags)
#if !defined(SQLITE_OMIT_VIEW) || !defined(SQLITE_OMIT_TRIGGER) \
|| !defined(SQLITE_OMIT_SUBQUERY)
SQLITE_PRIVATE SrcList *sqlite3SrcListDup(sqlite3 *db, SrcList *p, int flags)
SQLITE_PRIVATE IdList *sqlite3IdListDup(sqlite3 *db, IdList *p)
SQLITE_PRIVATE Select *sqlite3SelectDup(sqlite3 *db, Select *p, int flags)
SQLITE_PRIVATE Select *sqlite3SelectDup(sqlite3 *db, Select *p, int flags)
SQLITE_PRIVATE ExprList *sqlite3ExprListAppend(
Parse *pParse,
ExprList *pList,
Expr *pExpr
)
SQLITE_PRIVATE void sqlite3ExprListSetName(
Parse *pParse,
ExprList *pList,
Token *pName,
int dequote
)
SQLITE_PRIVATE void sqlite3ExprListSetSpan(
Parse *pParse,
ExprList *pList,
ExprSpan *pSpan
)
SQLITE_PRIVATE void sqlite3ExprListCheckLength(
Parse *pParse,
ExprList *pEList,
const char *zObject
)
SQLITE_PRIVATE void sqlite3ExprListDelete(sqlite3 *db, ExprList *pList)
SQLITE_PRIVATE u32 sqlite3ExprListFlags(const ExprList *pList)
static int exprNodeIsConstant(Walker *pWalker, Expr *pExpr)
static int selectNodeIsConstant(Walker *pWalker, Select *NotUsed)
static int exprIsConst(Expr *p, int initFlag, int iCur)
SQLITE_PRIVATE int sqlite3ExprIsConstant(Expr *p)
SQLITE_PRIVATE int sqlite3ExprIsConstantNotJoin(Expr *p)
SQLITE_PRIVATE int sqlite3ExprIsTableConstant(Expr *p, int iCur)
SQLITE_PRIVATE int sqlite3ExprIsConstantOrFunction(Expr *p, u8 isInit)
SQLITE_PRIVATE int sqlite3ExprIsInteger(Expr *p, int *pValue)
SQLITE_PRIVATE int sqlite3ExprCanBeNull(const Expr *p)
SQLITE_PRIVATE int sqlite3ExprNeedsNoAffinityChange(const Expr *p, char aff)
SQLITE_PRIVATE int sqlite3IsRowid(const char *z)
static int isCandidateForInOpt(Select *p)
SQLITE_PRIVATE int sqlite3CodeOnce(Parse *pParse)
static void sqlite3SetHasNullFlag(Vdbe *v, int iCur, int regHasNull)
static int sqlite3InRhsIsConstant(Expr *pIn)
SQLITE_PRIVATE int sqlite3FindInIndex(Parse *pParse, Expr *pX, u32 inFlags, int *prRhsHasNull)
SQLITE_PRIVATE int sqlite3CodeSubselect(
Parse *pParse,
Expr *pExpr,
int rHasNullFlag,
int isRowid
)
static void sqlite3ExprCodeIN(
Parse *pParse,
Expr *pExpr,
int destIfFalse,
int destIfNull
)
static char *dup8bytes(Vdbe *v, const char *in)
static void codeReal(Vdbe *v, const char *z, int negateFlag, int iMem)
static void codeInteger(Parse *pParse, Expr *pExpr, int negFlag, int iMem)
static void cacheEntryClear(Parse *pParse, struct yColCache *p)
SQLITE_PRIVATE void sqlite3ExprCacheStore(Parse *pParse, int iTab, int iCol, int iReg)
SQLITE_PRIVATE void sqlite3ExprCacheRemove(Parse *pParse, int iReg, int nReg)
SQLITE_PRIVATE void sqlite3ExprCachePush(Parse *pParse)
SQLITE_PRIVATE void sqlite3ExprCachePop(Parse *pParse)
static void sqlite3ExprCachePinRegister(Parse *pParse, int iReg)
SQLITE_PRIVATE void sqlite3ExprCodeGetColumnOfTable(
Vdbe *v,
Table *pTab,
int iTabCur,
int iCol,
int regOut
)
SQLITE_PRIVATE int sqlite3ExprCodeGetColumn(
Parse *pParse,
Table *pTab,
int iColumn,
int iTable,
int iReg,
u8 p5
)
SQLITE_PRIVATE void sqlite3ExprCacheClear(Parse *pParse)
SQLITE_PRIVATE void sqlite3ExprCacheAffinityChange(Parse *pParse, int iStart, int iCount)
SQLITE_PRIVATE void sqlite3ExprCodeMove(Parse *pParse, int iFrom, int iTo, int nReg)
#if defined(SQLITE_DEBUG) || defined(SQLITE_COVERAGE_TEST)
static int usedAsColumnCache(Parse *pParse, int iFrom, int iTo)
static void exprToRegister(Expr *p, int iReg)
SQLITE_PRIVATE int sqlite3ExprCodeTarget(Parse *pParse, Expr *pExpr, int target)
SQLITE_PRIVATE void sqlite3ExprCodeAtInit(
Parse *pParse,
Expr *pExpr,
int regDest,
u8 reusable
)
SQLITE_PRIVATE int sqlite3ExprCodeTemp(Parse *pParse, Expr *pExpr, int *pReg)
SQLITE_PRIVATE void sqlite3ExprCode(Parse *pParse, Expr *pExpr, int target)
SQLITE_PRIVATE void sqlite3ExprCodeFactorable(Parse *pParse, Expr *pExpr, int target)
SQLITE_PRIVATE void sqlite3ExprCodeAndCache(Parse *pParse, Expr *pExpr, int target)
SQLITE_PRIVATE void sqlite3TreeViewExpr(TreeView *pView, const Expr *pExpr, u8 moreToFollow)
SQLITE_PRIVATE void sqlite3TreeViewExprList(
TreeView *pView,
const ExprList *pList,
u8 moreToFollow,
const char *zLabel
)
SQLITE_PRIVATE int sqlite3ExprCodeExprList(
Parse *pParse,
ExprList *pList,
int target,
u8 flags
)
static void exprCodeBetween(
Parse *pParse,
Expr *pExpr,
int dest,
int jumpIfTrue,
int jumpIfNull
)
SQLITE_PRIVATE void sqlite3ExprIfTrue(Parse *pParse, Expr *pExpr, int dest, int jumpIfNull)
SQLITE_PRIVATE void sqlite3ExprIfFalse(Parse *pParse, Expr *pExpr, int dest, int jumpIfNull)
SQLITE_PRIVATE int sqlite3ExprCompare(Expr *pA, Expr *pB, int iTab)
SQLITE_PRIVATE int sqlite3ExprListCompare(ExprList *pA, ExprList *pB, int iTab)
SQLITE_PRIVATE int sqlite3ExprImpliesExpr(Expr *pE1, Expr *pE2, int iTab)
struct SrcCount ;
static int exprSrcCount(Walker *pWalker, Expr *pExpr)
SQLITE_PRIVATE int sqlite3FunctionUsesThisSrc(Expr *pExpr, SrcList *pSrcList)
static int addAggInfoColumn(sqlite3 *db, AggInfo *pInfo)
static int addAggInfoFunc(sqlite3 *db, AggInfo *pInfo)
static int analyzeAggregate(Walker *pWalker, Expr *pExpr)
static int analyzeAggregatesInSelect(Walker *pWalker, Select *pSelect)
SQLITE_PRIVATE void sqlite3ExprAnalyzeAggregates(NameContext *pNC, Expr *pExpr)
SQLITE_PRIVATE void sqlite3ExprAnalyzeAggList(NameContext *pNC, ExprList *pList)
SQLITE_PRIVATE int sqlite3GetTempReg(Parse *pParse)
SQLITE_PRIVATE void sqlite3ReleaseTempReg(Parse *pParse, int iReg)
SQLITE_PRIVATE int sqlite3GetTempRange(Parse *pParse, int nReg)
SQLITE_PRIVATE void sqlite3ReleaseTempRange(Parse *pParse, int iReg, int nReg)
SQLITE_PRIVATE void sqlite3ClearTempRegCache(Parse *pParse)
static void renameTableFunc(
sqlite3_context *context,
int NotUsed,
sqlite3_value **argv
)
static void renameParentFunc(
sqlite3_context *context,
int NotUsed,
sqlite3_value **argv
)
static void renameTriggerFunc(
sqlite3_context *context,
int NotUsed,
sqlite3_value **argv
)
SQLITE_PRIVATE void sqlite3AlterFunctions(void)
static char *whereOrName(sqlite3 *db, char *zWhere, char *zConstant)
#if !defined(SQLITE_OMIT_FOREIGN_KEY) && !defined(SQLITE_OMIT_TRIGGER)
static char *whereForeignKeys(Parse *pParse, Table *pTab)
static char *whereTempTriggers(Parse *pParse, Table *pTab)
static void reloadTableSchema(Parse *pParse, Table *pTab, const char *zName)
static int isSystemTable(Parse *pParse, const char *zName)
SQLITE_PRIVATE void sqlite3AlterRenameTable(
Parse *pParse,
SrcList *pSrc,
Token *pName
)
SQLITE_PRIVATE void sqlite3MinimumFileFormat(Parse *pParse, int iDb, int minFormat)
SQLITE_PRIVATE void sqlite3AlterFinishAddColumn(Parse *pParse, Token *pColDef)
SQLITE_PRIVATE void sqlite3AlterBeginAddColumn(Parse *pParse, SrcList *pSrc)
#if defined(SQLITE_ENABLE_STAT4)
# define IsStat4     1
# define IsStat3     0
#elif defined(SQLITE_ENABLE_STAT3)
# define IsStat4     0
# define IsStat3     1
# define IsStat4     0
# define IsStat3     0
# undef SQLITE_STAT4_SAMPLES
# define SQLITE_STAT4_SAMPLES 1
#define IsStat34    (IsStat3+IsStat4)
static void openStatTable(
Parse *pParse,
int iDb,
int iStatCur,
const char *zWhere,
const char *zWhereType
)
# define SQLITE_STAT4_SAMPLES 24
typedef struct Stat4Accum Stat4Accum;
typedef struct Stat4Sample Stat4Sample;
struct Stat4Sample ;
struct Stat4Accum ;
static void sampleClear(sqlite3 *db, Stat4Sample *p)
static void sampleSetRowid(sqlite3 *db, Stat4Sample *p, int n, const u8 *pData)
static void sampleSetRowidInt64(sqlite3 *db, Stat4Sample *p, i64 iRowid)
static void sampleCopy(Stat4Accum *p, Stat4Sample *pTo, Stat4Sample *pFrom)
static void stat4Destructor(void *pOld)
static void statInit(
sqlite3_context *context,
int argc,
sqlite3_value **argv
)
static const FuncDef statInitFuncdef = ;
static int sampleIsBetterPost(
Stat4Accum *pAccum,
Stat4Sample *pNew,
Stat4Sample *pOld
)
static int sampleIsBetter(
Stat4Accum *pAccum,
Stat4Sample *pNew,
Stat4Sample *pOld
)
static void sampleInsert(Stat4Accum *p, Stat4Sample *pNew, int nEqZero)
static void samplePushPrevious(Stat4Accum *p, int iChng)
static void statPush(
sqlite3_context *context,
int argc,
sqlite3_value **argv
)
static const FuncDef statPushFuncdef = ;
#define STAT_GET_STAT1 0
#define STAT_GET_ROWID 1
#define STAT_GET_NEQ   2
#define STAT_GET_NLT   3
#define STAT_GET_NDLT  4
static void statGet(
sqlite3_context *context,
int argc,
sqlite3_value **argv
)
static const FuncDef statGetFuncdef = ;
static void callStatGet(Vdbe *v, int regStat4, int iParam, int regOut)
static void analyzeOneTable(
Parse *pParse,
Table *pTab,
Index *pOnlyIdx,
int iStatCur,
int iMem,
int iTab
)
static void loadAnalysis(Parse *pParse, int iDb)
static void analyzeDatabase(Parse *pParse, int iDb)
static void analyzeTable(Parse *pParse, Table *pTab, Index *pOnlyIdx)
SQLITE_PRIVATE void sqlite3Analyze(Parse *pParse, Token *pName1, Token *pName2)
typedef struct analysisInfo analysisInfo;
struct analysisInfo ;
static void decodeIntArray(
char *zIntArray,
int nOut,
tRowcnt *aOut,
LogEst *aLog,
Index *pIndex
){
char *z = zIntArray;
int c;
int i;
tRowcnt v;
if( z==0 ) z = "";
assert( z!=0 );
for(i=0; *z && i<nOut; i++)
assert( pIndex!=0 );
static int analysisLoader(void *pData, int argc, char **argv, char **NotUsed)
SQLITE_PRIVATE void sqlite3DeleteIndexSamples(sqlite3 *db, Index *pIdx)
static void initAvgEq(Index *pIdx)
static Index *findIndexOrPrimaryKey(
sqlite3 *db,
const char *zName,
const char *zDb
)
static int loadStatTbl(
sqlite3 *db,
int bStat3,
const char *zSql1,
const char *zSql2,
const char *zDb
)
static int loadStat4(sqlite3 *db, const char *zDb)
SQLITE_PRIVATE int sqlite3AnalysisLoad(sqlite3 *db, int iDb)
static int resolveAttachExpr(NameContext *pName, Expr *pExpr)
static void attachFunc(
sqlite3_context *context,
int NotUsed,
sqlite3_value **argv
)
static void detachFunc(
sqlite3_context *context,
int NotUsed,
sqlite3_value **argv
)
static void codeAttach(
Parse *pParse,
int type,
FuncDef const *pFunc,
Expr *pAuthArg,
Expr *pFilename,
Expr *pDbname,
Expr *pKey
)
SQLITE_PRIVATE void sqlite3Detach(Parse *pParse, Expr *pDbname)
SQLITE_PRIVATE void sqlite3Attach(Parse *pParse, Expr *p, Expr *pDbname, Expr *pKey)
SQLITE_PRIVATE void sqlite3FixInit(
DbFixer *pFix,
Parse *pParse,
int iDb,
const char *zType,
const Token *pName
)
SQLITE_PRIVATE int sqlite3FixSrcList(
DbFixer *pFix,
SrcList *pList
)
#if !defined(SQLITE_OMIT_VIEW) || !defined(SQLITE_OMIT_TRIGGER)
SQLITE_PRIVATE int sqlite3FixSelect(
DbFixer *pFix,
Select *pSelect
)
SQLITE_PRIVATE int sqlite3FixExpr(
DbFixer *pFix,
Expr *pExpr
)
SQLITE_PRIVATE int sqlite3FixExprList(
DbFixer *pFix,
ExprList *pList
)
SQLITE_PRIVATE int sqlite3FixTriggerStep(
DbFixer *pFix,
TriggerStep *pStep
)
SQLITE_API int SQLITE_STDCALL sqlite3_set_authorizer(
sqlite3 *db,
int (*xAuth)(void*,int,const char*,const char*,const char*,const char*),
void *pArg
)
static void sqliteAuthBadReturnCode(Parse *pParse)
SQLITE_PRIVATE int sqlite3AuthReadCol(
Parse *pParse,
const char *zTab,
const char *zCol,
int iDb
)
SQLITE_PRIVATE void sqlite3AuthRead(
Parse *pParse,
Expr *pExpr,
Schema *pSchema,
SrcList *pTabList
)
SQLITE_PRIVATE int sqlite3AuthCheck(
Parse *pParse,
int code,
const char *zArg1,
const char *zArg2,
const char *zArg3
)
SQLITE_PRIVATE void sqlite3AuthContextPush(
Parse *pParse,
AuthContext *pContext,
const char *zContext
)
SQLITE_PRIVATE void sqlite3AuthContextPop(AuthContext *pContext)
SQLITE_PRIVATE void sqlite3BeginParse(Parse *pParse, int explainFlag)
struct TableLock ;
SQLITE_PRIVATE void sqlite3TableLock(
Parse *pParse,
int iDb,
int iTab,
u8 isWriteLock,
const char *zName
)
static void codeTableLocks(Parse *pParse)
#define codeTableLocks(x)
#if SQLITE_MAX_ATTACHED>30
SQLITE_PRIVATE int sqlite3DbMaskAllZero(yDbMask m)
SQLITE_PRIVATE void sqlite3FinishCoding(Parse *pParse)
SQLITE_PRIVATE void sqlite3NestedParse(Parse *pParse, const char *zFormat, ...)
#if SQLITE_USER_AUTHENTICATION
SQLITE_PRIVATE int sqlite3UserAuthTable(const char *zTable)
SQLITE_PRIVATE Table *sqlite3FindTable(sqlite3 *db, const char *zName, const char *zDatabase)
SQLITE_PRIVATE Table *sqlite3LocateTable(
Parse *pParse,
int isView,
const char *zName,
const char *zDbase
)
SQLITE_PRIVATE Table *sqlite3LocateTableItem(
Parse *pParse,
int isView,
struct SrcList_item *p
)
SQLITE_PRIVATE Index *sqlite3FindIndex(sqlite3 *db, const char *zName, const char *zDb)
static void freeIndex(sqlite3 *db, Index *p)
SQLITE_PRIVATE void sqlite3UnlinkAndDeleteIndex(sqlite3 *db, int iDb, const char *zIdxName)
SQLITE_PRIVATE void sqlite3CollapseDatabaseArray(sqlite3 *db)
SQLITE_PRIVATE void sqlite3ResetOneSchema(sqlite3 *db, int iDb)
SQLITE_PRIVATE void sqlite3ResetAllSchemasOfConnection(sqlite3 *db)
SQLITE_PRIVATE void sqlite3CommitInternalChanges(sqlite3 *db)
static void sqliteDeleteColumnNames(sqlite3 *db, Table *pTable)
SQLITE_PRIVATE void sqlite3DeleteTable(sqlite3 *db, Table *pTable)
SQLITE_PRIVATE void sqlite3UnlinkAndDeleteTable(sqlite3 *db, int iDb, const char *zTabName)
SQLITE_PRIVATE char *sqlite3NameFromToken(sqlite3 *db, Token *pName)
SQLITE_PRIVATE void sqlite3OpenMasterTable(Parse *p, int iDb)
SQLITE_PRIVATE int sqlite3FindDbName(sqlite3 *db, const char *zName)
SQLITE_PRIVATE int sqlite3FindDb(sqlite3 *db, Token *pName)
SQLITE_PRIVATE int sqlite3TwoPartName(
Parse *pParse,
Token *pName1,
Token *pName2,
Token **pUnqual
)
SQLITE_PRIVATE int sqlite3CheckObjectName(Parse *pParse, const char *zName)
SQLITE_PRIVATE Index *sqlite3PrimaryKeyIndex(Table *pTab)
SQLITE_PRIVATE i16 sqlite3ColumnOfIndex(Index *pIdx, i16 iCol)
SQLITE_PRIVATE void sqlite3StartTable(
Parse *pParse,
Token *pName1,
Token *pName2,
int isTemp,
int isView,
int isVirtual,
int noErr
)
#define STRICMP(x, y) (\
sqlite3UpperToLower[*(unsigned char *)(x)]==   \
sqlite3UpperToLower[*(unsigned char *)(y)]     \
&& sqlite3StrICmp((x)+1,(y)+1)==0 )
SQLITE_PRIVATE void sqlite3AddColumn(Parse *pParse, Token *pName)
SQLITE_PRIVATE void sqlite3AddNotNull(Parse *pParse, int onError)
SQLITE_PRIVATE char sqlite3AffinityType(const char *zIn, u8 *pszEst)
SQLITE_PRIVATE void sqlite3AddColumnType(Parse *pParse, Token *pType)
SQLITE_PRIVATE void sqlite3AddDefaultValue(Parse *pParse, ExprSpan *pSpan)
SQLITE_PRIVATE void sqlite3AddPrimaryKey(
Parse *pParse,
ExprList *pList,
int onError,
int autoInc,
int sortOrder
)
SQLITE_PRIVATE void sqlite3AddCheckConstraint(
Parse *pParse,
Expr *pCheckExpr
)
SQLITE_PRIVATE void sqlite3AddCollateType(Parse *pParse, Token *pToken)
SQLITE_PRIVATE CollSeq *sqlite3LocateCollSeq(Parse *pParse, const char *zName)
SQLITE_PRIVATE void sqlite3ChangeCookie(Parse *pParse, int iDb)
static int identLength(const char *z)
static void identPut(char *z, int *pIdx, char *zSignedIdent)
static char *createTableStmt(sqlite3 *db, Table *p)
static int resizeIndexObject(sqlite3 *db, Index *pIdx, int N)
static void estimateTableWidth(Table *pTab)
static void estimateIndexWidth(Index *pIdx)
static int hasColumn(const i16 *aiCol, int nCol, int x)
static void convertToWithoutRowidTable(Parse *pParse, Table *pTab)
SQLITE_PRIVATE void sqlite3EndTable(
Parse *pParse,
Token *pCons,
Token *pEnd,
u8 tabOpts,
Select *pSelect
)
SQLITE_PRIVATE void sqlite3CreateView(
Parse *pParse,
Token *pBegin,
Token *pName1,
Token *pName2,
Select *pSelect,
int isTemp,
int noErr
)
#if !defined(SQLITE_OMIT_VIEW) || !defined(SQLITE_OMIT_VIRTUALTABLE)
SQLITE_PRIVATE int sqlite3ViewGetColumnNames(Parse *pParse, Table *pTable)
static void sqliteViewResetAll(sqlite3 *db, int idx)
# define sqliteViewResetAll(A,B)
SQLITE_PRIVATE void sqlite3RootPageMoved(sqlite3 *db, int iDb, int iFrom, int iTo)
static void destroyRootPage(Parse *pParse, int iTable, int iDb)
static void destroyTable(Parse *pParse, Table *pTab)
static void sqlite3ClearStatTables(
Parse *pParse,
int iDb,
const char *zType,
const char *zName
)
SQLITE_PRIVATE void sqlite3CodeDropTable(Parse *pParse, Table *pTab, int iDb, int isView)
SQLITE_PRIVATE void sqlite3DropTable(Parse *pParse, SrcList *pName, int isView, int noErr)
SQLITE_PRIVATE void sqlite3CreateForeignKey(
Parse *pParse,
ExprList *pFromCol,
Token *pTo,
ExprList *pToCol,
int flags
)
SQLITE_PRIVATE void sqlite3DeferForeignKey(Parse *pParse, int isDeferred)
static void sqlite3RefillIndex(Parse *pParse, Index *pIndex, int memRootPage)
SQLITE_PRIVATE Index *sqlite3AllocateIndexObject(
sqlite3 *db,
i16 nCol,
int nExtra,
char **ppExtra
)
SQLITE_PRIVATE Index *sqlite3CreateIndex(
Parse *pParse,
Token *pName1,
Token *pName2,
SrcList *pTblName,
ExprList *pList,
int onError,
Token *pStart,
Expr *pPIWhere,
int sortOrder,
int ifNotExist
)
SQLITE_PRIVATE void sqlite3DefaultRowEst(Index *pIdx)
SQLITE_PRIVATE void sqlite3DropIndex(Parse *pParse, SrcList *pName, int ifExists)
SQLITE_PRIVATE void *sqlite3ArrayAllocate(
sqlite3 *db,
void *pArray,
int szEntry,
int *pnEntry,
int *pIdx
)
SQLITE_PRIVATE IdList *sqlite3IdListAppend(sqlite3 *db, IdList *pList, Token *pToken)
SQLITE_PRIVATE void sqlite3IdListDelete(sqlite3 *db, IdList *pList)
SQLITE_PRIVATE int sqlite3IdListIndex(IdList *pList, const char *zName)
SQLITE_PRIVATE SrcList *sqlite3SrcListEnlarge(
sqlite3 *db,
SrcList *pSrc,
int nExtra,
int iStart
)
SQLITE_PRIVATE SrcList *sqlite3SrcListAppend(
sqlite3 *db,
SrcList *pList,
Token *pTable,
Token *pDatabase
)
SQLITE_PRIVATE void sqlite3SrcListAssignCursors(Parse *pParse, SrcList *pList)
SQLITE_PRIVATE void sqlite3SrcListDelete(sqlite3 *db, SrcList *pList)
SQLITE_PRIVATE SrcList *sqlite3SrcListAppendFromTerm(
Parse *pParse,
SrcList *p,
Token *pTable,
Token *pDatabase,
Token *pAlias,
Select *pSubquery,
Expr *pOn,
IdList *pUsing
)
SQLITE_PRIVATE void sqlite3SrcListIndexedBy(Parse *pParse, SrcList *p, Token *pIndexedBy)
SQLITE_PRIVATE void sqlite3SrcListShiftJoinType(SrcList *p)
SQLITE_PRIVATE void sqlite3BeginTransaction(Parse *pParse, int type)
SQLITE_PRIVATE void sqlite3CommitTransaction(Parse *pParse)
SQLITE_PRIVATE void sqlite3RollbackTransaction(Parse *pParse)
SQLITE_PRIVATE void sqlite3Savepoint(Parse *pParse, int op, Token *pName)
SQLITE_PRIVATE int sqlite3OpenTempDatabase(Parse *pParse)
SQLITE_PRIVATE void sqlite3CodeVerifySchema(Parse *pParse, int iDb)
SQLITE_PRIVATE void sqlite3CodeVerifyNamedSchema(Parse *pParse, const char *zDb)
SQLITE_PRIVATE void sqlite3BeginWriteOperation(Parse *pParse, int setStatement, int iDb)
SQLITE_PRIVATE void sqlite3MultiWrite(Parse *pParse)
SQLITE_PRIVATE void sqlite3MayAbort(Parse *pParse)
SQLITE_PRIVATE void sqlite3HaltConstraint(
Parse *pParse,
int errCode,
int onError,
char *p4,
i8 p4type,
u8 p5Errmsg
)
SQLITE_PRIVATE void sqlite3UniqueConstraint(
Parse *pParse,
int onError,
Index *pIdx
)
SQLITE_PRIVATE void sqlite3RowidConstraint(
Parse *pParse,
int onError,
Table *pTab
)
static int collationMatch(const char *zColl, Index *pIndex)
static void reindexTable(Parse *pParse, Table *pTab, char const *zColl)
static void reindexDatabases(Parse *pParse, char const *zColl)
SQLITE_PRIVATE void sqlite3Reindex(Parse *pParse, Token *pName1, Token *pName2)
SQLITE_PRIVATE KeyInfo *sqlite3KeyInfoOfIndex(Parse *pParse, Index *pIdx)
SQLITE_PRIVATE With *sqlite3WithAdd(
Parse *pParse,
With *pWith,
Token *pName,
ExprList *pArglist,
Select *pQuery
)
SQLITE_PRIVATE void sqlite3WithDelete(sqlite3 *db, With *pWith)
static void callCollNeeded(sqlite3 *db, int enc, const char *zName)
static int synthCollSeq(sqlite3 *db, CollSeq *pColl)
SQLITE_PRIVATE CollSeq *sqlite3GetCollSeq(
Parse *pParse,
u8 enc,
CollSeq *pColl,
const char *zName
)
SQLITE_PRIVATE int sqlite3CheckCollSeq(Parse *pParse, CollSeq *pColl)
static CollSeq *findCollSeqEntry(
sqlite3 *db,
const char *zName,
int create
)
SQLITE_PRIVATE CollSeq *sqlite3FindCollSeq(
sqlite3 *db,
u8 enc,
const char *zName,
int create
)
#define FUNC_PERFECT_MATCH 6
static int matchQuality(
FuncDef *p,
int nArg,
u8 enc
)
static FuncDef *functionSearch(
FuncDefHash *pHash,
int h,
const char *zFunc,
int nFunc
)
SQLITE_PRIVATE void sqlite3FuncDefInsert(
FuncDefHash *pHash,
FuncDef *pDef
)
SQLITE_PRIVATE FuncDef *sqlite3FindFunction(
sqlite3 *db,
const char *zName,
int nName,
int nArg,
u8 enc,
u8 createFlag
)
SQLITE_PRIVATE void sqlite3SchemaClear(void *p)
SQLITE_PRIVATE Schema *sqlite3SchemaGet(sqlite3 *db, Btree *pBt)
SQLITE_PRIVATE Table *sqlite3SrcListLookup(Parse *pParse, SrcList *pSrc)
SQLITE_PRIVATE int sqlite3IsReadOnly(Parse *pParse, Table *pTab, int viewOk)
#if !defined(SQLITE_OMIT_VIEW) && !defined(SQLITE_OMIT_TRIGGER)
SQLITE_PRIVATE void sqlite3MaterializeView(
Parse *pParse,
Table *pView,
Expr *pWhere,
int iCur
)
#if defined(SQLITE_ENABLE_UPDATE_DELETE_LIMIT) && !defined(SQLITE_OMIT_SUBQUERY)
SQLITE_PRIVATE Expr *sqlite3LimitWhere(
Parse *pParse,
SrcList *pSrc,
Expr *pWhere,
ExprList *pOrderBy,
Expr *pLimit,
Expr *pOffset,
char *zStmtType
)
SQLITE_PRIVATE void sqlite3DeleteFrom(
Parse *pParse,
SrcList *pTabList,
Expr *pWhere
)
#undef isView
#undef pTrigger
SQLITE_PRIVATE void sqlite3GenerateRowDelete(
Parse *pParse,
Table *pTab,
Trigger *pTrigger,
int iDataCur,
int iIdxCur,
int iPk,
i16 nPk,
u8 count,
u8 onconf,
u8 bNoSeek
)
SQLITE_PRIVATE void sqlite3GenerateRowIndexDelete(
Parse *pParse,
Table *pTab,
int iDataCur,
int iIdxCur,
int *aRegIdx
)
SQLITE_PRIVATE int sqlite3GenerateIndexKey(
Parse *pParse,
Index *pIdx,
int iDataCur,
int regOut,
int prefixOnly,
int *piPartIdxLabel,
Index *pPrior,
int regPrior
)
SQLITE_PRIVATE void sqlite3ResolvePartIdxLabel(Parse *pParse, int iLabel)
static CollSeq *sqlite3GetFuncCollSeq(sqlite3_context *context)
static void sqlite3SkipAccumulatorLoad(sqlite3_context *context)
static void minmaxFunc(
sqlite3_context *context,
int argc,
sqlite3_value **argv
)
static void typeofFunc(
sqlite3_context *context,
int NotUsed,
sqlite3_value **argv
)
static void lengthFunc(
sqlite3_context *context,
int argc,
sqlite3_value **argv
)
static void absFunc(sqlite3_context *context, int argc, sqlite3_value **argv)
static void instrFunc(
sqlite3_context *context,
int argc,
sqlite3_value **argv
)
static void printfFunc(
sqlite3_context *context,
int argc,
sqlite3_value **argv
)
static void substrFunc(
sqlite3_context *context,
int argc,
sqlite3_value **argv
)
static int openDatabase(
const char *zFilename,
sqlite3 **ppDb,
unsigned int flags,
const char *zVfs
)
SQLITE_API int SQLITE_STDCALL sqlite3_open(
const char *zFilename,
sqlite3 **ppDb
)
SQLITE_API int SQLITE_STDCALL sqlite3_open_v2(
const char *filename,
sqlite3 **ppDb,
int flags,
const char *zVfs
)
SQLITE_API int SQLITE_STDCALL sqlite3_open16(
const void *zFilename,
sqlite3 **ppDb
)
SQLITE_API int SQLITE_STDCALL sqlite3_create_collation(
sqlite3* db,
const char *zName,
int enc,
void* pCtx,
int(*xCompare)(void*,int,const void*,int,const void*)
)
SQLITE_API int SQLITE_STDCALL sqlite3_create_collation_v2(
sqlite3* db,
const char *zName,
int enc,
void* pCtx,
int(*xCompare)(void*,int,const void*,int,const void*),
void(*xDel)(void*)
)
SQLITE_API int SQLITE_STDCALL sqlite3_create_collation16(
sqlite3* db,
const void *zName,
int enc,
void* pCtx,
int(*xCompare)(void*,int,const void*,int,const void*)
)
SQLITE_API int SQLITE_STDCALL sqlite3_collation_needed(
sqlite3 *db,
void *pCollNeededArg,
void(*xCollNeeded)(void*,sqlite3*,int eTextRep,const char*)
)
SQLITE_API int SQLITE_STDCALL sqlite3_collation_needed16(
sqlite3 *db,
void *pCollNeededArg,
void(*xCollNeeded16)(void*,sqlite3*,int eTextRep,const void*)
)
SQLITE_API int SQLITE_STDCALL sqlite3_global_recover(void)
SQLITE_API int SQLITE_STDCALL sqlite3_get_autocommit(sqlite3 *db)
SQLITE_PRIVATE int sqlite3CorruptError(int lineno)
SQLITE_PRIVATE int sqlite3MisuseError(int lineno)
SQLITE_PRIVATE int sqlite3CantopenError(int lineno)
SQLITE_API void SQLITE_STDCALL sqlite3_thread_cleanup(void)
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
)
SQLITE_API int SQLITE_STDCALL sqlite3_sleep(int ms)
SQLITE_API int SQLITE_STDCALL sqlite3_extended_result_codes(sqlite3 *db, int onoff)
SQLITE_API int SQLITE_STDCALL sqlite3_file_control(sqlite3 *db, const char *zDbName, int op, void *pArg)
SQLITE_API int SQLITE_CDECL sqlite3_test_control(int op, ...)
SQLITE_API const char *SQLITE_STDCALL sqlite3_uri_parameter(const char *zFilename, const char *zParam)
SQLITE_API int SQLITE_STDCALL sqlite3_uri_boolean(const char *zFilename, const char *zParam, int bDflt)
SQLITE_API sqlite3_int64 SQLITE_STDCALL sqlite3_uri_int64(
const char *zFilename,
const char *zParam,
sqlite3_int64 bDflt
)
SQLITE_PRIVATE Btree *sqlite3DbNameToBtree(sqlite3 *db, const char *zDbName)
SQLITE_API const char *SQLITE_STDCALL sqlite3_db_filename(sqlite3 *db, const char *zDbName)
SQLITE_API int SQLITE_STDCALL sqlite3_db_readonly(sqlite3 *db, const char *zDbName)
#define assertMutexHeld() \
assert( sqlite3_mutex_held(sqlite3MutexAlloc(SQLITE_MUTEX_STATIC_MASTER)) )
static sqlite3 *SQLITE_WSD sqlite3BlockedList = 0;
static void checkListProperties(sqlite3 *db)
# define checkListProperties(x)
static void removeFromBlockedList(sqlite3 *db)
static void addToBlockedList(sqlite3 *db)
static void enterMutex(void)
static void leaveMutex(void)
SQLITE_API int SQLITE_STDCALL sqlite3_unlock_notify(
sqlite3 *db,
void (*xNotify)(void **, int),
void *pArg
)
SQLITE_PRIVATE void sqlite3ConnectionBlocked(sqlite3 *db, sqlite3 *pBlocker)
SQLITE_PRIVATE void sqlite3ConnectionUnlocked(sqlite3 *db)
SQLITE_PRIVATE void sqlite3ConnectionClosed(sqlite3 *db)
#define _FTSINT_H
#if !defined(NDEBUG) && !defined(SQLITE_DEBUG)
# define NDEBUG 1
#if defined(SQLITE_ENABLE_FTS4) && !defined(SQLITE_ENABLE_FTS3)
# define SQLITE_ENABLE_FTS3
#if !defined(SQLITE_CORE) || defined(SQLITE_ENABLE_FTS3)
SQLITE_EXTENSION_INIT3
#define _FTS3_TOKENIZER_H_
typedef struct sqlite3_tokenizer_module sqlite3_tokenizer_module;
typedef struct sqlite3_tokenizer sqlite3_tokenizer;
typedef struct sqlite3_tokenizer_cursor sqlite3_tokenizer_cursor;
struct sqlite3_tokenizer_module ;
struct sqlite3_tokenizer ;
struct sqlite3_tokenizer_cursor ;
int fts3_global_term_cnt(int iTerm, int iCol);
int fts3_term_cnt(int iTerm, int iCol);
#define _FTS3_HASH_H_
typedef struct Fts3Hash Fts3Hash;
typedef struct Fts3HashElem Fts3HashElem;
struct Fts3Hash ;
struct Fts3HashElem ;
#define FTS3_HASH_STRING    1
#define FTS3_HASH_BINARY    2
SQLITE_PRIVATE void sqlite3Fts3HashInit(Fts3Hash *pNew, char keyClass, char copyKey);
SQLITE_PRIVATE void *sqlite3Fts3HashInsert(Fts3Hash*, const void *pKey, int nKey, void *pData);
SQLITE_PRIVATE void *sqlite3Fts3HashFind(const Fts3Hash*, const void *pKey, int nKey);
SQLITE_PRIVATE void sqlite3Fts3HashClear(Fts3Hash*);
SQLITE_PRIVATE Fts3HashElem *sqlite3Fts3HashFindElem(const Fts3Hash *, const void *, int);
#define fts3HashInit     sqlite3Fts3HashInit
#define fts3HashInsert   sqlite3Fts3HashInsert
#define fts3HashFind     sqlite3Fts3HashFind
#define fts3HashClear    sqlite3Fts3HashClear
#define fts3HashFindElem sqlite3Fts3HashFindElem
#define fts3HashFirst(H)  ((H)->first)
#define fts3HashNext(E)   ((E)->next)
#define fts3HashData(E)   ((E)->data)
#define fts3HashKey(E)    ((E)->pKey)
#define fts3HashKeysize(E) ((E)->nKey)
#define fts3HashCount(H)  ((H)->count)
# define SQLITE_FTS3_MAX_EXPR_DEPTH 12
#define FTS3_MERGE_COUNT 16
#define FTS3_MAX_PENDING_DATA (1*1024*1024)
#define SizeofArray(X) ((int)(sizeof(X)/sizeof(X[0])))
# define MIN(x,y) ((x)<(y)?(x):(y))
# define MAX(x,y) ((x)>(y)?(x):(y))
#define FTS3_VARINT_MAX 10
#define FTS3_SEGDIR_MAXLEVEL      1024
#define FTS3_SEGDIR_MAXLEVEL_STR "1024"
# define testcase(X)
#define POS_COLUMN  (1)
#define POS_END     (0)
# define ALWAYS(x) (1)
# define NEVER(X)  (0)
#elif defined(SQLITE_DEBUG)
# define ALWAYS(x) sqlite3Fts3Always((x)!=0)
# define NEVER(x) sqlite3Fts3Never((x)!=0)
SQLITE_PRIVATE int sqlite3Fts3Always(int b);
SQLITE_PRIVATE int sqlite3Fts3Never(int b);
# define ALWAYS(x) (x)
# define NEVER(x)  (x)
typedef unsigned char u8;
typedef short int i16;
typedef unsigned int u32;
typedef sqlite3_uint64 u64;
typedef sqlite3_int64 i64;
#define UNUSED_PARAMETER(x) (void)(x)
#if !defined(NDEBUG) && !defined(SQLITE_DEBUG)
# define NDEBUG 1
#if defined(SQLITE_DEBUG) || defined(SQLITE_COVERAGE_TEST)
# define TESTONLY(X)  X
# define TESTONLY(X)
SQLITE_PRIVATE int sqlite3Fts3Corrupt(void);
# define FTS_CORRUPT_VTAB sqlite3Fts3Corrupt()
# define FTS_CORRUPT_VTAB SQLITE_CORRUPT_VTAB
typedef struct Fts3Table Fts3Table;
typedef struct Fts3Cursor Fts3Cursor;
typedef struct Fts3Expr Fts3Expr;
typedef struct Fts3Phrase Fts3Phrase;
typedef struct Fts3PhraseToken Fts3PhraseToken;
typedef struct Fts3Doclist Fts3Doclist;
typedef struct Fts3SegFilter Fts3SegFilter;
typedef struct Fts3DeferredToken Fts3DeferredToken;
typedef struct Fts3SegReader Fts3SegReader;
typedef struct Fts3MultiSegReader Fts3MultiSegReader;
struct Fts3Table ;
struct Fts3Cursor ;
#define FTS3_EVAL_FILTER    0
#define FTS3_EVAL_NEXT      1
#define FTS3_EVAL_MATCHINFO 2
#define FTS3_FULLSCAN_SEARCH 0
#define FTS3_DOCID_SEARCH    1
#define FTS3_FULLTEXT_SEARCH 2
#define FTS3_HAVE_LANGID    0x00010000
#define FTS3_HAVE_DOCID_GE  0x00020000
#define FTS3_HAVE_DOCID_LE  0x00040000
struct Fts3Doclist ;
struct Fts3PhraseToken ;
struct Fts3Phrase ;
struct Fts3Expr ;
#define FTSQUERY_NEAR   1
#define FTSQUERY_NOT    2
#define FTSQUERY_AND    3
#define FTSQUERY_OR     4
#define FTSQUERY_PHRASE 5
SQLITE_PRIVATE int sqlite3Fts3UpdateMethod(sqlite3_vtab*,int,sqlite3_value**,sqlite3_int64*);
SQLITE_PRIVATE int sqlite3Fts3PendingTermsFlush(Fts3Table *);
SQLITE_PRIVATE void sqlite3Fts3PendingTermsClear(Fts3Table *);
SQLITE_PRIVATE int sqlite3Fts3Optimize(Fts3Table *);
SQLITE_PRIVATE int sqlite3Fts3SegReaderNew(int, int, sqlite3_int64,
sqlite3_int64, sqlite3_int64, const char *, int, Fts3SegReader**);
SQLITE_PRIVATE int sqlite3Fts3SegReaderPending(
Fts3Table*,int,const char*,int,int,Fts3SegReader**);
SQLITE_PRIVATE void sqlite3Fts3SegReaderFree(Fts3SegReader *);
SQLITE_PRIVATE int sqlite3Fts3AllSegdirs(Fts3Table*, int, int, int, sqlite3_stmt **);
SQLITE_PRIVATE int sqlite3Fts3ReadBlock(Fts3Table*, sqlite3_int64, char **, int*, int*);
SQLITE_PRIVATE int sqlite3Fts3SelectDoctotal(Fts3Table *, sqlite3_stmt **);
SQLITE_PRIVATE int sqlite3Fts3SelectDocsize(Fts3Table *, sqlite3_int64, sqlite3_stmt **);
SQLITE_PRIVATE void sqlite3Fts3FreeDeferredTokens(Fts3Cursor *);
SQLITE_PRIVATE int sqlite3Fts3DeferToken(Fts3Cursor *, Fts3PhraseToken *, int);
SQLITE_PRIVATE int sqlite3Fts3CacheDeferredDoclists(Fts3Cursor *);
SQLITE_PRIVATE void sqlite3Fts3FreeDeferredDoclists(Fts3Cursor *);
SQLITE_PRIVATE int sqlite3Fts3DeferredTokenList(Fts3DeferredToken *, char **, int *);
# define sqlite3Fts3FreeDeferredTokens(x)
# define sqlite3Fts3DeferToken(x,y,z) SQLITE_OK
# define sqlite3Fts3CacheDeferredDoclists(x) SQLITE_OK
# define sqlite3Fts3FreeDeferredDoclists(x)
# define sqlite3Fts3DeferredTokenList(x,y,z) SQLITE_OK
SQLITE_PRIVATE void sqlite3Fts3SegmentsClose(Fts3Table *);
SQLITE_PRIVATE int sqlite3Fts3MaxLevel(Fts3Table *, int *);
#define FTS3_SEGCURSOR_PENDING        -1
#define FTS3_SEGCURSOR_ALL            -2
SQLITE_PRIVATE int sqlite3Fts3SegReaderStart(Fts3Table*, Fts3MultiSegReader*, Fts3SegFilter*);
SQLITE_PRIVATE int sqlite3Fts3SegReaderStep(Fts3Table *, Fts3MultiSegReader *);
SQLITE_PRIVATE void sqlite3Fts3SegReaderFinish(Fts3MultiSegReader *);
SQLITE_PRIVATE int sqlite3Fts3SegReaderCursor(Fts3Table *,
int, int, int, const char *, int, int, int, Fts3MultiSegReader *);
#define FTS3_SEGMENT_REQUIRE_POS   0x00000001
#define FTS3_SEGMENT_IGNORE_EMPTY  0x00000002
#define FTS3_SEGMENT_COLUMN_FILTER 0x00000004
#define FTS3_SEGMENT_PREFIX        0x00000008
#define FTS3_SEGMENT_SCAN          0x00000010
#define FTS3_SEGMENT_FIRST         0x00000020
struct Fts3SegFilter ;
struct Fts3MultiSegReader ;
SQLITE_PRIVATE int sqlite3Fts3Incrmerge(Fts3Table*,int,int);
#define fts3GetVarint32(p, piVal) (                                           \
(*(u8*)(p)&0x80) ? sqlite3Fts3GetVarint32(p, piVal) : (*piVal=*(u8*)(p), 1) \
)
SQLITE_PRIVATE void sqlite3Fts3ErrMsg(char**,const char*,...);
SQLITE_PRIVATE int sqlite3Fts3PutVarint(char *, sqlite3_int64);
SQLITE_PRIVATE int sqlite3Fts3GetVarint(const char *, sqlite_int64 *);
SQLITE_PRIVATE int sqlite3Fts3GetVarint32(const char *, int *);
SQLITE_PRIVATE int sqlite3Fts3VarintLen(sqlite3_uint64);
SQLITE_PRIVATE void sqlite3Fts3Dequote(char *);
SQLITE_PRIVATE void sqlite3Fts3DoclistPrev(int,char*,int,char**,sqlite3_int64*,int*,u8*);
SQLITE_PRIVATE int sqlite3Fts3EvalPhraseStats(Fts3Cursor *, Fts3Expr *, u32 *);
SQLITE_PRIVATE int sqlite3Fts3FirstFilter(sqlite3_int64, char *, int, char *);
SQLITE_PRIVATE void sqlite3Fts3CreateStatTable(int*, Fts3Table*);
SQLITE_PRIVATE const char *sqlite3Fts3NextToken(const char *, int *);
SQLITE_PRIVATE int sqlite3Fts3InitHashTable(sqlite3 *, Fts3Hash *, const char *);
SQLITE_PRIVATE int sqlite3Fts3InitTokenizer(Fts3Hash *pHash, const char *,
sqlite3_tokenizer **, char **
);
SQLITE_PRIVATE int sqlite3Fts3IsIdChar(char);
SQLITE_PRIVATE void sqlite3Fts3Offsets(sqlite3_context*, Fts3Cursor*);
SQLITE_PRIVATE void sqlite3Fts3Snippet(sqlite3_context *, Fts3Cursor *, const char *,
const char *, const char *, int, int
);
SQLITE_PRIVATE void sqlite3Fts3Matchinfo(sqlite3_context *, Fts3Cursor *, const char *);
SQLITE_PRIVATE int sqlite3Fts3ExprParse(sqlite3_tokenizer *, int,
char **, int, int, int, const char *, int, Fts3Expr **, char **
);
SQLITE_PRIVATE void sqlite3Fts3ExprFree(Fts3Expr *);
SQLITE_PRIVATE int sqlite3Fts3ExprInitTestInterface(sqlite3 *db);
SQLITE_PRIVATE int sqlite3Fts3InitTerm(sqlite3 *db);
SQLITE_PRIVATE int sqlite3Fts3OpenTokenizer(sqlite3_tokenizer *, int, const char *, int,
sqlite3_tokenizer_cursor **
);
SQLITE_PRIVATE int sqlite3Fts3InitAux(sqlite3 *db);
SQLITE_PRIVATE void sqlite3Fts3EvalPhraseCleanup(Fts3Phrase *);
SQLITE_PRIVATE int sqlite3Fts3MsrIncrStart(
Fts3Table*, Fts3MultiSegReader*, int, const char*, int);
SQLITE_PRIVATE int sqlite3Fts3MsrIncrNext(
Fts3Table *, Fts3MultiSegReader *, sqlite3_int64 *, char **, int *);
SQLITE_PRIVATE int sqlite3Fts3EvalPhrasePoslist(Fts3Cursor *, Fts3Expr *, int iCol, char **);
SQLITE_PRIVATE int sqlite3Fts3MsrOvfl(Fts3Cursor *, Fts3MultiSegReader *, int *);
SQLITE_PRIVATE int sqlite3Fts3MsrIncrRestart(Fts3MultiSegReader *pCsr);
SQLITE_PRIVATE int sqlite3Fts3InitTok(sqlite3*, Fts3Hash *);
SQLITE_PRIVATE int sqlite3FtsUnicodeFold(int, int);
SQLITE_PRIVATE int sqlite3FtsUnicodeIsalnum(int);
SQLITE_PRIVATE int sqlite3FtsUnicodeIsdiacritic(int);
#if !defined(SQLITE_CORE) || defined(SQLITE_ENABLE_FTS3)
#if defined(SQLITE_ENABLE_FTS3) && !defined(SQLITE_CORE)
# define SQLITE_CORE 1
SQLITE_EXTENSION_INIT1
static int fts3EvalNext(Fts3Cursor *pCsr);
static int fts3EvalStart(Fts3Cursor *pCsr);
static int fts3TermSegReaderCursor(
Fts3Cursor *, const char *, int, int, Fts3MultiSegReader **);
# if defined(SQLITE_DEBUG)
SQLITE_PRIVATE int sqlite3Fts3Always(int b)
SQLITE_PRIVATE int sqlite3Fts3Never(int b)
# endif
SQLITE_PRIVATE int sqlite3Fts3PutVarint(char *p, sqlite_int64 v)
#define GETVARINT_STEP(v, ptr, shift, mask1, mask2, var, ret) \
v = (v & mask1) | ( (*ptr++) << shift );                    \
if( (v & mask2)==0 )
#define GETVARINT_INIT(v, ptr, shift, mask1, mask2, var, ret) \
v = (*ptr++);                                               \
if( (v & mask2)==0 )
SQLITE_PRIVATE int sqlite3Fts3GetVarint(const char *p, sqlite_int64 *v)
SQLITE_PRIVATE int sqlite3Fts3GetVarint32(const char *p, int *pi)
SQLITE_PRIVATE int sqlite3Fts3VarintLen(sqlite3_uint64 v)
SQLITE_PRIVATE void sqlite3Fts3Dequote(char *z)
static void fts3GetDeltaVarint(char **pp, sqlite3_int64 *pVal)
static void fts3GetReverseVarint(
char **pp,
char *pStart,
sqlite3_int64 *pVal
)
static int fts3DisconnectMethod(sqlite3_vtab *pVtab)
SQLITE_PRIVATE void sqlite3Fts3ErrMsg(char **pzErr, const char *zFormat, ...)
static void fts3DbExec(
int *pRc,
sqlite3 *db,
const char *zFormat,
...
)
static int fts3DestroyMethod(sqlite3_vtab *pVtab)
static void fts3DeclareVtab(int *pRc, Fts3Table *p)
SQLITE_PRIVATE void sqlite3Fts3CreateStatTable(int *pRc, Fts3Table *p)
static int fts3CreateTables(Fts3Table *p)
static void fts3DatabasePageSize(int *pRc, Fts3Table *p)
static int fts3IsSpecialColumn(
const char *z,
int *pnKey,
char **pzValue
)
static void fts3Appendf(
int *pRc,
char **pz,
const char *zFormat,
...
)
static char *fts3QuoteId(char const *zInput)
static char *fts3ReadExprList(Fts3Table *p, const char *zFunc, int *pRc)
static char *fts3WriteExprList(Fts3Table *p, const char *zFunc, int *pRc)
static int fts3GobbleInt(const char **pp, int *pnOut)
static int fts3PrefixParameter(
const char *zParam,
int *pnIndex,
struct Fts3Index **apIndex
)
static int fts3ContentColumns(
sqlite3 *db,
const char *zDb,
const char *zTbl,
const char ***pazCol,
int *pnCol,
int *pnStr,
char **pzErr
)
static int fts3InitVtab(
int isCreate,
sqlite3 *db,
void *pAux,
int argc,
const char * const *argv,
sqlite3_vtab **ppVTab,
char **pzErr
)
static int fts3ConnectMethod(
sqlite3 *db,
void *pAux,
int argc,
const char * const *argv,
sqlite3_vtab **ppVtab,
char **pzErr
)
static int fts3CreateMethod(
sqlite3 *db,
void *pAux,
int argc,
const char * const *argv,
sqlite3_vtab **ppVtab,
char **pzErr
)
static void fts3SetEstimatedRows(sqlite3_index_info *pIdxInfo, i64 nRow)
static int fts3BestIndexMethod(sqlite3_vtab *pVTab, sqlite3_index_info *pInfo)
static int fts3OpenMethod(sqlite3_vtab *pVTab, sqlite3_vtab_cursor **ppCsr)
static int fts3CloseMethod(sqlite3_vtab_cursor *pCursor)
static int fts3CursorSeekStmt(Fts3Cursor *pCsr, sqlite3_stmt **ppStmt)
static int fts3CursorSeek(sqlite3_context *pContext, Fts3Cursor *pCsr)
static int fts3ScanInteriorNode(
const char *zTerm,
int nTerm,
const char *zNode,
int nNode,
sqlite3_int64 *piFirst,
sqlite3_int64 *piLast
)
static int fts3SelectLeaf(
Fts3Table *p,
const char *zTerm,
int nTerm,
const char *zNode,
int nNode,
sqlite3_int64 *piLeaf,
sqlite3_int64 *piLeaf2
)
static void fts3PutDeltaVarint(
char **pp,
sqlite3_int64 *piPrev,
sqlite3_int64 iVal
)
static void fts3PoslistCopy(char **pp, char **ppPoslist)
static void fts3ColumnlistCopy(char **pp, char **ppPoslist)
#define POSITION_LIST_END 0x7fffffff
static void fts3ReadNextPos(
char **pp,
sqlite3_int64 *pi
)
static int fts3PutColNumber(char **pp, int iCol)
static void fts3PoslistMerge(
char **pp,
char **pp1,
char **pp2
)
static int fts3PoslistPhraseMerge(
char **pp,
int nToken,
int isSaveLeft,
int isExact,
char **pp1,
char **pp2
)
static int fts3PoslistNearMerge(
char **pp,
char *aTmp,
int nRight,
int nLeft,
char **pp1,
char **pp2
)
typedef struct TermSelect TermSelect;
struct TermSelect ;
static void fts3GetDeltaVarint3(
char **pp,
char *pEnd,
int bDescIdx,
sqlite3_int64 *pVal
)
static void fts3PutDeltaVarint3(
char **pp,
int bDescIdx,
sqlite3_int64 *piPrev,
int *pbFirst,
sqlite3_int64 iVal
)
#define DOCID_CMP(i1, i2) ((bDescDoclist?-1:1) * (i1-i2))
static int fts3DoclistOrMerge(
int bDescDoclist,
char *a1, int n1,
char *a2, int n2,
char **paOut, int *pnOut
)
static int fts3DoclistPhraseMerge(
int bDescDoclist,
int nDist,
char *aLeft, int nLeft,
char **paRight, int *pnRight
)
SQLITE_PRIVATE int sqlite3Fts3FirstFilter(
sqlite3_int64 iDelta,
char *pList,
int nList,
char *pOut
)
static int fts3TermSelectFinishMerge(Fts3Table *p, TermSelect *pTS)
static int fts3TermSelectMerge(
Fts3Table *p,
TermSelect *pTS,
char *aDoclist,
int nDoclist
)
static int fts3SegReaderCursorAppend(
Fts3MultiSegReader *pCsr,
Fts3SegReader *pNew
)
static int fts3SegReaderCursor(
Fts3Table *p,
int iLangid,
int iIndex,
int iLevel,
const char *zTerm,
int nTerm,
int isPrefix,
int isScan,
Fts3MultiSegReader *pCsr
)
SQLITE_PRIVATE int sqlite3Fts3SegReaderCursor(
Fts3Table *p,
int iLangid,
int iIndex,
int iLevel,
const char *zTerm,
int nTerm,
int isPrefix,
int isScan,
Fts3MultiSegReader *pCsr
)
static int fts3SegReaderCursorAddZero(
Fts3Table *p,
int iLangid,
const char *zTerm,
int nTerm,
Fts3MultiSegReader *pCsr
)
static int fts3TermSegReaderCursor(
Fts3Cursor *pCsr,
const char *zTerm,
int nTerm,
int isPrefix,
Fts3MultiSegReader **ppSegcsr
)
static void fts3SegReaderCursorFree(Fts3MultiSegReader *pSegcsr)
static int fts3TermSelect(
Fts3Table *p,
Fts3PhraseToken *pTok,
int iColumn,
int *pnOut,
char **ppOut
)
static int fts3DoclistCountDocids(char *aList, int nList)
static int fts3NextMethod(sqlite3_vtab_cursor *pCursor)
# define LARGEST_INT64  (0xffffffff|(((sqlite3_int64)0x7fffffff)<<32))
# define SMALLEST_INT64 (((sqlite3_int64)-1) - LARGEST_INT64)
static sqlite3_int64 fts3DocidRange(sqlite3_value *pVal, i64 iDefault)
static int fts3FilterMethod(
sqlite3_vtab_cursor *pCursor,
int idxNum,
const char *idxStr,
int nVal,
sqlite3_value **apVal
)
static int fts3EofMethod(sqlite3_vtab_cursor *pCursor)
static int fts3RowidMethod(sqlite3_vtab_cursor *pCursor, sqlite_int64 *pRowid)
static int fts3ColumnMethod(
sqlite3_vtab_cursor *pCursor,
sqlite3_context *pCtx,
int iCol
)
static int fts3UpdateMethod(
sqlite3_vtab *pVtab,
int nArg,
sqlite3_value **apVal,
sqlite_int64 *pRowid
)
static int fts3SyncMethod(sqlite3_vtab *pVtab)
static int fts3SetHasStat(Fts3Table *p)
static int fts3BeginMethod(sqlite3_vtab *pVtab)
static int fts3CommitMethod(sqlite3_vtab *pVtab)
static int fts3RollbackMethod(sqlite3_vtab *pVtab)
static void fts3ReversePoslist(char *pStart, char **ppPoslist)
static int fts3FunctionArg(
sqlite3_context *pContext,
const char *zFunc,
sqlite3_value *pVal,
Fts3Cursor **ppCsr
)
static void fts3SnippetFunc(
sqlite3_context *pContext,
int nVal,
sqlite3_value **apVal
)
static void fts3OffsetsFunc(
sqlite3_context *pContext,
int nVal,
sqlite3_value **apVal
)
static void fts3OptimizeFunc(
sqlite3_context *pContext,
int nVal,
sqlite3_value **apVal
)
static void fts3MatchinfoFunc(
sqlite3_context *pContext,
int nVal,
sqlite3_value **apVal
)
static int fts3FindFunctionMethod(
sqlite3_vtab *pVtab,
int nArg,
const char *zName,
void (**pxFunc)(sqlite3_context*,int,sqlite3_value**),
void **ppArg
)
static int fts3RenameMethod(
sqlite3_vtab *pVtab,
const char *zName
)
static int fts3SavepointMethod(sqlite3_vtab *pVtab, int iSavepoint)
static int fts3ReleaseMethod(sqlite3_vtab *pVtab, int iSavepoint)
static int fts3RollbackToMethod(sqlite3_vtab *pVtab, int iSavepoint)
static const sqlite3_module fts3Module = ;
static void hashDestroy(void *p)
SQLITE_PRIVATE void sqlite3Fts3SimpleTokenizerModule(sqlite3_tokenizer_module const**ppModule);
SQLITE_PRIVATE void sqlite3Fts3PorterTokenizerModule(sqlite3_tokenizer_module const**ppModule);
SQLITE_PRIVATE void sqlite3Fts3UnicodeTokenizer(sqlite3_tokenizer_module const**ppModule);
SQLITE_PRIVATE void sqlite3Fts3IcuTokenizerModule(sqlite3_tokenizer_module const**ppModule);
SQLITE_PRIVATE int sqlite3Fts3Init(sqlite3 *db)
static void fts3EvalAllocateReaders(
Fts3Cursor *pCsr,
Fts3Expr *pExpr,
int *pnToken,
int *pnOr,
int *pRc
)
static int fts3EvalPhraseMergeToken(
Fts3Table *pTab,
Fts3Phrase *p,
int iToken,
char *pList,
int nList
)
static int fts3EvalPhraseLoad(
Fts3Cursor *pCsr,
Fts3Phrase *p
)
static int fts3EvalDeferredPhrase(Fts3Cursor *pCsr, Fts3Phrase *pPhrase)
#define MAX_INCR_PHRASE_TOKENS 4
static int fts3EvalPhraseStart(Fts3Cursor *pCsr, int bOptOk, Fts3Phrase *p)
SQLITE_PRIVATE void sqlite3Fts3DoclistPrev(
int bDescIdx,
char *aDoclist,
int nDoclist,
char **ppIter,
sqlite3_int64 *piDocid,
int *pnList,
u8 *pbEof
)
SQLITE_PRIVATE void sqlite3Fts3DoclistNext(
int bDescIdx,
char *aDoclist,
int nDoclist,
char **ppIter,
sqlite3_int64 *piDocid,
u8 *pbEof
)
static void fts3EvalDlPhraseNext(
Fts3Table *pTab,
Fts3Doclist *pDL,
u8 *pbEof
)
typedef struct TokenDoclist TokenDoclist;
struct TokenDoclist ;
static int incrPhraseTokenNext(
Fts3Table *pTab,
Fts3Phrase *pPhrase,
int iToken,
TokenDoclist *p,
u8 *pbEof
)
static int fts3EvalIncrPhraseNext(
Fts3Cursor *pCsr,
Fts3Phrase *p,
u8 *pbEof
)
static int fts3EvalPhraseNext(
Fts3Cursor *pCsr,
Fts3Phrase *p,
u8 *pbEof
)
static void fts3EvalStartReaders(
Fts3Cursor *pCsr,
Fts3Expr *pExpr,
int *pRc
)
typedef struct Fts3TokenAndCost Fts3TokenAndCost;
struct Fts3TokenAndCost ;
static void fts3EvalTokenCosts(
Fts3Cursor *pCsr,
Fts3Expr *pRoot,
Fts3Expr *pExpr,
Fts3TokenAndCost **ppTC,
Fts3Expr ***ppOr,
int *pRc
)
static int fts3EvalAverageDocsize(Fts3Cursor *pCsr, int *pnPage)
static int fts3EvalSelectDeferred(
Fts3Cursor *pCsr,
Fts3Expr *pRoot,
Fts3TokenAndCost *aTC,
int nTC
)
static int fts3EvalStart(Fts3Cursor *pCsr)
static void fts3EvalInvalidatePoslist(Fts3Phrase *pPhrase)
static int fts3EvalNearTrim(
int nNear,
char *aTmp,
char **paPoslist,
int *pnToken,
Fts3Phrase *pPhrase
)
static void fts3EvalNextRow(
Fts3Cursor *pCsr,
Fts3Expr *pExpr,
int *pRc
)
static int fts3EvalNearTest(Fts3Expr *pExpr, int *pRc)
static int fts3EvalTestExpr(
Fts3Cursor *pCsr,
Fts3Expr *pExpr,
int *pRc
)
static int fts3EvalTestDeferredAndNear(Fts3Cursor *pCsr, int *pRc)
static int fts3EvalNext(Fts3Cursor *pCsr)
static void fts3EvalRestart(
Fts3Cursor *pCsr,
Fts3Expr *pExpr,
int *pRc
)
static void fts3EvalUpdateCounts(Fts3Expr *pExpr)
static int fts3EvalGatherStats(
Fts3Cursor *pCsr,
Fts3Expr *pExpr
)
SQLITE_PRIVATE int sqlite3Fts3EvalPhraseStats(
Fts3Cursor *pCsr,
Fts3Expr *pExpr,
u32 *aiOut
)
SQLITE_PRIVATE int sqlite3Fts3EvalPhrasePoslist(
Fts3Cursor *pCsr,
Fts3Expr *pExpr,
int iCol,
char **ppOut
)
SQLITE_PRIVATE void sqlite3Fts3EvalPhraseCleanup(Fts3Phrase *pPhrase)
SQLITE_PRIVATE int sqlite3Fts3Corrupt()
#if !SQLITE_CORE
__declspec(dllexport)
SQLITE_API int SQLITE_STDCALL sqlite3_fts3_init(
sqlite3 *db,
char **pzErrMsg,
const sqlite3_api_routines *pApi
)
#if !defined(SQLITE_CORE) || defined(SQLITE_ENABLE_FTS3)
typedef struct Fts3auxTable Fts3auxTable;
typedef struct Fts3auxCursor Fts3auxCursor;
struct Fts3auxTable ;
struct Fts3auxCursor ;
#define FTS3_AUX_SCHEMA \
"CREATE TABLE x(term, col, documents, occurrences, languageid HIDDEN)"
static int fts3auxConnectMethod(
sqlite3 *db,
void *pUnused,
int argc,
const char * const *argv,
sqlite3_vtab **ppVtab,
char **pzErr
)
static int fts3auxDisconnectMethod(sqlite3_vtab *pVtab)
#define FTS4AUX_EQ_CONSTRAINT 1
#define FTS4AUX_GE_CONSTRAINT 2
#define FTS4AUX_LE_CONSTRAINT 4
static int fts3auxBestIndexMethod(
sqlite3_vtab *pVTab,
sqlite3_index_info *pInfo
)
static int fts3auxOpenMethod(sqlite3_vtab *pVTab, sqlite3_vtab_cursor **ppCsr)
static int fts3auxCloseMethod(sqlite3_vtab_cursor *pCursor)
static int fts3auxGrowStatArray(Fts3auxCursor *pCsr, int nSize)
static int fts3auxNextMethod(sqlite3_vtab_cursor *pCursor)
static int fts3auxFilterMethod(
sqlite3_vtab_cursor *pCursor,
int idxNum,
const char *idxStr,
int nVal,
sqlite3_value **apVal
)
static int fts3auxEofMethod(sqlite3_vtab_cursor *pCursor)
static int fts3auxColumnMethod(
sqlite3_vtab_cursor *pCursor,
sqlite3_context *pCtx,
int iCol
)
static int fts3auxRowidMethod(
sqlite3_vtab_cursor *pCursor,
sqlite_int64 *pRowid
)
SQLITE_PRIVATE int sqlite3Fts3InitAux(sqlite3 *db)
#if !defined(SQLITE_CORE) || defined(SQLITE_ENABLE_FTS3)
SQLITE_API int sqlite3_fts3_enable_parentheses = 0;
# ifdef SQLITE_ENABLE_FTS3_PARENTHESIS
#  define sqlite3_fts3_enable_parentheses 1
# else
#  define sqlite3_fts3_enable_parentheses 0
# endif
#define SQLITE_FTS3_DEFAULT_NEAR_PARAM 10
typedef struct ParseContext ParseContext;
struct ParseContext ;
static int fts3isspace(char c)
static void *fts3MallocZero(int nByte)
SQLITE_PRIVATE int sqlite3Fts3OpenTokenizer(
sqlite3_tokenizer *pTokenizer,
int iLangid,
const char *z,
int n,
sqlite3_tokenizer_cursor **ppCsr
)
static int fts3ExprParse(ParseContext *, const char *, int, Fts3Expr **, int *);
static int getNextToken(
ParseContext *pParse,
int iCol,
const char *z, int n,
Fts3Expr **ppExpr,
int *pnConsumed
)
static void *fts3ReallocOrFree(void *pOrig, int nNew)
static int getNextString(
ParseContext *pParse,
const char *zInput, int nInput,
Fts3Expr **ppExpr
)
static int getNextNode(
ParseContext *pParse,
const char *z, int n,
Fts3Expr **ppExpr,
int *pnConsumed
)
static int opPrecedence(Fts3Expr *p)
static void insertBinaryOperator(
Fts3Expr **ppHead,
Fts3Expr *pPrev,
Fts3Expr *pNew
)
static int fts3ExprParse(
ParseContext *pParse,
const char *z, int n,
Fts3Expr **ppExpr,
int *pnConsumed
)
static int fts3ExprCheckDepth(Fts3Expr *p, int nMaxDepth)
static int fts3ExprBalance(Fts3Expr **pp, int nMaxDepth)
static int fts3ExprParseUnbalanced(
sqlite3_tokenizer *pTokenizer,
int iLangid,
char **azCol,
int bFts4,
int nCol,
int iDefaultCol,
const char *z, int n,
Fts3Expr **ppExpr
)
SQLITE_PRIVATE int sqlite3Fts3ExprParse(
sqlite3_tokenizer *pTokenizer,
int iLangid,
char **azCol,
int bFts4,
int nCol,
int iDefaultCol,
const char *z, int n,
Fts3Expr **ppExpr,
char **pzErr
)
static void fts3FreeExprNode(Fts3Expr *p)
SQLITE_PRIVATE void sqlite3Fts3ExprFree(Fts3Expr *pDel)
static int queryTestTokenizer(
sqlite3 *db,
const char *zName,
const sqlite3_tokenizer_module **pp
)
static char *exprToString(Fts3Expr *pExpr, char *zBuf)
static void fts3ExprTest(
sqlite3_context *context,
int argc,
sqlite3_value **argv
)
SQLITE_PRIVATE int sqlite3Fts3ExprInitTestInterface(sqlite3* db)
#if !defined(SQLITE_CORE) || defined(SQLITE_ENABLE_FTS3)
static void *fts3HashMalloc(int n)
static void fts3HashFree(void *p)
SQLITE_PRIVATE void sqlite3Fts3HashInit(Fts3Hash *pNew, char keyClass, char copyKey)
SQLITE_PRIVATE void sqlite3Fts3HashClear(Fts3Hash *pH)
static int fts3StrHash(const void *pKey, int nKey)
static int fts3StrCompare(const void *pKey1, int n1, const void *pKey2, int n2)
static int fts3BinHash(const void *pKey, int nKey)
static int fts3BinCompare(const void *pKey1, int n1, const void *pKey2, int n2)
static int (*ftsHashFunction(int keyClass))(const void*,int)
static int (*ftsCompareFunction(int keyClass))(const void*,int,const void*,int)
static void fts3HashInsertElement(
Fts3Hash *pH,
struct _fts3ht *pEntry,
Fts3HashElem *pNew
)
static int fts3Rehash(Fts3Hash *pH, int new_size)
static Fts3HashElem *fts3FindElementByHash(
const Fts3Hash *pH,
const void *pKey,
int nKey,
int h
)
static void fts3RemoveElementByHash(
Fts3Hash *pH,
Fts3HashElem* elem,
int h
)
SQLITE_PRIVATE Fts3HashElem *sqlite3Fts3HashFindElem(
const Fts3Hash *pH,
const void *pKey,
int nKey
)
SQLITE_PRIVATE void *sqlite3Fts3HashFind(const Fts3Hash *pH, const void *pKey, int nKey)
SQLITE_PRIVATE void *sqlite3Fts3HashInsert(
Fts3Hash *pH,
const void *pKey,
int nKey,
void *data
)
#if !defined(SQLITE_CORE) || defined(SQLITE_ENABLE_FTS3)
typedef struct porter_tokenizer  porter_tokenizer;
typedef struct porter_tokenizer_cursor  porter_tokenizer_cursor;
static int porterCreate(
int argc, const char * const *argv,
sqlite3_tokenizer **ppTokenizer
)
static int porterDestroy(sqlite3_tokenizer *pTokenizer)
static int porterOpen(
sqlite3_tokenizer *pTokenizer,
const char *zInput, int nInput,
sqlite3_tokenizer_cursor **ppCursor
)
static int porterClose(sqlite3_tokenizer_cursor *pCursor)
static const char cType[] = ;
static int isVowel(const char*);
static int isConsonant(const char *z)
static int isVowel(const char *z)
static int m_gt_0(const char *z)
static int m_eq_1(const char *z)
static int m_gt_1(const char *z)
static int hasVowel(const char *z)
static int doubleConsonant(const char *z)
static int star_oh(const char *z)
static int stem(
char **pz,
const char *zFrom,
const char *zTo,
int (*xCond)(const char*)
)
static void copy_stemmer(const char *zIn, int nIn, char *zOut, int *pnOut)
static void porter_stemmer(const char *zIn, int nIn, char *zOut, int *pnOut)
static const char porterIdChar[] = ;
#define isDelim(C) (((ch=C)&0x80)==0 && (ch<0x30 || !porterIdChar[ch-0x30]))
static int porterNext(
sqlite3_tokenizer_cursor *pCursor,
const char **pzToken,
int *pnBytes,
int *piStartOffset,
int *piEndOffset,
int *piPosition
)
static const sqlite3_tokenizer_module porterTokenizerModule = ;
SQLITE_PRIVATE void sqlite3Fts3PorterTokenizerModule(
sqlite3_tokenizer_module const**ppModule
)
#if !defined(SQLITE_CORE) || defined(SQLITE_ENABLE_FTS3)
static void scalarFunc(
sqlite3_context *context,
int argc,
sqlite3_value **argv
)
SQLITE_PRIVATE int sqlite3Fts3IsIdChar(char c)
SQLITE_PRIVATE const char *sqlite3Fts3NextToken(const char *zStr, int *pn)
SQLITE_PRIVATE int sqlite3Fts3InitTokenizer(
Fts3Hash *pHash,
const char *zArg,
sqlite3_tokenizer **ppTok,
char **pzErr
)
static void testFunc(
sqlite3_context *context,
int argc,
sqlite3_value **argv
)
static
int registerTokenizer(
sqlite3 *db,
char *zName,
const sqlite3_tokenizer_module *p
)
static
int queryTokenizer(
sqlite3 *db,
char *zName,
const sqlite3_tokenizer_module **pp
)
SQLITE_PRIVATE void sqlite3Fts3SimpleTokenizerModule(sqlite3_tokenizer_module const**ppModule);
static void intTestFunc(
sqlite3_context *context,
int argc,
sqlite3_value **argv
)
SQLITE_PRIVATE int sqlite3Fts3InitHashTable(
sqlite3 *db,
Fts3Hash *pHash,
const char *zName
)
#if !defined(SQLITE_CORE) || defined(SQLITE_ENABLE_FTS3)
typedef struct simple_tokenizer  simple_tokenizer;
typedef struct simple_tokenizer_cursor  simple_tokenizer_cursor;
static int simpleDelim(simple_tokenizer *t, unsigned char c)
static int fts3_isalnum(int x)
static int simpleCreate(
int argc, const char * const *argv,
sqlite3_tokenizer **ppTokenizer
)
static int simpleDestroy(sqlite3_tokenizer *pTokenizer)
static int simpleOpen(
sqlite3_tokenizer *pTokenizer,
const char *pInput, int nBytes,
sqlite3_tokenizer_cursor **ppCursor
)
static int simpleClose(sqlite3_tokenizer_cursor *pCursor)
static int simpleNext(
sqlite3_tokenizer_cursor *pCursor,
const char **ppToken,
int *pnBytes,
int *piStartOffset,
int *piEndOffset,
int *piPosition
)
static const sqlite3_tokenizer_module simpleTokenizerModule = ;
SQLITE_PRIVATE void sqlite3Fts3SimpleTokenizerModule(
sqlite3_tokenizer_module const**ppModule
)
#if !defined(SQLITE_CORE) || defined(SQLITE_ENABLE_FTS3)
typedef struct Fts3tokTable Fts3tokTable;
typedef struct Fts3tokCursor Fts3tokCursor;
struct Fts3tokTable ;
struct Fts3tokCursor ;
static int fts3tokQueryTokenizer(
Fts3Hash *pHash,
const char *zName,
const sqlite3_tokenizer_module **pp,
char **pzErr
)
static int fts3tokDequoteArray(
int argc,
const char * const *argv,
char ***pazDequote
)
#define FTS3_TOK_SCHEMA "CREATE TABLE x(input, token, start, end, position)"
static int fts3tokConnectMethod(
sqlite3 *db,
void *pHash,
int argc,
const char * const *argv,
sqlite3_vtab **ppVtab,
char **pzErr
)
static int fts3tokDisconnectMethod(sqlite3_vtab *pVtab)
static int fts3tokBestIndexMethod(
sqlite3_vtab *pVTab,
sqlite3_index_info *pInfo
)
static int fts3tokOpenMethod(sqlite3_vtab *pVTab, sqlite3_vtab_cursor **ppCsr)
static void fts3tokResetCursor(Fts3tokCursor *pCsr)
static int fts3tokCloseMethod(sqlite3_vtab_cursor *pCursor)
static int fts3tokNextMethod(sqlite3_vtab_cursor *pCursor)
static int fts3tokFilterMethod(
sqlite3_vtab_cursor *pCursor,
int idxNum,
const char *idxStr,
int nVal,
sqlite3_value **apVal
)
static int fts3tokEofMethod(sqlite3_vtab_cursor *pCursor)
static int fts3tokColumnMethod(
sqlite3_vtab_cursor *pCursor,
sqlite3_context *pCtx,
int iCol
)
static int fts3tokRowidMethod(
sqlite3_vtab_cursor *pCursor,
sqlite_int64 *pRowid
)
SQLITE_PRIVATE int sqlite3Fts3InitTok(sqlite3 *db, Fts3Hash *pHash)
#if !defined(SQLITE_CORE) || defined(SQLITE_ENABLE_FTS3)
#define FTS_MAX_APPENDABLE_HEIGHT 16
#define FTS3_NODE_PADDING (FTS3_VARINT_MAX*2)
int test_fts3_node_chunksize = (4*1024);
int test_fts3_node_chunk_threshold = (4*1024)*4;
# define FTS3_NODE_CHUNKSIZE       test_fts3_node_chunksize
# define FTS3_NODE_CHUNK_THRESHOLD test_fts3_node_chunk_threshold
# define FTS3_NODE_CHUNKSIZE (4*1024)
# define FTS3_NODE_CHUNK_THRESHOLD (FTS3_NODE_CHUNKSIZE*4)
#define FTS_STAT_DOCTOTAL      0
#define FTS_STAT_INCRMERGEHINT 1
#define FTS_STAT_AUTOINCRMERGE 2
static void fts3LogMerge(int nMerge, sqlite3_int64 iAbsLevel)
#define fts3LogMerge(x, y)
typedef struct PendingList PendingList;
typedef struct SegmentNode SegmentNode;
typedef struct SegmentWriter SegmentWriter;
struct PendingList ;
struct Fts3DeferredToken ;
struct Fts3SegReader ;
#define fts3SegReaderIsPending(p) ((p)->ppNextElem!=0)
#define fts3SegReaderIsRootOnly(p) ((p)->rootOnly!=0)
struct SegmentWriter ;
struct SegmentNode ;
#define SQL_DELETE_CONTENT             0
#define SQL_IS_EMPTY                   1
#define SQL_DELETE_ALL_CONTENT         2
#define SQL_DELETE_ALL_SEGMENTS        3
#define SQL_DELETE_ALL_SEGDIR          4
#define SQL_DELETE_ALL_DOCSIZE         5
#define SQL_DELETE_ALL_STAT            6
#define SQL_SELECT_CONTENT_BY_ROWID    7
#define SQL_NEXT_SEGMENT_INDEX         8
#define SQL_INSERT_SEGMENTS            9
#define SQL_NEXT_SEGMENTS_ID          10
#define SQL_INSERT_SEGDIR             11
#define SQL_SELECT_LEVEL              12
#define SQL_SELECT_LEVEL_RANGE        13
#define SQL_SELECT_LEVEL_COUNT        14
#define SQL_SELECT_SEGDIR_MAX_LEVEL   15
#define SQL_DELETE_SEGDIR_LEVEL       16
#define SQL_DELETE_SEGMENTS_RANGE     17
#define SQL_CONTENT_INSERT            18
#define SQL_DELETE_DOCSIZE            19
#define SQL_REPLACE_DOCSIZE           20
#define SQL_SELECT_DOCSIZE            21
#define SQL_SELECT_STAT               22
#define SQL_REPLACE_STAT              23
#define SQL_SELECT_ALL_PREFIX_LEVEL   24
#define SQL_DELETE_ALL_TERMS_SEGDIR   25
#define SQL_DELETE_SEGDIR_RANGE       26
#define SQL_SELECT_ALL_LANGID         27
#define SQL_FIND_MERGE_LEVEL          28
#define SQL_MAX_LEAF_NODE_ESTIMATE    29
#define SQL_DELETE_SEGDIR_ENTRY       30
#define SQL_SHIFT_SEGDIR_ENTRY        31
#define SQL_SELECT_SEGDIR             32
#define SQL_CHOMP_SEGDIR              33
#define SQL_SEGMENT_IS_APPENDABLE     34
#define SQL_SELECT_INDEXES            35
#define SQL_SELECT_MXLEVEL            36
#define SQL_SELECT_LEVEL_RANGE2       37
#define SQL_UPDATE_LEVEL_IDX          38
#define SQL_UPDATE_LEVEL              39
static int fts3SqlStmt(
Fts3Table *p,
int eStmt,
sqlite3_stmt **pp,
sqlite3_value **apVal
)
static int fts3SelectDocsize(
Fts3Table *pTab,
sqlite3_int64 iDocid,
sqlite3_stmt **ppStmt
)
SQLITE_PRIVATE int sqlite3Fts3SelectDoctotal(
Fts3Table *pTab,
sqlite3_stmt **ppStmt
)
SQLITE_PRIVATE int sqlite3Fts3SelectDocsize(
Fts3Table *pTab,
sqlite3_int64 iDocid,
sqlite3_stmt **ppStmt
)
static void fts3SqlExec(
int *pRC,
Fts3Table *p,
int eStmt,
sqlite3_value **apVal
)
static int fts3Writelock(Fts3Table *p)
static sqlite3_int64 getAbsoluteLevel(
Fts3Table *p,
int iLangid,
int iIndex,
int iLevel
)
SQLITE_PRIVATE int sqlite3Fts3AllSegdirs(
Fts3Table *p,
int iLangid,
int iIndex,
int iLevel,
sqlite3_stmt **ppStmt
)
static int fts3PendingListAppendVarint(
PendingList **pp,
sqlite3_int64 i
)
static int fts3PendingListAppend(
PendingList **pp,
sqlite3_int64 iDocid,
sqlite3_int64 iCol,
sqlite3_int64 iPos,
int *pRc
)
static void fts3PendingListDelete(PendingList *pList)
static int fts3PendingTermsAddOne(
Fts3Table *p,
int iCol,
int iPos,
Fts3Hash *pHash,
const char *zToken,
int nToken
)
static int fts3PendingTermsAdd(
Fts3Table *p,
int iLangid,
const char *zText,
int iCol,
u32 *pnWord
)
static int fts3PendingTermsDocid(
Fts3Table *p,
int iLangid,
sqlite_int64 iDocid
)
SQLITE_PRIVATE void sqlite3Fts3PendingTermsClear(Fts3Table *p)
static int fts3InsertTerms(
Fts3Table *p,
int iLangid,
sqlite3_value **apVal,
u32 *aSz
)
static int fts3InsertData(
Fts3Table *p,
sqlite3_value **apVal,
sqlite3_int64 *piDocid
)
static int fts3DeleteAll(Fts3Table *p, int bContent)
static int langidFromSelect(Fts3Table *p, sqlite3_stmt *pSelect)
static void fts3DeleteTerms(
int *pRC,
Fts3Table *p,
sqlite3_value *pRowid,
u32 *aSz,
int *pbFound
)
static int fts3SegmentMerge(Fts3Table *, int, int, int);
static int fts3AllocateSegdirIdx(
Fts3Table *p,
int iLangid,
int iIndex,
int iLevel,
int *piIdx
)
SQLITE_PRIVATE int sqlite3Fts3ReadBlock(
Fts3Table *p,
sqlite3_int64 iBlockid,
char **paBlob,
int *pnBlob,
int *pnLoad
)
SQLITE_PRIVATE void sqlite3Fts3SegmentsClose(Fts3Table *p)
static int fts3SegReaderIncrRead(Fts3SegReader *pReader)
static int fts3SegReaderRequire(Fts3SegReader *pReader, char *pFrom, int nByte)
static void fts3SegReaderSetEof(Fts3SegReader *pSeg)
static int fts3SegReaderNext(
Fts3Table *p,
Fts3SegReader *pReader,
int bIncr
)
static int fts3SegReaderFirstDocid(Fts3Table *pTab, Fts3SegReader *pReader)
static int fts3SegReaderNextDocid(
Fts3Table *pTab,
Fts3SegReader *pReader,
char **ppOffsetList,
int *pnOffsetList
)
SQLITE_PRIVATE int sqlite3Fts3MsrOvfl(
Fts3Cursor *pCsr,
Fts3MultiSegReader *pMsr,
int *pnOvfl
)
SQLITE_PRIVATE void sqlite3Fts3SegReaderFree(Fts3SegReader *pReader)
SQLITE_PRIVATE int sqlite3Fts3SegReaderNew(
int iAge,
int bLookup,
sqlite3_int64 iStartLeaf,
sqlite3_int64 iEndLeaf,
sqlite3_int64 iEndBlock,
const char *zRoot,
int nRoot,
Fts3SegReader **ppReader
)
static int SQLITE_CDECL fts3CompareElemByTerm(
const void *lhs,
const void *rhs
)
SQLITE_PRIVATE int sqlite3Fts3SegReaderPending(
Fts3Table *p,
int iIndex,
const char *zTerm,
int nTerm,
int bPrefix,
Fts3SegReader **ppReader
)
static int fts3SegReaderCmp(Fts3SegReader *pLhs, Fts3SegReader *pRhs)
static int fts3SegReaderDoclistCmp(Fts3SegReader *pLhs, Fts3SegReader *pRhs)
static int fts3SegReaderDoclistCmpRev(Fts3SegReader *pLhs, Fts3SegReader *pRhs)
static int fts3SegReaderTermCmp(
Fts3SegReader *pSeg,
const char *zTerm,
int nTerm
)
static void fts3SegReaderSort(
Fts3SegReader **apSegment,
int nSegment,
int nSuspect,
int (*xCmp)(Fts3SegReader *, Fts3SegReader *)
)
static int fts3WriteSegment(
Fts3Table *p,
sqlite3_int64 iBlock,
char *z,
int n
)
SQLITE_PRIVATE int sqlite3Fts3MaxLevel(Fts3Table *p, int *pnMax)
static int fts3WriteSegdir(
Fts3Table *p,
sqlite3_int64 iLevel,
int iIdx,
sqlite3_int64 iStartBlock,
sqlite3_int64 iLeafEndBlock,
sqlite3_int64 iEndBlock,
sqlite3_int64 nLeafData,
char *zRoot,
int nRoot
)
static int fts3PrefixCompress(
const char *zPrev,
int nPrev,
const char *zNext,
int nNext
)
static int fts3NodeAddTerm(
Fts3Table *p,
SegmentNode **ppTree,
int isCopyTerm,
const char *zTerm,
int nTerm
)
static int fts3TreeFinishNode(
SegmentNode *pTree,
int iHeight,
sqlite3_int64 iLeftChild
)
static int fts3NodeWrite(
Fts3Table *p,
SegmentNode *pTree,
int iHeight,
sqlite3_int64 iLeaf,
sqlite3_int64 iFree,
sqlite3_int64 *piLast,
char **paRoot,
int *pnRoot
)
static void fts3NodeFree(SegmentNode *pTree)
static int fts3SegWriterAdd(
Fts3Table *p,
SegmentWriter **ppWriter,
int isCopyTerm,
const char *zTerm,
int nTerm,
const char *aDoclist,
int nDoclist
)
static int fts3SegWriterFlush(
Fts3Table *p,
SegmentWriter *pWriter,
sqlite3_int64 iLevel,
int iIdx
)
static void fts3SegWriterFree(SegmentWriter *pWriter)
static int fts3IsEmpty(Fts3Table *p, sqlite3_value *pRowid, int *pisEmpty)
static int fts3SegmentMaxLevel(
Fts3Table *p,
int iLangid,
int iIndex,
sqlite3_int64 *pnMax
)
static int fts3SegmentIsMaxLevel(Fts3Table *p, i64 iAbsLevel, int *pbMax)
static int fts3DeleteSegment(
Fts3Table *p,
Fts3SegReader *pSeg
)
static int fts3DeleteSegdir(
Fts3Table *p,
int iLangid,
int iIndex,
int iLevel,
Fts3SegReader **apSegment,
int nReader
)
static void fts3ColumnFilter(
int iCol,
int bZero,
char **ppList,
int *pnList
)
static int fts3MsrBufferData(
Fts3MultiSegReader *pMsr,
char *pList,
int nList
)
SQLITE_PRIVATE int sqlite3Fts3MsrIncrNext(
Fts3Table *p,
Fts3MultiSegReader *pMsr,
sqlite3_int64 *piDocid,
char **paPoslist,
int *pnPoslist
)
static int fts3SegReaderStart(
Fts3Table *p,
Fts3MultiSegReader *pCsr,
const char *zTerm,
int nTerm
)
SQLITE_PRIVATE int sqlite3Fts3SegReaderStart(
Fts3Table *p,
Fts3MultiSegReader *pCsr,
Fts3SegFilter *pFilter
)
SQLITE_PRIVATE int sqlite3Fts3MsrIncrStart(
Fts3Table *p,
Fts3MultiSegReader *pCsr,
int iCol,
const char *zTerm,
int nTerm
)
SQLITE_PRIVATE int sqlite3Fts3MsrIncrRestart(Fts3MultiSegReader *pCsr)
SQLITE_PRIVATE int sqlite3Fts3SegReaderStep(
Fts3Table *p,
Fts3MultiSegReader *pCsr
)
SQLITE_PRIVATE void sqlite3Fts3SegReaderFinish(
Fts3MultiSegReader *pCsr
)
static void fts3ReadEndBlockField(
sqlite3_stmt *pStmt,
int iCol,
i64 *piEndBlock,
i64 *pnByte
)
static int fts3PromoteSegments(
Fts3Table *p,
sqlite3_int64 iAbsLevel,
sqlite3_int64 nByte
)
static int fts3SegmentMerge(
Fts3Table *p,
int iLangid,
int iIndex,
int iLevel
)
SQLITE_PRIVATE int sqlite3Fts3PendingTermsFlush(Fts3Table *p)
static void fts3EncodeIntArray(
int N,
u32 *a,
char *zBuf,
int *pNBuf
)
static void fts3DecodeIntArray(
int N,
u32 *a,
const char *zBuf,
int nBuf
)
static void fts3InsertDocsize(
int *pRC,
Fts3Table *p,
u32 *aSz
)
static void fts3UpdateDocTotals(
int *pRC,
Fts3Table *p,
u32 *aSzIns,
u32 *aSzDel,
int nChng
)
static int fts3DoOptimize(Fts3Table *p, int bReturnDone)
static int fts3DoRebuild(Fts3Table *p)
static int fts3IncrmergeCsr(
Fts3Table *p,
sqlite3_int64 iAbsLevel,
int nSeg,
Fts3MultiSegReader *pCsr
)
typedef struct IncrmergeWriter IncrmergeWriter;
typedef struct NodeWriter NodeWriter;
typedef struct Blob Blob;
typedef struct NodeReader NodeReader;
struct Blob ;
struct NodeWriter ;
struct IncrmergeWriter ;
struct NodeReader ;
static void blobGrowBuffer(Blob *pBlob, int nMin, int *pRc)
static int nodeReaderNext(NodeReader *p)
static void nodeReaderRelease(NodeReader *p)
static int nodeReaderInit(NodeReader *p, const char *aNode, int nNode)
static int fts3IncrmergePush(
Fts3Table *p,
IncrmergeWriter *pWriter,
const char *zTerm,
int nTerm
)
static int fts3AppendToNode(
Blob *pNode,
Blob *pPrev,
const char *zTerm,
int nTerm,
const char *aDoclist,
int nDoclist
)
static int fts3IncrmergeAppend(
Fts3Table *p,
IncrmergeWriter *pWriter,
Fts3MultiSegReader *pCsr
)
static void fts3IncrmergeRelease(
Fts3Table *p,
IncrmergeWriter *pWriter,
int *pRc
)
static int fts3TermCmp(
const char *zLhs, int nLhs,
const char *zRhs, int nRhs
)
static int fts3IsAppendable(Fts3Table *p, sqlite3_int64 iEnd, int *pbRes)
static int fts3IncrmergeLoad(
Fts3Table *p,
sqlite3_int64 iAbsLevel,
int iIdx,
const char *zKey,
int nKey,
IncrmergeWriter *pWriter
)
static int fts3IncrmergeOutputIdx(
Fts3Table *p,
sqlite3_int64 iAbsLevel,
int *piIdx
)
static int fts3IncrmergeWriter(
Fts3Table *p,
sqlite3_int64 iAbsLevel,
int iIdx,
Fts3MultiSegReader *pCsr,
IncrmergeWriter *pWriter
)
static int fts3RemoveSegdirEntry(
Fts3Table *p,
sqlite3_int64 iAbsLevel,
int iIdx
)
static int fts3RepackSegdirLevel(
Fts3Table *p,
sqlite3_int64 iAbsLevel
)
static void fts3StartNode(Blob *pNode, int iHeight, sqlite3_int64 iChild)
static int fts3TruncateNode(
const char *aNode,
int nNode,
Blob *pNew,
const char *zTerm,
int nTerm,
sqlite3_int64 *piBlock
)
static int fts3TruncateSegment(
Fts3Table *p,
sqlite3_int64 iAbsLevel,
int iIdx,
const char *zTerm,
int nTerm
)
static int fts3IncrmergeChomp(
Fts3Table *p,
sqlite3_int64 iAbsLevel,
Fts3MultiSegReader *pCsr,
int *pnRem
)
static int fts3IncrmergeHintStore(Fts3Table *p, Blob *pHint)
static int fts3IncrmergeHintLoad(Fts3Table *p, Blob *pHint)
static void fts3IncrmergeHintPush(
Blob *pHint,
i64 iAbsLevel,
int nInput,
int *pRc
)
static int fts3IncrmergeHintPop(Blob *pHint, i64 *piAbsLevel, int *pnInput)
SQLITE_PRIVATE int sqlite3Fts3Incrmerge(Fts3Table *p, int nMerge, int nMin)
static int fts3Getint(const char **pz)
static int fts3DoIncrmerge(
Fts3Table *p,
const char *zParam
)
static int fts3DoAutoincrmerge(
Fts3Table *p,
const char *zParam
)
static u64 fts3ChecksumEntry(
const char *zTerm,
int nTerm,
int iLangid,
int iIndex,
i64 iDocid,
int iCol,
int iPos
)
static u64 fts3ChecksumIndex(
Fts3Table *p,
int iLangid,
int iIndex,
int *pRc
)
static int fts3IntegrityCheck(Fts3Table *p, int *pbOk)
static int fts3DoIntegrityCheck(
Fts3Table *p
)
static int fts3SpecialInsert(Fts3Table *p, sqlite3_value *pVal)
SQLITE_PRIVATE void sqlite3Fts3FreeDeferredDoclists(Fts3Cursor *pCsr)
SQLITE_PRIVATE void sqlite3Fts3FreeDeferredTokens(Fts3Cursor *pCsr)
SQLITE_PRIVATE int sqlite3Fts3CacheDeferredDoclists(Fts3Cursor *pCsr)
SQLITE_PRIVATE int sqlite3Fts3DeferredTokenList(
Fts3DeferredToken *p,
char **ppData,
int *pnData
)
SQLITE_PRIVATE int sqlite3Fts3DeferToken(
Fts3Cursor *pCsr,
Fts3PhraseToken *pToken,
int iCol
)
static int fts3DeleteByRowid(
Fts3Table *p,
sqlite3_value *pRowid,
int *pnChng,
u32 *aSzDel
)
SQLITE_PRIVATE int sqlite3Fts3UpdateMethod(
sqlite3_vtab *pVtab,
int nArg,
sqlite3_value **apVal,
sqlite_int64 *pRowid
)
SQLITE_PRIVATE int sqlite3Fts3Optimize(Fts3Table *p)
#if !defined(SQLITE_CORE) || defined(SQLITE_ENABLE_FTS3)
#define FTS3_MATCHINFO_NPHRASE   'p'
#define FTS3_MATCHINFO_NCOL      'c'
#define FTS3_MATCHINFO_NDOC      'n'
#define FTS3_MATCHINFO_AVGLENGTH 'a'
#define FTS3_MATCHINFO_LENGTH    'l'
#define FTS3_MATCHINFO_LCS       's'
#define FTS3_MATCHINFO_HITS      'x'
#define FTS3_MATCHINFO_LHITS     'y'
#define FTS3_MATCHINFO_DEFAULT   "pcx"
typedef struct LoadDoclistCtx LoadDoclistCtx;
struct LoadDoclistCtx ;
typedef struct SnippetIter SnippetIter;
typedef struct SnippetPhrase SnippetPhrase;
typedef struct SnippetFragment SnippetFragment;
struct SnippetIter ;
struct SnippetPhrase ;
struct SnippetFragment ;
typedef struct MatchInfo MatchInfo;
struct MatchInfo ;
typedef struct StrBuffer StrBuffer;
struct StrBuffer ;
static void fts3GetDeltaPosition(char **pp, int *piPos)
static int fts3ExprIterate2(
Fts3Expr *pExpr,
int *piPhrase,
int (*x)(Fts3Expr*,int,void*),
void *pCtx
)
static int fts3ExprIterate(
Fts3Expr *pExpr,
int (*x)(Fts3Expr*,int,void*),
void *pCtx
)
static int fts3ExprLoadDoclistsCb(Fts3Expr *pExpr, int iPhrase, void *ctx)
static int fts3ExprLoadDoclists(
Fts3Cursor *pCsr,
int *pnPhrase,
int *pnToken
)
static int fts3ExprPhraseCountCb(Fts3Expr *pExpr, int iPhrase, void *ctx)
static int fts3ExprPhraseCount(Fts3Expr *pExpr)
static void fts3SnippetAdvance(char **ppIter, int *piIter, int iNext)
static int fts3SnippetNextCandidate(SnippetIter *pIter)
static void fts3SnippetDetails(
SnippetIter *pIter,
u64 mCovered,
int *piToken,
int *piScore,
u64 *pmCover,
u64 *pmHighlight
)
static int fts3SnippetFindPositions(Fts3Expr *pExpr, int iPhrase, void *ctx)
static int fts3BestSnippet(
int nSnippet,
Fts3Cursor *pCsr,
int iCol,
u64 mCovered,
u64 *pmSeen,
SnippetFragment *pFragment,
int *piScore
)
static int fts3StringAppend(
StrBuffer *pStr,
const char *zAppend,
int nAppend
)
static int fts3SnippetShift(
Fts3Table *pTab,
int iLangid,
int nSnippet,
const char *zDoc,
int nDoc,
int *piPos,
u64 *pHlmask
)
static int fts3SnippetText(
Fts3Cursor *pCsr,
SnippetFragment *pFragment,
int iFragment,
int isLast,
int nSnippet,
const char *zOpen,
const char *zClose,
const char *zEllipsis,
StrBuffer *pOut
)
static int fts3ColumnlistCount(char **ppCollist)
static int fts3ExprGlobalHitsCb(
Fts3Expr *pExpr,
int iPhrase,
void *pCtx
)
static int fts3ExprLocalHitsCb(
Fts3Expr *pExpr,
int iPhrase,
void *pCtx
)
static int fts3ExprLHitsCb(
Fts3Expr *pExpr,
int iPhrase,
void *pCtx
)
static int fts3MatchinfoCheck(
Fts3Table *pTab,
char cArg,
char **pzErr
)
static int fts3MatchinfoSize(MatchInfo *pInfo, char cArg)
static int fts3MatchinfoSelectDoctotal(
Fts3Table *pTab,
sqlite3_stmt **ppStmt,
sqlite3_int64 *pnDoc,
const char **paLen
)
typedef struct LcsIterator LcsIterator;
struct LcsIterator ;
#define LCS_ITERATOR_FINISHED 0x7FFFFFFF;
static int fts3MatchinfoLcsCb(
Fts3Expr *pExpr,
int iPhrase,
void *pCtx
)
static int fts3LcsIteratorAdvance(LcsIterator *pIter)
static int fts3MatchinfoLcs(Fts3Cursor *pCsr, MatchInfo *pInfo)
static int fts3MatchinfoValues(
Fts3Cursor *pCsr,
int bGlobal,
MatchInfo *pInfo,
const char *zArg
)
static int fts3GetMatchinfo(
Fts3Cursor *pCsr,
const char *zArg
)
SQLITE_PRIVATE void sqlite3Fts3Snippet(
sqlite3_context *pCtx,
Fts3Cursor *pCsr,
const char *zStart,
const char *zEnd,
const char *zEllipsis,
int iCol,
int nToken
)
typedef struct TermOffset TermOffset;
typedef struct TermOffsetCtx TermOffsetCtx;
struct TermOffset ;
struct TermOffsetCtx ;
static int fts3ExprTermOffsetInit(Fts3Expr *pExpr, int iPhrase, void *ctx)
SQLITE_PRIVATE void sqlite3Fts3Offsets(
sqlite3_context *pCtx,
Fts3Cursor *pCsr
)
SQLITE_PRIVATE void sqlite3Fts3Matchinfo(
sqlite3_context *pContext,
Fts3Cursor *pCsr,
const char *zArg
)
#if !defined(SQLITE_CORE) || defined(SQLITE_ENABLE_FTS3)
static const unsigned char sqlite3Utf8Trans1[] = ;
#define READ_UTF8(zIn, zTerm, c)                           \
c = *(zIn++);                                            \
if( c>=0xc0 )
#define WRITE_UTF8(zOut, c)
typedef struct unicode_tokenizer unicode_tokenizer;
typedef struct unicode_cursor unicode_cursor;
struct unicode_tokenizer ;
struct unicode_cursor ;
static int unicodeDestroy(sqlite3_tokenizer *pTokenizer)
static int unicodeAddExceptions(
unicode_tokenizer *p,
int bAlnum,
const char *zIn,
int nIn
)
static int unicodeIsException(unicode_tokenizer *p, int iCode)
static int unicodeIsAlnum(unicode_tokenizer *p, int iCode)
static int unicodeCreate(
int nArg,
const char * const *azArg,
sqlite3_tokenizer **pp
)
static int unicodeOpen(
sqlite3_tokenizer *p,
const char *aInput,
int nInput,
sqlite3_tokenizer_cursor **pp
)
static int unicodeClose(sqlite3_tokenizer_cursor *pCursor)
static int unicodeNext(
sqlite3_tokenizer_cursor *pC,
const char **paToken,
int *pnToken,
int *piStart,
int *piEnd,
int *piPos
)
SQLITE_PRIVATE void sqlite3Fts3UnicodeTokenizer(sqlite3_tokenizer_module const **ppModule)
#if defined(SQLITE_ENABLE_FTS3) || defined(SQLITE_ENABLE_FTS4)
SQLITE_PRIVATE int sqlite3FtsUnicodeIsalnum(int c)
static int remove_diacritic(int c)
SQLITE_PRIVATE int sqlite3FtsUnicodeIsdiacritic(int c)
SQLITE_PRIVATE int sqlite3FtsUnicodeFold(int c, int bRemoveDiacritic)
#if !defined(SQLITE_CORE) || defined(SQLITE_ENABLE_RTREE)
SQLITE_EXTENSION_INIT1
typedef sqlite3_int64 i64;
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
# define UNUSED_PARAMETER(x) (void)(x)
typedef struct Rtree Rtree;
typedef struct RtreeCursor RtreeCursor;
typedef struct RtreeNode RtreeNode;
typedef struct RtreeCell RtreeCell;
typedef struct RtreeConstraint RtreeConstraint;
typedef struct RtreeMatchArg RtreeMatchArg;
typedef struct RtreeGeomCallback RtreeGeomCallback;
typedef union RtreeCoord RtreeCoord;
typedef struct RtreeSearchPoint RtreeSearchPoint;
#define RTREE_MAX_DIMENSIONS 5
#define HASHSIZE 97
#define RTREE_DEFAULT_ROWEST 1048576
#define RTREE_MIN_ROWEST         100
struct Rtree ;
#define RTREE_COORD_REAL32 0
#define RTREE_COORD_INT32  1
typedef sqlite3_int64 RtreeDValue;
typedef int RtreeValue;
# define RTREE_ZERO 0
typedef double RtreeDValue;
typedef float RtreeValue;
# define RTREE_ZERO 0.0
struct RtreeSearchPoint ;
#define RTREE_MINCELLS(p) ((((p)->iNodeSize-4)/(p)->nBytesPerCell)/3)
#define RTREE_REINSERT(p) RTREE_MINCELLS(p)
#define RTREE_MAXCELLS 51
#define RTREE_MAX_DEPTH 40
#define RTREE_CACHE_SZ  5
struct RtreeCursor ;
#define RTREE_OF_CURSOR(X)   ((Rtree*)((X)->base.pVtab))
union RtreeCoord ;
# define DCOORD(coord) ((RtreeDValue)coord.i)
# define DCOORD(coord) (                           \
(pRtree->eCoordType==RTREE_COORD_REAL32) ?      \
((double)coord.f) :                           \
((double)coord.i)                             \
)
struct RtreeConstraint ;
#define RTREE_EQ    0x41
#define RTREE_LE    0x42
#define RTREE_LT    0x43
#define RTREE_GE    0x44
#define RTREE_GT    0x45
#define RTREE_MATCH 0x46
#define RTREE_QUERY 0x47
struct RtreeNode ;
#define NCELL(pNode) readInt16(&(pNode)->zData[2])
struct RtreeCell ;
struct RtreeGeomCallback ;
#define RTREE_GEOMETRY_MAGIC 0x891245AB
struct RtreeMatchArg ;
# define MAX(x,y) ((x) < (y) ? (y) : (x))
# define MIN(x,y) ((x) > (y) ? (y) : (x))
static int readInt16(u8 *p)
static void readCoord(u8 *p, RtreeCoord *pCoord)
static i64 readInt64(u8 *p)
static int writeInt16(u8 *p, int i)
static int writeCoord(u8 *p, RtreeCoord *pCoord)
static int writeInt64(u8 *p, i64 i)
static void nodeReference(RtreeNode *p)
static void nodeZero(Rtree *pRtree, RtreeNode *p)
static int nodeHash(i64 iNode)
static RtreeNode *nodeHashLookup(Rtree *pRtree, i64 iNode)
static void nodeHashInsert(Rtree *pRtree, RtreeNode *pNode)
static void nodeHashDelete(Rtree *pRtree, RtreeNode *pNode)
static RtreeNode *nodeNew(Rtree *pRtree, RtreeNode *pParent)
static int nodeAcquire(
Rtree *pRtree,
i64 iNode,
RtreeNode *pParent,
RtreeNode **ppNode
)
static void nodeOverwriteCell(
Rtree *pRtree,
RtreeNode *pNode,
RtreeCell *pCell,
int iCell
)
static void nodeDeleteCell(Rtree *pRtree, RtreeNode *pNode, int iCell)
static int nodeInsertCell(
Rtree *pRtree,
RtreeNode *pNode,
RtreeCell *pCell
)
static int nodeWrite(Rtree *pRtree, RtreeNode *pNode)
static int nodeRelease(Rtree *pRtree, RtreeNode *pNode)
static i64 nodeGetRowid(
Rtree *pRtree,
RtreeNode *pNode,
int iCell
)
static void nodeGetCoord(
Rtree *pRtree,
RtreeNode *pNode,
int iCell,
int iCoord,
RtreeCoord *pCoord
)
static void nodeGetCell(
Rtree *pRtree,
RtreeNode *pNode,
int iCell,
RtreeCell *pCell
)
static int rtreeInit(
sqlite3 *, void *, int, const char *const*, sqlite3_vtab **, char **, int
);
static int rtreeCreate(
sqlite3 *db,
void *pAux,
int argc, const char *const*argv,
sqlite3_vtab **ppVtab,
char **pzErr
)
static int rtreeConnect(
sqlite3 *db,
void *pAux,
int argc, const char *const*argv,
sqlite3_vtab **ppVtab,
char **pzErr
)
static void rtreeReference(Rtree *pRtree)
static void rtreeRelease(Rtree *pRtree)
static int rtreeDisconnect(sqlite3_vtab *pVtab)
static int rtreeDestroy(sqlite3_vtab *pVtab)
static int rtreeOpen(sqlite3_vtab *pVTab, sqlite3_vtab_cursor **ppCursor)
static void freeCursorConstraints(RtreeCursor *pCsr)
static int rtreeClose(sqlite3_vtab_cursor *cur)
static int rtreeEof(sqlite3_vtab_cursor *cur)
#if defined(SQLITE_BYTEORDER) && SQLITE_BYTEORDER==1234
#define RTREE_DECODE_COORD(eInt, a, r)
#elif defined(SQLITE_BYTEORDER) && SQLITE_BYTEORDER==4321
#define RTREE_DECODE_COORD(eInt, a, r)
#define RTREE_DECODE_COORD(eInt, a, r)
static int rtreeCallbackConstraint(
RtreeConstraint *pConstraint,
int eInt,
u8 *pCellData,
RtreeSearchPoint *pSearch,
sqlite3_rtree_dbl *prScore,
int *peWithin
)
static void rtreeNonleafConstraint(
RtreeConstraint *p,
int eInt,
u8 *pCellData,
int *peWithin
)
static void rtreeLeafConstraint(
RtreeConstraint *p,
int eInt,
u8 *pCellData,
int *peWithin
)
static int nodeRowidIndex(
Rtree *pRtree,
RtreeNode *pNode,
i64 iRowid,
int *piIndex
)
static int nodeParentIndex(Rtree *pRtree, RtreeNode *pNode, int *piIndex)
static int rtreeSearchPointCompare(
const RtreeSearchPoint *pA,
const RtreeSearchPoint *pB
)
static void rtreeSearchPointSwap(RtreeCursor *p, int i, int j)
static RtreeSearchPoint *rtreeSearchPointFirst(RtreeCursor *pCur)
static RtreeNode *rtreeNodeOfFirstSearchPoint(RtreeCursor *pCur, int *pRC)
static RtreeSearchPoint *rtreeEnqueue(
RtreeCursor *pCur,
RtreeDValue rScore,
u8 iLevel
)
static RtreeSearchPoint *rtreeSearchPointNew(
RtreeCursor *pCur,
RtreeDValue rScore,
u8 iLevel
)
static void rtreeSearchPointPop(RtreeCursor *p)
static int rtreeStepToLeaf(RtreeCursor *pCur)
static int rtreeNext(sqlite3_vtab_cursor *pVtabCursor)
static int rtreeRowid(sqlite3_vtab_cursor *pVtabCursor, sqlite_int64 *pRowid)
static int rtreeColumn(sqlite3_vtab_cursor *cur, sqlite3_context *ctx, int i)
static int findLeafNode(
Rtree *pRtree,
i64 iRowid,
RtreeNode **ppLeaf,
sqlite3_int64 *piNode
)
static int deserializeGeometry(sqlite3_value *pValue, RtreeConstraint *pCons)
static int rtreeFilter(
sqlite3_vtab_cursor *pVtabCursor,
int idxNum, const char *idxStr,
int argc, sqlite3_value **argv
)
static void setEstimatedRows(sqlite3_index_info *pIdxInfo, i64 nRow)
static int rtreeBestIndex(sqlite3_vtab *tab, sqlite3_index_info *pIdxInfo)
static RtreeDValue cellArea(Rtree *pRtree, RtreeCell *p)
static RtreeDValue cellMargin(Rtree *pRtree, RtreeCell *p)
static void cellUnion(Rtree *pRtree, RtreeCell *p1, RtreeCell *p2)
static int cellContains(Rtree *pRtree, RtreeCell *p1, RtreeCell *p2)
static RtreeDValue cellGrowth(Rtree *pRtree, RtreeCell *p, RtreeCell *pCell)
static RtreeDValue cellOverlap(
Rtree *pRtree,
RtreeCell *p,
RtreeCell *aCell,
int nCell
)
static int ChooseLeaf(
Rtree *pRtree,
RtreeCell *pCell,
int iHeight,
RtreeNode **ppLeaf
)
static int AdjustTree(
Rtree *pRtree,
RtreeNode *pNode,
RtreeCell *pCell
)
static int rowidWrite(Rtree *pRtree, sqlite3_int64 iRowid, sqlite3_int64 iNode)
static int parentWrite(Rtree *pRtree, sqlite3_int64 iNode, sqlite3_int64 iPar)
static int rtreeInsertCell(Rtree *, RtreeNode *, RtreeCell *, int);
static void SortByDistance(
int *aIdx,
int nIdx,
RtreeDValue *aDistance,
int *aSpare
)
static void SortByDimension(
Rtree *pRtree,
int *aIdx,
int nIdx,
int iDim,
RtreeCell *aCell,
int *aSpare
)
static int splitNodeStartree(
Rtree *pRtree,
RtreeCell *aCell,
int nCell,
RtreeNode *pLeft,
RtreeNode *pRight,
RtreeCell *pBboxLeft,
RtreeCell *pBboxRight
)
static int updateMapping(
Rtree *pRtree,
i64 iRowid,
RtreeNode *pNode,
int iHeight
)
static int SplitNode(
Rtree *pRtree,
RtreeNode *pNode,
RtreeCell *pCell,
int iHeight
)
static int fixLeafParent(Rtree *pRtree, RtreeNode *pLeaf)
static int deleteCell(Rtree *, RtreeNode *, int, int);
static int removeNode(Rtree *pRtree, RtreeNode *pNode, int iHeight)
static int fixBoundingBox(Rtree *pRtree, RtreeNode *pNode)
static int deleteCell(Rtree *pRtree, RtreeNode *pNode, int iCell, int iHeight)
static int Reinsert(
Rtree *pRtree,
RtreeNode *pNode,
RtreeCell *pCell,
int iHeight
)
static int rtreeInsertCell(
Rtree *pRtree,
RtreeNode *pNode,
RtreeCell *pCell,
int iHeight
)
static int reinsertNodeContent(Rtree *pRtree, RtreeNode *pNode)
static int newRowid(Rtree *pRtree, i64 *piRowid)
static int rtreeDeleteRowid(Rtree *pRtree, sqlite3_int64 iDelete)
#define RNDTOWARDS  (1.0 - 1.0/8388608.0)
#define RNDAWAY     (1.0 + 1.0/8388608.0)
#if !defined(SQLITE_RTREE_INT_ONLY)
static RtreeValue rtreeValueDown(sqlite3_value *v)
static RtreeValue rtreeValueUp(sqlite3_value *v)
static int rtreeUpdate(
sqlite3_vtab *pVtab,
int nData,
sqlite3_value **azData,
sqlite_int64 *pRowid
)
static int rtreeRename(sqlite3_vtab *pVtab, const char *zNewName)
static int rtreeQueryStat1(sqlite3 *db, Rtree *pRtree)
static sqlite3_module rtreeModule = ;
static int rtreeSqlInit(
Rtree *pRtree,
sqlite3 *db,
const char *zDb,
const char *zPrefix,
int isCreate
)
static int getIntFromStmt(sqlite3 *db, const char *zSql, int *piVal)
static int getNodeSize(
sqlite3 *db,
Rtree *pRtree,
int isCreate,
char **pzErr
)
static int rtreeInit(
sqlite3 *db,
void *pAux,
int argc, const char *const*argv,
sqlite3_vtab **ppVtab,
char **pzErr,
int isCreate
)
static void rtreenode(sqlite3_context *ctx, int nArg, sqlite3_value **apArg)
static void rtreedepth(sqlite3_context *ctx, int nArg, sqlite3_value **apArg)
SQLITE_PRIVATE int sqlite3RtreeInit(sqlite3 *db)
static void rtreeFreeCallback(void *p)
static void geomCallback(sqlite3_context *ctx, int nArg, sqlite3_value **aArg)
SQLITE_API int SQLITE_STDCALL sqlite3_rtree_geometry_callback(
sqlite3 *db,
const char *zGeom,
int (*xGeom)(sqlite3_rtree_geometry*,int,RtreeDValue*,int*),
void *pContext
)
SQLITE_API int SQLITE_STDCALL sqlite3_rtree_query_callback(
sqlite3 *db,
const char *zQueryFunc,
int (*xQueryFunc)(sqlite3_rtree_query_info*),
void *pContext,
void (*xDestructor)(void*)
)
#if !SQLITE_CORE
__declspec(dllexport)
SQLITE_API int SQLITE_STDCALL sqlite3_rtree_init(
sqlite3 *db,
char **pzErrMsg,
const sqlite3_api_routines *pApi
)
#if !defined(SQLITE_CORE) || defined(SQLITE_ENABLE_ICU)
SQLITE_EXTENSION_INIT1
# define SQLITE_MAX_LIKE_PATTERN_LENGTH 50000
static void xFree(void *p)
static int icuLikeCompare(
const uint8_t *zPattern,
const uint8_t *zString,
const UChar32 uEsc
)
static void icuLikeFunc(
sqlite3_context *context,
int argc,
sqlite3_value **argv
)
static void icuFunctionError(
sqlite3_context *pCtx,
const char *zName,
UErrorCode e
)
static void icuRegexpDelete(void *p)
static void icuRegexpFunc(sqlite3_context *p, int nArg, sqlite3_value **apArg)
static void icuCaseFunc16(sqlite3_context *p, int nArg, sqlite3_value **apArg)
static void icuCollationDel(void *pCtx)
static int icuCollationColl(
void *pCtx,
int nLeft,
const void *zLeft,
int nRight,
const void *zRight
)
static void icuLoadCollation(
sqlite3_context *p,
int nArg,
sqlite3_value **apArg
)
SQLITE_PRIVATE int sqlite3IcuInit(sqlite3 *db)
#if !SQLITE_CORE
__declspec(dllexport)
SQLITE_API int SQLITE_STDCALL sqlite3_icu_init(
sqlite3 *db,
char **pzErrMsg,
const sqlite3_api_routines *pApi
)
#if !defined(SQLITE_CORE) || defined(SQLITE_ENABLE_FTS3)
typedef struct IcuTokenizer IcuTokenizer;
typedef struct IcuCursor IcuCursor;
struct IcuTokenizer ;
struct IcuCursor ;
static int icuCreate(
int argc,
const char * const *argv,
sqlite3_tokenizer **ppTokenizer
)
static int icuDestroy(sqlite3_tokenizer *pTokenizer)
static int icuOpen(
sqlite3_tokenizer *pTokenizer,
const char *zInput,
int nInput,
sqlite3_tokenizer_cursor **ppCursor
)
static int icuClose(sqlite3_tokenizer_cursor *pCursor)
static int icuNext(
sqlite3_tokenizer_cursor *pCursor,
const char **ppToken,
int *pnBytes,
int *piStartOffset,
int *piEndOffset,
int *piPosition
)
static const sqlite3_tokenizer_module icuTokenizerModule = ;
SQLITE_PRIVATE void sqlite3Fts3IcuTokenizerModule(
sqlite3_tokenizer_module const**ppModule
)
#if (defined(SQLITE_ENABLE_DBSTAT_VTAB) || defined(SQLITE_TEST)) \
&& !defined(SQLITE_OMIT_VIRTUALTABLE)
#define VTAB_SCHEMA                                                         \
"CREATE TABLE xx( "                                                       \
"  name       STRING,"             \
"  path       INTEGER,"             \
"  pageno     INTEGER,"                        \
"  pagetype   STRING,"   \
"  ncell      INTEGER,"     \
"  payload    INTEGER,"      \
"  unused     INTEGER," \
"  mx_payload INTEGER,"  \
"  pgoffset   INTEGER,"             \
"  pgsize     INTEGER"                   \
");"
typedef struct StatTable StatTable;
typedef struct StatCursor StatCursor;
typedef struct StatPage StatPage;
typedef struct StatCell StatCell;
struct StatCell ;
struct StatPage ;
struct StatCursor ;
struct StatTable ;
# define get2byte(x)   ((x)[0]<<8 | (x)[1])
static int statConnect(
sqlite3 *db,
void *pAux,
int argc, const char *const*argv,
sqlite3_vtab **ppVtab,
char **pzErr
)
static int statDisconnect(sqlite3_vtab *pVtab)
static int statBestIndex(sqlite3_vtab *tab, sqlite3_index_info *pIdxInfo)
static int statOpen(sqlite3_vtab *pVTab, sqlite3_vtab_cursor **ppCursor)
static void statClearPage(StatPage *p)
static void statResetCsr(StatCursor *pCsr)
static int statClose(sqlite3_vtab_cursor *pCursor)
static void getLocalPayload(
int nUsable,
u8 flags,
int nTotal,
int *pnLocal
)
static int statDecodePage(Btree *pBt, StatPage *p)
static void statSizeAndOffset(StatCursor *pCsr)
static int statNext(sqlite3_vtab_cursor *pCursor)
static int statEof(sqlite3_vtab_cursor *pCursor)
static int statFilter(
sqlite3_vtab_cursor *pCursor,
int idxNum, const char *idxStr,
int argc, sqlite3_value **argv
)
static int statColumn(
sqlite3_vtab_cursor *pCursor,
sqlite3_context *ctx,
int i
)
static int statRowid(sqlite3_vtab_cursor *pCursor, sqlite_int64 *pRowid)
SQLITE_API int SQLITE_STDCALL sqlite3_dbstat_register(sqlite3 *db)
#define _USERAUTH_H_
#define	DB_MAC_KEY		20
#define	HMAC_OUTPUT_SIZE	20
#define	DB_IV_BYTES		16
#define	DB_AES_CHUNK		16
#define	DB_OSO_CREATE	0x0002
#define	DB_OSO_EXCL	0x0010
#define	DB_OSO_RDONLY	0x0020
#define	DB_OSO_TRUNC	0x0200
#define	DB_IO_READ	1
#define	DB_IO_WRITE	2
#define	AUTH_PW_SALT_LEN	DB_MAC_KEY
#define	AUTH_PW_HASH_LEN	HMAC_OUTPUT_SIZE
#define	MEGABYTE	1048576
#define	KS_FILE			"sql-userauth.ks"
#define	KS_BAK_FILE		"___sql-userauth.ks.bak"
#define	KS_LCK_FILE		"___sql-userauth.ks.lck"
#define	KS_TMP_FILE		"___sql-userauth.ks.tmp"
#define	KS_DEL_TMP_FILE		"___sql-userauth.ks.del.tmp"
#define	AUTH_KS_READONLY	0x00001
#define	AUTH_KS_APPEND		0x00002
#define	KS_CHKSUM_LEN	4
#define	KS_VER_LEN	4
typedef struct __ks_entry_hdr  KS_ENTRY_HDR;
#define KSE_HDR_LEN(p) sizeof(u_int8_t) * 2 + (p)->username_len
#define	MAX_KSE_LEN	256
typedef struct __ks_entry_data  KS_ENTRY_DATA;
#define KSE_DATA_ENCR_LEN(p) (p)->buf_len + sizeof(u_int8_t)
#define KSE_DATA_LEN_NOKEY AUTH_PW_SALT_LEN + sizeof(u_int8_t) * 2 + DB_IV_BYTES
#define KSE_DATA_LEN(p) KSE_DATA_LEN_NOKEY + (p)->buf_len
typedef struct __ks_cb_arg  KS_CB_ARG;
#define AUTH_CLOSE(fhp)							\
__os_closehandle(NULL, fhp)
#define AUTH_EXISTS(filepath)						\
!__os_exists(NULL, filepath, NULL)
#define AUTH_FILESIZE(fhp, mbytes, bytes)				\
__os_ioinfo(NULL, NULL, fhp, mbytes, bytes, NULL)
#define AUTH_IO(fhp, op, offset, addr, len, niop)			\
__os_io(NULL, op, fhp, 0, 0, offset, len,			\
(u_int8_t*)(addr), niop)
#define AUTH_OPEN(filepath, fhpp, mode, perm)				\
__os_open(NULL, filepath, 0, mode, perm, fhpp)
#define AUTH_READ(fhp, addr, len, nrp)					\
__os_read(NULL, fhp, addr, len, nrp)
#define AUTH_REMOVE(filepath)						\
__os_unlink(NULL, filepath, 0)
#define AUTH_RENAME(src, des)						\
__os_rename(NULL, src, des, 0)
#define AUTH_SEEK(fhp, offset) 						\
__os_seek(NULL, fhp, 0, 0, offset)
#define AUTH_WRITE(fhp, addr, len, nwp)					\
__os_write(NULL, fhp, addr, len, nwp)
static int authComputeKsChksum(DB_FH *, u_int8_t *);
static int authCopyFile(const char *, const char *);
static int authCreateKseData(sqlite3 *, const char *, int, u_int8_t *,
KS_ENTRY_DATA **);
static int authCreateKseHeader(sqlite3 *, const char *, KS_ENTRY_DATA *,
KS_ENTRY_HDR **);
static int authCreateOneKsFile(char *, DB_FH **);
static int authDecryptKseData(const char *, int, KS_ENTRY_DATA *);
static void authGetFilePath(sqlite3 *, const char *, char *);
static void authGetKsBakFile(sqlite3 *, char *);
static void authGetKsDelTmpFile(sqlite3 *, char *);
static void authGetKsFile(sqlite3 *, char *);
static void authGetKsLckFile(sqlite3 *, char *);
static void authGetKsTmpFile(sqlite3 *, char *);
static int authGetKsVersion(const char *, u_int32_t *);
static void authGetPwdHash(const char *, int, u_int8_t *, u_int8_t *);
static int authGetSaltFromUserTable(sqlite3 *, const char *, u_int8_t *);
static int authIncreaseKsVersion(const char *);
static int authInitEncryptedTmpEnv(const char *, int, DB_ENV **);
static int authProcessKsFile(sqlite3 *, const char *, const char *, int,
int (*)(KS_CB_ARG *), u_int32_t);
static int authUpdateKsChksum(const char *);
static int authVerifyKsChksum(sqlite3 *);
static int authZeroKsVersion(const char *);
static void auth_keystore_backup(sqlite3 *);
static int auth_keystore_create(sqlite3 *);
static int auth_keystore_lock(sqlite3 *);
static int auth_keystore_remove(sqlite3 *);
static int auth_keystore_unlock(sqlite3 *);
static int auth_useradd_key(sqlite3 *, int);
static int auth_useradd_keystore(sqlite3 *, const char *, const char *, int);
static int auth_useradd_keystore_cb(KS_CB_ARG *);
static int auth_useredit_keystore(sqlite3 *, const char *, const char *, int);
static int auth_useredit_keystore_cb(KS_CB_ARG *);
static int auth_userdelete_keystore(sqlite3 *, const char *);
static int auth_userdelete_keystore_cb(KS_CB_ARG *);
static int auth_userlogin_keystore(sqlite3 *, const char *, const char *, int);
static int auth_userlogin_keystore_cb(KS_CB_ARG *);
static void authGetFilePath(sqlite3 *db, const char *fname, char *filepath)
static void authGetKsFile(sqlite3 *db, char *filepath)
static void authGetKsBakFile(sqlite3 *db, char *filepath)
static void authGetKsLckFile(sqlite3 *db, char *filepath)
static void authGetKsTmpFile(sqlite3 *db, char *filepath)
static void authGetKsDelTmpFile(sqlite3 *db, char *filepath)
static int authCreateOneKsFile(char *filepath, DB_FH **fhpp)
static int authCopyFile(const char *from, const char *to)
static int authZeroKsVersion(const char *filepath)
static int authGetKsVersion(const char *filepath, u_int32_t *version)
static int authIncreaseKsVersion(const char *filepath)
static int authComputeKsChksum(DB_FH *fhp, u_int8_t *chksum)
static int authUpdateKsChksum(const char *ksPath)
static int authVerifyKsChksum(sqlite3 *db)
static int authInitEncryptedTmpEnv(const char *aPW, int nPW, DB_ENV **tEnv)
static int authCreateKseHdr(sqlite3 *db, const char *zUsername,
KS_ENTRY_DATA *data, KS_ENTRY_HDR **hdr)
static void authGetPwdHash(const char *aPW, int nPW, u_int8_t *salt,
u_int8_t *hash)
static int authGetSaltFromUserTable(sqlite3 *db, const char *zUsername,
u_int8_t *salt)
static int authCreateKseData(sqlite3 *db, const char *aPW, int nPW,
u_int8_t *salt, KS_ENTRY_DATA **data)
static int authDecryptKseData(const char *aPW, int nPW, KS_ENTRY_DATA *data)
static int authProcessKsFile(sqlite3 *db, const char *zUsername,
const char *aPW, int nPW, int (*cb)(KS_CB_ARG*), u_int32_t flags)
static int auth_useradd_key(sqlite3 *db, int isAdmin)
static int auth_keystore_create(sqlite3 *db)
static int auth_keystore_remove(sqlite3 *db)
static int auth_keystore_lock(sqlite3 *db)
static int auth_keystore_unlock(sqlite3 *db)
static void auth_keystore_backup(sqlite3 *db)
static int auth_useradd_keystore_cb(KS_CB_ARG *args)
static int auth_useradd_keystore(sqlite3 *db, const char *zUsername,
const char *aPW, int nPW)
static int auth_userlogin_keystore_cb(KS_CB_ARG *arg)
static int auth_userlogin_keystore(sqlite3 *db, const char *zUsername,
const char *aPW, int nPW)
static int auth_useredit_keystore_cb(KS_CB_ARG *arg)
static int auth_useredit_keystore(sqlite3 *db, const char *zUsername,
const char *zPW, int nPW)
static int auth_userdelete_keystore_cb(KS_CB_ARG *arg)
static int auth_userdelete_keystore(sqlite3 *db, const char *zUsername)
static sqlite3_stmt* sqlite3UserAuthPrepare(sqlite3 *db,
const char *zFormat, ...)
static int userTableExists(sqlite3 *db, const char *zDb, int *res)
static int userAuthCheckLogin(
sqlite3 *db,
const char *zDb,
u8 *peAuth)
SQLITE_PRIVATE int sqlite3UserAuthCheckLogin(
sqlite3 *db,
const char *zDb,
u8 *peAuth)
SQLITE_PRIVATE void sqlite3UserAuthInit(sqlite3 *db)
SQLITE_PRIVATE void sqlite3CryptFunc(
sqlite3_context *context,
int NotUsed,
sqlite3_value **argv)
static void resetDbAuth(sqlite3 *db)
static int setDbAuth(sqlite3 *db, const char *zUsername, const char *zPW,
int nPW, u8 authLevel)
SQLITE_API int SQLITE_STDCALL sqlite3_user_authenticate(
sqlite3 *db,
const char *zUsername,
const char *zPW,
int nPW)
#define AUTH_DB_EXEC(db, sql)						\
sqlite3_exec(db, sql, 0, 0, 0)
SQLITE_API int SQLITE_STDCALL sqlite3_user_add(
sqlite3 *db,
const char *zUsername,
const char *aPW,
int nPW,
int isAdmin)
SQLITE_API int SQLITE_STDCALL sqlite3_user_change(
sqlite3 *db,
const char *zUsername,
const char *aPW,
int nPW,
int isAdmin)
SQLITE_API int SQLITE_STDCALL sqlite3_user_delete(
sqlite3 *db,
const char *zUsername)
