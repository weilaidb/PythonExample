#define AVCODEC_PTHREAD_INTERNAL_H
#define MAX_AUTO_THREADS 16
int ff_slice_thread_init(AVCodecContext *avctx);
void ff_slice_thread_free(AVCodecContext *avctx);
int ff_frame_thread_init(AVCodecContext *avctx);
void ff_frame_thread_free(AVCodecContext *avctx, int thread_count);
