#if !defined(SQLITE_ENABLE_LOCKING_STYLE)
#  if defined(__APPLE__)
#    define SQLITE_ENABLE_LOCKING_STYLE 1
#  else
#    define SQLITE_ENABLE_LOCKING_STYLE 0
#  endif
static u8 getSafetyLevel(const char *z, int omitFull, u8 dflt)
u8 sqlite3GetBoolean(const char *z, u8 dflt)
#if !defined(SQLITE_OMIT_PRAGMA)
static int getLockingMode(const char *z)
static int getAutoVacuum(const char *z)
static int getTempStore(const char *z)
static int invalidateTempStorage(Parse *pParse)
static int changeTempStorage(Parse *pParse, const char *zStorageType)
void returnSingleInt(Parse *pParse, const char *zLabel, i64 value)
static void setAllPagerFlags(sqlite3 *db)
# define setAllPagerFlags(X)
static const char *actionName(u8 action)
const char *sqlite3JournalModename(int eMode)
extern int bdbsqlPragma(Parse *, char *, char *, int);
void sqlite3Pragma(
Parse *pParse,
Token *pId1,
Token *pId2,
Token *pValue,
int minusFlag
)
