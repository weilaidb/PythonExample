#define	PATHD '\\'
extern int getopt(int, char * const *, const char *);
extern char *optarg;
typedef HANDLE thread_t;
#define	thread_create(thrp, attr, func, arg)                               \
(((*(thrp) = CreateThread(NULL, 0,                                     \
(LPTHREAD_START_ROUTINE)(func), (arg), 0, NULL)) == NULL) ? -1 : 0)
#define	thread_join(thr, statusp)                                          \
((WaitForSingleObject((thr), INFINITE) == WAIT_OBJECT_0) &&            \
((statusp == NULL) ? 0 :						   \
(GetExitCodeThread((thr), (LPDWORD)(statusp)) ? 0 : -1)))
typedef HANDLE mutex_t;
#define	mutex_init(m, attr)                                                \
(((*(m) = CreateMutex(NULL, FALSE, NULL)) != NULL) ? 0 : -1)
#define	mutex_lock(m)                                                      \
((WaitForSingleObject(*(m), INFINITE) == WAIT_OBJECT_0) ? 0 : -1)
#define	mutex_unlock(m)         (ReleaseMutex(*(m)) ? 0 : -1)
#define	PATHD '/'
typedef pthread_t thread_t;
#define	thread_create(thrp, attr, func, arg)                               \
pthread_create((thrp), (attr), (func), (arg))
#define	thread_join(thr, statusp) pthread_join((thr), (statusp))
typedef pthread_mutex_t mutex_t;
#define	mutex_init(m, attr)     pthread_mutex_init((m), (attr))
#define	mutex_lock(m)           pthread_mutex_lock(m)
#define	mutex_unlock(m)         pthread_mutex_unlock(m)
#define	NUMWRITERS 5
int global_thread_num;
mutex_t thread_num_lock;
int count_records(DB *, DB_TXN *);
int open_db(DB **, const char *, const char *, DB_ENV *, u_int32_t);
int usage(void);
void *writer_thread(void *);
int
usage()
int
main(int argc, char *argv[])
void *
writer_thread(void *args)
int
count_records(DB *dbp, DB_TXN *txn)
int
open_db(DB **dbpp, const char *progname, const char *file_name,
DB_ENV *envp, u_int32_t extra_flags)
