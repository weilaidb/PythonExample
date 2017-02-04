#define DEFAULT_FRAME_SIZE        4096
#define ALAC_EXTRADATA_SIZE       36
#define ALAC_FRAME_HEADER_SIZE    55
#define ALAC_FRAME_FOOTER_SIZE    3
#define ALAC_ESCAPE_CODE          0x1FF
#define ALAC_MAX_LPC_ORDER        30
#define DEFAULT_MAX_PRED_ORDER    6
#define DEFAULT_MIN_PRED_ORDER    4
#define ALAC_MAX_LPC_PRECISION    9
#define ALAC_MIN_LPC_SHIFT        0
#define ALAC_MAX_LPC_SHIFT        9
#define ALAC_CHMODE_LEFT_RIGHT    0
#define ALAC_CHMODE_LEFT_SIDE     1
#define ALAC_CHMODE_RIGHT_SIDE    2
#define ALAC_CHMODE_MID_SIDE      3
typedef struct RiceContext  RiceContext;
typedef struct AlacLPCContext  AlacLPCContext;
typedef struct AlacEncodeContext  AlacEncodeContext;
init_sample_buffers
encode_scalar
write_element_header
calc_predictor_params
estimate_stereo_mode
alac_stereo_decorrelation
alac_linear_predictor
alac_entropy_coder
write_element
write_frame
get_max_frame_size
alac_encode_close
alac_encode_init
alac_encode_frame
OFFSET offsetof(AlacEncodeContext, x)
#define AE AV_OPT_FLAG_AUDIO_PARAM | AV_OPT_FLAG_ENCODING_PARAM
static const AVOption options[] = ;
static const AVClass alacenc_class = ;
AVCodec ff_alac_encoder = ;
