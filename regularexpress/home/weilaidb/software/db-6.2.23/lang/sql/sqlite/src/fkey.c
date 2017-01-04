int sqlite3FkLocateIndex(
Parse *pParse,
Table *pParent,
FKey *pFKey,
Index **ppIdx,
int **paiCol
)
static void fkLookupParent(
Parse *pParse,
int iDb,
Table *pTab,
Index *pIdx,
FKey *pFKey,
int *aiCol,
int regData,
int nIncr,
int isIgnore
)
static Expr *exprTableRegister(
Parse *pParse,
Table *pTab,
int regBase,
i16 iCol
)
static Expr *exprTableColumn(
sqlite3 *db,
Table *pTab,
int iCursor,
i16 iCol
)
static void fkScanChildren(
Parse *pParse,
SrcList *pSrc,
Table *pTab,
Index *pIdx,
FKey *pFKey,
int *aiCol,
int regData,
int nIncr
)
FKey *sqlite3FkReferences(Table *pTab)
static void fkTriggerDelete(sqlite3 *dbMem, Trigger *p)
void sqlite3FkDropTable(Parse *pParse, SrcList *pName, Table *pTab)
static int fkChildIsModified(
Table *pTab,
FKey *p,
int *aChange,
int bChngRowid
)
static int fkParentIsModified(
Table *pTab,
FKey *p,
int *aChange,
int bChngRowid
)
static int isSetNullAction(Parse *pParse, FKey *pFKey)
void sqlite3FkCheck(
Parse *pParse,
Table *pTab,
int regOld,
int regNew,
int *aChange,
int bChngRowid
)
#define COLUMN_MASK(x) (((x)>31) ? 0xffffffff : ((u32)1<<(x)))
u32 sqlite3FkOldmask(
Parse *pParse,
Table *pTab
)
int sqlite3FkRequired(
Parse *pParse,
Table *pTab,
int *aChange,
int chngRowid
)
static Trigger *fkActionTrigger(
Parse *pParse,
Table *pTab,
FKey *pFKey,
ExprList *pChanges
)
void sqlite3FkActions(
Parse *pParse,
Table *pTab,
ExprList *pChanges,
int regOld,
int *aChange,
int bChngRowid
)
void sqlite3FkDelete(sqlite3 *db, Table *pTab)
