#define FUSE_CONN_DEFAULT_TIMER_PERIOD      5
#define FUSE_CONN_DEFAULT_EXPIRY_PERIOD     (5 * 60)
#define HADOOP_SECURITY_AUTHENTICATION      "hadoop.security.authentication"
#define HADOOP_FUSE_CONNECTION_TIMEOUT      "hadoop.fuse.connection.timeout"
#define HADOOP_FUSE_TIMER_PERIOD            "hadoop.fuse.timer.period"
#define TIME_STR_LEN 26
struct hdfsConn;
static int hdfsConnCompare(const struct hdfsConn *a, const struct hdfsConn *b);
static void hdfsConnExpiry(void);
static void* hdfsConnExpiryThread(void *v);
RB_HEAD(hdfsConnTree, hdfsConn);
enum authConf ;
struct hdfsConn ;
RB_GENERATE(hdfsConnTree, hdfsConn, entry, hdfsConnCompare);
static struct hdfsConnTree gConnTree;
static char *gUri;
static int gPort;
static pthread_mutex_t gConnMutex;
static enum authConf gHdfsAuthConf;
static int32_t gTimerPeriod;
static int32_t gExpiryPeriod;
static pthread_t gTimerThread;
static enum authConf discoverAuthConf(void)
int fuseConnectInit(const char *nnUri, int port)
static int hdfsConnCompare(const struct hdfsConn *a, const struct hdfsConn *b)
static struct hdfsConn* hdfsConnFind(const char *usrname)
static void hdfsConnFree(struct hdfsConn *conn)
static int timeToStr(time_t sec, char *buf, size_t bufLen)
static int hdfsConnCheckKpath(const struct hdfsConn *conn)
static void hdfsConnExpiry(void)
#define KRB_FILE_PREFIX "FILE:"
#define KRB_FILE_PREFIX_LEN (sizeof(KRB_FILE_PREFIX) - 1)
static void findKerbTicketCachePath(struct fuse_context *ctx,
char *path, size_t pathLen)
static int fuseNewConnect(const char *usrname, struct fuse_context *ctx,
struct hdfsConn **out)
int fuseConnect(const char *usrname, struct fuse_context *ctx,
struct hdfsConn **out)
int fuseConnectAsThreadUid(struct hdfsConn **conn)
int fuseConnectTest(void)
struct hdfs_internal* hdfsConnGetFs(struct hdfsConn *conn)
void hdfsConnRelease(struct hdfsConn *conn)
static time_t getMonotonicTime(void)
static void* hdfsConnExpiryThread(void *v)
