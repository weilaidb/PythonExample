typedef struct FrameData  FrameData;
typedef struct NNEDIContext  NNEDIContext;
#define OFFSET(x) offsetof(NNEDIContext, x)
#define FLAGS AV_OPT_FLAG_VIDEO_PARAM|AV_OPT_FLAG_FILTERING_PARAM
static const AVOption nnedi_options[] = ;
AVFILTER_DEFINE_CLASS(nnedi);
static int config_input(AVFilterLink *inlink)
static int config_output(AVFilterLink *outlink)
static int query_formats(AVFilterContext *ctx)
static void copy_pad(const AVFrame *src, FrameData *frame_data, NNEDIContext *s, int fn)
static void elliott(float *data, const int n)
static void dot_prod(NNEDIContext *s, const float *data, const float *weights, float *vals, const int n, const int len, const float *scale)
static void dot_prods(NNEDIContext *s, const float *dataf, const float *weightsf, float *vals, const int n, const int len, const float *scale)
static void compute_network0(NNEDIContext *s, const float *input, const float *weights, uint8_t *d)
static void compute_network0_i16(NNEDIContext *s, const float *inputf, const float *weightsf, uint8_t *d)
static void pixel2float48(const uint8_t *t8, const int pitch, float *p)
static void byte2word48(const uint8_t *t, const int pitch, float *pf)
static int32_t process_line0(const uint8_t *tempu, int width, uint8_t *dstp8, const uint8_t *src3p8, const int src_pitch, const int max_value, const int chroma)
static void byte2word64(const uint8_t *t, const int pitch, float *p)
static void compute_network0new(NNEDIContext *s, const float *datai, const float *weights, uint8_t *d)
static void evalfunc_0(NNEDIContext *s, FrameData *frame_data)
static void extract_m8(const uint8_t *srcp8, const int stride, const int xdia, const int ydia, float *mstd, float *input)
static void extract_m8_i16(const uint8_t *srcp, const int stride, const int xdia, const int ydia, float *mstd, float *inputf)
static const float exp_lo = -80.0f;
static const float exp_hi = +80.0f;
static void e2_m16(float *s, const int n)
const float min_weight_sum = 1e-10f;
static void weighted_avg_elliott_mul5_m16(const float *w, const int n, float *mstd)
static void evalfunc_1(NNEDIContext *s, FrameData *frame_data)
#define NUM_NSIZE 7
#define NUM_NNS 5
static int roundds(const double f)
static void select_functions(NNEDIContext *s)
static int modnpf(const int m, const int n)
static int get_frame(AVFilterContext *ctx, int is_second)
static int filter_frame(AVFilterLink *inlink, AVFrame *src)
static int request_frame(AVFilterLink *link)
static av_cold int init(AVFilterContext *ctx)
static av_cold void uninit(AVFilterContext *ctx)
static const AVFilterPad inputs[] = ;
static const AVFilterPad outputs[] = ;
AVFilter ff_vf_nnedi = ;
