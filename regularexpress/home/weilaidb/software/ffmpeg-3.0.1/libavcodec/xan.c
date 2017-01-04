#define BITSTREAM_READER_LE
#define RUNTIME_GAMMA 0
#define VGA__TAG MKTAG('V', 'G', 'A', ' ')
#define PALT_TAG MKTAG('P', 'A', 'L', 'T')
#define SHOT_TAG MKTAG('S', 'H', 'O', 'T')
#define PALETTE_COUNT 256
#define PALETTE_SIZE (PALETTE_COUNT * 3)
#define PALETTES_MAX 256
typedef struct XanContext  XanContext;
static av_cold int xan_decode_end(AVCodecContext *avctx)
static av_cold int xan_decode_init(AVCodecContext *avctx)
static int xan_huffman_decode(uint8_t *dest, int dest_len,
const uint8_t *src, int src_len)
static void xan_unpack(uint8_t *dest, int dest_len,
const uint8_t *src, int src_len)
static inline void xan_wc3_output_pixel_run(XanContext *s, AVFrame *frame,
const uint8_t *pixel_buffer, int x, int y, int pixel_count)
static inline void xan_wc3_copy_pixel_run(XanContext *s, AVFrame *frame,
int x, int y,
int pixel_count, int motion_x,
int motion_y)
static int xan_wc3_decode_frame(XanContext *s, AVFrame *frame)
#if RUNTIME_GAMMA
static inline unsigned mul(unsigned a, unsigned b)
static inline unsigned pow4(unsigned a)
static inline unsigned pow5(unsigned a)
static uint8_t gamma_corr(uint8_t in)
static const uint8_t gamma_lookup[256] = ;
static int xan_decode_frame(AVCodecContext *avctx,
void *data, int *got_frame,
AVPacket *avpkt)
AVCodec ff_xan_wc3_decoder = ;
