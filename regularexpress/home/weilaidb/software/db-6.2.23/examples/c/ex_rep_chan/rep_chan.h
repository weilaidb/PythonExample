typedef enum  ENV_ROLE;
typedef struct  repsite_t;
typedef struct  SETUP_DATA;
#define	REPCMD_INVALID	0
#define	REPCMD_EXIT	1
#define	REPCMD_GET	2
#define	REPCMD_HELP	3
#define	REPCMD_PRINT	4
#define	REPCMD_PUT	5
#define	REPCMD_PUTSYNC	6
#define	REPCMD_MAX_DBT	33
#define	REPREPLY_ERROR	1
#define	REPREPLY_OK	0
#define	REPLY_ERROR_NDBT    2
#define	REPLY_TOKEN_TIMEOUT	5000000
#define	BUFSIZE 1024
#define	CACHESIZE	(10 * 1024 * 1024)
#define	DATABASE	"quote.db"
extern const char *progname;
#define	WIN32_LEAN_AND_MEAN
#define	snprintf		_snprintf
#define	sleep(s)		Sleep(1000 * (s))
extern int getopt(int, char * const *, const char *);
typedef HANDLE thread_t;
#define	thread_create(thrp, attr, func, arg)				   \
(((*(thrp) = CreateThread(NULL, 0,					   \
(LPTHREAD_START_ROUTINE)(func), (arg), 0, NULL)) == NULL) ? -1 : 0)
#define	thread_join(thr, statusp)					   \
((WaitForSingleObject((thr), INFINITE) == WAIT_OBJECT_0) &&		   \
GetExitCodeThread((thr), (LPDWORD)(statusp)) ? 0 : -1)
typedef HANDLE mutex_t;
#define	mutex_init(m, attr)                                                \
(((*(m) = CreateMutex(NULL, FALSE, NULL)) != NULL) ? 0 : -1)
#define	mutex_lock(m)                                                      \
((WaitForSingleObject(*(m), INFINITE) == WAIT_OBJECT_0) ? 0 : -1)
#define	mutex_unlock(m)         (ReleaseMutex(*(m)) ? 0 : -1)
typedef pthread_t thread_t;
#define	thread_create(thrp, attr, func, arg)				   \
pthread_create((thrp), (attr), (func), (arg))
#define	thread_join(thr, statusp) pthread_join((thr), (statusp))
typedef pthread_mutex_t mutex_t;
#define mutex_init(m, attr)     pthread_mutex_init((m), (attr))
#define mutex_lock(m)           pthread_mutex_lock(m)
#define mutex_unlock(m)         pthread_mutex_unlock(m)
typedef struct  GLOBAL;
void *checkpoint_thread __P((void *));
int create_env __P((const char *, DB_ENV **));
int env_init __P((DB_ENV *, const char *));
void event_callback __P((DB_ENV *, u_int32_t, void *));
int finish_support_threads __P((thread_t *, thread_t *));
void *log_archive_thread __P((void *));
int open_dbp __P((DB_ENV *, int, DB **));
int parse_cmd __P((char *));
void print_cmdhelp __P(());
void print_one __P((void *, u_int32_t, void *, u_int32_t, int));
int print_stocks __P((DB *));
int rep_setup __P((DB_ENV *, int, char **, SETUP_DATA *));
int start_support_threads __P((DB_ENV *, GLOBAL *, thread_t *,
thread_t *));
void usage __P((const char *));
