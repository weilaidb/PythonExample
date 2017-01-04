#define AVFILTER_DUALINPUT_H
typedef struct  FFDualInputContext;
int ff_dualinput_init(AVFilterContext *ctx, FFDualInputContext *s);
int ff_dualinput_filter_frame(FFDualInputContext *s, AVFilterLink *inlink, AVFrame *in);
int ff_dualinput_request_frame(FFDualInputContext *s, AVFilterLink *outlink);
void ff_dualinput_uninit(FFDualInputContext *s);
