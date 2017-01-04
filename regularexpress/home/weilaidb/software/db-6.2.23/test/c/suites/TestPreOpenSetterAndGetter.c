#define CHECK_1_DIGIT_VALUE(handle, setter, getter, type, v) do  while(0)
#define CHECK_1_DIGIT_VALUES(handle, setter, getter, type, values) do  while(0)
#define CHECK_1_DIGIT_CONFIG_VALUE(handle, setter, getter, opt, type, v)\
do  while(0)
#define CHECK_1_DIGIT_CONFIG_VALUES(handle, setter, getter, configs, type)\
do  while(0)
#define CHECK_ONOFF(handle, setter, getter, options, opt_cnt, type) do  while(0)
#define CHECK_1_DIGIT_CONFIG_VALUE2(handle, setter, getter, opt, type, v)\
do  while(0)
#define CHECK_1_DIGIT_CONFIG_VALUES2(handle, setter, getter, configs, type)\
do  while(0)
#define CHECK_1_STR_VALUE(handle, setter, getter, v) do  while(0)
#define CHECK_1_STR_VALUE_VOID(handle, setter, getter, v) do  while(0)
#define CHECK_1_PTR_VALUE(handle, setter, getter, type, v) do  while(0)
#define CHECK_1_PTR_VALUE_VOID(handle, setter, getter, type, v) do  while(0)
#define CHECK_2_DIGIT_VALUES(handle, setter, getter, type1, v1, type2, v2)\
do  while(0)
#define CHECK_3_DIGIT_VALUES(handle, setter, getter, type1, v1, type2,	\
v2, type3, v3) do  while(0)
#define CHECK_FLAG_VALUE(handle, setter, getter, type, v) do  while(0)
#define CHECK_FLAG_VALUE_ONOFF(handle, setter, getter, type, v, on) do  while(0)
#define CHECK_ENV_FLAGS(handle, values) do  while(0)
struct handlers ;
static struct handlers info;
static const char *data_dirs[] = ;
const char *passwd = "passwd1";
static FILE *errfile, *msgfile;
static int add_dirs_to_dbenv(DB_ENV *dbenv, const char **dirs);
static int close_db_handle(DB *dbp);
static int close_dbenv_handle(DB_ENV *dbenvp);
static int close_mp_handle(DB_MPOOLFILE *mp);
static int close_seq_handle(DB_SEQUENCE *seqp);
static int cmp_dirs(const char **dirs1, const char **dirs2);
static int create_db_handle(DB **dbpp, DB_ENV *dbenv);
static int create_dbenv_handle(DB_ENV **dbenvpp);
static int create_mp_handle(DB_MPOOLFILE **mpp, DB_ENV *dbenv);
static int create_seq_handle(DB_SEQUENCE **seqpp, DB *dbp);
int TestPreOpenSetterAndGetterSuiteSetup(CuSuite *suite)
int TestPreOpenSetterAndGetterSuiteTeardown(CuSuite *suite)
int TestPreOpenSetterAndGetterTestSetup(CuTest *ct)
int TestPreOpenSetterAndGetterTestTeardown(CuTest *ct)
int TestEnvPreOpenSetterAndGetter(CuTest *ct)
int TestDbPreOpenSetterAndGetter(CuTest *ct)
int TestMpoolFilePreOpenSetterAndGetter(CuTest *ct)
int TestSequencePreOpenSetterAndGetter(CuTest *ct)
static int create_dbenv_handle(DB_ENV **dbenvpp)
static int close_dbenv_handle(DB_ENV *dbenvp)
static int create_db_handle(DB **dbpp, DB_ENV *dbenvp)
static int close_db_handle(DB *dbp)
static int create_mp_handle(DB_MPOOLFILE **mpp, DB_ENV *dbenv)
static int close_mp_handle(DB_MPOOLFILE *mp)
static int create_seq_handle(DB_SEQUENCE **seqpp, DB *dbp)
static int close_seq_handle(DB_SEQUENCE *seqp)
static int add_dirs_to_dbenv(DB_ENV *dbenv, const char **dirs)
static int cmp_dirs(const char **dirs1, const char **dirs2)
