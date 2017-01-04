#if SQLITE_OS_WIN
#  include "os_win.h"
struct SqliteDb ;
static int testHexToInt(int h)
void *sqlite3TestTextToPtr(const char *z)
static int get_sqlite_pointer(
void * clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
int getDbPointer(Tcl_Interp *interp, const char *zA, sqlite3 **ppDb)
#if SQLITE_OS_WIN
int getWin32Handle(Tcl_Interp *interp, const char *zA, LPHANDLE phFile)
extern const char *sqlite3ErrName(int);
#define t1ErrorName sqlite3ErrName
#define StmtToDb(X)   sqlite3_db_handle(X)
int sqlite3TestErrCode(Tcl_Interp *interp, sqlite3 *db, int rc)
static int getStmtPointer(
Tcl_Interp *interp,
const char *zArg,
sqlite3_stmt **ppStmt
)
int sqlite3TestMakePointerStr(Tcl_Interp *interp, char *zPtr, void *p)
static int exec_printf_cb(void *pArg, int argc, char **argv, char **name)
#if !defined(SQLITE_OMIT_TRACE) && defined(SQLITE_ENABLE_IOTRACE)
static FILE *iotrace_file = 0;
static void io_trace_callback(const char *zFormat, ...)
static int test_io_trace(
void *NotUsed,
Tcl_Interp *interp,
int argc,
char **argv
)
static int clang_sanitize_address(
void *NotUsed,
Tcl_Interp *interp,
int argc,
char **argv
)
static int test_exec_printf(
void *NotUsed,
Tcl_Interp *interp,
int argc,
char **argv
)
static int test_exec_hex(
void *NotUsed,
Tcl_Interp *interp,
int argc,
char **argv
)
static int db_enter(
void *NotUsed,
Tcl_Interp *interp,
int argc,
char **argv
)
static int db_leave(
void *NotUsed,
Tcl_Interp *interp,
int argc,
char **argv
)
static int test_exec(
void *NotUsed,
Tcl_Interp *interp,
int argc,
char **argv
)
static int test_exec_nr(
void *NotUsed,
Tcl_Interp *interp,
int argc,
char **argv
)
static int test_mprintf_z(
void *NotUsed,
Tcl_Interp *interp,
int argc,
char **argv
)
static int test_mprintf_n(
void *NotUsed,
Tcl_Interp *interp,
int argc,
char **argv
)
static int test_snprintf_int(
void *NotUsed,
Tcl_Interp *interp,
int argc,
char **argv
)
static int test_get_table_printf(
void *NotUsed,
Tcl_Interp *interp,
int argc,
char **argv
)
static int test_last_rowid(
void *NotUsed,
Tcl_Interp *interp,
int argc,
char **argv
)
static int test_key(
void *NotUsed,
Tcl_Interp *interp,
int argc,
char **argv
)
static int test_rekey(
void *NotUsed,
Tcl_Interp *interp,
int argc,
char **argv
)
static int sqlite_test_close(
void *NotUsed,
Tcl_Interp *interp,
int argc,
char **argv
)
static int sqlite_test_close_v2(
void *NotUsed,
Tcl_Interp *interp,
int argc,
char **argv
)
static void t1_ifnullFunc(
sqlite3_context *context,
int argc,
sqlite3_value **argv
)
static void hex8Func(sqlite3_context *p, int argc, sqlite3_value **argv)
static void hex16Func(sqlite3_context *p, int argc, sqlite3_value **argv)
struct dstr ;
static void dstrAppend(struct dstr *p, const char *z, int divider)
static int execFuncCallback(void *pData, int argc, char **argv, char **NotUsed)
static void sqlite3ExecFunc(
sqlite3_context *context,
int argc,
sqlite3_value **argv
)
static void tkt2213Function(
sqlite3_context *context,
int argc,
sqlite3_value **argv
)
static void ptrChngFunction(
sqlite3_context *context,
int argc,
sqlite3_value **argv
)
static void nondeterministicFunction(
sqlite3_context *context,
int argc,
sqlite3_value **argv
)
static int test_create_function(
void *NotUsed,
Tcl_Interp *interp,
int argc,
char **argv
)
typedef struct t1CountCtx t1CountCtx;
struct t1CountCtx ;
static void t1CountStep(
sqlite3_context *context,
int argc,
sqlite3_value **argv
)
static void t1CountFinalize(sqlite3_context *context)
static void legacyCountStep(
sqlite3_context *context,
int argc,
sqlite3_value **argv
)
static void legacyCountFinalize(sqlite3_context *context)
static int test_create_aggregate(
void *NotUsed,
Tcl_Interp *interp,
int argc,
char **argv
)
static int test_printf(
void *NotUsed,
Tcl_Interp *interp,
int argc,
char **argv
)
static int sqlite3_mprintf_int(
void *NotUsed,
Tcl_Interp *interp,
int argc,
char **argv
)
static int sqlite3_mprintf_int64(
void *NotUsed,
Tcl_Interp *interp,
int argc,
char **argv
)
static int sqlite3_mprintf_long(
void *NotUsed,
Tcl_Interp *interp,
int argc,
char **argv
)
static int sqlite3_mprintf_str(
void *NotUsed,
Tcl_Interp *interp,
int argc,
char **argv
)
static int sqlite3_snprintf_str(
void *NotUsed,
Tcl_Interp *interp,
int argc,
char **argv
)
static int sqlite3_mprintf_double(
void *NotUsed,
Tcl_Interp *interp,
int argc,
char **argv
)
static int sqlite3_mprintf_scaled(
void *NotUsed,
Tcl_Interp *interp,
int argc,
char **argv
)
static int sqlite3_mprintf_stronly(
void *NotUsed,
Tcl_Interp *interp,
int argc,
char **argv
)
static int sqlite3_mprintf_hexdouble(
void *NotUsed,
Tcl_Interp *interp,
int argc,
char **argv
)
#if !defined(SQLITE_OMIT_SHARED_CACHE)
static int test_enable_shared(
ClientData clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int test_extended_result_codes(
ClientData clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int test_libversion_number(
ClientData clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int test_table_column_metadata(
ClientData clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int blobHandleFromObj(
Tcl_Interp *interp,
Tcl_Obj *pObj,
sqlite3_blob **ppBlob
)
static int test_blob_reopen(
ClientData clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
struct TestCollationX ;
typedef struct TestCollationX TestCollationX;
static void testCreateCollationDel(void *pCtx)
static int testCreateCollationCmp(
void *pCtx,
int nLeft,
const void *zLeft,
int nRight,
const void *zRight
)
static int test_create_collation_v2(
ClientData clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
typedef struct CreateFunctionV2 CreateFunctionV2;
struct CreateFunctionV2 ;
static void cf2Func(sqlite3_context *ctx, int nArg, sqlite3_value **aArg)
static void cf2Step(sqlite3_context *ctx, int nArg, sqlite3_value **aArg)
static void cf2Final(sqlite3_context *ctx)
static void cf2Destroy(void *pUser)
static int test_create_function_v2(
ClientData clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int test_load_extension(
ClientData clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int test_enable_load(
ClientData clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int sqlite_abort(
void *NotUsed,
Tcl_Interp *interp,
int argc,
char **argv
)
static void testFunc(sqlite3_context *context, int argc, sqlite3_value **argv)
static int test_register_func(
void *NotUsed,
Tcl_Interp *interp,
int argc,
char **argv
)
static int test_finalize(
void * clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int test_stmt_status(
void * clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int test_stmt_scanstatus(
void * clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int test_stmt_scanstatus_reset(
void * clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int test_next_stmt(
void * clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int test_stmt_readonly(
void * clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int test_stmt_busy(
void * clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int uses_stmt_journal(
void * clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int test_reset(
void * clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int test_expired(
void * clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int test_transfer_bind(
void * clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int test_changes(
void * clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static char *sqlite_static_bind_value = 0;
static int sqlite_static_bind_nbyte = 0;
static int test_bind(
void *NotUsed,
Tcl_Interp *interp,
int argc,
char **argv
)
static Tcl_Interp* pTestCollateInterp;
static int test_collate_func(
void *pCtx,
int nA, const void *zA,
int nB, const void *zB
)
static int test_collate(
void * clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int test_utf16bin_collate_func(
void *pCtx,
int nA, const void *zA,
int nB, const void *zB
)
static int test_utf16bin_collate(
void * clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static char zNeededCollation[200];
static char *pzNeededCollation = zNeededCollation;
static void test_collate_needed_cb(
void *pCtx,
sqlite3 *db,
int eTextRep,
const void *pName
)
static int test_collate_needed(
void * clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int unaligned_string_counter = 0;
static int alignmentCollFunc(
void *NotUsed,
int nKey1, const void *pKey1,
int nKey2, const void *pKey2
)
static int add_alignment_test_collations(
void * clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static void test_function_utf8(
sqlite3_context *pCtx,
int nArg,
sqlite3_value **argv
)
static void test_function_utf16le(
sqlite3_context *pCtx,
int nArg,
sqlite3_value **argv
)
static void test_function_utf16be(
sqlite3_context *pCtx,
int nArg,
sqlite3_value **argv
)
static int test_function(
void * clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int test_errstr(
void * clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int test_breakpoint(
void *NotUsed,
Tcl_Interp *interp,
int argc,
char **argv
)
static int test_bind_zeroblob(
void * clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int test_bind_int(
void * clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int test_bind_int64(
void * clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int test_bind_double(
void * clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int test_bind_null(
void * clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int test_bind_text(
void * clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int test_bind_text16(
void * clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int test_bind_blob(
void * clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int test_bind_parameter_count(
void * clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int test_bind_parameter_name(
void * clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int test_bind_parameter_index(
void * clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int test_clear_bindings(
void * clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int test_sleep(
void * clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int test_ex_errcode(
void * clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int test_errcode(
void * clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int test_errmsg(
void * clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int test_errmsg16(
void * clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int test_prepare(
void * clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int test_prepare_v2(
void * clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int test_prepare_tkt3134(
void * clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int test_prepare16(
void * clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int test_prepare16_v2(
void * clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int test_open(
void * clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int test_open_v2(
void * clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int test_open16(
void * clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int test_complete16(
void * clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int test_step(
void * clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int test_sql(
void * clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int test_column_count(
void * clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int test_column_type(
void * clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int test_column_int64(
void * clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int test_column_blob(
void * clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int test_column_double(
void * clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int test_data_count(
void * clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int test_stmt_utf8(
void * clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int test_global_recover(
void * clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int test_stmt_utf16(
void * clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int test_stmt_int(
void * clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int sqlite_set_magic(
void * clientData,
Tcl_Interp *interp,
int argc,
char **argv
)
static int test_interrupt(
void * clientData,
Tcl_Interp *interp,
int argc,
char **argv
)
static u8 *sqlite3_stack_baseline = 0;
static void prepStack(void)
u64 sqlite3StackDepth(void)
static int test_stack_used(
void * clientData,
Tcl_Interp *interp,
int argc,
char **argv
)
static int delete_function(
void * clientData,
Tcl_Interp *interp,
int argc,
char **argv
)
static int delete_collation(
void * clientData,
Tcl_Interp *interp,
int argc,
char **argv
)
static int get_autocommit(
void * clientData,
Tcl_Interp *interp,
int argc,
char **argv
)
static int test_busy_timeout(
void * clientData,
Tcl_Interp *interp,
int argc,
char **argv
)
static int tcl_variable_type(
void * clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int test_release_memory(
void * clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int test_db_release_memory(
void * clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int test_db_filename(
void * clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int test_db_readonly(
void * clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int test_soft_heap_limit(
void * clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int test_thread_cleanup(
void * clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int test_pager_refcounts(
void * clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int working_64bit_int(
ClientData clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int vfs_unlink_test(
ClientData clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int vfs_initfail_test(
ClientData clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static sqlite3_vfs *apVfs[20];
static int nVfs = 0;
static int vfs_unregister_all(
ClientData clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int vfs_reregister_all(
ClientData clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int file_control_test(
ClientData clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int file_control_lasterrno_test(
ClientData clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int file_control_chunksize_test(
ClientData clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int file_control_sizehint_test(
ClientData clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int file_control_lockproxy_test(
ClientData clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
#if SQLITE_OS_WIN
static int file_control_win32_av_retry(
ClientData clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int file_control_win32_set_handle(
ClientData clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int file_control_persist_wal(
ClientData clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int file_control_powersafe_overwrite(
ClientData clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int file_control_vfsname(
ClientData clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int file_control_tempfilename(
ClientData clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int vfs_list(
ClientData clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int test_limit(
ClientData clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int save_prng_state(
ClientData clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int restore_prng_state(
ClientData clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int reset_prng_state(
ClientData clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int database_may_be_corrupt(
ClientData clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int database_never_corrupt(
ClientData clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int test_pcache_stats(
ClientData clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static void test_unlock_notify_cb(void **aArg, int nArg)
static int test_unlock_notify(
ClientData clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int test_wal_checkpoint(
ClientData clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int test_wal_checkpoint_v2(
ClientData clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int test_wal_autocheckpoint(
ClientData clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static struct LogCallback  logcallback = ;
static void xLogcallback(void *unused, int err, char *zMsg)
static int test_sqlite3_log(
ClientData clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int runAsObjProc(
void * clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
int printExplainQueryPlan(sqlite3_stmt *pStmt)
static int test_print_eqp(
void * clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int test_test_control(
void * clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
#if SQLITE_OS_UNIX
static int test_getrusage(
void * clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
#if SQLITE_OS_WIN
struct win32FileLocker ;
#if SQLITE_OS_WIN
static void win32_file_locker(void *pAppData)
#if SQLITE_OS_WIN
static int win32_file_lock(
void * clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int win32_exists_path(
void *clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int win32_find_file(
void *clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int win32_delete_file(
void *clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int win32_mkdir(
void *clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int win32_rmdir(
void *clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int optimization_control(
void * clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
typedef struct sqlite3_api_routines sqlite3_api_routines;
static int tclLoadStaticExtensionCmd(
void * clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int sorter_test_fakeheap(
void * clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int sorter_test_sort4_helper(
void * clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int test_user_authenticate(
ClientData clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int test_user_add(
ClientData clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int test_user_change(
ClientData clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int test_user_delete(
ClientData clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int test_bad_behavior(
ClientData clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
int Sqlitetest1_Init(Tcl_Interp *interp)
