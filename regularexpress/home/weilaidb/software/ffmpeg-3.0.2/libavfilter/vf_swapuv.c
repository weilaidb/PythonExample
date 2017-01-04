static void do_swap(AVFrame *frame)
static AVFrame *get_video_buffer(AVFilterLink *link, int w, int h)
static int filter_frame(AVFilterLink *link, AVFrame *inpicref)
static int is_planar_yuv(const AVPixFmtDescriptor *desc)
static int query_formats(AVFilterContext *ctx)
static const AVFilterPad swapuv_inputs[] = ;
static const AVFilterPad swapuv_outputs[] = ;
AVFilter ff_vf_swapuv = ;
