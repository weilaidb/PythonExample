typedef int (action_func)(AVCodecContext *c, void *arg);
typedef int (action_func2)(AVCodecContext *c, void *arg, int jobnr, int threadnr);
typedef struct SliceThreadContext  SliceThreadContext;
worker
ff_slice_thread_free
thread_park_workers
thread_execute
thread_execute2
ff_slice_thread_init
ff_thread_report_progress2
ff_thread_await_progress2
ff_alloc_entries
ff_reset_entries
