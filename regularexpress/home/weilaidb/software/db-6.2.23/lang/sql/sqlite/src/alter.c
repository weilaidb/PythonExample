static void renameTableFunc(
sqlite3_context *context,
int NotUsed,
sqlite3_value **argv
)
static void renameParentFunc(
sqlite3_context *context,
int NotUsed,
sqlite3_value **argv
)
static void renameTriggerFunc(
sqlite3_context *context,
int NotUsed,
sqlite3_value **argv
)
void sqlite3AlterFunctions(void)
static char *whereOrName(sqlite3 *db, char *zWhere, char *zConstant)
#if !defined(SQLITE_OMIT_FOREIGN_KEY) && !defined(SQLITE_OMIT_TRIGGER)
static char *whereForeignKeys(Parse *pParse, Table *pTab)
static char *whereTempTriggers(Parse *pParse, Table *pTab)
static void reloadTableSchema(Parse *pParse, Table *pTab, const char *zName)
static int isSystemTable(Parse *pParse, const char *zName)
void sqlite3AlterRenameTable(
Parse *pParse,
SrcList *pSrc,
Token *pName
)
void sqlite3MinimumFileFormat(Parse *pParse, int iDb, int minFormat)
void sqlite3AlterFinishAddColumn(Parse *pParse, Token *pColDef)
void sqlite3AlterBeginAddColumn(Parse *pParse, SrcList *pSrc)
