static const char * const precision_str[] = ;
static const char *const var_names[] = ;
#define OFFSET(x) offsetof(VolumeContext, x)
#define A AV_OPT_FLAG_AUDIO_PARAM
#define F AV_OPT_FLAG_FILTERING_PARAM
static const AVOption volume_options[] = ;
AVFILTER_DEFINE_CLASS(volume);
static int set_expr(AVExpr **pexpr, const char *expr, void *log_ctx)
static av_cold int init(AVFilterContext *ctx)
static av_cold void uninit(AVFilterContext *ctx)
static int query_formats(AVFilterContext *ctx)
static inline void scale_samples_u8(uint8_t *dst, const uint8_t *src,
int nb_samples, int volume)
static inline void scale_samples_u8_small(uint8_t *dst, const uint8_t *src,
int nb_samples, int volume)
static inline void scale_samples_s16(uint8_t *dst, const uint8_t *src,
int nb_samples, int volume)
static inline void scale_samples_s16_small(uint8_t *dst, const uint8_t *src,
int nb_samples, int volume)
static inline void scale_samples_s32(uint8_t *dst, const uint8_t *src,
int nb_samples, int volume)
static av_cold void volume_init(VolumeContext *vol)
static int set_volume(AVFilterContext *ctx)
static int config_output(AVFilterLink *outlink)
static int process_command(AVFilterContext *ctx, const char *cmd, const char *args,
char *res, int res_len, int flags)
#define D2TS(d)  (isnan(d) ? AV_NOPTS_VALUE : (int64_t)(d))
#define TS2D(ts) ((ts) == AV_NOPTS_VALUE ? NAN : (double)(ts))
#define TS2T(ts, tb) ((ts) == AV_NOPTS_VALUE ? NAN : (double)(ts)*av_q2d(tb))
static int filter_frame(AVFilterLink *inlink, AVFrame *buf)
static const AVFilterPad avfilter_af_volume_inputs[] = ;
static const AVFilterPad avfilter_af_volume_outputs[] = ;
AVFilter ff_af_volume = ;
