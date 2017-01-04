#define __TOLL_COMMON_UTILS_H
#define HOME "TollBoothExample"
#define DB_NAME "evt_queue"
#define BILLING "Billing/billing.dbsql"
#define BILLING_ENV "Billing"
#define COUNTER "counter"
#define STOLEN "stolen.db"
#define STOLEN_ENV "Stolen"
#define TRAFFIC "traffic.db"
#define TRAFFIC_ENV "Traffic"
#define SEQUENCE "seq"
#define SEC_IN_A_DAY 86400
#define NUM_PLATES 100000
int open_queue(DB_ENV *dbenv, DB **queue, const char *name, int in_memory, int create, int threaded);
int open_btree(DB_ENV *dbenv, DB **btree, const char *name, int in_memory, int create, int threaded, int dups);
int open_sql(sqlite3 **dbsql, const char *name, int create);
int open_env(DB_ENV **env, const char *home, int in_memory, int create, int threaded);
int open_seq(DB_ENV *dbenv, DB *dbp, DB_SEQUENCE **sequence, const char *name, int create, int threaded);
#define MAX_THREAD 1028
#define EVT_LEN 128
#define KEY_LEN 25
#define EVT_EXTENT_SIZE 5242880
#define	NS_PER_MS 1000000
#define	NS_PER_US 1000
#define NUM_THREADS 3
extern int getopt(int, char * const *, const char *);
struct timeval2 ;
int gettimeofday(struct timeval2 *tv, struct timezone *tz);
typedef HANDLE          os_thread_t;
#define os_thread_id()  GetCurrentThreadId()
#define os_thread_create(pid, func, arg)                    \
((*pid = CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)func, \
arg, 0, NULL)) != NULL)
#define S_ISDIR(m) ((m) & _S_IFDIR)
#define	usleep(s)		Sleep((s))
typedef HANDLE mutex_t;
#define	mutex_init(m, attr)						   \
(((*(m) = CreateMutex(NULL, FALSE, NULL)) != NULL) ? 0 : -1)
#define	mutex_lock(m)							   \
((WaitForSingleObject(*(m), INFINITE) == WAIT_OBJECT_0) ? 0 : -1)
#define	mutex_unlock(m)		(ReleaseMutex(*(m)) ? 0 : -1)
typedef pthread_t       os_thread_t;
#define os_thread_id()  pthread_self()
#define os_thread_create(pid, func, arg)                    \
(0 == pthread_create(pid, NULL, func, arg))
typedef pthread_mutex_t mutex_t;
#define	mutex_init(m, attr)	pthread_mutex_init((m), (attr))
#define	mutex_lock(m)		pthread_mutex_lock(m)
#define	mutex_unlock(m)		pthread_mutex_unlock(m)
void register_thread_id(os_thread_t pid);
int join_threads();
