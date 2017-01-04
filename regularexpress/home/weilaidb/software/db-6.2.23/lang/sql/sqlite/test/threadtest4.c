typedef struct WorkerInfo WorkerInfo;
struct WorkerInfo ;
#define TT4_SERIALIZED    0x0000001
#define TT4_WAL           0x0000002
#define TT4_TRACE         0x0000004
static void check_oom(void *x)
static void *safe_malloc(int sz)
static void worker_trace(WorkerInfo *p, const char *zFormat, ...)
static sqlite3_stmt *prep_sql(sqlite3 *db, const char *zFormat, ...)
static void run_sql(WorkerInfo *p, const char *zFormat, ...)
static void worker_open_connection(WorkerInfo *p, int iCnt)
static void worker_close_connection(WorkerInfo *p)
static void worker_delete_all_content(WorkerInfo *p, int inTrans)
static void worker_add_content(WorkerInfo *p, int mn, int mx, int iTab)
static void worker_error(WorkerInfo *p, const char *zFormat, ...)
static void *worker_thread(void *pArg)
int main(int argc, char **argv)
