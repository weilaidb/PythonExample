av_cold void ff_af_queue_init(AVCodecContext *avctx, AudioFrameQueue *afq)
void ff_af_queue_close(AudioFrameQueue *afq)
int ff_af_queue_add(AudioFrameQueue *afq, const AVFrame *f)
void ff_af_queue_remove(AudioFrameQueue *afq, int nb_samples, int64_t *pts,
int64_t *duration)
