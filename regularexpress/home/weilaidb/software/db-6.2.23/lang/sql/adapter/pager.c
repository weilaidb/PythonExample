#define	INT32_MAX		2147483647
extern int __log_current_lsn(ENV *, DB_LSN *, u_int32_t *, u_int32_t *);
static sqlite3_file nullfile;
int sqlite3PagerIsMemdb(Pager *pPager)
int sqlite3PagerJournalMode(Pager *pPager, int mode)
i64 sqlite3PagerJournalSizeLimit(Pager *pPager, i64 limit)
int sqlite3PagerLockingMode(Pager *pPager, int mode)
int sqlite3PagerPagecount(Pager *pPager, int *pCount)
sqlite3_file *sqlite3PagerFile(Pager *pPager)
const char *sqlite3PagerFilename(Pager *pPager, int nullIfMemDb)
u8 sqlite3PagerIsreadonly(Pager *pPager)
void sqlite3PagerShrink(Pager *pPager)
int sqlite3PagerGetJournalMode(Pager *pPager)
int sqlite3PagerMemUsed(Pager *pPager)
int sqlite3PagerOkToChangeJournalMode(Pager *pPager)
int sqlite3PagerSetJournalMode(Pager *pPager, int eMode)
int sqlite3PagerExclusiveLock(Pager *pPager)
int sqlite3PagerWalCallback(Pager *pPager)
int sqlite3PagerCheckpoint(Pager *pPager)
int sqlite3PagerCloseWal(Pager *pPager)
int sqlite3PagerWalSupported(Pager *pPager)
void sqlite3PagerCacheStat(Pager *pPager, int eStat, int reset, int *pnVal)
int sqlite3_pager_readdb_count = 0;
int sqlite3_pager_writedb_count = 0;
int sqlite3_pager_writej_count = 0;
int sqlite3_opentemp_count = 0;
int *sqlite3PagerStats(Pager *pPager)
int sqlite3PagerGet(Pager *pPager, Pgno pgno, DbPage **ppPage)
void *sqlite3PagerGetData(DbPage *pPg)
void sqlite3PagerUnref(DbPage *pPg)
SQLITE_API void sqlite3_get_pager_stats(sqlite3_int64 *totalBytesOut,
sqlite3_int64 *referencedBytesOut, sqlite3_int64 *dbBytesOut,
int *numPagersOut)
