#define LONG_BITSTREAM_READER
typedef struct ProresThreadData  ProresThreadData;
typedef struct ProresContext  ProresContext;
static av_cold int decode_init(AVCodecContext *avctx)
static int decode_frame_header(ProresContext *ctx, const uint8_t *buf,
const int data_size, AVCodecContext *avctx)
static int decode_picture_header(ProresContext *ctx, const uint8_t *buf,
const int data_size, AVCodecContext *avctx)
static inline int decode_vlc_codeword(GetBitContext *gb, unsigned codebook)
#define LSB2SIGN(x) (-((x) & 1))
#define TOSIGNED(x) (((x) >> 1) ^ LSB2SIGN(x))
static inline void decode_dc_coeffs(GetBitContext *gb, int16_t *out,
int nblocks)
#define MAX_PADDING 16
static inline int decode_ac_coeffs(GetBitContext *gb, int16_t *out,
int blocks_per_slice,
int plane_size_factor,
const uint8_t *scan)
static int decode_slice_plane(ProresContext *ctx, ProresThreadData *td,
const uint8_t *buf,
int data_size, uint16_t *out_ptr,
int linesize, int mbs_per_slice,
int blocks_per_mb, int plane_size_factor,
const int16_t *qmat, int is_chroma)
static void unpack_alpha(GetBitContext *gb, uint16_t *dst, int num_coeffs,
const int num_bits)
static void decode_alpha_plane(ProresContext *ctx, ProresThreadData *td,
const uint8_t *buf, int data_size,
uint16_t *out_ptr, int linesize,
int mbs_per_slice)
static int decode_slice(AVCodecContext *avctx, void *tdata)
static int decode_picture(ProresContext *ctx, int pic_num,
AVCodecContext *avctx)
#define MOVE_DATA_PTR(nbytes) buf += (nbytes); buf_size -= (nbytes)
static int decode_frame(AVCodecContext *avctx, void *data, int *got_frame,
AVPacket *avpkt)
static av_cold int decode_close(AVCodecContext *avctx)
AVCodec ff_prores_lgpl_decoder = ;
