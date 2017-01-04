enum VBFlags ;
typedef struct VBDecContext  VBDecContext;
static const uint16_t vb_patterns[64] = ;
static void vb_decode_palette(VBDecContext *c, int data_size)
static inline int check_pixel(uint8_t *buf, uint8_t *start, uint8_t *end)
static inline int check_line(uint8_t *buf, uint8_t *start, uint8_t *end)
static int vb_decode_framedata(VBDecContext *c, int offset)
static int decode_frame(AVCodecContext *avctx, void *data, int *got_frame,
AVPacket *avpkt)
static av_cold int decode_init(AVCodecContext *avctx)
static av_cold int decode_end(AVCodecContext *avctx)
AVCodec ff_vb_decoder = ;
