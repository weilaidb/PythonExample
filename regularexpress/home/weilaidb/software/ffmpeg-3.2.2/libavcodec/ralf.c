#define FILTER_NONE 0
#define FILTER_RAW  642
typedef struct VLCSet  VLCSet;
#define RALF_MAX_PKT_SIZE 8192
typedef struct RALFContext  RALFContext;
#define MAX_ELEMS 644
static av_cold int init_ralf_vlc(VLC *vlc, const uint8_t *data, int elems)
static av_cold int decode_close(AVCodecContext *avctx)
static av_cold int decode_init(AVCodecContext *avctx)
static inline int extend_code(GetBitContext *gb, int val, int range, int bits)
static int decode_channel(RALFContext *ctx, GetBitContext *gb, int ch,
int length, int mode, int bits)
static void apply_lpc(RALFContext *ctx, int ch, int length, int bits)
static int decode_block(AVCodecContext *avctx, GetBitContext *gb,
int16_t *dst0, int16_t *dst1)
static int decode_frame(AVCodecContext *avctx, void *data, int *got_frame_ptr,
AVPacket *avpkt)
static void decode_flush(AVCodecContext *avctx)
AVCodec ff_ralf_decoder = ;
