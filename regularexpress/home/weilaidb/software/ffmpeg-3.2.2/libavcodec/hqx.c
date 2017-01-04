enum HQXFormat ;
#define HQX_HEADER_SIZE 59
static const int hqx_quants[16][4] = ;
static const uint8_t hqx_quant_luma[64] = ;
static const uint8_t hqx_quant_chroma[64] = ;
static inline void put_blocks(HQXContext *ctx, int plane,
int x, int y, int ilace,
int16_t *block0, int16_t *block1,
const uint8_t *quant)
static inline void hqx_get_ac(GetBitContext *gb, const HQXAC *ac,
int *run, int *lev)
static int decode_block(GetBitContext *gb, VLC *vlc,
const int *quants, int dcb,
int16_t block[64], int *last_dc)
static int hqx_decode_422(HQXContext *ctx, int slice_no, int x, int y)
static int hqx_decode_422a(HQXContext *ctx, int slice_no, int x, int y)
static int hqx_decode_444(HQXContext *ctx, int slice_no, int x, int y)
static int hqx_decode_444a(HQXContext *ctx, int slice_no, int x, int y)
static const int shuffle_16[16] = ;
static int decode_slice(HQXContext *ctx, int slice_no)
static int decode_slice_thread(AVCodecContext *avctx, void *arg,
int slice_no, int threadnr)
static int hqx_decode_frame(AVCodecContext *avctx, void *data,
int *got_picture_ptr, AVPacket *avpkt)
static av_cold int hqx_decode_close(AVCodecContext *avctx)
static av_cold int hqx_decode_init(AVCodecContext *avctx)
AVCodec ff_hqx_decoder = ;
