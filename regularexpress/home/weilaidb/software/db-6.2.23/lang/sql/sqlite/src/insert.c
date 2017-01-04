void sqlite3OpenTable(
Parse *pParse,
int iCur,
int iDb,
Table *pTab,
int opcode
)
const char *sqlite3IndexAffinityStr(Vdbe *v, Index *pIdx)
void sqlite3TableAffinity(Vdbe *v, Table *pTab, int iReg)
static int readsTable(Parse *p, int iDb, Table *pTab)
static int autoIncBegin(
Parse *pParse,
int iDb,
Table *pTab
)
void sqlite3AutoincrementBegin(Parse *pParse)
static void autoIncStep(Parse *pParse, int memId, int regRowid)
void sqlite3AutoincrementEnd(Parse *pParse)
# define autoIncBegin(A,B,C) (0)
# define autoIncStep(A,B,C)
static int xferOptimization(
Parse *pParse,
Table *pDest,
Select *pSelect,
int onError,
int iDbDest
);
void sqlite3Insert(
Parse *pParse,
SrcList *pTabList,
Select *pSelect,
IdList *pColumn,
int onError
)
#undef isView
#undef pTrigger
#undef tmask
void sqlite3GenerateConstraintChecks(
Parse *pParse,
Table *pTab,
int *aRegIdx,
int iDataCur,
int iIdxCur,
int regNewData,
int regOldData,
u8 pkChng,
u8 overrideError,
int ignoreDest,
int *pbMayReplace
)
void sqlite3CompleteInsertion(
Parse *pParse,
Table *pTab,
int iDataCur,
int iIdxCur,
int regNewData,
int *aRegIdx,
int isUpdate,
int appendBias,
int useSeekResult
)
int sqlite3OpenTableAndIndices(
Parse *pParse,
Table *pTab,
int op,
int iBase,
u8 *aToOpen,
int *piDataCur,
int *piIdxCur
)
int sqlite3_xferopt_count;
static int xferCompatibleCollation(const char *z1, const char *z2)
static int xferCompatibleIndex(Index *pDest, Index *pSrc)
static int xferOptimization(
Parse *pParse,
Table *pDest,
Select *pSelect,
int onError,
int iDbDest
)
