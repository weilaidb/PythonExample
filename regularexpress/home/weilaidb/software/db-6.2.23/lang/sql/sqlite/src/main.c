# include "fts3.h"
# include "rtree.h"
# include "sqliteicu.h"
const char sqlite3_version[] = SQLITE_VERSION;
const char *sqlite3_libversion(void)
const char *sqlite3_sourceid(void)
int sqlite3_libversion_number(void)
int sqlite3_threadsafe(void)
extern int add_sequence_functions(sqlite3 *db);
# ifndef SQLITE_DEBUG_OS_TRACE
#   define SQLITE_DEBUG_OS_TRACE 0
# endif
int sqlite3OSTrace = SQLITE_DEBUG_OS_TRACE;
#if !defined(SQLITE_OMIT_TRACE) && defined(SQLITE_ENABLE_IOTRACE)
SQLITE_API void (SQLITE_CDECL *sqlite3IoTrace)(const char*, ...) = 0;
char *sqlite3_temp_directory = 0;
char *sqlite3_data_directory = 0;
int sqlite3_initialize(void)
int sqlite3_shutdown(void)
int sqlite3_config(int op, ...)
static int setupLookaside(sqlite3 *db, void *pBuf, int sz, int cnt)
sqlite3_mutex *sqlite3_db_mutex(sqlite3 *db)
int sqlite3_db_release_memory(sqlite3 *db)
int sqlite3_db_config(sqlite3 *db, int op, ...)
static int allSpaces(const char *z, int n)
static int binCollFunc(
void *padFlag,
int nKey1, const void *pKey1,
int nKey2, const void *pKey2
)
static int nocaseCollatingFunc(
void *NotUsed,
int nKey1, const void *pKey1,
int nKey2, const void *pKey2
)
sqlite_int64 sqlite3_last_insert_rowid(sqlite3 *db)
int sqlite3_changes(sqlite3 *db)
int sqlite3_total_changes(sqlite3 *db)
void sqlite3CloseSavepoints(sqlite3 *db)
static void functionDestroy(sqlite3 *db, FuncDef *p)
static void disconnectAllVtab(sqlite3 *db)
static int connectionIsBusy(sqlite3 *db)
static int sqlite3Close(sqlite3 *db, int forceZombie)
int sqlite3_close(sqlite3 *db)
int sqlite3_close_v2(sqlite3 *db)
void sqlite3LeaveMutexAndCloseZombie(sqlite3 *db)
void sqlite3RollbackAll(sqlite3 *db, int tripCode)
#if defined(SQLITE_NEED_ERR_NAME)
const char *sqlite3ErrName(int rc)
const char *sqlite3ErrStr(int rc)
static int sqliteDefaultBusyCallback(
void *ptr,
int count
)
int sqlite3InvokeBusyHandler(BusyHandler *p)
int sqlite3_busy_handler(
sqlite3 *db,
int (*xBusy)(void*,int),
void *pArg
)
void sqlite3_progress_handler(
sqlite3 *db,
int nOps,
int (*xProgress)(void*),
void *pArg
)
int sqlite3_busy_timeout(sqlite3 *db, int ms)
void sqlite3_interrupt(sqlite3 *db)
int sqlite3CreateFunc(
sqlite3 *db,
const char *zFunctionName,
int nArg,
int enc,
void *pUserData,
void (*xFunc)(sqlite3_context*,int,sqlite3_value **),
void (*xStep)(sqlite3_context*,int,sqlite3_value **),
void (*xFinal)(sqlite3_context*),
FuncDestructor *pDestructor
)
int sqlite3_create_function(
sqlite3 *db,
const char *zFunc,
int nArg,
int enc,
void *p,
void (*xFunc)(sqlite3_context*,int,sqlite3_value **),
void (*xStep)(sqlite3_context*,int,sqlite3_value **),
void (*xFinal)(sqlite3_context*)
)
int sqlite3_create_function_v2(
sqlite3 *db,
const char *zFunc,
int nArg,
int enc,
void *p,
void (*xFunc)(sqlite3_context*,int,sqlite3_value **),
void (*xStep)(sqlite3_context*,int,sqlite3_value **),
void (*xFinal)(sqlite3_context*),
void (*xDestroy)(void *)
)
int sqlite3_create_function16(
sqlite3 *db,
const void *zFunctionName,
int nArg,
int eTextRep,
void *p,
void (*xFunc)(sqlite3_context*,int,sqlite3_value**),
void (*xStep)(sqlite3_context*,int,sqlite3_value**),
void (*xFinal)(sqlite3_context*)
)
int sqlite3_overload_function(
sqlite3 *db,
const char *zName,
int nArg
)
void *sqlite3_trace(sqlite3 *db, void (*xTrace)(void*,const char*), void *pArg)
void *sqlite3_profile(
sqlite3 *db,
void (*xProfile)(void*,const char*,sqlite_uint64),
void *pArg
)
void *sqlite3_commit_hook(
sqlite3 *db,
int (*xCallback)(void*),
void *pArg
)
void *sqlite3_update_hook(
sqlite3 *db,
void (*xCallback)(void*,int,char const *,char const *,sqlite_int64),
void *pArg
)
void *sqlite3_rollback_hook(
sqlite3 *db,
void (*xCallback)(void*),
void *pArg
)
int sqlite3WalDefaultHook(
void *pClientData,
sqlite3 *db,
const char *zDb,
int nFrame
)
int sqlite3_wal_autocheckpoint(sqlite3 *db, int nFrame)
void *sqlite3_wal_hook(
sqlite3 *db,
int(*xCallback)(void *, sqlite3*, const char*, int),
void *pArg
)
int sqlite3_wal_checkpoint_v2(
sqlite3 *db,
const char *zDb,
int eMode,
int *pnLog,
int *pnCkpt
)
int sqlite3_wal_checkpoint(sqlite3 *db, const char *zDb)
int sqlite3Checkpoint(sqlite3 *db, int iDb, int eMode, int *pnLog, int *pnCkpt)
int sqlite3TempInMemory(const sqlite3 *db)
const char *sqlite3_errmsg(sqlite3 *db)
const void *sqlite3_errmsg16(sqlite3 *db)
int sqlite3_errcode(sqlite3 *db)
int sqlite3_extended_errcode(sqlite3 *db)
const char *sqlite3_errstr(int rc)
static int createCollation(
sqlite3* db,
const char *zName,
u8 enc,
void* pCtx,
int(*xCompare)(void*,int,const void*,int,const void*),
void(*xDel)(void*)
)
static const int aHardLimit[] = ;
#if SQLITE_MAX_LENGTH<100
# error SQLITE_MAX_LENGTH must be at least 100
#if SQLITE_MAX_SQL_LENGTH<100
# error SQLITE_MAX_SQL_LENGTH must be at least 100
#if SQLITE_MAX_SQL_LENGTH>SQLITE_MAX_LENGTH
# error SQLITE_MAX_SQL_LENGTH must not be greater than SQLITE_MAX_LENGTH
#if SQLITE_MAX_COMPOUND_SELECT<2
# error SQLITE_MAX_COMPOUND_SELECT must be at least 2
#if SQLITE_MAX_VDBE_OP<40
# error SQLITE_MAX_VDBE_OP must be at least 40
#if SQLITE_MAX_FUNCTION_ARG<0 || SQLITE_MAX_FUNCTION_ARG>1000
# error SQLITE_MAX_FUNCTION_ARG must be between 0 and 1000
#if SQLITE_MAX_ATTACHED<0 || SQLITE_MAX_ATTACHED>125
# error SQLITE_MAX_ATTACHED must be between 0 and 125
#if SQLITE_MAX_LIKE_PATTERN_LENGTH<1
# error SQLITE_MAX_LIKE_PATTERN_LENGTH must be at least 1
#if SQLITE_MAX_COLUMN>32767
# error SQLITE_MAX_COLUMN must not exceed 32767
#if SQLITE_MAX_TRIGGER_DEPTH<1
# error SQLITE_MAX_TRIGGER_DEPTH must be at least 1
#if SQLITE_MAX_WORKER_THREADS<0 || SQLITE_MAX_WORKER_THREADS>50
# error SQLITE_MAX_WORKER_THREADS must be between 0 and 50
int sqlite3_limit(sqlite3 *db, int limitId, int newLimit)
int sqlite3ParseUri(
const char *zDefaultVfs,
const char *zUri,
unsigned int *pFlags,
sqlite3_vfs **ppVfs,
char **pzFile,
char **pzErrMsg
)
if( zUri[5]=='/' && zUri[6]=='/' )
eState = 0;
while( (c = zUri[iIn])!=0 && c!='#' )
if( eState==1 ) zFile[iOut++] = '\0';
zFile[iOut++] = '\0';
zFile[iOut++] = '\0';
zOpt = &zFile[sqlite3Strlen30(zFile)+1];
while( zOpt[0] )
}else
*ppVfs = sqlite3_vfs_find(zVfs);
if( *ppVfs==0 )
parse_uri_out:
if( rc!=SQLITE_OK )
*pFlags = flags;
*pzFile = zFile;
return rc;
}
static int openDatabase(
const char *zFilename,
sqlite3 **ppDb,
unsigned int flags,
const char *zVfs
)
int sqlite3_open(
const char *zFilename,
sqlite3 **ppDb
)
int sqlite3_open_v2(
const char *filename,
sqlite3 **ppDb,
int flags,
const char *zVfs
)
int sqlite3_open16(
const void *zFilename,
sqlite3 **ppDb
)
int sqlite3_create_collation(
sqlite3* db,
const char *zName,
int enc,
void* pCtx,
int(*xCompare)(void*,int,const void*,int,const void*)
)
int sqlite3_create_collation_v2(
sqlite3* db,
const char *zName,
int enc,
void* pCtx,
int(*xCompare)(void*,int,const void*,int,const void*),
void(*xDel)(void*)
)
int sqlite3_create_collation16(
sqlite3* db,
const void *zName,
int enc,
void* pCtx,
int(*xCompare)(void*,int,const void*,int,const void*)
)
int sqlite3_collation_needed(
sqlite3 *db,
void *pCollNeededArg,
void(*xCollNeeded)(void*,sqlite3*,int eTextRep,const char*)
)
int sqlite3_collation_needed16(
sqlite3 *db,
void *pCollNeededArg,
void(*xCollNeeded16)(void*,sqlite3*,int eTextRep,const void*)
)
int sqlite3_global_recover(void)
int sqlite3_get_autocommit(sqlite3 *db)
int sqlite3CorruptError(int lineno)
int sqlite3MisuseError(int lineno)
int sqlite3CantopenError(int lineno)
void sqlite3_thread_cleanup(void)
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
)
int sqlite3_sleep(int ms)
int sqlite3_extended_result_codes(sqlite3 *db, int onoff)
int sqlite3_file_control(sqlite3 *db, const char *zDbName, int op, void *pArg)
int sqlite3_test_control(int op, ...)
const char *sqlite3_uri_parameter(const char *zFilename, const char *zParam)
int sqlite3_uri_boolean(const char *zFilename, const char *zParam, int bDflt)
sqlite3_int64 sqlite3_uri_int64(
const char *zFilename,
const char *zParam,
sqlite3_int64 bDflt
)
Btree *sqlite3DbNameToBtree(sqlite3 *db, const char *zDbName)
const char *sqlite3_db_filename(sqlite3 *db, const char *zDbName)
int sqlite3_db_readonly(sqlite3 *db, const char *zDbName)
