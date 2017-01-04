SQLITE_EXTENSION_INIT1
#if defined(i386) || defined(__i386__) || defined(_M_IX86)\
|| defined(__x86_64) || defined(__x86_64__)
# define TOTYPE_BIGENDIAN    0
# define TOTYPE_LITTLEENDIAN 1
const int totype_one = 1;
# define TOTYPE_BIGENDIAN    (*(char *)(&totype_one)==0)
# define TOTYPE_LITTLEENDIAN (*(char *)(&totype_one)==1)
# define LARGEST_INT64   (0xffffffff|(((sqlite3_int64)0x7fffffff)<<32))
# define SMALLEST_INT64  (((sqlite3_int64)-1) - LARGEST_INT64)
static int totypeIsspace(unsigned char c)
static int totypeIsdigit(unsigned char c)
static int totypeCompare2pow63(const char *zNum)
static int totypeAtoi64(const char *zNum, sqlite3_int64 *pNum, int length)
static int totypeAtoF(const char *z, double *pResult, int length)
static void tointegerFunc(
sqlite3_context *context,
int argc,
sqlite3_value **argv
)
#if defined(_MSC_VER)
static void torealFunc(
sqlite3_context *context,
int argc,
sqlite3_value **argv
)
#if defined(_MSC_VER)
__declspec(dllexport)
int sqlite3_totype_init(
sqlite3 *db,
char **pzErrMsg,
const sqlite3_api_routines *pApi
)
