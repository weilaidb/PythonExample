enum ;
typedef struct  AlphaMergeContext;
static av_cold void uninit(AVFilterContext *ctx)
static int query_formats(AVFilterContext *ctx)
static int config_input_main(AVFilterLink *inlink)
static int config_output(AVFilterLink *outlink)
static void draw_frame(AVFilterContext *ctx,
AVFrame *main_buf,
AVFrame *alpha_buf)
static int filter_frame(AVFilterLink *inlink, AVFrame *buf)
static int request_frame(AVFilterLink *outlink)
static const AVFilterPad alphamerge_inputs[] = ;
static const AVFilterPad alphamerge_outputs[] = ;
AVFilter ff_vf_alphamerge = ;
