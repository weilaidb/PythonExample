typedef struct testpcacheGlobalType testpcacheGlobalType;
struct testpcacheGlobalType ;
static testpcacheGlobalType testpcacheGlobal;
static int testpcacheInit(void *pArg)
static void testpcacheShutdown(void *pArg)
#if defined(SQLITE_TEMP_STORE) && SQLITE_TEMP_STORE>=2
# define TESTPCACHE_NPAGE    499
# define TESTPCACHE_NPAGE    217
#define TESTPCACHE_RESERVE   17
#define TESTPCACHE_VALID  0x364585fd
#define TESTPCACHE_CLEAR  0xd42670d4
typedef struct testpcache testpcache;
struct testpcache ;
static unsigned testpcacheRandom(testpcache *p)
static sqlite3_pcache *testpcacheCreate(
int szPage,
int szExtra,
int bPurgeable
)
static void testpcacheCachesize(sqlite3_pcache *pCache, int newSize)
static int testpcachePagecount(sqlite3_pcache *pCache)
static sqlite3_pcache_page *testpcacheFetch(
sqlite3_pcache *pCache,
unsigned key,
int createFlag
)
static void testpcacheUnpin(
sqlite3_pcache *pCache,
sqlite3_pcache_page *pOldPage,
int discard
)
static void testpcacheRekey(
sqlite3_pcache *pCache,
sqlite3_pcache_page *pOldPage,
unsigned oldKey,
unsigned newKey
)
static void testpcacheTruncate(sqlite3_pcache *pCache, unsigned iLimit)
static void testpcacheDestroy(sqlite3_pcache *pCache)
void installTestPCache(
int installFlag,
unsigned discardChance,
unsigned prngSeed,
unsigned highStress
)
