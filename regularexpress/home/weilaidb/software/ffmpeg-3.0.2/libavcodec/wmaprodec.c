#define WMAPRO_MAX_CHANNELS    8
#define MAX_SUBFRAMES  32
#define MAX_BANDS      29
#define MAX_FRAMESIZE  32768
#define WMAPRO_BLOCK_MIN_BITS  6
#define WMAPRO_BLOCK_MAX_BITS 13
#define WMAPRO_BLOCK_MIN_SIZE (1 << WMAPRO_BLOCK_MIN_BITS)
#define WMAPRO_BLOCK_MAX_SIZE (1 << WMAPRO_BLOCK_MAX_BITS)
#define WMAPRO_BLOCK_SIZES    (WMAPRO_BLOCK_MAX_BITS - WMAPRO_BLOCK_MIN_BITS + 1)
#define VLCBITS            9
#define SCALEVLCBITS       8
#define VEC4MAXDEPTH    ((HUFF_VEC4_MAXBITS+VLCBITS-1)/VLCBITS)
#define VEC2MAXDEPTH    ((HUFF_VEC2_MAXBITS+VLCBITS-1)/VLCBITS)
#define VEC1MAXDEPTH    ((HUFF_VEC1_MAXBITS+VLCBITS-1)/VLCBITS)
#define SCALEMAXDEPTH   ((HUFF_SCALE_MAXBITS+SCALEVLCBITS-1)/SCALEVLCBITS)
#define SCALERLMAXDEPTH ((HUFF_SCALE_RL_MAXBITS+VLCBITS-1)/VLCBITS)
static VLC              sf_vlc;
static VLC              sf_rl_vlc;
static VLC              vec4_vlc;
static VLC              vec2_vlc;
static VLC              vec1_vlc;
static VLC              coef_vlc[2];
static float            sin64[33];
typedef struct WMAProChannelCtx  WMAProChannelCtx;
typedef struct WMAProChannelGrp  WMAProChannelGrp;
typedef struct WMAProDecodeCtx  WMAProDecodeCtx;
static av_cold void dump_context(WMAProDecodeCtx *s)
static av_cold int decode_end(AVCodecContext *avctx)
static av_cold int get_rate(AVCodecContext *avctx)
static av_cold int decode_init(AVCodecContext *avctx)
static int decode_subframe_length(WMAProDecodeCtx *s, int offset)
static int decode_tilehdr(WMAProDecodeCtx *s)
static void decode_decorrelation_matrix(WMAProDecodeCtx *s,
WMAProChannelGrp *chgroup)
static int decode_channel_transform(WMAProDecodeCtx* s)
static int decode_coeffs(WMAProDecodeCtx *s, int c)
static int decode_scale_factors(WMAProDecodeCtx* s)
static void inverse_channel_transform(WMAProDecodeCtx *s)
static void wmapro_window(WMAProDecodeCtx *s)
static int decode_subframe(WMAProDecodeCtx *s)
static int decode_frame(WMAProDecodeCtx *s, AVFrame *frame, int *got_frame_ptr)
static int remaining_bits(WMAProDecodeCtx *s, GetBitContext *gb)
static void save_bits(WMAProDecodeCtx *s, GetBitContext* gb, int len,
int append)
static int decode_packet(AVCodecContext *avctx, void *data,
int *got_frame_ptr, AVPacket* avpkt)
static void flush(AVCodecContext *avctx)
AVCodec ff_wmapro_decoder = ;
AVCodec ff_xma1_decoder = ;
AVCodec ff_xma2_decoder = ;
