SQLITE_EXTENSION_INIT1
#if !defined(NDEBUG) && !defined(SQLITE_DEBUG)
# define NDEBUG
typedef struct fuzzer_vtab fuzzer_vtab;
typedef struct fuzzer_cursor fuzzer_cursor;
typedef struct fuzzer_rule fuzzer_rule;
typedef struct fuzzer_seen fuzzer_seen;
typedef struct fuzzer_stem fuzzer_stem;
typedef int fuzzer_cost;
typedef signed char fuzzer_len;
typedef int fuzzer_ruleid;
#define FUZZER_MX_LENGTH           50
#define FUZZER_MX_RULEID   2147483647
#define FUZZER_MX_COST           1000
#define FUZZER_MX_OUTPUT_LENGTH   100
struct fuzzer_rule ;
struct fuzzer_stem ;
struct fuzzer_vtab ;
#define FUZZER_HASH  4001
#define FUZZER_NQUEUE  20
struct fuzzer_cursor ;
static fuzzer_rule *fuzzerMergeRules(fuzzer_rule *pA, fuzzer_rule *pB)
static int fuzzerLoadOneRule(
fuzzer_vtab *p,
sqlite3_stmt *pStmt,
fuzzer_rule **ppRule,
char **pzErr
)
static int fuzzerLoadRules(
sqlite3 *db,
fuzzer_vtab *p,
const char *zDb,
const char *zData,
char **pzErr
)
static char *fuzzerDequote(const char *zIn)
static int fuzzerDisconnect(sqlite3_vtab *pVtab)
static int fuzzerConnect(
sqlite3 *db,
void *pAux,
int argc, const char *const*argv,
sqlite3_vtab **ppVtab,
char **pzErr
)
static int fuzzerOpen(sqlite3_vtab *pVTab, sqlite3_vtab_cursor **ppCursor)
static void fuzzerClearStemList(fuzzer_stem *pStem)
static void fuzzerClearCursor(fuzzer_cursor *pCur, int clearHash)
static int fuzzerClose(sqlite3_vtab_cursor *cur)
static int fuzzerRender(
fuzzer_stem *pStem,
char **pzBuf,
int *pnBuf
)
static unsigned int fuzzerHash(const char *z)
static fuzzer_cost fuzzerCost(fuzzer_stem *pStem)
static int fuzzerSeen(fuzzer_cursor *pCur, fuzzer_stem *pStem)
static int fuzzerSkipRule(
const fuzzer_rule *pRule,
fuzzer_stem *pStem,
int iRuleset
)
static int fuzzerAdvance(fuzzer_cursor *pCur, fuzzer_stem *pStem)
static fuzzer_stem *fuzzerMergeStems(fuzzer_stem *pA, fuzzer_stem *pB)
static fuzzer_stem *fuzzerLowestCostStem(fuzzer_cursor *pCur)
static fuzzer_stem *fuzzerInsert(fuzzer_cursor *pCur, fuzzer_stem *pNew)
static fuzzer_stem *fuzzerNewStem(
fuzzer_cursor *pCur,
const char *zWord,
fuzzer_cost rBaseCost
)
static int fuzzerNext(sqlite3_vtab_cursor *cur)
static int fuzzerFilter(
sqlite3_vtab_cursor *pVtabCursor,
int idxNum, const char *idxStr,
int argc, sqlite3_value **argv
)
static int fuzzerColumn(sqlite3_vtab_cursor *cur, sqlite3_context *ctx, int i)
static int fuzzerRowid(sqlite3_vtab_cursor *cur, sqlite_int64 *pRowid)
static int fuzzerEof(sqlite3_vtab_cursor *cur)
static int fuzzerBestIndex(sqlite3_vtab *tab, sqlite3_index_info *pIdxInfo)
static sqlite3_module fuzzerModule = ;
__declspec(dllexport)
int sqlite3_fuzzer_init(
sqlite3 *db,
char **pzErrMsg,
const sqlite3_api_routines *pApi
)
