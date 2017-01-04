#define X264_WIN32THREAD_H
#undef ERROR
typedef struct
x264_pthread_t;
#define x264_pthread_attr_t int
typedef CRITICAL_SECTION x264_pthread_mutex_t;
#define X264_PTHREAD_MUTEX_INITIALIZER
#define x264_pthread_mutexattr_t int
#if HAVE_WINRT
typedef CONDITION_VARIABLE x264_pthread_cond_t;
typedef struct
x264_pthread_cond_t;
#define x264_pthread_condattr_t int
int x264_pthread_create( x264_pthread_t *thread, const x264_pthread_attr_t *attr,
void *(*start_routine)( void* ), void *arg );
int x264_pthread_join( x264_pthread_t thread, void **value_ptr );
int x264_pthread_mutex_init( x264_pthread_mutex_t *mutex, const x264_pthread_mutexattr_t *attr );
int x264_pthread_mutex_destroy( x264_pthread_mutex_t *mutex );
int x264_pthread_mutex_lock( x264_pthread_mutex_t *mutex );
int x264_pthread_mutex_unlock( x264_pthread_mutex_t *mutex );
int x264_pthread_cond_init( x264_pthread_cond_t *cond, const x264_pthread_condattr_t *attr );
int x264_pthread_cond_destroy( x264_pthread_cond_t *cond );
int x264_pthread_cond_broadcast( x264_pthread_cond_t *cond );
int x264_pthread_cond_wait( x264_pthread_cond_t *cond, x264_pthread_mutex_t *mutex );
int x264_pthread_cond_signal( x264_pthread_cond_t *cond );
#define x264_pthread_attr_init(a) 0
#define x264_pthread_attr_destroy(a) 0
int  x264_win32_threading_init( void );
void x264_win32_threading_destroy( void );
int x264_pthread_num_processors_np( void );
