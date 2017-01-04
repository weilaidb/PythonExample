static int verbose = 0;
static void Exit(int rc)
extern char *sqlite3_mprintf(const char *zFormat, ...);
extern char *sqlite3_vmprintf(const char *zFormat, va_list);
static int db_is_locked(void *NotUsed, int iCount)
struct QueryResult ;
static int db_query_callback(
void *pUser,
int nArg,
char **azArg,
char **NotUsed
)
char **db_query(sqlite *db, const char *zFile, const char *zFormat, ...)
void db_execute(sqlite *db, const char *zFile, const char *zFormat, ...)
void db_query_free(char **az)
void db_check(const char *zFile, const char *zMsg, char **az, ...)
pthread_mutex_t lock = PTHREAD_MUTEX_INITIALIZER;
pthread_cond_t sig = PTHREAD_COND_INITIALIZER;
int thread_cnt = 0;
static void *worker_bee(void *pArg)
int main(int argc, char **argv)
