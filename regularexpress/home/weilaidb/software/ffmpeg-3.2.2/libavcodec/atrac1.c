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
at1_imdct
at1_imdct_block
at1_parse_bsm
at1_unpack_dequant
at1_subband_synthesis
atrac1_decode_frame
atrac1_decode_end
atrac1_decode_init
AVCodec ff_atrac1_decoder = ;
