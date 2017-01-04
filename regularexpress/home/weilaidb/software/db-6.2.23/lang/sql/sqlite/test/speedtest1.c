static const char zHelp[] =
"Usage: %s [--options] DATABASE\n"
"Options:\n"
"  --autovacuum        Enable AUTOVACUUM mode\n"
"  --cachesize N       Set the cache size to N\n"
"  --exclusive         Enable locking_mode=EXCLUSIVE\n"
"  --explain           Like --sqlonly but with added EXPLAIN keywords\n"
"  --heap SZ MIN       Memory allocator uses SZ bytes & min allocation MIN\n"
"  --incrvacuum        Enable incremenatal vacuum mode\n"
"  --journal M         Set the journal_mode to M\n"
"  --key KEY           Set the encryption key to KEY\n"
"  --lookaside N SZ    Configure lookaside for N slots of SZ bytes each\n"
"  --nosync            Set PRAGMA synchronous=OFF\n"
"  --notnull           Add NOT NULL constraints to table columns\n"
"  --pagesize N        Set the page size to N\n"
"  --pcache N SZ       Configure N pages of pagecache each of size SZ bytes\n"
"  --primarykey        Use PRIMARY KEY instead of UNIQUE where appropriate\n"
"  --reprepare         Reprepare each statement upon every invocation\n"
"  --scratch N SZ      Configure scratch memory for N slots of SZ bytes each\n"
"  --sqlonly           No-op.  Only show the SQL that would have been run.\n"
"  --size N            Relative test size.  Default=100\n"
"  --stats             Show statistics at the end\n"
"  --testset T         Run test-set T\n"
"  --trace             Turn on SQL tracing\n"
"  --threads N         Use up to N threads for sorting\n"
"  --utf16be           Set text encoding to UTF-16BE\n"
"  --utf16le           Set text encoding to UTF-16LE\n"
"  --verify            Run additional verification steps.\n"
"  --without-rowid     Use WITHOUT ROWID where appropriate\n"
;
static struct Global  g;
static void fatal_error(const char *zMsg, ...)
static int hexDigitValue(char c)
#if SQLITE_VERSION_NUMBER<3007011
# define sqlite3_stricmp strcmp
static int integerValue(const char *zArg)
sqlite3_int64 speedtest1_timestamp(void)
unsigned int speedtest1_random(void)
unsigned swizzle(unsigned in, unsigned limit)
unsigned roundup_allones(unsigned limit)
int speedtest1_numbername(unsigned int n, char *zOut, int nOut)
#define NAMEWIDTH 60
static const char zDots[] =
".......................................................................";
void speedtest1_begin_test(int iTestNum, const char *zTestName, ...)
void speedtest1_end_test(void)
void speedtest1_final(void)
static void printSql(const char *zSql)
void speedtest1_exec(const char *zFormat, ...)
void speedtest1_prepare(const char *zFormat, ...)
void speedtest1_run(void)
static void traceCallback(void *NotUsed, const char *zSql)
static void randomFunc(
sqlite3_context *context,
int NotUsed,
sqlite3_value **NotUsed2
)
static int est_square_root(int x)
void testset_main(void)
void testset_cte(void)
static void twoCoords(
int p1, int p2,
unsigned mx,
unsigned *pX0, unsigned *pX1
)
static int xsliceGeometryCallback(
sqlite3_rtree_geometry *p,
int nCoord,
double *aCoord,
int *pRes
)
void testset_rtree(int p1, int p2)
void testset_debug1(void)
int main(int argc, char **argv)
