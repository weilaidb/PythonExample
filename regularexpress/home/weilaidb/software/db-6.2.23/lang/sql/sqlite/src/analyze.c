#if defined(SQLITE_ENABLE_STAT4)
# define IsStat4     1
# define IsStat3     0
#elif defined(SQLITE_ENABLE_STAT3)
# define IsStat4     0
# define IsStat3     1
# define IsStat4     0
# define IsStat3     0
# undef SQLITE_STAT4_SAMPLES
# define SQLITE_STAT4_SAMPLES 1
#define IsStat34    (IsStat3+IsStat4)
static void openStatTable(
Parse *pParse,
int iDb,
int iStatCur,
const char *zWhere,
const char *zWhereType
)
# define SQLITE_STAT4_SAMPLES 24
typedef struct Stat4Accum Stat4Accum;
typedef struct Stat4Sample Stat4Sample;
struct Stat4Sample ;
struct Stat4Accum ;
static void sampleClear(sqlite3 *db, Stat4Sample *p)
static void sampleSetRowid(sqlite3 *db, Stat4Sample *p, int n, const u8 *pData)
static void sampleSetRowidInt64(sqlite3 *db, Stat4Sample *p, i64 iRowid)
static void sampleCopy(Stat4Accum *p, Stat4Sample *pTo, Stat4Sample *pFrom)
static void stat4Destructor(void *pOld)
static void statInit(
sqlite3_context *context,
int argc,
sqlite3_value **argv
)
static const FuncDef statInitFuncdef = ;
static int sampleIsBetterPost(
Stat4Accum *pAccum,
Stat4Sample *pNew,
Stat4Sample *pOld
)
static int sampleIsBetter(
Stat4Accum *pAccum,
Stat4Sample *pNew,
Stat4Sample *pOld
)
static void sampleInsert(Stat4Accum *p, Stat4Sample *pNew, int nEqZero)
static void samplePushPrevious(Stat4Accum *p, int iChng)
static void statPush(
sqlite3_context *context,
int argc,
sqlite3_value **argv
)
static const FuncDef statPushFuncdef = ;
#define STAT_GET_STAT1 0
#define STAT_GET_ROWID 1
#define STAT_GET_NEQ   2
#define STAT_GET_NLT   3
#define STAT_GET_NDLT  4
static void statGet(
sqlite3_context *context,
int argc,
sqlite3_value **argv
)
static const FuncDef statGetFuncdef = ;
static void callStatGet(Vdbe *v, int regStat4, int iParam, int regOut)
static void analyzeOneTable(
Parse *pParse,
Table *pTab,
Index *pOnlyIdx,
int iStatCur,
int iMem,
int iTab
)
static void loadAnalysis(Parse *pParse, int iDb)
static void analyzeDatabase(Parse *pParse, int iDb)
static void analyzeTable(Parse *pParse, Table *pTab, Index *pOnlyIdx)
void sqlite3Analyze(Parse *pParse, Token *pName1, Token *pName2)
typedef struct analysisInfo analysisInfo;
struct analysisInfo ;
static void decodeIntArray(
char *zIntArray,
int nOut,
tRowcnt *aOut,
LogEst *aLog,
Index *pIndex
){
char *z = zIntArray;
int c;
int i;
tRowcnt v;
if( z==0 ) z = "";
assert( z!=0 );
for(i=0; *z && i<nOut; i++)
assert( pIndex!=0 );
static int analysisLoader(void *pData, int argc, char **argv, char **NotUsed)
void sqlite3DeleteIndexSamples(sqlite3 *db, Index *pIdx)
static void initAvgEq(Index *pIdx)
static Index *findIndexOrPrimaryKey(
sqlite3 *db,
const char *zName,
const char *zDb
)
static int loadStatTbl(
sqlite3 *db,
int bStat3,
const char *zSql1,
const char *zSql2,
const char *zDb
)
static int loadStat4(sqlite3 *db, const char *zDb)
int sqlite3AnalysisLoad(sqlite3 *db, int iDb)
