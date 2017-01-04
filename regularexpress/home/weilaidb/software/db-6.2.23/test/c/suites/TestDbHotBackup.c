#define	US_PER_SEC	1000000
struct handlers ;
static int backup_close(DB_ENV *, const char *, void *);
static int backup_db(CuTest *, DB_ENV *, const char *, u_int32_t, int);
static int backup_env(CuTest *, DB_ENV *, u_int32_t, int);
static int backup_open(DB_ENV *, const char *, const char *, void **);
static int backup_write(DB_ENV *, u_int32_t,
u_int32_t, u_int32_t, u_int8_t *, void *);
static int cleanup_test(DB_ENV *, DB *);
static int cmp_files(const char *, const char *);
static int make_dbconfig(const char *);
static int open_dbp(DB_ENV **, DB **, DBTYPE,
u_int32_t, char **, const char *, const char *, u_int32_t, DBT *);
static int setup_dir(u_int32_t, char **);
static int store_records(DB *, u_int32_t);
static int test_backup_onlydbfile(CuTest *, DBTYPE, int);
static int verify_db_log(DBTYPE, u_int32_t,
u_int32_t, const char *, const char *);
static int verify_dbconfig(u_int32_t);
#define BACKUP_DIR "BACKUP"
#define BACKUP_DB "backup.db"
#define LOG_DIR "LOG"
char *data_dirs[3] = ;
int TestDbHotBackupSuiteSetup(CuSuite *suite)
int TestDbHotBackupSuiteTeardown(CuSuite *suite)
int TestDbHotBackupTestSetup(CuTest *ct)
int TestDbHotBackupTestTeardown(CuTest *ct)
int TestBackupSimpleEnvNoCallback(CuTest *ct)
int TestBackupSimpleEnvWithCallback(CuTest *ct)
int TestBackupSimpleEnvWithConfig(CuTest *ct)
int TestBackupPartitionDB(CuTest *ct)
int TestBackupMultiDataDir(CuTest *ct)
int TestBackupSetLogDir(CuTest *ct)
int TestBackupQueueDB(CuTest *ct)
int TestBackupHeapDB(CuTest *ct)
static int
setup_dir(len, dirs)
u_int32_t len;
char **dirs;
static int
open_dbp(dbenvp, dbpp, dtype,
ddir_len, data_dir, create_dir, lg_dir, nparts, part_key)
DB_ENV **dbenvp;
DB **dbpp;
DBTYPE dtype;
u_int32_t ddir_len, nparts;
char **data_dir;
const char *create_dir, *lg_dir;
DBT *part_key;
static int
store_records(dbp, dups)
DB *dbp;
u_int32_t dups;
static int
cleanup_test(dbenv, dbp)
DB_ENV *dbenv;
DB *dbp;
static int
backup_env(ct, dbenv, flags, has_callback)
CuTest *ct;
DB_ENV *dbenv;
u_int32_t flags;
int has_callback;
static int
backup_db(ct, dbenv, dname, flags, has_callback)
CuTest *ct;
DB_ENV *dbenv;
const char *dname;
u_int32_t flags;
int has_callback;
static int
verify_db_log(dtype, is_part, is_lg, test_cmpdir, backup_cmpdir)
DBTYPE dtype;
u_int32_t is_part, is_lg;
const char *test_cmpdir, *backup_cmpdir;
static int
verify_dbconfig(is_exist)
u_int32_t is_exist;
static int
backup_open(dbenv, dbname, target, handle)
DB_ENV *dbenv;
const char *dbname;
const char *target;
void **handle;
static int
backup_write(dbenv, gigs, offset, size, buf, handle)
DB_ENV *dbenv;
u_int32_t gigs, offset, size;
u_int8_t *buf;
void *handle;
static int
backup_close(dbenv, dbname, handle)
DB_ENV *dbenv;
const char *dbname;
void *handle;
static int
make_dbconfig(content)
const char * content;
static int
cmp_files(name1, name2)
const char *name1;
const char *name2;
static int
test_backup_onlydbfile(ct, dbtype, has_callback)
CuTest *ct;
DBTYPE dbtype;
int has_callback;
