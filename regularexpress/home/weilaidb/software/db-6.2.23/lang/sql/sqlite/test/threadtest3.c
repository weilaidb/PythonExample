#define SEL(e) ((e)->iLine = ((e)->rc ? (e)->iLine : __LINE__))
#define opendb(w,x,y,z)         (SEL(w), opendb_x(w,x,y,z))
#define closedb(y,z)            (SEL(y), closedb_x(y,z))
#define sql_script(x,y,z)       (SEL(x), sql_script_x(x,y,z))
#define integrity_check(x,y)    (SEL(x), integrity_check_x(x,y))
#define execsql_i64(x,y,...)    (SEL(x), execsql_i64_x(x,y,__VA_ARGS__))
#define execsql_text(x,y,z,...) (SEL(x), execsql_text_x(x,y,z,__VA_ARGS__))
#define execsql(x,y,...)        (SEL(x), (void)execsql_i64_x(x,y,__VA_ARGS__))
#define sql_script_printf(x,y,z,...) (                \
SEL(x), sql_script_printf_x(x,y,z,__VA_ARGS__)    \
)
#define launch_thread(w,x,y,z)     (SEL(w), launch_thread_x(w,x,y,z))
#define join_all_threads(y,z)      (SEL(y), join_all_threads_x(y,z))
#define setstoptime(y,z)        (SEL(y), setstoptime_x(y,z))
#define timetostop(z)           (SEL(z), timetostop_x(z))
#define test_error(z, ...)      test_error_x(z, sqlite3_mprintf(__VA_ARGS__))
#define clear_error(y,z)        clear_error_x(y, z)
#define filesize(y,z)           (SEL(y), filesize_x(y,z))
#define filecopy(x,y,z)         (SEL(x), filecopy_x(x,y,z))
#define PTR2INT(x) ((int)((intptr_t)x))
#define INT2PTR(x) ((void*)((intptr_t)x))
#  define uint32 unsigned int
struct MD5Context ;
typedef struct MD5Context MD5Context;
static void byteReverse (unsigned char *buf, unsigned longs)
#define F1(x, y, z) (z ^ (x & (y ^ z)))
#define F2(x, y, z) F1(z, x, y)
#define F3(x, y, z) (x ^ y ^ z)
#define F4(x, y, z) (y ^ (x | ~z))
#define MD5STEP(f, w, x, y, z, data, s) \
( w += f(x, y, z) + data,  w = w<<s | w>>(32-s),  w += x )
static void MD5Transform(uint32 buf[4], const uint32 in[16])
static void MD5Init(MD5Context *ctx)
static
void MD5Update(MD5Context *ctx, const unsigned char *buf, unsigned int len)
static void MD5Final(unsigned char digest[16], MD5Context *ctx)
static void MD5DigestToBase16(unsigned char *digest, char *zBuf)
static void md5step(sqlite3_context *context, int argc, sqlite3_value **argv)
static void md5finalize(sqlite3_context *context)
typedef sqlite3_int64 i64;
typedef struct Error Error;
typedef struct Sqlite Sqlite;
typedef struct Statement Statement;
typedef struct Threadset Threadset;
typedef struct Thread Thread;
static int nGlobalErr = 0;
struct Error ;
struct Sqlite ;
struct Statement ;
struct Thread ;
struct Threadset ;
static void free_err(Error *p)
static void print_err(Error *p)
static void print_and_free_err(Error *p)
static void system_error(Error *pErr, int iSys)
static void sqlite_error(
Error *pErr,
Sqlite *pDb,
const char *zFunc
)
static void test_error_x(
Error *pErr,
char *zErr
)
static void clear_error_x(
Error *pErr,
int rc
)
static int busyhandler(void *pArg, int n)
static void opendb_x(
Error *pErr,
Sqlite *pDb,
const char *zFile,
int bDelete
)
static void closedb_x(
Error *pErr,
Sqlite *pDb
)
static void sql_script_x(
Error *pErr,
Sqlite *pDb,
const char *zSql
)
static void sql_script_printf_x(
Error *pErr,
Sqlite *pDb,
const char *zFormat,
...
)
static Statement *getSqlStatement(
Error *pErr,
Sqlite *pDb,
const char *zSql
)
static sqlite3_stmt *getAndBindSqlStatement(
Error *pErr,
Sqlite *pDb,
va_list ap
)
static i64 execsql_i64_x(
Error *pErr,
Sqlite *pDb,
...
)
static char * execsql_text_x(
Error *pErr,
Sqlite *pDb,
int iSlot,
...
)
static void integrity_check_x(
Error *pErr,
Sqlite *pDb
)
static void *launch_thread_main(void *pArg)
static void launch_thread_x(
Error *pErr,
Threadset *pThreads,
char *(*xProc)(int, void*),
void *pArg
)
static void join_all_threads_x(
Error *pErr,
Threadset *pThreads
)
static i64 filesize_x(
Error *pErr,
const char *zFile
)
static void filecopy_x(
Error *pErr,
const char *zFrom,
const char *zTo
)
static double timelimit = 0.0;
static sqlite3_vfs *pTimelimitVfs = 0;
static void setstoptime_x(
Error *pErr,
int nMs
)
static int timetostop_x(
Error *pErr
)
#define WALTHREAD1_NTHREAD  10
#define WALTHREAD3_NTHREAD  6
static char *walthread1_thread(int iTid, void *pArg)
static char *walthread1_ckpt_thread(int iTid, void *pArg)
static void walthread1(int nMs)
static char *walthread2_thread(int iTid, void *pArg)
static void walthread2(int nMs)
static char *walthread3_thread(int iTid, void *pArg)
static void walthread3(int nMs)
static char *walthread4_reader_thread(int iTid, void *pArg)
static char *walthread4_writer_thread(int iTid, void *pArg)
static void walthread4(int nMs)
static char *walthread5_thread(int iTid, void *pArg)
static void walthread5(int nMs)
#define CALLGRINDTEST1_NROW 10000
static void cgt_pager_1_populate(Error *pErr, Sqlite *pDb)
static void cgt_pager_1_update(Error *pErr, Sqlite *pDb)
static void cgt_pager_1_read(Error *pErr, Sqlite *pDb)
static void cgt_pager_1(int nMs)
static char *dynamic_triggers_1(int iTid, void *pArg)
static char *dynamic_triggers_2(int iTid, void *pArg)
static void dynamic_triggers(int nMs)
int main(int argc, char **argv)
