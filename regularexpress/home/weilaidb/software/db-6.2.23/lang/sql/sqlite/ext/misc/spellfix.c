SQLITE_EXTENSION_INIT1
# include <string.h>
# include <stdio.h>
# include <stdlib.h>
# include <assert.h>
# define ALWAYS(X)  1
# define NEVER(X)   0
typedef unsigned char u8;
typedef unsigned short u16;
#define CCLASS_SILENT         0
#define CCLASS_VOWEL          1
#define CCLASS_B              2
#define CCLASS_C              3
#define CCLASS_D              4
#define CCLASS_H              5
#define CCLASS_L              6
#define CCLASS_R              7
#define CCLASS_M              8
#define CCLASS_Y              9
#define CCLASS_DIGIT         10
#define CCLASS_SPACE         11
#define CCLASS_OTHER         12
static const unsigned char midClass[] = ;
static const unsigned char initClass[] = ;
static const unsigned char className[] = ".ABCDHLRMY9 ?";
static unsigned char *phoneticHash(const unsigned char *zIn, int nIn)
static void phoneticHashSqlFunc(
sqlite3_context *context,
int argc,
sqlite3_value **argv
)
static char characterClass(char cPrev, char c)
static int insertOrDeleteCost(char cPrev, char c, char cNext)
#define FINAL_INS_COST_DIV  4
static int substituteCost(char cPrev, char cFrom, char cTo)
static int editdist1(const char *zA, const char *zB, int *pnMatch)
static void editdistSqlFunc(
sqlite3_context *context,
int argc,
sqlite3_value **argv
)
typedef struct EditDist3Cost EditDist3Cost;
typedef struct EditDist3Config EditDist3Config;
typedef struct EditDist3Point EditDist3Point;
typedef struct EditDist3From EditDist3From;
typedef struct EditDist3FromString EditDist3FromString;
typedef struct EditDist3To EditDist3To;
typedef struct EditDist3ToString EditDist3ToString;
typedef struct EditDist3Lang EditDist3Lang;
struct EditDist3Cost ;
struct EditDist3Lang ;
static const EditDist3Lang editDist3Lang = ;
struct EditDist3Config ;
struct EditDist3From ;
struct EditDist3FromString ;
struct EditDist3To ;
struct EditDist3ToString ;
static void editDist3ConfigClear(EditDist3Config *p)
static void editDist3ConfigDelete(void *pIn)
static int editDist3ConfigLoad(
EditDist3Config *p,
sqlite3 *db,
const char *zTable
)
static int utf8Len(unsigned char c, int N)
static int matchTo(EditDist3Cost *p, const char *z, int n)
static int matchFrom(EditDist3Cost *p, const char *z, int n)
static int matchFromTo(
EditDist3FromString *pStr,
int n1,
const char *z2,
int n2
)
static void editDist3FromStringDelete(EditDist3FromString *p)
static EditDist3FromString *editDist3FromStringNew(
const EditDist3Lang *pLang,
const char *z,
int n
)
static void updateCost(
unsigned int *m,
int i,
int j,
int iCost
)
static int editDist3Core(
EditDist3FromString *pFrom,
const char *z2,
int n2,
const EditDist3Lang *pLang,
int *pnMatch
)
static const EditDist3Lang *editDist3FindLang(
EditDist3Config *pConfig,
int iLang
)
static void editDist3SqlFunc(
sqlite3_context *context,
int argc,
sqlite3_value **argv
)
static int editDist3Install(sqlite3 *db)
#if !SQLITE_AMALGAMATION
static const unsigned char sqlite3Utf8Trans1[] = ;
static int utf8Read(const unsigned char *z, int n, int *pSize)
static int utf8Charlen(const char *zIn, int nIn)
static const struct  translit[] = ;
static unsigned char *transliterate(const unsigned char *zIn, int nIn)
static int translen_to_charlen(const char *zIn, int nIn, int nTrans)
static void transliterateSqlFunc(
sqlite3_context *context,
int argc,
sqlite3_value **argv
)
static void scriptCodeSqlFunc(
sqlite3_context *context,
int argc,
sqlite3_value **argv
)
#define SPELLFIX_MX_HASH  8
#define SPELLFIX_MX_RUN   1
typedef struct spellfix1_vtab spellfix1_vtab;
typedef struct spellfix1_cursor spellfix1_cursor;
struct spellfix1_vtab ;
struct spellfix1_cursor ;
static void spellfix1DbExec(
int *pRc,
sqlite3 *db,
const char *zFormat,
...
)
static int spellfix1Uninit(int isDestroy, sqlite3_vtab *pVTab)
static int spellfix1Disconnect(sqlite3_vtab *pVTab)
static int spellfix1Destroy(sqlite3_vtab *pVTab)
static char *spellfix1Dequote(const char *zIn)
static int spellfix1Init(
int isCreate,
sqlite3 *db,
void *pAux,
int argc, const char *const*argv,
sqlite3_vtab **ppVTab,
char **pzErr
){
spellfix1_vtab *pNew = 0;
static int spellfix1Connect(
sqlite3 *db,
void *pAux,
int argc, const char *const*argv,
sqlite3_vtab **ppVTab,
char **pzErr
)
static int spellfix1Create(
sqlite3 *db,
void *pAux,
int argc, const char *const*argv,
sqlite3_vtab **ppVTab,
char **pzErr
)
static void spellfix1ResetCursor(spellfix1_cursor *pCur)
static void spellfix1ResizeCursor(spellfix1_cursor *pCur, int N)
static int spellfix1Close(sqlite3_vtab_cursor *cur)
static int spellfix1BestIndex(sqlite3_vtab *tab, sqlite3_index_info *pIdxInfo)
static int spellfix1Open(sqlite3_vtab *pVTab, sqlite3_vtab_cursor **ppCursor)
static int spellfix1Score(int iDistance, int iRank)
static int spellfix1RowCompare(const void *A, const void *B)
typedef struct MatchQuery  MatchQuery;
static void spellfix1RunQuery(MatchQuery *p, const char *zQuery, int nQuery)
static int spellfix1FilterForMatch(
spellfix1_cursor *pCur,
int idxNum,
int argc,
sqlite3_value **argv
)
static int spellfix1FilterForFullScan(
spellfix1_cursor *pCur,
int idxNum,
int argc,
sqlite3_value **argv
)
static int spellfix1Filter(
sqlite3_vtab_cursor *cur,
int idxNum, const char *idxStr,
int argc, sqlite3_value **argv
)
static int spellfix1Next(sqlite3_vtab_cursor *cur)
static int spellfix1Eof(sqlite3_vtab_cursor *cur)
static int spellfix1Column(
sqlite3_vtab_cursor *cur,
sqlite3_context *ctx,
int i
)
static int spellfix1Rowid(sqlite3_vtab_cursor *cur, sqlite_int64 *pRowid)
static int spellfix1Update(
sqlite3_vtab *pVTab,
int argc,
sqlite3_value **argv,
sqlite_int64 *pRowid
)
static int spellfix1Rename(sqlite3_vtab *pVTab, const char *zNew)
static sqlite3_module spellfix1Module = ;
static int spellfix1Register(sqlite3 *db)
__declspec(dllexport)
int sqlite3_spellfix_init(
sqlite3 *db,
char **pzErrMsg,
const sqlite3_api_routines *pApi
)
