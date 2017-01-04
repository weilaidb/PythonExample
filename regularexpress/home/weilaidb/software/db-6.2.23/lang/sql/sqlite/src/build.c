void sqlite3BeginParse(Parse *pParse, int explainFlag)
struct TableLock ;
void sqlite3TableLock(
Parse *pParse,
int iDb,
int iTab,
u8 isWriteLock,
const char *zName
)
static void codeTableLocks(Parse *pParse)
#define codeTableLocks(x)
#if SQLITE_MAX_ATTACHED>30
int sqlite3DbMaskAllZero(yDbMask m)
void sqlite3FinishCoding(Parse *pParse)
void sqlite3NestedParse(Parse *pParse, const char *zFormat, ...)
#if SQLITE_USER_AUTHENTICATION
int sqlite3UserAuthTable(const char *zTable)
Table *sqlite3FindTable(sqlite3 *db, const char *zName, const char *zDatabase)
Table *sqlite3LocateTable(
Parse *pParse,
int isView,
const char *zName,
const char *zDbase
)
Table *sqlite3LocateTableItem(
Parse *pParse,
int isView,
struct SrcList_item *p
)
Index *sqlite3FindIndex(sqlite3 *db, const char *zName, const char *zDb)
static void freeIndex(sqlite3 *db, Index *p)
void sqlite3UnlinkAndDeleteIndex(sqlite3 *db, int iDb, const char *zIdxName)
void sqlite3CollapseDatabaseArray(sqlite3 *db)
void sqlite3ResetOneSchema(sqlite3 *db, int iDb)
void sqlite3ResetAllSchemasOfConnection(sqlite3 *db)
void sqlite3CommitInternalChanges(sqlite3 *db)
static void sqliteDeleteColumnNames(sqlite3 *db, Table *pTable)
void sqlite3DeleteTable(sqlite3 *db, Table *pTable)
void sqlite3UnlinkAndDeleteTable(sqlite3 *db, int iDb, const char *zTabName)
char *sqlite3NameFromToken(sqlite3 *db, Token *pName)
void sqlite3OpenMasterTable(Parse *p, int iDb)
int sqlite3FindDbName(sqlite3 *db, const char *zName)
int sqlite3FindDb(sqlite3 *db, Token *pName)
int sqlite3TwoPartName(
Parse *pParse,
Token *pName1,
Token *pName2,
Token **pUnqual
)
int sqlite3CheckObjectName(Parse *pParse, const char *zName)
Index *sqlite3PrimaryKeyIndex(Table *pTab)
i16 sqlite3ColumnOfIndex(Index *pIdx, i16 iCol)
void sqlite3StartTable(
Parse *pParse,
Token *pName1,
Token *pName2,
int isTemp,
int isView,
int isVirtual,
int noErr
)
#define STRICMP(x, y) (\
sqlite3UpperToLower[*(unsigned char *)(x)]==   \
sqlite3UpperToLower[*(unsigned char *)(y)]     \
&& sqlite3StrICmp((x)+1,(y)+1)==0 )
void sqlite3AddColumn(Parse *pParse, Token *pName)
void sqlite3AddNotNull(Parse *pParse, int onError)
char sqlite3AffinityType(const char *zIn, u8 *pszEst)
void sqlite3AddColumnType(Parse *pParse, Token *pType)
void sqlite3AddDefaultValue(Parse *pParse, ExprSpan *pSpan)
void sqlite3AddPrimaryKey(
Parse *pParse,
ExprList *pList,
int onError,
int autoInc,
int sortOrder
)
void sqlite3AddCheckConstraint(
Parse *pParse,
Expr *pCheckExpr
)
void sqlite3AddCollateType(Parse *pParse, Token *pToken)
CollSeq *sqlite3LocateCollSeq(Parse *pParse, const char *zName)
void sqlite3ChangeCookie(Parse *pParse, int iDb)
static int identLength(const char *z)
static void identPut(char *z, int *pIdx, char *zSignedIdent)
static char *createTableStmt(sqlite3 *db, Table *p)
static int resizeIndexObject(sqlite3 *db, Index *pIdx, int N)
static void estimateTableWidth(Table *pTab)
static void estimateIndexWidth(Index *pIdx)
static int hasColumn(const i16 *aiCol, int nCol, int x)
static void convertToWithoutRowidTable(Parse *pParse, Table *pTab)
void sqlite3EndTable(
Parse *pParse,
Token *pCons,
Token *pEnd,
u8 tabOpts,
Select *pSelect
)
void sqlite3CreateView(
Parse *pParse,
Token *pBegin,
Token *pName1,
Token *pName2,
Select *pSelect,
int isTemp,
int noErr
)
#if !defined(SQLITE_OMIT_VIEW) || !defined(SQLITE_OMIT_VIRTUALTABLE)
int sqlite3ViewGetColumnNames(Parse *pParse, Table *pTable)
static void sqliteViewResetAll(sqlite3 *db, int idx)
# define sqliteViewResetAll(A,B)
void sqlite3RootPageMoved(sqlite3 *db, int iDb, int iFrom, int iTo)
static void destroyRootPage(Parse *pParse, int iTable, int iDb)
static void destroyTable(Parse *pParse, Table *pTab)
static void sqlite3ClearStatTables(
Parse *pParse,
int iDb,
const char *zType,
const char *zName
)
void sqlite3CodeDropTable(Parse *pParse, Table *pTab, int iDb, int isView)
void sqlite3DropTable(Parse *pParse, SrcList *pName, int isView, int noErr)
void sqlite3CreateForeignKey(
Parse *pParse,
ExprList *pFromCol,
Token *pTo,
ExprList *pToCol,
int flags
)
void sqlite3DeferForeignKey(Parse *pParse, int isDeferred)
static void sqlite3RefillIndex(Parse *pParse, Index *pIndex, int memRootPage)
Index *sqlite3AllocateIndexObject(
sqlite3 *db,
i16 nCol,
int nExtra,
char **ppExtra
)
Index *sqlite3CreateIndex(
Parse *pParse,
Token *pName1,
Token *pName2,
SrcList *pTblName,
ExprList *pList,
int onError,
Token *pStart,
Expr *pPIWhere,
int sortOrder,
int ifNotExist
)
void sqlite3DefaultRowEst(Index *pIdx)
void sqlite3DropIndex(Parse *pParse, SrcList *pName, int ifExists)
void *sqlite3ArrayAllocate(
sqlite3 *db,
void *pArray,
int szEntry,
int *pnEntry,
int *pIdx
)
IdList *sqlite3IdListAppend(sqlite3 *db, IdList *pList, Token *pToken)
void sqlite3IdListDelete(sqlite3 *db, IdList *pList)
int sqlite3IdListIndex(IdList *pList, const char *zName)
SrcList *sqlite3SrcListEnlarge(
sqlite3 *db,
SrcList *pSrc,
int nExtra,
int iStart
)
SrcList *sqlite3SrcListAppend(
sqlite3 *db,
SrcList *pList,
Token *pTable,
Token *pDatabase
)
void sqlite3SrcListAssignCursors(Parse *pParse, SrcList *pList)
void sqlite3SrcListDelete(sqlite3 *db, SrcList *pList)
SrcList *sqlite3SrcListAppendFromTerm(
Parse *pParse,
SrcList *p,
Token *pTable,
Token *pDatabase,
Token *pAlias,
Select *pSubquery,
Expr *pOn,
IdList *pUsing
)
void sqlite3SrcListIndexedBy(Parse *pParse, SrcList *p, Token *pIndexedBy)
void sqlite3SrcListShiftJoinType(SrcList *p)
void sqlite3BeginTransaction(Parse *pParse, int type)
void sqlite3CommitTransaction(Parse *pParse)
void sqlite3RollbackTransaction(Parse *pParse)
void sqlite3Savepoint(Parse *pParse, int op, Token *pName)
int sqlite3OpenTempDatabase(Parse *pParse)
void sqlite3CodeVerifySchema(Parse *pParse, int iDb)
void sqlite3CodeVerifyNamedSchema(Parse *pParse, const char *zDb)
void sqlite3BeginWriteOperation(Parse *pParse, int setStatement, int iDb)
void sqlite3MultiWrite(Parse *pParse)
void sqlite3MayAbort(Parse *pParse)
void sqlite3HaltConstraint(
Parse *pParse,
int errCode,
int onError,
char *p4,
i8 p4type,
u8 p5Errmsg
)
void sqlite3UniqueConstraint(
Parse *pParse,
int onError,
Index *pIdx
)
void sqlite3RowidConstraint(
Parse *pParse,
int onError,
Table *pTab
)
static int collationMatch(const char *zColl, Index *pIndex)
static void reindexTable(Parse *pParse, Table *pTab, char const *zColl)
static void reindexDatabases(Parse *pParse, char const *zColl)
void sqlite3Reindex(Parse *pParse, Token *pName1, Token *pName2)
KeyInfo *sqlite3KeyInfoOfIndex(Parse *pParse, Index *pIdx)
With *sqlite3WithAdd(
Parse *pParse,
With *pWith,
Token *pName,
ExprList *pArglist,
Select *pQuery
)
void sqlite3WithDelete(sqlite3 *db, With *pWith)
