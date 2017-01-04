typedef int (action_func)(AVCodecContext *c, void *arg);
typedef int (action_func2)(AVCodecContext *c, void *arg, int jobnr, int threadnr);
typedef struct SliceThreadContext  SliceThreadContext;
static void* attribute_align_arg worker(void *v)
void ff_slice_thread_free(AVCodecContext *avctx)
static av_always_inline void thread_park_workers(SliceThreadContext *c, int thread_count)
static int thread_execute(AVCodecContext *avctx, action_func* func, void *arg, int *ret, int job_count, int job_size)
static int thread_execute2(AVCodecContext *avctx, action_func2* func2, void *arg, int *ret, int job_count)
int ff_slice_thread_init(AVCodecContext *avctx)
void ff_thread_report_progress2(AVCodecContext *avctx, int field, int thread, int n)
void ff_thread_await_progress2(AVCodecContext *avctx, int field, int thread, int shift)
int ff_alloc_entries(AVCodecContext *avctx, int count)
void ff_reset_entries(AVCodecContext *avctx)
