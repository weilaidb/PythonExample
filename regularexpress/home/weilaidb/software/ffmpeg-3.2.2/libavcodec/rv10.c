#define RV_GET_MAJOR_VER(x)  ((x) >> 28)
#define RV_GET_MINOR_VER(x) (((x) >> 20) & 0xFF)
#define RV_GET_MICRO_VER(x) (((x) >> 12) & 0xFF)
#define DC_VLC_BITS 14
typedef struct RVDecContext  RVDecContext;
static const uint16_t rv_lum_code[256] = ;
static const uint8_t rv_lum_bits[256] = ;
static const uint16_t rv_chrom_code[256] = ;
static const uint8_t rv_chrom_bits[256] = ;
static VLC rv_dc_lum, rv_dc_chrom;
int ff_rv_decode_dc(MpegEncContext *s, int n)
static int rv10_decode_picture_header(MpegEncContext *s)
static int rv20_decode_picture_header(RVDecContext *rv)
static av_cold int rv10_decode_init(AVCodecContext *avctx)
static av_cold int rv10_decode_end(AVCodecContext *avctx)
static int rv10_decode_packet(AVCodecContext *avctx, const uint8_t *buf,
int buf_size, int buf_size2)
static int get_slice_offset(AVCodecContext *avctx, const uint8_t *buf, int n)
static int rv10_decode_frame(AVCodecContext *avctx, void *data, int *got_frame,
AVPacket *avpkt)
AVCodec ff_rv10_decoder = ;
AVCodec ff_rv20_decoder = ;
