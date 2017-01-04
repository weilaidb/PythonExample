#define UNCHECKED_BITSTREAM_READER 1
#define BIT_PLANAR   0x00
#define CHUNKY       0x20
#define BYTE_PLANAR  0x40
#define BIT_LINE     0x80
#define BYTE_LINE    0xC0
typedef struct CDXLVideoContext  CDXLVideoContext;
static av_cold int cdxl_decode_init(AVCodecContext *avctx)
static void import_palette(CDXLVideoContext *c, uint32_t *new_palette)
static void bitplanar2chunky(CDXLVideoContext *c, int linesize, uint8_t *out)
static void bitline2chunky(CDXLVideoContext *c, int linesize, uint8_t *out)
static void chunky2chunky(CDXLVideoContext *c, int linesize, uint8_t *out)
static void import_format(CDXLVideoContext *c, int linesize, uint8_t *out)
static void cdxl_decode_rgb(CDXLVideoContext *c, AVFrame *frame)
static void cdxl_decode_raw(CDXLVideoContext *c, AVFrame *frame)
static void cdxl_decode_ham6(CDXLVideoContext *c, AVFrame *frame)
static void cdxl_decode_ham8(CDXLVideoContext *c, AVFrame *frame)
static int cdxl_decode_frame(AVCodecContext *avctx, void *data,
int *got_frame, AVPacket *pkt)
static av_cold int cdxl_decode_end(AVCodecContext *avctx)
AVCodec ff_cdxl_decoder = ;
