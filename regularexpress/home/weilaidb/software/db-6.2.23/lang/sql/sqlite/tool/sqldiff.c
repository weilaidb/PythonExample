struct GlobalVars  g;
#define DEBUG_COLUMN_NAMES  0x000001
#define DEBUG_DIFF_SQL      0x000002
typedef struct Str Str;
struct Str ;
static void strInit(Str *p)
static void cmdlineError(const char *zFormat, ...)
static void runtimeError(const char *zFormat, ...)
static void strFree(Str *p)
static void strPrintf(Str *p, const char *zFormat, ...)
static char *safeId(const char *zId)
static sqlite3_stmt *db_vprepare(const char *zFormat, va_list ap)
static sqlite3_stmt *db_prepare(const char *zFormat, ...)
static void namelistFree(char **az)
static char **columnNames(const char *zDb, const char *zTab, int *pnPKey)
static void printQuoted(FILE *out, sqlite3_value *X)
static void dump_table(const char *zTab, FILE *out)
static void diff_one_table(const char *zTab, FILE *out)
static void summarize_one_table(const char *zTab, FILE *out)
static void putsVarint(FILE *out, sqlite3_uint64 v)
static void putValue(FILE *out, sqlite3_value *pVal)
static void changeset_one_table(const char *zTab, FILE *out)
static void showHelp(void)
int main(int argc, char **argv)
