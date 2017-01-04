static int btreeCopyPages(sqlite3_backup *p, int *pages);
static char *BACKUP_SUFFIX="-tmpBackup";
struct sqlite3_backup ;
static Btree *findBtree(sqlite3 *pErrorDb, sqlite3 *pDb, const char *zDb)
sqlite3_backup *sqlite3_backup_init(sqlite3* pDestDb, const char *zDestDb,
sqlite3* pSrcDb, const char *zSrcDb)
static int btreeCleanupEnv(const char *home)
int btreeDeleteEnvironment(Btree *p, const char *home, int rename)
static int backupCleanup(sqlite3_backup *p)
static void backupReset(sqlite3_backup *p)
int sqlite3_backup_step(sqlite3_backup *p, int nPage)
int sqlite3_backup_finish(sqlite3_backup *p)
int sqlite3_backup_remaining(sqlite3_backup *p)
int sqlite3_backup_pagecount(sqlite3_backup *p)
static int btreeCopyPages(sqlite3_backup *p, int *pages)
