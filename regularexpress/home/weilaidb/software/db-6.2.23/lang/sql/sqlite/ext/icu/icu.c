#if !defined(SQLITE_CORE) || defined(SQLITE_ENABLE_ICU)
SQLITE_EXTENSION_INIT1
# define SQLITE_MAX_LIKE_PATTERN_LENGTH 50000
static void xFree(void *p)
static int icuLikeCompare(
const uint8_t *zPattern,
const uint8_t *zString,
const UChar32 uEsc
)
static void icuLikeFunc(
sqlite3_context *context,
int argc,
sqlite3_value **argv
)
static void icuFunctionError(
sqlite3_context *pCtx,
const char *zName,
UErrorCode e
)
static void icuRegexpDelete(void *p)
static void icuRegexpFunc(sqlite3_context *p, int nArg, sqlite3_value **apArg)
static void icuCaseFunc16(sqlite3_context *p, int nArg, sqlite3_value **apArg)
static void icuCollationDel(void *pCtx)
static int icuCollationColl(
void *pCtx,
int nLeft,
const void *zLeft,
int nRight,
const void *zRight
)
static void icuLoadCollation(
sqlite3_context *p,
int nArg,
sqlite3_value **apArg
)
int sqlite3IcuInit(sqlite3 *db)
#if !SQLITE_CORE
__declspec(dllexport)
int sqlite3_icu_init(
sqlite3 *db,
char **pzErrMsg,
const sqlite3_api_routines *pApi
)
