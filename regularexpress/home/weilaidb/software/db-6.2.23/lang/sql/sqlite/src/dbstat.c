#if (defined(SQLITE_ENABLE_DBSTAT_VTAB) || defined(SQLITE_TEST)) \
&& !defined(SQLITE_OMIT_VIRTUALTABLE)
#define VTAB_SCHEMA                                                         \
"CREATE TABLE xx( "                                                       \
"  name       STRING,"             \
"  path       INTEGER,"             \
"  pageno     INTEGER,"                        \
"  pagetype   STRING,"   \
"  ncell      INTEGER,"     \
"  payload    INTEGER,"      \
"  unused     INTEGER," \
"  mx_payload INTEGER,"  \
"  pgoffset   INTEGER,"             \
"  pgsize     INTEGER"                   \
");"
typedef struct StatTable StatTable;
typedef struct StatCursor StatCursor;
typedef struct StatPage StatPage;
typedef struct StatCell StatCell;
struct StatCell ;
struct StatPage ;
struct StatCursor ;
struct StatTable ;
# define get2byte(x)   ((x)[0]<<8 | (x)[1])
static int statConnect(
sqlite3 *db,
void *pAux,
int argc, const char *const*argv,
sqlite3_vtab **ppVtab,
char **pzErr
)
static int statDisconnect(sqlite3_vtab *pVtab)
static int statBestIndex(sqlite3_vtab *tab, sqlite3_index_info *pIdxInfo)
static int statOpen(sqlite3_vtab *pVTab, sqlite3_vtab_cursor **ppCursor)
static void statClearPage(StatPage *p)
static void statResetCsr(StatCursor *pCsr)
static int statClose(sqlite3_vtab_cursor *pCursor)
static void getLocalPayload(
int nUsable,
u8 flags,
int nTotal,
int *pnLocal
)
static int statDecodePage(Btree *pBt, StatPage *p)
static void statSizeAndOffset(StatCursor *pCsr)
static int statNext(sqlite3_vtab_cursor *pCursor)
static int statEof(sqlite3_vtab_cursor *pCursor)
static int statFilter(
sqlite3_vtab_cursor *pCursor,
int idxNum, const char *idxStr,
int argc, sqlite3_value **argv
)
static int statColumn(
sqlite3_vtab_cursor *pCursor,
sqlite3_context *ctx,
int i
)
static int statRowid(sqlite3_vtab_cursor *pCursor, sqlite_int64 *pRowid)
int sqlite3_dbstat_register(sqlite3 *db)
