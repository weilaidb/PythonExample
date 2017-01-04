typedef struct FlipContext  FlipContext;
static int config_input(AVFilterLink *link)
static AVFrame *get_video_buffer(AVFilterLink *link, int w, int h)
static int filter_frame(AVFilterLink *link, AVFrame *frame)
static const AVFilterPad avfilter_vf_vflip_inputs[] = ;
static const AVFilterPad avfilter_vf_vflip_outputs[] = ;
AVFilter ff_vf_vflip = ;
