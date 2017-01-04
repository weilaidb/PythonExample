SQLITE_EXTENSION_INIT1
typedef struct nextCharContext nextCharContext;
struct nextCharContext ;
static void nextCharAppend(nextCharContext *p, unsigned c)
static int writeUtf8(unsigned char *z, unsigned c)
static int readUtf8(const unsigned char *z, unsigned *pOut)
static void findNextChars(nextCharContext *p)
static void nextCharFunc(
sqlite3_context *context,
int argc,
sqlite3_value **argv
)
__declspec(dllexport)
int sqlite3_nextchar_init(
sqlite3 *db,
char **pzErrMsg,
const sqlite3_api_routines *pApi
)
