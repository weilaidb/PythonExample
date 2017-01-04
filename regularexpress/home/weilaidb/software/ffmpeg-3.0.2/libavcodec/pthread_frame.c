typedef struct PerThreadContext  PerThreadContext;
typedef struct FrameThreadContext  FrameThreadContext;
#define THREAD_SAFE_CALLBACKS(avctx) \
((avctx)->thread_safe_callbacks || (avctx)->get_buffer2 == avcodec_default_get_buffer2)
static attribute_align_arg void *frame_worker_thread(void *arg)
static int update_context_from_thread(AVCodecContext *dst, AVCodecContext *src, int for_user)
static int update_context_from_user(AVCodecContext *dst, AVCodecContext *src)
static void release_delayed_buffers(PerThreadContext *p)
static int submit_packet(PerThreadContext *p, AVPacket *avpkt)
int ff_thread_decode_frame(AVCodecContext *avctx,
AVFrame *picture, int *got_picture_ptr,
AVPacket *avpkt)
void ff_thread_report_progress(ThreadFrame *f, int n, int field)
void ff_thread_await_progress(ThreadFrame *f, int n, int field)
void ff_thread_finish_setup(AVCodecContext *avctx)
static void park_frame_worker_threads(FrameThreadContext *fctx, int thread_count)
void ff_frame_thread_free(AVCodecContext *avctx, int thread_count)
int ff_frame_thread_init(AVCodecContext *avctx)
void ff_thread_flush(AVCodecContext *avctx)
int ff_thread_can_start_frame(AVCodecContext *avctx)
static int thread_get_buffer_internal(AVCodecContext *avctx, ThreadFrame *f, int flags)
enum AVPixelFormat ff_thread_get_format(AVCodecContext *avctx, const enum AVPixelFormat *fmt)
int ff_thread_get_buffer(AVCodecContext *avctx, ThreadFrame *f, int flags)
void ff_thread_release_buffer(AVCodecContext *avctx, ThreadFrame *f)
