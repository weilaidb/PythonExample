#undef DB_TIMEOUT
typedef struct Pager Pager;
typedef struct PgHdr DbPage;
typedef db_pgno_t Pgno;
#define	PAGER_OMIT_JOURNAL  0x0001
#define	PAGER_NO_READLOCK   0x0002
#define	PAGER_LOCKINGMODE_QUERY      -1
#define	PAGER_LOCKINGMODE_NORMAL      0
#define	PAGER_LOCKINGMODE_EXCLUSIVE   1
#define	PAGER_JOURNALMODE_QUERY      -1
#define	PAGER_JOURNALMODE_DELETE      0
#define	PAGER_JOURNALMODE_PERSIST     1
#define	PAGER_JOURNALMODE_OFF         2
#define	PAGER_JOURNALMODE_TRUNCATE    3
#define	PAGER_JOURNALMODE_MEMORY      4
#define	PAGER_JOURNALMODE_WAL         5
#define PAGER_GET_NOCONTENT     0x01
#define PAGER_GET_READONLY      0x02
#define PAGER_SYNCHRONOUS_OFF       0x01
#define PAGER_SYNCHRONOUS_NORMAL    0x02
#define PAGER_SYNCHRONOUS_FULL      0x03
#define PAGER_SYNCHRONOUS_MASK      0x03
#define PAGER_FULLFSYNC             0x04
#define PAGER_CKPT_FULLFSYNC        0x08
#define PAGER_CACHESPILL            0x10
#define PAGER_FLAGS_MASK            0x1c
#define SQLITE_DEFAULT_JOURNAL_SIZE_LIMIT 2 * 1024 * 1024
const char *sqlite3PagerFilename(Pager *pPager, int);
void sqlite3PagerCacheStat(Pager *, int, int, int *);
int sqlite3PagerExclusiveLock(Pager *pPager);
sqlite3_file *sqlite3PagerFile(Pager*);
int sqlite3PagerGetJournalMode(Pager *pPager);
int sqlite3PagerIsMemdb(Pager*);
u8 sqlite3PagerIsreadonly(Pager*);
int sqlite3PagerJournalMode(Pager *, int);
i64 sqlite3PagerJournalSizeLimit(Pager *, i64);
int sqlite3PagerLockingMode(Pager *, int);
int sqlite3PagerMemUsed(Pager *pPager);
int sqlite3PagerOkToChangeJournalMode(Pager *pPager);
int sqlite3PagerPagecount(Pager*, int*);
void sqlite3PagerSetFlags(Pager*,unsigned);
int sqlite3PagerSetJournalMode(Pager *pPager, int eMode);
void sqlite3PagerShrink(Pager*);
int sqlite3PagerWalCallback(Pager *pPager);
int sqlite3PagerCheckpoint(Pager *pPager);
int sqlite3PagerCloseWal(Pager *pPager);
int sqlite3PagerWalSupported(Pager *pPager);
#define	disable_simulated_io_errors()
#define	enable_simulated_io_errors()
int *sqlite3PagerStats(Pager*);
