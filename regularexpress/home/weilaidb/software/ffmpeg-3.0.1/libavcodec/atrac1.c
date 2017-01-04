#define AT1_MAX_BFU      52
#define AT1_SU_SIZE      212
#define AT1_SU_SAMPLES   512
#define AT1_FRAME_SIZE   AT1_SU_SIZE * 2
#define AT1_SU_MAX_BITS  AT1_SU_SIZE * 8
#define AT1_MAX_CHANNELS 2
#define AT1_QMF_BANDS    3
#define IDX_LOW_BAND     0
#define IDX_MID_BAND     1
#define IDX_HIGH_BAND    2
typedef struct AT1SUCtx  AT1SUCtx;
typedef struct AT1Ctx  AT1Ctx;
static const uint16_t samples_per_band[3] = ;
static const uint8_t   mdct_long_nbits[3] = ;
static void at1_imdct(AT1Ctx *q, float *spec, float *out, int nbits,
int rev_spec)
static int at1_imdct_block(AT1SUCtx* su, AT1Ctx *q)
static int at1_parse_bsm(GetBitContext* gb, int log2_block_cnt[AT1_QMF_BANDS])
static int at1_unpack_dequant(GetBitContext* gb, AT1SUCtx* su,
float spec[AT1_SU_SAMPLES])
static void at1_subband_synthesis(AT1Ctx *q, AT1SUCtx* su, float *pOut)
static int atrac1_decode_frame(AVCodecContext *avctx, void *data,
int *got_frame_ptr, AVPacket *avpkt)
static av_cold int atrac1_decode_end(AVCodecContext * avctx)
static av_cold int atrac1_decode_init(AVCodecContext *avctx)
AVCodec ff_atrac1_decoder = ;
