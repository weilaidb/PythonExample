#define BITSTREAM_READER_LE
typedef struct Ir2Context Ir2Context;
#define CODE_VLC_BITS 14
static VLC ir2_vlc;
static inline int ir2_get_code(GetBitContext *gb)
static int ir2_decode_plane(Ir2Context *ctx, int width, int height, uint8_t *dst,
int pitch, const uint8_t *table)
static int ir2_decode_plane_inter(Ir2Context *ctx, int width, int height, uint8_t *dst,
int pitch, const uint8_t *table)
static int ir2_decode_frame(AVCodecContext *avctx,
void *data, int *got_frame,
AVPacket *avpkt)
static av_cold int ir2_decode_init(AVCodecContext *avctx)
static av_cold int ir2_decode_end(AVCodecContext *avctx)
AVCodec ff_indeo2_decoder = ;
