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
static void init_sample_buffers(AlacEncodeContext *s, int channels,
const uint8_t *samples[2])
static void encode_scalar(AlacEncodeContext *s, int x,
int k, int write_sample_size)
static void write_element_header(AlacEncodeContext *s,
enum AlacRawDataBlockType element,
int instance)
static void calc_predictor_params(AlacEncodeContext *s, int ch)
static int estimate_stereo_mode(int32_t *left_ch, int32_t *right_ch, int n)
static void alac_stereo_decorrelation(AlacEncodeContext *s)
static void alac_linear_predictor(AlacEncodeContext *s, int ch)
static void alac_entropy_coder(AlacEncodeContext *s, int ch)
static void write_element(AlacEncodeContext *s,
enum AlacRawDataBlockType element, int instance,
const uint8_t *samples0, const uint8_t *samples1)
static int write_frame(AlacEncodeContext *s, AVPacket *avpkt,
uint8_t * const *samples)
static av_always_inline int get_max_frame_size(int frame_size, int ch, int bps)
static av_cold int alac_encode_close(AVCodecContext *avctx)
static av_cold int alac_encode_init(AVCodecContext *avctx)
static int alac_encode_frame(AVCodecContext *avctx, AVPacket *avpkt,
const AVFrame *frame, int *got_packet_ptr)
#define OFFSET(x) offsetof(AlacEncodeContext, x)
#define AE AV_OPT_FLAG_AUDIO_PARAM | AV_OPT_FLAG_ENCODING_PARAM
static const AVOption options[] = ;
static const AVClass alacenc_class = ;
AVCodec ff_alac_encoder = ;
