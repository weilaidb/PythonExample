struct GlobalVars  g;
# define OOM_MAX 625
static void oomFault(void)
static void *oomMalloc(int nByte)
static void *oomRealloc(void *pOld, int nByte)
static void abendError(const char *zFormat, ...)
static void fatalError(const char *zFormat, ...)
static void sqlexec(sqlite3 *db, const char *zFormat, ...)
static void shellLog(void *pNotUsed, int iErrCode, const char *zMsg)
static void shellLogNoop(void *pNotUsed, int iErrCode, const char *zMsg)
static int execCallback(void *NotUsed, int argc, char **argv, char **colv)
static int execNoop(void *NotUsed, int argc, char **argv, char **colv)
static void traceCallback(void *NotUsed, const char *zMsg)
static void traceNoop(void *NotUsed, const char *zMsg)
struct EvalResult ;
static int callback(void *pCtx, int argc, char **argv, char **colnames)
static void sqlEvalFunc(
sqlite3_context *context,
int argc,
sqlite3_value **argv
)
static void showHelp(void)
static int hexDigitValue(char c)
static int integerValue(const char *zArg)
static sqlite3_int64 timeOfDay(void)
int main(int argc, char **argv)
if( nTest>1 && !quietFlag )
if( zDataOut )
free(azInFile);
free(zIn);
free(pHeap);
free(pLook);
free(pScratch);
free(pPCache);
return 0;
}
