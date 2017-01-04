#define X264_THREADPOOL_H
typedef struct x264_threadpool_t x264_threadpool_t;
#if HAVE_THREAD
int   x264_threadpool_init( x264_threadpool_t **p_pool, int threads,
void (*init_func)(void *), void *init_arg );
void  x264_threadpool_run( x264_threadpool_t *pool, void *(*func)(void *), void *arg );
void *x264_threadpool_wait( x264_threadpool_t *pool, void *arg );
void  x264_threadpool_delete( x264_threadpool_t *pool );
#define x264_threadpool_init(p,t,f,a) -1
#define x264_threadpool_run(p,f,a)
#define x264_threadpool_wait(p,a)     NULL
#define x264_threadpool_delete(p)
