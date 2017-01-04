#define _OS_COMMON_H_
# error "The MEMORY_DEBUG macro is obsolete.  Use SQLITE_DEBUG instead."
static sqlite_uint64 g_start;
static sqlite_uint64 g_elapsed;
#define TIMER_START       g_start=sqlite3Hwtime()
#define TIMER_END         g_elapsed=sqlite3Hwtime()-g_start
#define TIMER_ELAPSED     g_elapsed
#define TIMER_START
#define TIMER_END
#define TIMER_ELAPSED     ((sqlite_uint64)0)
extern int sqlite3_io_error_hit;
extern int sqlite3_io_error_hardhit;
extern int sqlite3_io_error_pending;
extern int sqlite3_io_error_persist;
extern int sqlite3_io_error_benign;
extern int sqlite3_diskfull_pending;
extern int sqlite3_diskfull;
#define SimulateIOErrorBenign(X) sqlite3_io_error_benign=(X)
#define SimulateIOError(CODE)  \
if( (sqlite3_io_error_persist && sqlite3_io_error_hit) \
|| sqlite3_io_error_pending-- == 1 )  \
static void local_ioerr()
#define SimulateDiskfullError(CODE) \
if( sqlite3_diskfull_pending )
#define SimulateIOErrorBenign(X)
#define SimulateIOError(A)
#define SimulateDiskfullError(A)
extern int sqlite3_open_file_count;
#define OpenCounter(X)  sqlite3_open_file_count+=(X)
#define OpenCounter(X)
