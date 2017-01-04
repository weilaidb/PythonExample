Table *sqlite3SrcListLookup(Parse *pParse, SrcList *pSrc)
int sqlite3IsReadOnly(Parse *pParse, Table *pTab, int viewOk)
#if !defined(SQLITE_OMIT_VIEW) && !defined(SQLITE_OMIT_TRIGGER)
void sqlite3MaterializeView(
Parse *pParse,
Table *pView,
Expr *pWhere,
int iCur
)
#if defined(SQLITE_ENABLE_UPDATE_DELETE_LIMIT) && !defined(SQLITE_OMIT_SUBQUERY)
Expr *sqlite3LimitWhere(
Parse *pParse,
SrcList *pSrc,
Expr *pWhere,
ExprList *pOrderBy,
Expr *pLimit,
Expr *pOffset,
char *zStmtType
)
void sqlite3DeleteFrom(
Parse *pParse,
SrcList *pTabList,
Expr *pWhere
)
#undef isView
#undef pTrigger
void sqlite3GenerateRowDelete(
Parse *pParse,
Table *pTab,
Trigger *pTrigger,
int iDataCur,
int iIdxCur,
int iPk,
i16 nPk,
u8 count,
u8 onconf,
u8 bNoSeek
)
void sqlite3GenerateRowIndexDelete(
Parse *pParse,
Table *pTab,
int iDataCur,
int iIdxCur,
int *aRegIdx
)
int sqlite3GenerateIndexKey(
Parse *pParse,
Index *pIdx,
int iDataCur,
int regOut,
int prefixOnly,
int *piPartIdxLabel,
Index *pPrior,
int regPrior
)
void sqlite3ResolvePartIdxLabel(Parse *pParse, int iLabel)
