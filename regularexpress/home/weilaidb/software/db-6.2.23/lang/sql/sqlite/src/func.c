static CollSeq *sqlite3GetFuncCollSeq(sqlite3_context *context)
static void sqlite3SkipAccumulatorLoad(sqlite3_context *context)
static void minmaxFunc(
sqlite3_context *context,
int argc,
sqlite3_value **argv
)
static void typeofFunc(
sqlite3_context *context,
int NotUsed,
sqlite3_value **argv
)
static void lengthFunc(
sqlite3_context *context,
int argc,
sqlite3_value **argv
)
static void absFunc(sqlite3_context *context, int argc, sqlite3_value **argv)
static void instrFunc(
sqlite3_context *context,
int argc,
sqlite3_value **argv
)
static void printfFunc(
sqlite3_context *context,
int argc,
sqlite3_value **argv
)
static void substrFunc(
sqlite3_context *context,
int argc,
sqlite3_value **argv
){
const unsigned char *z;
const unsigned char *z2;
int len;
int p0type;
i64 p1, p2;
int negP2 = 0;
assert( argc==3 || argc==2 );
if( sqlite3_value_type(argv[1])==SQLITE_NULL
|| (argc==3 && sqlite3_value_type(argv[2])==SQLITE_NULL)
)
p0type = sqlite3_value_type(argv[0]);
p1 = sqlite3_value_int(argv[1]);
if( p0type==SQLITE_BLOB )else
if( p1==0 ) p1 = 1;
static void roundFunc(sqlite3_context *context, int argc, sqlite3_value **argv)
static void *contextMalloc(sqlite3_context *context, i64 nByte)
static void upperFunc(sqlite3_context *context, int argc, sqlite3_value **argv)
static void lowerFunc(sqlite3_context *context, int argc, sqlite3_value **argv)
#define noopFunc versionFunc
static void randomFunc(
sqlite3_context *context,
int NotUsed,
sqlite3_value **NotUsed2
)
static void randomBlob(
sqlite3_context *context,
int argc,
sqlite3_value **argv
)
static void last_insert_rowid(
sqlite3_context *context,
int NotUsed,
sqlite3_value **NotUsed2
)
static void changes(
sqlite3_context *context,
int NotUsed,
sqlite3_value **NotUsed2
)
static void total_changes(
sqlite3_context *context,
int NotUsed,
sqlite3_value **NotUsed2
)
struct compareInfo ;
#if defined(SQLITE_EBCDIC)
# define sqlite3Utf8Read(A)        (*((*A)++))
# define GlobUpperToLower(A)       A = sqlite3UpperToLower[A]
# define GlobUpperToLowerAscii(A)  A = sqlite3UpperToLower[A]
# define GlobUpperToLower(A)       if( A<=0x7f )
# define GlobUpperToLowerAscii(A)  A = sqlite3UpperToLower[A]
static const struct compareInfo globInfo = ;
static const struct compareInfo likeInfoNorm = ;
static const struct compareInfo likeInfoAlt = ;
static int patternCompare(
const u8 *zPattern,
const u8 *zString,
const struct compareInfo *pInfo,
u32 esc
)
int sqlite3_strglob(const char *zGlobPattern, const char *zString)
int sqlite3_like_count = 0;
static void likeFunc(
sqlite3_context *context,
int argc,
sqlite3_value **argv
)
static void nullifFunc(
sqlite3_context *context,
int NotUsed,
sqlite3_value **argv
)
static void versionFunc(
sqlite3_context *context,
int NotUsed,
sqlite3_value **NotUsed2
)
static void sourceidFunc(
sqlite3_context *context,
int NotUsed,
sqlite3_value **NotUsed2
)
static void errlogFunc(
sqlite3_context *context,
int argc,
sqlite3_value **argv
)
static void compileoptionusedFunc(
sqlite3_context *context,
int argc,
sqlite3_value **argv
)
static void compileoptiongetFunc(
sqlite3_context *context,
int argc,
sqlite3_value **argv
)
static const char hexdigits[] = ;
static void quoteFunc(sqlite3_context *context, int argc, sqlite3_value **argv)
static void unicodeFunc(
sqlite3_context *context,
int argc,
sqlite3_value **argv
)
static void charFunc(
sqlite3_context *context,
int argc,
sqlite3_value **argv
)
static void hexFunc(
sqlite3_context *context,
int argc,
sqlite3_value **argv
)
static void zeroblobFunc(
sqlite3_context *context,
int argc,
sqlite3_value **argv
)
static void replaceFunc(
sqlite3_context *context,
int argc,
sqlite3_value **argv
)
static void trimFunc(
sqlite3_context *context,
int argc,
sqlite3_value **argv
)
static void soundexFunc(
sqlite3_context *context,
int argc,
sqlite3_value **argv
)
static void loadExt(sqlite3_context *context, int argc, sqlite3_value **argv)
typedef struct SumCtx SumCtx;
struct SumCtx ;
static void sumStep(sqlite3_context *context, int argc, sqlite3_value **argv)
static void sumFinalize(sqlite3_context *context)
static void avgFinalize(sqlite3_context *context)
static void totalFinalize(sqlite3_context *context)
typedef struct CountCtx CountCtx;
struct CountCtx ;
static void countStep(sqlite3_context *context, int argc, sqlite3_value **argv)
static void countFinalize(sqlite3_context *context)
static void minmaxStep(
sqlite3_context *context,
int NotUsed,
sqlite3_value **argv
)
static void minMaxFinalize(sqlite3_context *context)
static void groupConcatStep(
sqlite3_context *context,
int argc,
sqlite3_value **argv
)
static void groupConcatFinalize(sqlite3_context *context)
void sqlite3RegisterBuiltinFunctions(sqlite3 *db)
static void setLikeOptFlag(sqlite3 *db, const char *zName, u8 flagVal)
void sqlite3RegisterLikeFunctions(sqlite3 *db, int caseSensitive)
int sqlite3IsLikeFunction(sqlite3 *db, Expr *pExpr, int *pIsNocase, char *aWc)
void sqlite3RegisterGlobalFunctions(void)
