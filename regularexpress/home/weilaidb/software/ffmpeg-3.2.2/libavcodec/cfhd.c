#define SUBBAND_COUNT 10
static av_cold int cfhd_decode_init(AVCodecContext *avctx)
static void init_plane_defaults(CFHDContext *s)
static void init_frame_defaults(CFHDContext *s)
static inline int dequant_and_decompand(int level, int quantisation)
static inline void filter(int16_t *output, ptrdiff_t out_stride, int16_t *low, ptrdiff_t low_stride,
int16_t *high, ptrdiff_t high_stride, int len, uint8_t clip)
static void horiz_filter(int16_t *output, int16_t *low, int16_t *high, int width)
static void horiz_filter_clip(int16_t *output, int16_t *low, int16_t *high, int width, uint8_t clip)
static void vert_filter(int16_t *output, int out_stride, int16_t *low, int low_stride,
int16_t *high, int high_stride, int len)
static void free_buffers(AVCodecContext *avctx)
static int alloc_buffers(AVCodecContext *avctx)
static int cfhd_decode(AVCodecContext *avctx, void *data, int *got_frame,
AVPacket *avpkt)
static av_cold int cfhd_close_decoder(AVCodecContext *avctx)
AVCodec ff_cfhd_decoder = ;
