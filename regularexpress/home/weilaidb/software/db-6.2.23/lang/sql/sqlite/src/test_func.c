static void *testContextMalloc(sqlite3_context *context, int nByte)
static void randStr(sqlite3_context *context, int argc, sqlite3_value **argv)
static int test_destructor_count_var = 0;
static void destructor(void *p)
static void test_destructor(
sqlite3_context *pCtx,
int nArg,
sqlite3_value **argv
)
static void test_destructor16(
sqlite3_context *pCtx,
int nArg,
sqlite3_value **argv
)
static void test_destructor_count(
sqlite3_context *pCtx,
int nArg,
sqlite3_value **argv
)
void sqlite3BeginBenignMalloc(void);
void sqlite3EndBenignMalloc(void);
#define sqlite3BeginBenignMalloc()
#define sqlite3EndBenignMalloc()
static void test_agg_errmsg16_step(sqlite3_context *a, int b,sqlite3_value **c)
static void test_agg_errmsg16_final(sqlite3_context *ctx)
static void free_test_auxdata(void *p)
static void test_auxdata(
sqlite3_context *pCtx,
int nArg,
sqlite3_value **argv
)
static void test_error(
sqlite3_context *pCtx,
int nArg,
sqlite3_value **argv
)
static void counterFunc(
sqlite3_context *pCtx,
int nArg,
sqlite3_value **argv
)
static void test_isolation(
sqlite3_context *pCtx,
int nArg,
sqlite3_value **argv
)
static void test_eval(
sqlite3_context *pCtx,
int nArg,
sqlite3_value **argv
)
static int testHexChar(char c)
static void testHexToBin(const char *zIn, char *zOut)
static void testHexToUtf16be(
sqlite3_context *pCtx,
int nArg,
sqlite3_value **argv
)
static void testHexToUtf8(
sqlite3_context *pCtx,
int nArg,
sqlite3_value **argv
)
static void testHexToUtf16le(
sqlite3_context *pCtx,
int nArg,
sqlite3_value **argv
)
static void real2hex(
sqlite3_context *context,
int argc,
sqlite3_value **argv
)
static void test_extract(
sqlite3_context *context,
int argc,
sqlite3_value **argv
)
static void test_decode(
sqlite3_context *context,
int argc,
sqlite3_value **argv
)
static void test_zeroblob(
sqlite3_context *context,
int argc,
sqlite3_value **argv
)
static int registerTestFunctions(sqlite3 *db)
static int autoinstall_test_funcs(
void * clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static void tStep(sqlite3_context *a, int b, sqlite3_value **c)
static void tFinal(sqlite3_context *a)
static int abuse_create_function(
void * clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
int Sqlitetest_func_Init(Tcl_Interp *interp)
