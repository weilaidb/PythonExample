typedef struct  Super2xSaIContext;
#define GET_RESULT(A, B, C, D) ((A != C || A != D) - (B != C || B != D))
#define INTERPOLATE(A, B) (((A & hi_pixel_mask) >> 1) + ((B & hi_pixel_mask) >> 1) + (A & B & lo_pixel_mask))
#define Q_INTERPOLATE(A, B, C, D) ((A & q_hi_pixel_mask) >> 2) + ((B & q_hi_pixel_mask) >> 2) + ((C & q_hi_pixel_mask) >> 2) + ((D & q_hi_pixel_mask) >> 2) \
+ ((((A & q_lo_pixel_mask) + (B & q_lo_pixel_mask) + (C & q_lo_pixel_mask) + (D & q_lo_pixel_mask)) >> 2) & q_lo_pixel_mask)
static void super2xsai(AVFilterContext *ctx,
uint8_t *src, int src_linesize,
uint8_t *dst, int dst_linesize,
int width, int height)
static int query_formats(AVFilterContext *ctx)
static int config_input(AVFilterLink *inlink)
static int config_output(AVFilterLink *outlink)
static int filter_frame(AVFilterLink *inlink, AVFrame *inpicref)
static const AVFilterPad super2xsai_inputs[] = ;
static const AVFilterPad super2xsai_outputs[] = ;
AVFilter ff_vf_super2xsai = ;
