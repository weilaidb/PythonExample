#define PEAK_EXT_LEVEL 0x5981
static const uint32_t peaktab[0x2680] = ;
static const uint8_t readaheadtab[] = ;
static const int32_t gaintab[] = ;
#define HDCD_PROCESS_STEREO_DEFAULT 1
#define HDCD_MAX_CHANNELS 2
#define GAINTOFLOAT(g) (g) ? -(float)(g>>1) - ((g & 1) ? 0.5 : 0.0) : 0.0
#define APPLY_GAIN(s,g) dowhile(0);
#define TONEGEN16(sn, f, sr, a) (int16_t)(sin((6.28318530718 * (sn) * (f)) /(sr)) * (a) * 0x7fff)
typedef struct  hdcd_state;
typedef enum  hdcd_pe;
static const char * const pe_str[] = ;
typedef enum  hdcd_dv;
typedef enum  hdcd_pf;
static const char * const pf_str[] = ;
typedef struct  hdcd_detection_data;
typedef enum  hdcd_ana_mode;
#define HDCD_ANA_OFF_DESC "disabled"
#define HDCD_ANA_LLE_DESC "gain adjustment level at each sample"
#define HDCD_ANA_PE_DESC  "samples where peak extend occurs"
#define HDCD_ANA_CDT_DESC "samples where the code detect timer is active"
#define HDCD_ANA_TGM_DESC "samples where the target gain does not match between channels"
static const char * const ana_mode_str[] = ;
typedef struct HDCDContext  HDCDContext;
#define OFFSET(x) offsetof(HDCDContext, x)
#define A AV_OPT_FLAG_AUDIO_PARAM|AV_OPT_FLAG_FILTERING_PARAM
static const AVOption hdcd_options[] = ;
AVFILTER_DEFINE_CLASS(hdcd);
static void hdcd_reset(hdcd_state *state, unsigned rate, unsigned cdt_ms)
static int hdcd_integrate(HDCDContext *ctx, hdcd_state *states, int channels, int *flag, const int32_t *samples, int count, int stride)
static int hdcd_scan(HDCDContext *ctx, hdcd_state *states, int channels, const int32_t *samples, int max, int stride)
static void hdcd_analyze_prepare(hdcd_state *state, int32_t *samples, int count, int stride)
static int32_t hdcd_analyze_gen(int32_t sample, unsigned int v, unsigned int maxv)
static int hdcd_analyze(int32_t *samples, int count, int stride, int gain, int target_gain, int extend, int mode, int cdt_active, int tg_mismatch)
static int hdcd_envelope(int32_t *samples, int count, int stride, int vbits, int gain, int target_gain, int extend)
static void hdcd_control(HDCDContext *ctx, hdcd_state *state, int *peak_extend, int *target_gain)
typedef enum  hdcd_control_result;
static hdcd_control_result hdcd_control_stereo(HDCDContext *ctx, int *peak_extend0, int *peak_extend1)
static void hdcd_process(HDCDContext *ctx, hdcd_state *state, int32_t *samples, int count, int stride)
static void hdcd_process_stereo(HDCDContext *ctx, int32_t *samples, int count)
static void hdcd_detect_reset(hdcd_detection_data *detect)
static void hdcd_detect_start(hdcd_detection_data *detect)
static void hdcd_detect_onech(hdcd_state *state, hdcd_detection_data *detect)
static void hdcd_detect_end(hdcd_detection_data *detect, int channels)
static int filter_frame(AVFilterLink *inlink, AVFrame *in)
static int query_formats(AVFilterContext *ctx)
static av_cold void uninit(AVFilterContext *ctx)
static av_cold int init(AVFilterContext *ctx)
static int config_input(AVFilterLink *inlink)
static const AVFilterPad avfilter_af_hdcd_inputs[] = ;
static const AVFilterPad avfilter_af_hdcd_outputs[] = ;
AVFilter ff_af_hdcd = ;
