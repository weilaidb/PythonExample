int sqlite3_expired(sqlite3_stmt *pStmt)
static int vdbeSafety(Vdbe *p)
static int vdbeSafetyNotNull(Vdbe *p)
int sqlite3_finalize(sqlite3_stmt *pStmt)
int sqlite3_reset(sqlite3_stmt *pStmt)
int sqlite3_clear_bindings(sqlite3_stmt *pStmt)
const void *sqlite3_value_blob(sqlite3_value *pVal)
int sqlite3_value_bytes(sqlite3_value *pVal)
int sqlite3_value_bytes16(sqlite3_value *pVal)
double sqlite3_value_double(sqlite3_value *pVal)
int sqlite3_value_int(sqlite3_value *pVal)
sqlite_int64 sqlite3_value_int64(sqlite3_value *pVal)
const unsigned char *sqlite3_value_text(sqlite3_value *pVal)
const void *sqlite3_value_text16(sqlite3_value* pVal)
const void *sqlite3_value_text16be(sqlite3_value *pVal)
const void *sqlite3_value_text16le(sqlite3_value *pVal)
int sqlite3_value_type(sqlite3_value* pVal)
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
void sqlite3_result_blob(
sqlite3_context *pCtx,
const void *z,
int n,
void (*xDel)(void *)
)
void sqlite3_result_blob64(
sqlite3_context *pCtx,
const void *z,
sqlite3_uint64 n,
void (*xDel)(void *)
)
void sqlite3_result_double(sqlite3_context *pCtx, double rVal)
void sqlite3_result_error(sqlite3_context *pCtx, const char *z, int n)
void sqlite3_result_error16(sqlite3_context *pCtx, const void *z, int n)
void sqlite3_result_int(sqlite3_context *pCtx, int iVal)
void sqlite3_result_int64(sqlite3_context *pCtx, i64 iVal)
void sqlite3_result_null(sqlite3_context *pCtx)
void sqlite3_result_text(
sqlite3_context *pCtx,
const char *z,
int n,
void (*xDel)(void *)
)
void sqlite3_result_text64(
sqlite3_context *pCtx,
const char *z,
sqlite3_uint64 n,
void (*xDel)(void *),
unsigned char enc
)
void sqlite3_result_text16(
sqlite3_context *pCtx,
const void *z,
int n,
void (*xDel)(void *)
)
void sqlite3_result_text16be(
sqlite3_context *pCtx,
const void *z,
int n,
void (*xDel)(void *)
)
void sqlite3_result_text16le(
sqlite3_context *pCtx,
const void *z,
int n,
void (*xDel)(void *)
)
void sqlite3_result_value(sqlite3_context *pCtx, sqlite3_value *pValue)
void sqlite3_result_zeroblob(sqlite3_context *pCtx, int n)
void sqlite3_result_error_code(sqlite3_context *pCtx, int errCode)
void sqlite3_result_error_toobig(sqlite3_context *pCtx)
void sqlite3_result_error_nomem(sqlite3_context *pCtx)
static int doWalCallbacks(sqlite3 *db)
static int sqlite3Step(Vdbe *p)
int sqlite3_step(sqlite3_stmt *pStmt)
void *sqlite3_user_data(sqlite3_context *p)
sqlite3 *sqlite3_context_db_handle(sqlite3_context *p)
sqlite3_int64 sqlite3StmtCurrentTime(sqlite3_context *p)
void sqlite3InvalidFunction(
sqlite3_context *context,
int NotUsed,
sqlite3_value **NotUsed2
)
static SQLITE_NOINLINE void *createAggContext(sqlite3_context *p, int nByte)
void *sqlite3_aggregate_context(sqlite3_context *p, int nByte)
void *sqlite3_get_auxdata(sqlite3_context *pCtx, int iArg)
void sqlite3_set_auxdata(
sqlite3_context *pCtx,
int iArg,
void *pAux,
void (*xDelete)(void*)
)
int sqlite3_aggregate_count(sqlite3_context *p)
int sqlite3_column_count(sqlite3_stmt *pStmt)
int sqlite3_data_count(sqlite3_stmt *pStmt)
static const Mem *columnNullValue(void)
static Mem *columnMem(sqlite3_stmt *pStmt, int i)
static void columnMallocFailure(sqlite3_stmt *pStmt)
const void *sqlite3_column_blob(sqlite3_stmt *pStmt, int i)
int sqlite3_column_bytes(sqlite3_stmt *pStmt, int i)
int sqlite3_column_bytes16(sqlite3_stmt *pStmt, int i)
double sqlite3_column_double(sqlite3_stmt *pStmt, int i)
int sqlite3_column_int(sqlite3_stmt *pStmt, int i)
sqlite_int64 sqlite3_column_int64(sqlite3_stmt *pStmt, int i)
const unsigned char *sqlite3_column_text(sqlite3_stmt *pStmt, int i)
sqlite3_value *sqlite3_column_value(sqlite3_stmt *pStmt, int i)
const void *sqlite3_column_text16(sqlite3_stmt *pStmt, int i)
int sqlite3_column_type(sqlite3_stmt *pStmt, int i)
static const void *columnName(
sqlite3_stmt *pStmt,
int N,
const void *(*xFunc)(Mem*),
int useType
)
const char *sqlite3_column_name(sqlite3_stmt *pStmt, int N)
const void *sqlite3_column_name16(sqlite3_stmt *pStmt, int N)
#if defined(SQLITE_OMIT_DECLTYPE) && defined(SQLITE_ENABLE_COLUMN_METADATA)
# error "Must not define both SQLITE_OMIT_DECLTYPE \
and SQLITE_ENABLE_COLUMN_METADATA"
const char *sqlite3_column_decltype(sqlite3_stmt *pStmt, int N)
const void *sqlite3_column_decltype16(sqlite3_stmt *pStmt, int N)
const char *sqlite3_column_database_name(sqlite3_stmt *pStmt, int N)
const void *sqlite3_column_database_name16(sqlite3_stmt *pStmt, int N)
const char *sqlite3_column_table_name(sqlite3_stmt *pStmt, int N)
const void *sqlite3_column_table_name16(sqlite3_stmt *pStmt, int N)
const char *sqlite3_column_origin_name(sqlite3_stmt *pStmt, int N)
const void *sqlite3_column_origin_name16(sqlite3_stmt *pStmt, int N)
static int vdbeUnbind(Vdbe *p, int i)
static int bindText(
sqlite3_stmt *pStmt,
int i,
const void *zData,
int nData,
void (*xDel)(void*),
u8 encoding
)
int sqlite3_bind_blob(
sqlite3_stmt *pStmt,
int i,
const void *zData,
int nData,
void (*xDel)(void*)
)
int sqlite3_bind_blob64(
sqlite3_stmt *pStmt,
int i,
const void *zData,
sqlite3_uint64 nData,
void (*xDel)(void*)
)
int sqlite3_bind_double(sqlite3_stmt *pStmt, int i, double rValue)
int sqlite3_bind_int(sqlite3_stmt *p, int i, int iValue)
int sqlite3_bind_int64(sqlite3_stmt *pStmt, int i, sqlite_int64 iValue)
int sqlite3_bind_null(sqlite3_stmt *pStmt, int i)
int sqlite3_bind_text(
sqlite3_stmt *pStmt,
int i,
const char *zData,
int nData,
void (*xDel)(void*)
)
int sqlite3_bind_text64(
sqlite3_stmt *pStmt,
int i,
const char *zData,
sqlite3_uint64 nData,
void (*xDel)(void*),
unsigned char enc
)
int sqlite3_bind_text16(
sqlite3_stmt *pStmt,
int i,
const void *zData,
int nData,
void (*xDel)(void*)
)
int sqlite3_bind_value(sqlite3_stmt *pStmt, int i, const sqlite3_value *pValue)
int sqlite3_bind_zeroblob(sqlite3_stmt *pStmt, int i, int n)
int sqlite3_bind_parameter_count(sqlite3_stmt *pStmt)
const char *sqlite3_bind_parameter_name(sqlite3_stmt *pStmt, int i)
int sqlite3VdbeParameterIndex(Vdbe *p, const char *zName, int nName)
int sqlite3_bind_parameter_index(sqlite3_stmt *pStmt, const char *zName)
int sqlite3TransferBindings(sqlite3_stmt *pFromStmt, sqlite3_stmt *pToStmt)
int sqlite3_transfer_bindings(sqlite3_stmt *pFromStmt, sqlite3_stmt *pToStmt)
sqlite3 *sqlite3_db_handle(sqlite3_stmt *pStmt)
int sqlite3_stmt_readonly(sqlite3_stmt *pStmt)
int sqlite3_stmt_busy(sqlite3_stmt *pStmt)
sqlite3_stmt *sqlite3_next_stmt(sqlite3 *pDb, sqlite3_stmt *pStmt)
int sqlite3_stmt_status(sqlite3_stmt *pStmt, int op, int resetFlag)
int sqlite3_stmt_scanstatus(
sqlite3_stmt *pStmt,
int idx,
int iScanStatusOp,
void *pOut
)
void sqlite3_stmt_scanstatus_reset(sqlite3_stmt *pStmt)
