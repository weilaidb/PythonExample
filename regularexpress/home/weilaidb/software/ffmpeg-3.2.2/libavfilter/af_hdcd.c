#define PEAK_EXT_LEVEL 0x5981
static const uint32_t peaktab[0x2680] = ;
static const uint8_t readaheadtab[] = ;
static const int32_t gaintab[] = ;
#define HDCD_PROCESS_STEREO_DEFAULT 1
#define HDCD_MAX_CHANNELS 2
GAINTOFLOAT (g) ? -(float)(g>>1) - ((g & 1) ? 0.5 : 0.0) : 0.0
APPLY_GAIN dowhile(0);
TONEGEN16 (int16_t)(sin((6.28318530718 * (sn) * (f)) /(sr)) * (a) * 0x7fff)
typedef struct  hdcd_state;
typedef enum  hdcd_pe;
static const char * const pe_str[] = ;
typedef enum  hdcd_dv;
typedef enum  hdcd_pf;
static const char * const pf_str[] = ;
typedef struct  hdcd_detection_data;
typedef enum  hdcd_ana_mode;
#define HDCD_ANA_OFF_DESC
#define HDCD_ANA_LLE_DESC
#define HDCD_ANA_PE_DESC
#define HDCD_ANA_CDT_DESC
#define HDCD_ANA_TGM_DESC
static const char * const ana_mode_str[] = ;
typedef struct HDCDContext  HDCDContext;
OFFSET offsetof(HDCDContext, x)
#define A AV_OPT_FLAG_AUDIO_PARAM|AV_OPT_FLAG_FILTERING_PARAM
static const AVOption hdcd_options[] = ;
AVFILTER_DEFINE_CLASS(hdcd);
hdcd_reset
hdcd_integrate
hdcd_scan
hdcd_analyze_prepare
hdcd_analyze_gen
hdcd_analyze
hdcd_envelope
hdcd_control
typedef enum  hdcd_control_result;
hdcd_control_stereo
hdcd_process
hdcd_process_stereo
hdcd_detect_reset
hdcd_detect_start
hdcd_detect_onech
hdcd_detect_end
filter_frame
query_formats
uninit
init
config_input
static const AVFilterPad avfilter_af_hdcd_inputs[] = ;
static const AVFilterPad avfilter_af_hdcd_outputs[] = ;
AVFilter ff_af_hdcd = ;
