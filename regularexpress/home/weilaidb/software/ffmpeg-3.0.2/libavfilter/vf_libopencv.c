#if HAVE_OPENCV2_CORE_CORE_C_H
static void fill_iplimage_from_frame(IplImage *img, const AVFrame *frame, enum AVPixelFormat pixfmt)
static void fill_frame_from_iplimage(AVFrame *frame, const IplImage *img, enum AVPixelFormat pixfmt)
static int query_formats(AVFilterContext *ctx)
typedef struct OCVContext  OCVContext;
typedef struct SmoothContext  SmoothContext;
static av_cold int smooth_init(AVFilterContext *ctx, const char *args)
static void smooth_end_frame_filter(AVFilterContext *ctx, IplImage *inimg, IplImage *outimg)
static int read_shape_from_file(int *cols, int *rows, int **values, const char *filename,
void *log_ctx)
static int parse_iplconvkernel(IplConvKernel **kernel, char *buf, void *log_ctx)
typedef struct DilateContext  DilateContext;
static av_cold int dilate_init(AVFilterContext *ctx, const char *args)
static av_cold void dilate_uninit(AVFilterContext *ctx)
static void dilate_end_frame_filter(AVFilterContext *ctx, IplImage *inimg, IplImage *outimg)
static void erode_end_frame_filter(AVFilterContext *ctx, IplImage *inimg, IplImage *outimg)
typedef struct OCVFilterEntry  OCVFilterEntry;
static const OCVFilterEntry ocv_filter_entries[] = ;
static av_cold int init(AVFilterContext *ctx)
static av_cold void uninit(AVFilterContext *ctx)
static int filter_frame(AVFilterLink *inlink, AVFrame *in)
#define OFFSET(x) offsetof(OCVContext, x)
#define FLAGS AV_OPT_FLAG_VIDEO_PARAM | AV_OPT_FLAG_FILTERING_PARAM
static const AVOption ocv_options[] = ;
AVFILTER_DEFINE_CLASS(ocv);
static const AVFilterPad avfilter_vf_ocv_inputs[] = ;
static const AVFilterPad avfilter_vf_ocv_outputs[] = ;
AVFilter ff_vf_ocv = ;
