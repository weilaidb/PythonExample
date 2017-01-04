#define etRADIX       1
#define etFLOAT       2
#define etEXP         3
#define etGENERIC     4
#define etSIZE        5
#define etSTRING      6
#define etDYNSTRING   7
#define etPERCENT     8
#define etCHARX       9
#define etSQLESCAPE  10
#define etSQLESCAPE2 11
#define etTOKEN      12
#define etSRCLIST    13
#define etPOINTER    14
#define etSQLESCAPE3 15
#define etORDINAL    16
#define etINVALID     0
typedef unsigned char etByte;
typedef struct et_info  et_info;
#define FLAG_SIGNED  1
#define FLAG_INTERN  2
#define FLAG_STRING  4
static const char aDigits[] = "0123456789ABCDEF0123456789abcdef";
static const char aPrefix[] = "-x0\000X0";
static const et_info fmtinfo[] = ;
static char et_getdigit(LONGDOUBLE_TYPE *val, int *cnt)
static void setStrAccumError(StrAccum *p, u8 eError)
static sqlite3_int64 getIntArg(PrintfArguments *p)
static double getDoubleArg(PrintfArguments *p)
static char *getTextArg(PrintfArguments *p)
# define SQLITE_PRINT_BUF_SIZE 70
#define etBUFSIZE SQLITE_PRINT_BUF_SIZE
void sqlite3VXPrintf(
StrAccum *pAccum,
u32 bFlags,
const char *fmt,
va_list ap
)
static int sqlite3StrAccumEnlarge(StrAccum *p, int N)
void sqlite3AppendChar(StrAccum *p, int N, char c)
static void SQLITE_NOINLINE enlargeAndAppend(StrAccum *p, const char *z, int N)
void sqlite3StrAccumAppend(StrAccum *p, const char *z, int N)
void sqlite3StrAccumAppendAll(StrAccum *p, const char *z)
char *sqlite3StrAccumFinish(StrAccum *p)
void sqlite3StrAccumReset(StrAccum *p)
void sqlite3StrAccumInit(StrAccum *p, sqlite3 *db, char *zBase, int n, int mx)
char *sqlite3VMPrintf(sqlite3 *db, const char *zFormat, va_list ap)
char *sqlite3MPrintf(sqlite3 *db, const char *zFormat, ...)
char *sqlite3MAppendf(sqlite3 *db, char *zStr, const char *zFormat, ...)
char *sqlite3_vmprintf(const char *zFormat, va_list ap)
char *sqlite3_mprintf(const char *zFormat, ...)
char *sqlite3_vsnprintf(int n, char *zBuf, const char *zFormat, va_list ap)
char *sqlite3_snprintf(int n, char *zBuf, const char *zFormat, ...)
static void renderLogMsg(int iErrCode, const char *zFormat, va_list ap)
void sqlite3_log(int iErrCode, const char *zFormat, ...)
#if defined(SQLITE_DEBUG) || defined(SQLITE_HAVE_OS_TRACE)
void sqlite3DebugPrintf(const char *zFormat, ...)
TreeView *sqlite3TreeViewPush(TreeView *p, u8 moreToFollow)
void sqlite3TreeViewPop(TreeView *p)
void sqlite3TreeViewLine(TreeView *p, const char *zFormat, ...)
void sqlite3TreeViewItem(TreeView *p, const char *zLabel, u8 moreToFollow)
void sqlite3XPrintf(StrAccum *p, u32 bFlags, const char *zFormat, ...)
