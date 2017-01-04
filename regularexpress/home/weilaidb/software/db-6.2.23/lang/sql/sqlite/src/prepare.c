static void corruptSchema(
InitData *pData,
const char *zObj,
const char *zExtra
)
int sqlite3InitCallback(void *pInit, int argc, char **argv, char **NotUsed)
static int sqlite3InitOne(sqlite3 *db, int iDb, char **pzErrMsg)
int sqlite3Init(sqlite3 *db, char **pzErrMsg)
int sqlite3ReadSchema(Parse *pParse)
static void schemaIsValid(Parse *pParse)
int sqlite3SchemaToIndex(sqlite3 *db, Schema *pSchema)
void sqlite3ParserReset(Parse *pParse)
static int sqlite3Prepare(
sqlite3 *db,
const char *zSql,
int nBytes,
int saveSqlFlag,
Vdbe *pReprepare,
sqlite3_stmt **ppStmt,
const char **pzTail
)
static int sqlite3LockAndPrepare(
sqlite3 *db,
const char *zSql,
int nBytes,
int saveSqlFlag,
Vdbe *pOld,
sqlite3_stmt **ppStmt,
const char **pzTail
)
int sqlite3Reprepare(Vdbe *p)
int sqlite3_prepare(
sqlite3 *db,
const char *zSql,
int nBytes,
sqlite3_stmt **ppStmt,
const char **pzTail
)
int sqlite3_prepare_v2(
sqlite3 *db,
const char *zSql,
int nBytes,
sqlite3_stmt **ppStmt,
const char **pzTail
)
static int sqlite3Prepare16(
sqlite3 *db,
const void *zSql,
int nBytes,
int saveSqlFlag,
sqlite3_stmt **ppStmt,
const void **pzTail
)
int sqlite3_prepare16(
sqlite3 *db,
const void *zSql,
int nBytes,
sqlite3_stmt **ppStmt,
const void **pzTail
)
int sqlite3_prepare16_v2(
sqlite3 *db,
const void *zSql,
int nBytes,
sqlite3_stmt **ppStmt,
const void **pzTail
)
