#if defined(SQLITE_SERVER) && !defined(SQLITE_OMIT_SHARED_CACHE)
#if SQLITE_OS_UNIX && SQLITE_THREADSAFE
typedef struct SqlMessage SqlMessage;
struct SqlMessage ;
#define MSG_Open       1
#define MSG_Prepare    2
#define MSG_Step       3
#define MSG_Reset      4
#define MSG_Finalize   5
#define MSG_Close      6
#define MSG_Done       7
static struct ServerState  g = ;
static void sendToServer(SqlMessage *pMsg)
int sqlite3_client_open(const char *zDatabaseName, sqlite3 **ppDb)
int sqlite3_client_prepare(
sqlite3 *pDb,
const char *zSql,
int nByte,
sqlite3_stmt **ppStmt,
const char **pzTail
)
int sqlite3_client_step(sqlite3_stmt *pStmt)
int sqlite3_client_reset(sqlite3_stmt *pStmt)
int sqlite3_client_finalize(sqlite3_stmt *pStmt)
int sqlite3_client_close(sqlite3 *pDb)
void *sqlite3_server(void *NotUsed)
void sqlite3_server_start(void)
static void *serverWrapper(void *pnDecr)
void sqlite3_server_start2(int *pnDecr)
void sqlite3_server_stop(void)
