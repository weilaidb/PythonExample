void sqlite3DeleteTriggerStep(sqlite3 *db, TriggerStep *pTriggerStep)
Trigger *sqlite3TriggerList(Parse *pParse, Table *pTab)
void sqlite3BeginTrigger(
Parse *pParse,
Token *pName1,
Token *pName2,
int tr_tm,
int op,
IdList *pColumns,
SrcList *pTableName,
Expr *pWhen,
int isTemp,
int noErr
)
void sqlite3FinishTrigger(
Parse *pParse,
TriggerStep *pStepList,
Token *pAll
)
TriggerStep *sqlite3TriggerSelectStep(sqlite3 *db, Select *pSelect)
static TriggerStep *triggerStepAllocate(
sqlite3 *db,
u8 op,
Token *pName
)
TriggerStep *sqlite3TriggerInsertStep(
sqlite3 *db,
Token *pTableName,
IdList *pColumn,
Select *pSelect,
u8 orconf
)
TriggerStep *sqlite3TriggerUpdateStep(
sqlite3 *db,
Token *pTableName,
ExprList *pEList,
Expr *pWhere,
u8 orconf
)
TriggerStep *sqlite3TriggerDeleteStep(
sqlite3 *db,
Token *pTableName,
Expr *pWhere
)
void sqlite3DeleteTrigger(sqlite3 *db, Trigger *pTrigger)
void sqlite3DropTrigger(Parse *pParse, SrcList *pName, int noErr)
static Table *tableOfTrigger(Trigger *pTrigger)
void sqlite3DropTriggerPtr(Parse *pParse, Trigger *pTrigger)
void sqlite3UnlinkAndDeleteTrigger(sqlite3 *db, int iDb, const char *zName)
static int checkColumnOverlap(IdList *pIdList, ExprList *pEList)
Trigger *sqlite3TriggersExist(
Parse *pParse,
Table *pTab,
int op,
ExprList *pChanges,
int *pMask
)
static SrcList *targetSrcList(
Parse *pParse,
TriggerStep *pStep
)
static int codeTriggerProgram(
Parse *pParse,
TriggerStep *pStepList,
int orconf
)
static const char *onErrorText(int onError)
static void transferParseError(Parse *pTo, Parse *pFrom)
static TriggerPrg *codeRowTrigger(
Parse *pParse,
Trigger *pTrigger,
Table *pTab,
int orconf
)
static TriggerPrg *getRowTrigger(
Parse *pParse,
Trigger *pTrigger,
Table *pTab,
int orconf
)
void sqlite3CodeRowTriggerDirect(
Parse *pParse,
Trigger *p,
Table *pTab,
int reg,
int orconf,
int ignoreJump
)
void sqlite3CodeRowTrigger(
Parse *pParse,
Trigger *pTrigger,
int op,
ExprList *pChanges,
int tr_tm,
Table *pTab,
int reg,
int orconf,
int ignoreJump
)
u32 sqlite3TriggerColmask(
Parse *pParse,
Trigger *pTrigger,
ExprList *pChanges,
int isNew,
int tr_tm,
Table *pTab,
int orconf
)
