#define	PATHD '\\'
extern int getopt(int, char * const *, const char *);
extern char *optarg;
typedef HANDLE thread_t;
#define	thread_create(thrp, attr, func, arg)				\
(((*(thrp) = CreateThread(NULL, 0,					\
(LPTHREAD_START_ROUTINE)(func), (arg), 0, NULL)) == NULL) ? -1 : 0)
#define	thread_join(thr, statusp)					\
((WaitForSingleObject((thr), INFINITE) == WAIT_OBJECT_0) &&		\
((statusp == NULL) ? 0 :						\
(GetExitCodeThread((thr), (LPDWORD)(statusp)) ? 0 : -1)))
typedef HANDLE mutex_t;
#define	mutex_init(m, attr)						\
(((*(m) = CreateMutex(NULL, FALSE, NULL)) != NULL) ? 0 : -1)
#define	mutex_lock(m)							\
((WaitForSingleObject(*(m), INFINITE) == WAIT_OBJECT_0) ? 0 : -1)
#define	mutex_unlock(m)		(ReleaseMutex(*(m)) ? 0 : -1)
#define	PATHD '/'
typedef pthread_t thread_t;
#define	thread_create(thrp, attr, func, arg)				\
pthread_create((thrp), (attr), (func), (arg))
#define	thread_join(thr, statusp) pthread_join((thr), (statusp))
typedef pthread_mutex_t mutex_t;
#define	mutex_init(m, attr)	pthread_mutex_init((m), (attr))
#define	mutex_lock(m)		pthread_mutex_lock(m)
#define	mutex_unlock(m)		pthread_mutex_unlock(m)
#define	NUMWRITERS 5
int count_records __P((DB *, DB_TXN *));
int assoc_callback __P((DB *, const DBT *, const DBT *, DBT *));
void *writer_thread __P((void *));
int global_thread_num;
mutex_t thread_num_lock;
int TestKeyExistErrorReturn(CuTest *ct)
void *
writer_thread(void *args)
int
count_records(DB *dbp, DB_TXN *txn)
int
assoc_callback(pdbp, pkey, pdata, skey)
DB *pdbp;
const DBT *pkey;
const DBT *pdata;
DBT *skey;
