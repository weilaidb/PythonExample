#define NOISE_SPREAD_THRESHOLD 0.9f
#define NOISE_LAMBDA_REPLACE 1.948f
typedef struct BandCodingPath  BandCodingPath;
static void encode_window_bands_info(AACEncContext *s, SingleChannelElement *sce,
int win, int group_len, const float lambda)
typedef struct TrellisPath  TrellisPath;
#define TRELLIS_STAGES 121
#define TRELLIS_STATES (SCALE_MAX_DIFF+1)
static void set_special_band_scalefactors(AACEncContext *s, SingleChannelElement *sce)
static void search_for_quantizers_anmr(AVCodecContext *avctx, AACEncContext *s,
SingleChannelElement *sce,
const float lambda)
static void search_for_quantizers_fast(AVCodecContext *avctx, AACEncContext *s,
SingleChannelElement *sce,
const float lambda)
static void search_for_pns(AACEncContext *s, AVCodecContext *avctx, SingleChannelElement *sce)
static void mark_pns(AACEncContext *s, AVCodecContext *avctx, SingleChannelElement *sce)
static void search_for_ms(AACEncContext *s, ChannelElement *cpe)
AACCoefficientsEncoder ff_aac_coders[AAC_CODER_NB] = ;
