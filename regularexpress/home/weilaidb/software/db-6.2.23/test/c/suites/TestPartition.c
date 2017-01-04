static int close_db(DB_ENV *, DB *, CuTest *);
static int create_db(DB_ENV **, DB **dbpp, int bigcache, CuTest *);
static u_int32_t partitionCallback(DB *, DBT *);
static int put_data(DB *);
static FILE *errfp;
static char *content;
static u_int32_t nparts;
int TestPartitionSuiteSetup(CuSuite *suite)
int TestPartitionSuiteTeardown(CuSuite *suite)
int TestPartitionTestSetup(CuTest *ct)
int TestPartitionTestTeardown(CuTest *ct)
int TestPartOneKeyNoData(CuTest *ct)
int TestPartTwoKeyNoData(CuTest *ct)
int TestPartDuplicatedKey(CuTest *ct)
int TestPartUnsortedKey(CuTest *ct)
int TestPartNumber(CuTest *ct)
int TestPartKeyCallBothSet(CuTest *ct)
int TestPartKeyCallNeitherSet(CuTest *ct)
static int
create_db(dbenvp, dbpp, bigcache, ct)
DB_ENV **dbenvp;
DB **dbpp;
int bigcache;
CuTest *ct;
static int
close_db(dbenv, dbp, ct)
DB_ENV *dbenv;
DB *dbp;
CuTest *ct;
static u_int32_t
partitionCallback(dbp, key)
DB *dbp;
DBT *key;
static int
put_data(dbp)
DB *dbp;
