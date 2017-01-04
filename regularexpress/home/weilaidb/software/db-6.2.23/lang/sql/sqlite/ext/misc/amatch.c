SQLITE_EXTENSION_INIT1
typedef struct amatch_vtab amatch_vtab;
typedef struct amatch_cursor amatch_cursor;
typedef struct amatch_rule amatch_rule;
typedef struct amatch_word amatch_word;
typedef struct amatch_avl amatch_avl;
struct amatch_avl ;
static void amatchAvlRecomputeHeight(amatch_avl *p)
static amatch_avl *amatchAvlRotateBefore(amatch_avl *pP)
static amatch_avl *amatchAvlRotateAfter(amatch_avl *pP)
static amatch_avl **amatchAvlFromPtr(amatch_avl *p, amatch_avl **pp)
static amatch_avl *amatchAvlBalance(amatch_avl *p)
static amatch_avl *amatchAvlSearch(amatch_avl *p, const char *zKey)
static amatch_avl *amatchAvlFirst(amatch_avl *p)
static amatch_avl *amatchAvlInsert(amatch_avl **ppHead, amatch_avl *pNew)
static void amatchAvlRemove(amatch_avl **ppHead, amatch_avl *pOld)
typedef int amatch_cost;
typedef signed char amatch_len;
typedef int amatch_langid;
#define AMATCH_MX_LENGTH          50
#define AMATCH_MX_LANGID  2147483647
#define AMATCH_MX_COST          1000
struct amatch_word ;
struct amatch_rule ;
struct amatch_vtab ;
struct amatch_cursor ;
static amatch_rule *amatchMergeRules(amatch_rule *pA, amatch_rule *pB)
static int amatchLoadOneRule(
amatch_vtab *p,
sqlite3_stmt *pStmt,
amatch_rule **ppRule,
char **pzErr
)
static void amatchFreeRules(amatch_vtab *p)
static int amatchLoadRules(
sqlite3 *db,
amatch_vtab *p,
char **pzErr
)
static char *amatchDequote(const char *zIn)
static void amatchVCheckClear(amatch_vtab *p)
static void amatchFree(amatch_vtab *p)
static int amatchDisconnect(sqlite3_vtab *pVtab)
static const char *amatchValueOfKey(const char *zKey, const char *zStr)
static int amatchConnect(
sqlite3 *db,
void *pAux,
int argc, const char *const*argv,
sqlite3_vtab **ppVtab,
char **pzErr
)
static int amatchOpen(sqlite3_vtab *pVTab, sqlite3_vtab_cursor **ppCursor)
static void amatchClearCursor(amatch_cursor *pCur)
static int amatchClose(sqlite3_vtab_cursor *cur)
static void amatchEncodeInt(int x, char *z)
static void amatchWriteCost(amatch_word *pWord)
#if defined(__OpenBSD__)
static void amatchStrcpy(char *dest, const char *src)
static void amatchStrcat(char *dest, const char *src)
# define amatchStrcpy strcpy
# define amatchStrcat strcat
static void amatchAddWord(
amatch_cursor *pCur,
amatch_cost rCost,
int nMatch,
const char *zWordBase,
const char *zWordTail
)
static int amatchNext(sqlite3_vtab_cursor *cur)
static int amatchFilter(
sqlite3_vtab_cursor *pVtabCursor,
int idxNum, const char *idxStr,
int argc, sqlite3_value **argv
)
static int amatchColumn(sqlite3_vtab_cursor *cur, sqlite3_context *ctx, int i)
static int amatchRowid(sqlite3_vtab_cursor *cur, sqlite_int64 *pRowid)
static int amatchEof(sqlite3_vtab_cursor *cur)
static int amatchBestIndex(
sqlite3_vtab *tab,
sqlite3_index_info *pIdxInfo
)
static int amatchUpdate(
sqlite3_vtab *pVTab,
int argc,
sqlite3_value **argv,
sqlite_int64 *pRowid
)
static sqlite3_module amatchModule = ;
__declspec(dllexport)
int sqlite3_amatch_init(
sqlite3 *db,
char **pzErrMsg,
const sqlite3_api_routines *pApi
)
