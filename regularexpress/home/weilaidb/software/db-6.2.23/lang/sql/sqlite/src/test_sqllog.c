static int getProcessId(void)
#define ENVIRONMENT_VARIABLE1_NAME "SQLITE_SQLLOG_DIR"
#define ENVIRONMENT_VARIABLE2_NAME "SQLITE_SQLLOG_REUSE_FILES"
#define SQLLOG_NAMESZ 512
#define MAX_CONNECTIONS 256
struct SLConn ;
static struct SLGlobal  sqllogglobal;
static int sqllog_isspace(char c)
static void sqllogTokenize(const char *z, const char **pz, int *pn)
static char *sqllogFindFile(const char *zFile)
static int sqllogFindAttached(
struct SLConn *p,
const char *zSearch,
char *zName,
char *zFile
)
static void sqllogCopydb(struct SLConn *p, const char *zSearch, int bLog)
static void sqllogOpenlog(struct SLConn *p)
static void testSqllogStmt(struct SLConn *p, const char *zSql)
static void testSqllog(void *pCtx, sqlite3 *db, const char *zSql, int eType)
void sqlite3_init_sqllog(void)
