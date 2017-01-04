extern "C"
#define PATHD '\\'
typedef HANDLE thread_t;
#define thread_create(thrp, attr, func, arg)                               \
(((*(thrp) = CreateThread(NULL, 0,                                     \
(LPTHREAD_START_ROUTINE)(func), (arg), 0, NULL)) == NULL) ? -1 : 0)
#define	thread_join(thr, statusp)                                          \
((WaitForSingleObject((thr), INFINITE) == WAIT_OBJECT_0) &&            \
((statusp == NULL) ? 0 : 						   \
(GetExitCodeThread((thr), (LPDWORD)(statusp)) ? 0 : -1)))
typedef HANDLE mutex_t;
#define mutex_init(m, attr)                                                \
(((*(m) = CreateMutex(NULL, FALSE, NULL)) != NULL) ? 0 : -1)
#define mutex_lock(m)                                                      \
((WaitForSingleObject(*(m), INFINITE) == WAIT_OBJECT_0) ? 0 : -1)
#define mutex_unlock(m)         (ReleaseMutex(*(m)) ? 0 : -1)
#define PATHD '/'
typedef pthread_t thread_t;
#define thread_create(thrp, attr, func, arg)                               \
pthread_create((thrp), (attr), (func), (arg))
#define thread_join(thr, statusp) pthread_join((thr), (statusp))
typedef pthread_mutex_t mutex_t;
#define mutex_init(m, attr)     pthread_mutex_init((m), (attr))
#define mutex_lock(m)           pthread_mutex_lock(m)
#define mutex_unlock(m)         pthread_mutex_unlock(m)
#define NUMWRITERS 5
int global_thread_num;
mutex_t thread_num_lock;
int countRecords(Db *, DbTxn *);
int openDb(Db **, const char *, const char *, DbEnv *, u_int32_t);
int usage(void);
void *writerThread(void *);
int
usage()
int
main(int argc, char *argv[])
void *
writerThread(void *args)
int
countRecords(Db *dbp, DbTxn *txn)
int
openDb(Db **dbpp, const char *progname, const char *fileName,
DbEnv *envp, u_int32_t extraFlags)
