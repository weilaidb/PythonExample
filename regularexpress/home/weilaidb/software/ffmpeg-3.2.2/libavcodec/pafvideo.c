static const uint8_t block_sequences[16][8] = ;
typedef struct PAFVideoDecContext  PAFVideoDecContext;
static av_cold int paf_video_close(AVCodecContext *avctx)
static av_cold int paf_video_init(AVCodecContext *avctx)
static void read4x4block(PAFVideoDecContext *c, uint8_t *dst, int width)
static void copy_color_mask(uint8_t *dst, int width, uint8_t mask, uint8_t color)
static void copy_src_mask(uint8_t *dst, int width, uint8_t mask, const uint8_t *src)
static void set_src_position(PAFVideoDecContext *c,
const uint8_t **p,
const uint8_t **pend)
static int decode_0(PAFVideoDecContext *c, uint8_t *pkt, uint8_t code)
static int paf_video_decode(AVCodecContext *avctx, void *data,
int *got_frame, AVPacket *pkt)
AVCodec ff_paf_video_decoder = ;
