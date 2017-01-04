#define AVCODEC_AAC_H
#if !USE_FIXED
#define MAX_CHANNELS 64
#define MAX_ELEM_ID 16
#define TNS_MAX_ORDER 20
#define MAX_LTP_LONG_SFB 40
#define CLIP_AVOIDANCE_FACTOR 0.95f
enum RawDataBlockType ;
enum ExtensionPayloadID ;
enum WindowSequence ;
enum BandType ;
#define IS_CODEBOOK_UNSIGNED(x) (((x) - 1) & 10)
enum ChannelPosition ;
enum CouplingPoint ;
enum OCStatus ;
typedef struct OutputConfiguration  OutputConfiguration;
typedef struct PredictorState  PredictorState;
#define MAX_PREDICTORS 672
#define SCALE_DIV_512    36
#define SCALE_ONE_POS   140
#define SCALE_MAX_POS   255
#define SCALE_MAX_DIFF   60
#define SCALE_DIFF_ZERO  60
#define POW_SF2_ZERO    200
#define NOISE_PRE       256
#define NOISE_PRE_BITS    9
#define NOISE_OFFSET     90
typedef struct LongTermPrediction  LongTermPrediction;
typedef struct IndividualChannelStream  IndividualChannelStream;
typedef struct TemporalNoiseShaping  TemporalNoiseShaping;
typedef struct DynamicRangeControl  DynamicRangeControl;
typedef struct Pulse  Pulse;
typedef struct ChannelCoupling  ChannelCoupling;
typedef struct SingleChannelElement  SingleChannelElement;
typedef struct ChannelElement  ChannelElement;
struct AACContext ;
void ff_aacdec_init_mips(AACContext *c);
