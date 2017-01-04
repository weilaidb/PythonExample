#define AVCODEC_THREAD_H
typedef struct ThreadFrame  ThreadFrame;
void ff_thread_flush(AVCodecContext *avctx);
int ff_thread_decode_frame(AVCodecContext *avctx, AVFrame *picture,
int *got_picture_ptr, AVPacket *avpkt);
void ff_thread_finish_setup(AVCodecContext *avctx);
void ff_thread_report_progress(ThreadFrame *f, int progress, int field);
void ff_thread_await_progress(ThreadFrame *f, int progress, int field);
enum AVPixelFormat ff_thread_get_format(AVCodecContext *avctx, const enum AVPixelFormat *fmt);
int ff_thread_get_buffer(AVCodecContext *avctx, ThreadFrame *f, int flags);
void ff_thread_release_buffer(AVCodecContext *avctx, ThreadFrame *f);
int ff_thread_ref_frame(ThreadFrame *dst, ThreadFrame *src);
int ff_thread_init(AVCodecContext *s);
void ff_thread_free(AVCodecContext *s);
int ff_alloc_entries(AVCodecContext *avctx, int count);
void ff_reset_entries(AVCodecContext *avctx);
void ff_thread_report_progress2(AVCodecContext *avctx, int field, int thread, int n);
void ff_thread_await_progress2(AVCodecContext *avctx,  int field, int thread, int shift);
