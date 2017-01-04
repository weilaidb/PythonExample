typedef struct RepeatFieldsContext  RepeatFieldsContext;
static av_cold void uninit(AVFilterContext *ctx)
static int query_formats(AVFilterContext *ctx)
static int config_input(AVFilterLink *inlink)
static void update_pts(AVFilterLink *link, AVFrame *f, int64_t pts, int fields)
static int filter_frame(AVFilterLink *inlink, AVFrame *in)
static const AVFilterPad repeatfields_inputs[] = ;
static const AVFilterPad repeatfields_outputs[] = ;
AVFilter ff_vf_repeatfields = ;
