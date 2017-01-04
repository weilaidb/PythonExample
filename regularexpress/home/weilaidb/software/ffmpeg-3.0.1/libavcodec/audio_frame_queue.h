#define AVCODEC_AUDIO_FRAME_QUEUE_H
typedef struct AudioFrame  AudioFrame;
typedef struct AudioFrameQueue  AudioFrameQueue;
void ff_af_queue_init(AVCodecContext *avctx, AudioFrameQueue *afq);
void ff_af_queue_close(AudioFrameQueue *afq);
int ff_af_queue_add(AudioFrameQueue *afq, const AVFrame *f);
void ff_af_queue_remove(AudioFrameQueue *afq, int nb_samples, int64_t *pts,
int64_t *duration);
