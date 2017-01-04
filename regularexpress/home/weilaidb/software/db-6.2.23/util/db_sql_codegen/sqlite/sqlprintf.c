#define etRADIX       1
#define etFLOAT       2
#define etEXP         3
#define etGENERIC     4
#define etSIZE        5
#define etSTRING      6
#define etDYNSTRING   7
#define etPERCENT     8
#define etCHARX       9
#define etCHARLIT    10
#define etSQLESCAPE  11
#define etSQLESCAPE2 12
#define etTOKEN      13
#define etSRCLIST    14
#define etPOINTER    15
#define etSQLESCAPE3 16
#define etORDINAL    17
typedef unsigned char etByte;
typedef struct et_info  et_info;
#define FLAG_SIGNED  1
#define FLAG_INTERN  2
#define FLAG_STRING  4
static const char aDigits[] = "0123456789ABCDEF0123456789abcdef";
static const char aPrefix[] = "-x0\000X0";
static const et_info fmtinfo[] = ;
#define etNINFO (int)(sizeof(fmtinfo)/sizeof(fmtinfo[0]))
static int et_getdigit(LONGDOUBLE_TYPE *val, int *cnt)
static void appendSpace(StrAccum *pAccum, int N)
# define SQLITE_PRINT_BUF_SIZE 350
#define etBUFSIZE SQLITE_PRINT_BUF_SIZE
static void vxprintf(
StrAccum *pAccum,
int useExtended,
const char *fmt,
va_list ap
)
void sqlite3StrAccumAppend(StrAccum *p, const char *z, int N)
char *sqlite3StrAccumFinish(StrAccum *p)
void sqlite3StrAccumReset(StrAccum *p)
static void sqlite3StrAccumInit(StrAccum *p, char *zBase, int n, int mx)
char *sqlite3VMPrintf(sqlite3 *db, const char *zFormat, va_list ap)
char *sqlite3MPrintf(sqlite3 *db, const char *zFormat, ...)
char *sqlite3_vmprintf(const char *zFormat, va_list ap)
char *sqlite3_mprintf(const char *zFormat, ...)
char *sqlite3_snprintf(int n, char *zBuf, const char *zFormat, ...)
#if defined(SQLITE_TEST) || defined(SQLITE_DEBUG) || defined(SQLITE_MEMDEBUG)
void sqlite3DebugPrintf(const char *zFormat, ...)
