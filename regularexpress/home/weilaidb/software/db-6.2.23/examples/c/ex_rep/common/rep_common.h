typedef enum  ENV_ROLE;
typedef struct  repsite_t;
typedef struct  SETUP_DATA;
typedef struct  SHARED_DATA;
typedef struct  supthr_args;
typedef struct  permfail_t;
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
extern DWORD permfail_key;
#define thread_key_create(keyp) ((*keyp = TlsAlloc()) ==			\
TLS_OUT_OF_INDEXES ? (int)GetLastError() : 0)
#define thread_key_delete(key) (TlsFree(key) ? 0 : (int)GetLastError())
#define thread_setspecific(key, value) (TlsSetValue(key, value) ? 0 :	\
(int)GetLastError())
#define thread_getspecific(key) TlsGetValue(key)
typedef pthread_t thread_t;
#define	thread_create(thrp, attr, func, arg)				   \
pthread_create((thrp), (attr), (func), (arg))
#define	thread_join(thr, statusp) pthread_join((thr), (statusp))
extern pthread_key_t permfail_key;
#define thread_key_create(keyp) pthread_key_create(keyp, NULL)
#define thread_key_delete(key) pthread_key_delete(key)
#define thread_setspecific(key, value) pthread_setspecific(key, value)
#define thread_getspecific(key) pthread_getspecific(key)
void *checkpoint_thread __P((void *));
int common_rep_setup __P((DB_ENV *, int, char *[], SETUP_DATA *));
int create_env __P((const char *, DB_ENV **));
int doloop __P((DB_ENV *, SHARED_DATA *));
int env_init __P((DB_ENV *, const char *));
int finish_support_threads __P((thread_t *, thread_t *));
void *log_archive_thread __P((void *));
int start_support_threads __P((DB_ENV *, supthr_args *, thread_t *,
thread_t *));
void usage __P((const int, const char *));
