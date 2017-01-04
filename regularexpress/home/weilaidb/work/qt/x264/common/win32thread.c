#if HAVE_WINRT
#define _beginthreadex CreateThread
#define InitializeCriticalSectionAndSpinCount(a, b) InitializeCriticalSectionEx(a, b, CRITICAL_SECTION_NO_DEBUG_INFO)
#define WaitForSingleObject(a, b) WaitForSingleObjectEx(a, b, FALSE)
#define X264_SPIN_COUNT 0
static x264_pthread_mutex_t static_mutex;
static unsigned __stdcall x264_win32thread_worker( void *arg )
int x264_pthread_create( x264_pthread_t *thread, const x264_pthread_attr_t *attr,
void *(*start_routine)( void* ), void *arg )
int x264_pthread_join( x264_pthread_t thread, void **value_ptr )
int x264_pthread_mutex_init( x264_pthread_mutex_t *mutex, const x264_pthread_mutexattr_t *attr )
int x264_pthread_mutex_destroy( x264_pthread_mutex_t *mutex )
int x264_pthread_mutex_lock( x264_pthread_mutex_t *mutex )
int x264_pthread_mutex_unlock( x264_pthread_mutex_t *mutex )
void x264_win32_threading_destroy( void )
#if HAVE_WINRT
int x264_pthread_cond_init( x264_pthread_cond_t *cond, const x264_pthread_condattr_t *attr )
int x264_pthread_cond_destroy( x264_pthread_cond_t *cond )
int x264_pthread_cond_broadcast( x264_pthread_cond_t *cond )
int x264_pthread_cond_signal( x264_pthread_cond_t *cond )
int x264_pthread_cond_wait( x264_pthread_cond_t *cond, x264_pthread_mutex_t *mutex )
int x264_win32_threading_init( void )
int x264_pthread_num_processors_np( void )
static struct
thread_control;
typedef struct
x264_win32_cond_t;
int x264_pthread_cond_init( x264_pthread_cond_t *cond, const x264_pthread_condattr_t *attr )
int x264_pthread_cond_destroy( x264_pthread_cond_t *cond )
int x264_pthread_cond_broadcast( x264_pthread_cond_t *cond )
int x264_pthread_cond_signal( x264_pthread_cond_t *cond )
int x264_pthread_cond_wait( x264_pthread_cond_t *cond, x264_pthread_mutex_t *mutex )
int x264_win32_threading_init( void )
int x264_pthread_num_processors_np( void )
