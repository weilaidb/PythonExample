typedef struct C93DecoderContext  C93DecoderContext;
typedef enum  C93BlockType;
#define WIDTH   320
#define HEIGHT  192
#define C93_HAS_PALETTE 0x01
#define C93_FIRST_FRAME 0x02
static av_cold int decode_end(AVCodecContext *avctx)
static av_cold int decode_init(AVCodecContext *avctx)
static inline int copy_block(AVCodecContext *avctx, uint8_t *to,
uint8_t *from, int offset, int height, int stride)
static inline void draw_n_color(uint8_t *out, int stride, int width,
int height, int bpp, uint8_t cols[4], uint8_t grps[4], uint32_t col)
static int decode_frame(AVCodecContext *avctx, void *data,
int *got_frame, AVPacket *avpkt)
AVCodec ff_c93_decoder = ;
