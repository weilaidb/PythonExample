static void callCollNeeded(sqlite3 *db, int enc, const char *zName)
static int synthCollSeq(sqlite3 *db, CollSeq *pColl)
CollSeq *sqlite3GetCollSeq(
Parse *pParse,
u8 enc,
CollSeq *pColl,
const char *zName
)
int sqlite3CheckCollSeq(Parse *pParse, CollSeq *pColl)
static CollSeq *findCollSeqEntry(
sqlite3 *db,
const char *zName,
int create
)
CollSeq *sqlite3FindCollSeq(
sqlite3 *db,
u8 enc,
const char *zName,
int create
)
#define FUNC_PERFECT_MATCH 6
static int matchQuality(
FuncDef *p,
int nArg,
u8 enc
)
static FuncDef *functionSearch(
FuncDefHash *pHash,
int h,
const char *zFunc,
int nFunc
)
void sqlite3FuncDefInsert(
FuncDefHash *pHash,
FuncDef *pDef
)
FuncDef *sqlite3FindFunction(
sqlite3 *db,
const char *zName,
int nName,
int nArg,
u8 enc,
u8 createFlag
)
void sqlite3SchemaClear(void *p)
Schema *sqlite3SchemaGet(sqlite3 *db, Btree *pBt)
