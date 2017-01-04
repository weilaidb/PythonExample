const char *dbName = "TestPartial.db";
const char *sdbName = "TestPartialSec.db";
int expected = EINVAL;
static void CheckDbPartial(CuTest *, DB *, int, u_int32_t, int);
static void CheckCursorPartial(CuTest *, DB *, int, u_int32_t, int);
static int CloseDb(DB *);
static int Getkeystring(DB *, const DBT *, const DBT *, DBT *);
static void OpenDb(CuTest *, DB *, DB **, const char *, DBTYPE, u_int32_t);
static void PopulateDb(CuTest *, DB *, u_int32_t, u_int32_t);
int TestPartialSuiteSetup(CuSuite *ct)
int TestPartialSuiteTeardown(CuSuite *ct)
int TestPartialTestSetup(CuTest *ct)
int TestPartialTestTeardown(CuTest *ct)
int TestDbPartialGet(CuTest *ct)
int TestDbPartialPGet(CuTest *ct)
int TestCursorPartialGet(CuTest *ct)
int TestCursorPartialPGet(CuTest *ct)
static void CheckDbPartial(CuTest *ct,
DB *dbp, int isSec, u_int32_t flags, int value)
static void CheckCursorPartial(CuTest *ct,
DB *dbp, int isSec, u_int32_t flags, int value)
static int CloseDb(DB *dbp)
static void OpenDb(CuTest *ct, DB *ldbp, DB **dbpp, const char *dbName,
DBTYPE type, u_int32_t openFlags)
static int Getkeystring(
DB *secondary, const DBT *pkey, const DBT *pdata, DBT *skey)
static void PopulateDb(CuTest *ct, DB *db, u_int32_t nkeys, u_int32_t ndups)
