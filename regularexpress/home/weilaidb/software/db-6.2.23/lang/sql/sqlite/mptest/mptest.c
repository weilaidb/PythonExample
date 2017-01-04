#if defined(_WIN32)
# define WIN32_LEAN_AND_MEAN
# include <windows.h>
# include <unistd.h>
#if defined(_WIN32)
# define GETPID (int)GetCurrentProcessId
# define GETPID getpid
#if defined(_WIN32)
# define isDirSep(c) (((c) == '/') || ((c) == '\\'))
# define isDirSep(c) ((c) == '/')
#define UNUSED_PARAMETER(x)  (void)x
static struct Global  g;
#define DEFAULT_TIMEOUT 10000
static void printWithPrefix(FILE *pOut, const char *zPrefix, const char *zMsg)
static int safe_strcmp(const char *a, const char *b)
int strglob(const char *zGlob, const char *z)
static void maybeClose(FILE *pOut)
static void errorMessage(const char *zFormat, ...)
static int trySql(const char*, ...);
static void fatalError(const char *zFormat, ...)
static void logMessage(const char *zFormat, ...)
static int clipLength(const char *z)
static void vfsNameFunc(
sqlite3_context *context,
int argc,
sqlite3_value **argv
)
static int busyHandler(void *pCD, int count)
static void sqlTraceCallback(void *NotUsed1, const char *zSql)
static void sqlErrorCallback(void *pArg, int iErrCode, const char *zMsg)
static sqlite3_stmt *prepareSql(const char *zFormat, ...)
static void runSql(const char *zFormat, ...)
static int trySql(const char *zFormat, ...)
typedef struct String String;
struct String ;
static void stringFree(String *p)
static void stringAppend(String *p, const char *z, int n)
static void stringReset(String *p)
static void stringAppendTerm(String *p, const char *z)
static int evalCallback(void *pCData, int argc, char **argv, char **azCol)
static int evalSql(String *p, const char *zFormat, ...)
static void evalFunc(
sqlite3_context *context,
int argc,
sqlite3_value **argv
)
static int startScript(
int iClient,
char **pzScript,
int *pTaskId,
char **pzTaskName
)
static int finishScript(int iClient, int taskId, int bShutdown)
static void startClient(int iClient)
static char *readFile(const char *zFilename)
static int tokenLength(const char *z, int *pnLine)
static int extractToken(const char *zIn, int nIn, char *zOut, int nOut)
static int findEnd(const char *z, int *pnLine)
static int findEndif(const char *z, int stopAtElse, int *pnLine)
static void waitForClient(int iClient, int iTimeout, char *zErrPrefix)
static char *filenameTail(char *z)
static int booleanValue(char *zArg)
static void test_breakpoint(void)
#define MX_ARG 2
static void runScript(
int iClient,
int taskId,
char *zScript,
char *zFilename
)
static char *findOption(
char **azArg,
int *pnArg,
const char *zOption,
int hasArg
)
static void usage(const char *argv0)
static void unrecognizedArguments(
const char *argv0,
int nArg,
char **azArg
)
int SQLITE_CDECL main(int argc, char **argv)
