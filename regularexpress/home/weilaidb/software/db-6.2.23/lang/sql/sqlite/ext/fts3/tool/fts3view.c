int nExtra;
char **azExtra;
const char *findOption(const char *zName, int hasArg, const char *zDefault)
static sqlite3_stmt *prepare(sqlite3 *db, const char *zFormat, ...)
static int runSql(sqlite3 *db, const char *zFormat, ...)
static void showSchema(sqlite3 *db, const char *zTab)
int getVarint(const unsigned char *p, sqlite_int64 *v)
static void showStat(sqlite3 *db, const char *zTab)
static void showVocabulary(sqlite3 *db, const char *zTab)
static void showSegmentStats(sqlite3 *db, const char *zTab)
static void printTreeLine(sqlite3_int64 iLower, sqlite3_int64 iUpper)
static int isNullSegment(sqlite3 *db, const char *zTab, sqlite3_int64 iBlockId)
static void showSegdirMap(sqlite3 *db, const char *zTab)
static void decodeSegment(
const unsigned char *aData,
int nData
)
static void printBlob(
const unsigned char *aData,
int nData
)
static sqlite3_int64 atoi64(const char *z)
static sqlite3_stmt *prepareToGetSegment(
sqlite3 *db,
const char *zTab,
const char *zId
)
static void showSegment(sqlite3 *db, const char *zTab)
static void decodeDoclist(
const unsigned char *aData,
int nData
)
static void showDoclist(sqlite3 *db, const char *zTab)
static void listBigSegments(sqlite3 *db, const char *zTab)
static void usage(const char *argv0)
int main(int argc, char **argv)
