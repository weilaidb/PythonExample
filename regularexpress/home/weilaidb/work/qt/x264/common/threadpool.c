typedef struct
x264_threadpool_job_t;
struct x264_threadpool_t
;
static void *x264_threadpool_thread( x264_threadpool_t *pool )
int x264_threadpool_init( x264_threadpool_t **p_pool, int threads,
void (*init_func)(void *), void *init_arg )
void x264_threadpool_run( x264_threadpool_t *pool, void *(*func)(void *), void *arg )
void *x264_threadpool_wait( x264_threadpool_t *pool, void *arg )
static void x264_threadpool_list_delete( x264_sync_frame_list_t *slist )
void x264_threadpool_delete( x264_threadpool_t *pool )
