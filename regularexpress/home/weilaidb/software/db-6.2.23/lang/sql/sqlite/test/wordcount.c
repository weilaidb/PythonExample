static sqlite3_int64 realTime(void)
static void fatal_error(const char *zMsg, ...)
static void traceCallback(void *NotUsed, const char *zSql)
static int printResult(void *NotUsed, int nArg, char **azArg, char **azNm)
static void addCharToHash(unsigned int *a, unsigned char x)
static void finalHash(unsigned int *a, char *z)
static void checksumStep(
sqlite3_context *context,
int argc,
sqlite3_value **argv
)
static void checksumFinalize(sqlite3_context *context)
#define MODE_INSERT     0
#define MODE_REPLACE    1
#define MODE_SELECT     2
#define MODE_UPDATE     3
#define MODE_DELETE     4
#define MODE_QUERY      5
int main(int argc, char **argv)
