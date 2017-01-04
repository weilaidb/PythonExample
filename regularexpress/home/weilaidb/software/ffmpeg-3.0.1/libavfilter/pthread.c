typedef struct ThreadContext  ThreadContext;
static void* attribute_align_arg worker(void *v)
static void slice_thread_uninit(ThreadContext *c)
static void slice_thread_park_workers(ThreadContext *c)
static int thread_execute(AVFilterContext *ctx, avfilter_action_func *func,
void *arg, int *ret, int nb_jobs)
static int thread_init_internal(ThreadContext *c, int nb_threads)
int ff_graph_thread_init(AVFilterGraph *graph)
void ff_graph_thread_free(AVFilterGraph *graph)
