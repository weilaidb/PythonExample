#define TOP    0
#define BOTTOM 1
typedef struct BlendContext  BlendContext;
static const char *const var_names[] = ;
enum                                   ;
typedef struct ThreadData  ThreadData;
#define COMMON_OPTIONS \
,\
,\
,\
,\
,\
,\
,\
,\
,\
,\
,\
,\
,\
,\
,\
,\
,\
,\
,\
,\
,\
,\
,\
,\
,\
,\
,\
,\
,\
,\
,\
,\
,\
,\
,\
,\
,\
,\
,\
,\
,\
,\
,\
,\
,\
,\
#define OFFSET(x) offsetof(BlendContext, x)
#define FLAGS AV_OPT_FLAG_FILTERING_PARAM|AV_OPT_FLAG_VIDEO_PARAM
static const AVOption blend_options[] = ;
AVFILTER_DEFINE_CLASS(blend);
#define COPY(src)                                                            \
static void blend_copy ## src(const uint8_t *top, ptrdiff_t top_linesize,    \
const uint8_t *bottom, ptrdiff_t bottom_linesize,\
uint8_t *dst, ptrdiff_t dst_linesize,            \
ptrdiff_t width, ptrdiff_t height,               \
FilterParams *param, double *values, int starty) \
COPY(top)
COPY(bottom)
#undef COPY
static void blend_normal_8bit(const uint8_t *top, ptrdiff_t top_linesize,
const uint8_t *bottom, ptrdiff_t bottom_linesize,
uint8_t *dst, ptrdiff_t dst_linesize,
ptrdiff_t width, ptrdiff_t height,
FilterParams *param, double *values, int starty)
static void blend_normal_16bit(const uint8_t *_top, ptrdiff_t top_linesize,
const uint8_t *_bottom, ptrdiff_t bottom_linesize,
uint8_t *_dst, ptrdiff_t dst_linesize,
ptrdiff_t width, ptrdiff_t height,
FilterParams *param, double *values, int starty)
#define DEFINE_BLEND8(name, expr)                                              \
static void blend_## name##_8bit(const uint8_t *top, ptrdiff_t top_linesize,         \
const uint8_t *bottom, ptrdiff_t bottom_linesize,   \
uint8_t *dst, ptrdiff_t dst_linesize,               \
ptrdiff_t width, ptrdiff_t height,                \
FilterParams *param, double *values, int starty) \
#define DEFINE_BLEND16(name, expr)                                             \
static void blend_## name##_16bit(const uint8_t *_top, ptrdiff_t top_linesize,       \
const uint8_t *_bottom, ptrdiff_t bottom_linesize, \
uint8_t *_dst, ptrdiff_t dst_linesize,             \
ptrdiff_t width, ptrdiff_t height,           \
FilterParams *param, double *values, int starty)         \
#define A top[j]
#define B bottom[j]
#define MULTIPLY(x, a, b) ((x) * (((a) * (b)) / 255))
#define SCREEN(x, a, b)   (255 - (x) * ((255 - (a)) * (255 - (b)) / 255))
#define BURN(a, b)        (((a) == 0) ? (a) : FFMAX(0, 255 - ((255 - (b)) << 8) / (a)))
#define DODGE(a, b)       (((a) == 255) ? (a) : FFMIN(255, (((b) << 8) / (255 - (a)))))
DEFINE_BLEND8(addition,   FFMIN(255, A + B))
DEFINE_BLEND8(addition128, av_clip_uint8(A + B - 128))
DEFINE_BLEND8(average,    (A + B) / 2)
DEFINE_BLEND8(subtract,   FFMAX(0, A - B))
DEFINE_BLEND8(multiply,   MULTIPLY(1, A, B))
DEFINE_BLEND8(multiply128,av_clip_uint8((A - 128) * B / 32. + 128))
DEFINE_BLEND8(negation,   255 - FFABS(255 - A - B))
DEFINE_BLEND8(difference, FFABS(A - B))
DEFINE_BLEND8(difference128, av_clip_uint8(128 + A - B))
DEFINE_BLEND8(screen,     SCREEN(1, A, B))
DEFINE_BLEND8(overlay,    (A < 128) ? MULTIPLY(2, A, B) : SCREEN(2, A, B))
DEFINE_BLEND8(hardlight,  (B < 128) ? MULTIPLY(2, B, A) : SCREEN(2, B, A))
DEFINE_BLEND8(hardmix,    (A < (255 - B)) ? 0: 255)
DEFINE_BLEND8(heat,       (A == 0) ? 0 : 255 - FFMIN(((255 - B) * (255 - B)) / A, 255))
DEFINE_BLEND8(freeze,     (B == 0) ? 0 : 255 - FFMIN(((255 - A) * (255 - A)) / B, 255))
DEFINE_BLEND8(darken,     FFMIN(A, B))
DEFINE_BLEND8(lighten,    FFMAX(A, B))
DEFINE_BLEND8(divide,     av_clip_uint8(B == 0 ? 255 : 255 * A / B))
DEFINE_BLEND8(dodge,      DODGE(A, B))
DEFINE_BLEND8(burn,       BURN(A, B))
DEFINE_BLEND8(softlight,  (A > 127) ? B + (255 - B) * (A - 127.5) / 127.5 * (0.5 - fabs(B - 127.5) / 255): B - B * ((127.5 - A) / 127.5) * (0.5 - fabs(B - 127.5)/255))
DEFINE_BLEND8(exclusion,  A + B - 2 * A * B / 255)
DEFINE_BLEND8(pinlight,   (B < 128) ? FFMIN(A, 2 * B) : FFMAX(A, 2 * (B - 128)))
DEFINE_BLEND8(phoenix,    FFMIN(A, B) - FFMAX(A, B) + 255)
DEFINE_BLEND8(reflect,    (B == 255) ? B : FFMIN(255, (A * A / (255 - B))))
DEFINE_BLEND8(glow,       (A == 255) ? A : FFMIN(255, (B * B / (255 - A))))
DEFINE_BLEND8(and,        A & B)
DEFINE_BLEND8(or,         A | B)
DEFINE_BLEND8(xor,        A ^ B)
DEFINE_BLEND8(vividlight, (A < 128) ? BURN(2 * A, B) : DODGE(2 * (A - 128), B))
DEFINE_BLEND8(linearlight,av_clip_uint8((B < 128) ? B + 2 * A - 255 : B + 2 * (A - 128)))
#undef MULTIPLY
#undef SCREEN
#undef BURN
#undef DODGE
#define MULTIPLY(x, a, b) ((x) * (((a) * (b)) / 65535))
#define SCREEN(x, a, b)   (65535 - (x) * ((65535 - (a)) * (65535 - (b)) / 65535))
#define BURN(a, b)        (((a) == 0) ? (a) : FFMAX(0, 65535 - ((65535 - (b)) << 16) / (a)))
#define DODGE(a, b)       (((a) == 65535) ? (a) : FFMIN(65535, (((b) << 16) / (65535 - (a)))))
DEFINE_BLEND16(addition,   FFMIN(65535, A + B))
DEFINE_BLEND16(addition128, av_clip_uint16(A + B - 32768))
DEFINE_BLEND16(average,    (A + B) / 2)
DEFINE_BLEND16(subtract,   FFMAX(0, A - B))
DEFINE_BLEND16(multiply,   MULTIPLY(1, A, B))
DEFINE_BLEND16(multiply128, av_clip_uint16((A - 32768) * B / 8192. + 32768))
DEFINE_BLEND16(negation,   65535 - FFABS(65535 - A - B))
DEFINE_BLEND16(difference, FFABS(A - B))
DEFINE_BLEND16(difference128, av_clip_uint16(32768 + A - B))
DEFINE_BLEND16(screen,     SCREEN(1, A, B))
DEFINE_BLEND16(overlay,    (A < 32768) ? MULTIPLY(2, A, B) : SCREEN(2, A, B))
DEFINE_BLEND16(hardlight,  (B < 32768) ? MULTIPLY(2, B, A) : SCREEN(2, B, A))
DEFINE_BLEND16(hardmix,    (A < (65535 - B)) ? 0: 65535)
DEFINE_BLEND16(heat,       (A == 0) ? 0 : 65535 - FFMIN(((65535 - B) * (65535 - B)) / A, 65535))
DEFINE_BLEND16(freeze,     (B == 0) ? 0 : 65535 - FFMIN(((65535 - A) * (65535 - A)) / B, 65535))
DEFINE_BLEND16(darken,     FFMIN(A, B))
DEFINE_BLEND16(lighten,    FFMAX(A, B))
DEFINE_BLEND16(divide,     av_clip_uint16(B == 0 ? 65535 : 65535 * A / B))
DEFINE_BLEND16(dodge,      DODGE(A, B))
DEFINE_BLEND16(burn,       BURN(A, B))
DEFINE_BLEND16(softlight,  (A > 32767) ? B + (65535 - B) * (A - 32767.5) / 32767.5 * (0.5 - fabs(B - 32767.5) / 65535): B - B * ((32767.5 - A) / 32767.5) * (0.5 - fabs(B - 32767.5)/65535))
DEFINE_BLEND16(exclusion,  A + B - 2 * A * B / 65535)
DEFINE_BLEND16(pinlight,   (B < 32768) ? FFMIN(A, 2 * B) : FFMAX(A, 2 * (B - 32768)))
DEFINE_BLEND16(phoenix,    FFMIN(A, B) - FFMAX(A, B) + 65535)
DEFINE_BLEND16(reflect,    (B == 65535) ? B : FFMIN(65535, (A * A / (65535 - B))))
DEFINE_BLEND16(glow,       (A == 65535) ? A : FFMIN(65535, (B * B / (65535 - A))))
DEFINE_BLEND16(and,        A & B)
DEFINE_BLEND16(or,         A | B)
DEFINE_BLEND16(xor,        A ^ B)
DEFINE_BLEND16(vividlight, (A < 32768) ? BURN(2 * A, B) : DODGE(2 * (A - 32768), B))
DEFINE_BLEND16(linearlight,av_clip_uint16((B < 32768) ? B + 2 * A - 65535 : B + 2 * (A - 32768)))
#define DEFINE_BLEND_EXPR(type, name, div)                                     \
static void blend_expr_## name(const uint8_t *_top, ptrdiff_t top_linesize,          \
const uint8_t *_bottom, ptrdiff_t bottom_linesize,    \
uint8_t *_dst, ptrdiff_t dst_linesize,                \
ptrdiff_t width, ptrdiff_t height,              \
FilterParams *param, double *values, int starty) \
DEFINE_BLEND_EXPR(uint8_t, 8bit, 1)
DEFINE_BLEND_EXPR(uint16_t, 16bit, 2)
static int filter_slice(AVFilterContext *ctx, void *arg, int jobnr, int nb_jobs)
static AVFrame *blend_frame(AVFilterContext *ctx, AVFrame *top_buf,
const AVFrame *bottom_buf)
static av_cold int init(AVFilterContext *ctx)
static int query_formats(AVFilterContext *ctx)
static av_cold void uninit(AVFilterContext *ctx)
void ff_blend_init(FilterParams *param, int is_16bit)
static int config_output(AVFilterLink *outlink)
#if CONFIG_BLEND_FILTER
static int request_frame(AVFilterLink *outlink)
static int filter_frame(AVFilterLink *inlink, AVFrame *buf)
static const AVFilterPad blend_inputs[] = ;
static const AVFilterPad blend_outputs[] = ;
AVFilter ff_vf_blend = ;
#if CONFIG_TBLEND_FILTER
static int tblend_filter_frame(AVFilterLink *inlink, AVFrame *frame)
static const AVOption tblend_options[] = ;
AVFILTER_DEFINE_CLASS(tblend);
static const AVFilterPad tblend_inputs[] = ;
static const AVFilterPad tblend_outputs[] = ;
AVFilter ff_vf_tblend = ;
