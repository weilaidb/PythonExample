#define AVFILTER_BUFFERSINK_H
int av_buffersink_get_frame_flags(AVFilterContext *ctx, AVFrame *frame, int flags);
#define AV_BUFFERSINK_FLAG_PEEK 1
#define AV_BUFFERSINK_FLAG_NO_REQUEST 2
typedef struct  AVBufferSinkParams;
AVBufferSinkParams *av_buffersink_params_alloc(void);
typedef struct  AVABufferSinkParams;
AVABufferSinkParams *av_abuffersink_params_alloc(void);
void av_buffersink_set_frame_size(AVFilterContext *ctx, unsigned frame_size);
AVRational av_buffersink_get_frame_rate(AVFilterContext *ctx);
int av_buffersink_get_frame(AVFilterContext *ctx, AVFrame *frame);
int av_buffersink_get_samples(AVFilterContext *ctx, AVFrame *frame, int nb_samples);
