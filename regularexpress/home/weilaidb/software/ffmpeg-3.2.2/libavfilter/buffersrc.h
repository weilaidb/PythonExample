#define AVFILTER_BUFFERSRC_H
enum ;
unsigned av_buffersrc_get_nb_failed_requests(AVFilterContext *buffer_src);
typedef struct AVBufferSrcParameters  AVBufferSrcParameters;
AVBufferSrcParameters *av_buffersrc_parameters_alloc(void);
int av_buffersrc_parameters_set(AVFilterContext *ctx, AVBufferSrcParameters *param);
av_warn_unused_result
int av_buffersrc_write_frame(AVFilterContext *ctx, const AVFrame *frame);
av_warn_unused_result
int av_buffersrc_add_frame(AVFilterContext *ctx, AVFrame *frame);
av_warn_unused_result
int av_buffersrc_add_frame_flags(AVFilterContext *buffer_src,
AVFrame *frame, int flags);
