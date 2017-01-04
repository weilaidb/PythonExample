#if CONFIG_ZLIB
typedef struct SVQ3Context  SVQ3Context;
#define FULLPEL_MODE  1
#define HALFPEL_MODE  2
#define THIRDPEL_MODE 3
#define PREDICT_MODE  4
static const uint8_t svq3_scan[16] = ;
static const uint8_t luma_dc_zigzag_scan[16] = ;
static const uint8_t svq3_pred_0[25][2] = ;
static const int8_t svq3_pred_1[6][6][5] = ;
static const struct  svq3_dct_tables[2][16] = ;
static const uint32_t svq3_dequant_coeff[32] = ;
static int svq3_decode_end(AVCodecContext *avctx);
void ff_svq3_luma_dc_dequant_idct_c(int16_t *output, int16_t *input, int qp)
#undef stride
void ff_svq3_add_idct_c(uint8_t *dst, int16_t *block,
int stride, int qp, int dc)
static inline int svq3_decode_block(GetBitContext *gb, int16_t *block,
int index, const int type)
static inline void svq3_mc_dir_part(SVQ3Context *s,
int x, int y, int width, int height,
int mx, int my, int dxy,
int thirdpel, int dir, int avg)
static inline int svq3_mc_dir(SVQ3Context *s, int size, int mode,
int dir, int avg)
static int svq3_decode_mb(SVQ3Context *s, unsigned int mb_type)
static int svq3_decode_slice_header(AVCodecContext *avctx)
static av_cold int svq3_decode_init(AVCodecContext *avctx)
static void free_picture(AVCodecContext *avctx, H264Picture *pic)
static int get_buffer(AVCodecContext *avctx, H264Picture *pic)
static int svq3_decode_frame(AVCodecContext *avctx, void *data,
int *got_frame, AVPacket *avpkt)
static av_cold int svq3_decode_end(AVCodecContext *avctx)
AVCodec ff_svq3_decoder = ;
