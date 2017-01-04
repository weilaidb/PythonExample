#define WMALL_MAX_CHANNELS      8
#define MAX_SUBFRAMES          32
#define MAX_BANDS              29
#define MAX_FRAMESIZE       32768
#define MAX_ORDER             256
#define WMALL_BLOCK_MIN_BITS    6
#define WMALL_BLOCK_MAX_BITS   14
#define WMALL_BLOCK_MAX_SIZE (1 << WMALL_BLOCK_MAX_BITS)
#define WMALL_BLOCK_SIZES    (WMALL_BLOCK_MAX_BITS - WMALL_BLOCK_MIN_BITS + 1)
#define WMALL_COEFF_PAD_SIZE   16
typedef struct WmallChannelCtx  WmallChannelCtx;
typedef struct WmallDecodeCtx  WmallDecodeCtx;
#define WMASIGN(x) (((x) > 0) - ((x) < 0))
static av_cold int decode_init(AVCodecContext *avctx)
static int decode_subframe_length(WmallDecodeCtx *s, int offset)
static int decode_tilehdr(WmallDecodeCtx *s)
static void decode_ac_filter(WmallDecodeCtx *s)
static void decode_mclms(WmallDecodeCtx *s)
static int decode_cdlms(WmallDecodeCtx *s)
static int decode_channel_residues(WmallDecodeCtx *s, int ch, int tile_size)
static void decode_lpc(WmallDecodeCtx *s)
static void clear_codec_buffers(WmallDecodeCtx *s)
static void reset_codec(WmallDecodeCtx *s)
static void mclms_update(WmallDecodeCtx *s, int icoef, int *pred)
static void mclms_predict(WmallDecodeCtx *s, int icoef, int *pred)
static void revert_mclms(WmallDecodeCtx *s, int tile_size)
static void lms_update(WmallDecodeCtx *s, int ich, int ilms, int input)
static void use_high_update_speed(WmallDecodeCtx *s, int ich)
static void use_normal_update_speed(WmallDecodeCtx *s, int ich)
static void revert_cdlms(WmallDecodeCtx *s, int ch,
int coef_begin, int coef_end)
static void revert_inter_ch_decorr(WmallDecodeCtx *s, int tile_size)
static void revert_acfilter(WmallDecodeCtx *s, int tile_size)
static int decode_subframe(WmallDecodeCtx *s)
static int decode_frame(WmallDecodeCtx *s)
static int remaining_bits(WmallDecodeCtx *s, GetBitContext *gb)
static void save_bits(WmallDecodeCtx *s, GetBitContext* gb, int len,
int append)
static int decode_packet(AVCodecContext *avctx, void *data, int *got_frame_ptr,
AVPacket* avpkt)
static void flush(AVCodecContext *avctx)
static av_cold int decode_close(AVCodecContext *avctx)
AVCodec ff_wmalossless_decoder = ;
