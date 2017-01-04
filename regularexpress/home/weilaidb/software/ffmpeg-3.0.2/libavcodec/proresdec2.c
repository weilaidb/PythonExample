#define LONG_BITSTREAM_READER
static void permute(uint8_t *dst, const uint8_t *src, const uint8_t permutation[64])
static av_cold int decode_init(AVCodecContext *avctx)
static int decode_frame_header(ProresContext *ctx, const uint8_t *buf,
const int data_size, AVCodecContext *avctx)
static int decode_picture_header(AVCodecContext *avctx, const uint8_t *buf, const int buf_size)
#define DECODE_CODEWORD(val, codebook)                                  \
do  while (0)
#define TOSIGNED(x) (((x) >> 1) ^ (-((x) & 1)))
#define FIRST_DC_CB 0xB8
static const uint8_t dc_codebook[7] = ;
static av_always_inline void decode_dc_coeffs(GetBitContext *gb, int16_t *out,
int blocks_per_slice)
static const uint8_t run_to_cb[16] = ;
static const uint8_t lev_to_cb[10] = ;
static av_always_inline int decode_ac_coeffs(AVCodecContext *avctx, GetBitContext *gb,
int16_t *out, int blocks_per_slice)
static int decode_slice_luma(AVCodecContext *avctx, SliceContext *slice,
uint16_t *dst, int dst_stride,
const uint8_t *buf, unsigned buf_size,
const int16_t *qmat)
static int decode_slice_chroma(AVCodecContext *avctx, SliceContext *slice,
uint16_t *dst, int dst_stride,
const uint8_t *buf, unsigned buf_size,
const int16_t *qmat, int log2_blocks_per_mb)
static void unpack_alpha(GetBitContext *gb, uint16_t *dst, int num_coeffs,
const int num_bits)
static void decode_slice_alpha(ProresContext *ctx,
uint16_t *dst, int dst_stride,
const uint8_t *buf, int buf_size,
int blocks_per_slice)
static int decode_slice_thread(AVCodecContext *avctx, void *arg, int jobnr, int threadnr)
static int decode_picture(AVCodecContext *avctx)
static int decode_frame(AVCodecContext *avctx, void *data, int *got_frame,
AVPacket *avpkt)
static av_cold int decode_close(AVCodecContext *avctx)
AVCodec ff_prores_decoder = ;
