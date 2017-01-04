#define DITHERSTEPS   8
#define CHARSET_CHARS 256
#define INTERLACED    1
#define CROP_SCREENS  1
#define C64XRES 320
#define C64YRES 200
typedef struct A64Context  A64Context;
static const int mc_colors[5]=;
static void to_meta_with_crop(AVCodecContext *avctx,
const AVFrame *p, int *dest)
static void render_charset(AVCodecContext *avctx, uint8_t *charset,
uint8_t *colrammap)
static av_cold int a64multi_close_encoder(AVCodecContext *avctx)
static av_cold int a64multi_encode_init(AVCodecContext *avctx)
static void a64_compress_colram(unsigned char *buf, int *charmap, uint8_t *colram)
static int a64multi_encode_frame(AVCodecContext *avctx, AVPacket *pkt,
const AVFrame *p, int *got_packet)
#if CONFIG_A64MULTI_ENCODER
AVCodec ff_a64multi_encoder = ;
#if CONFIG_A64MULTI5_ENCODER
AVCodec ff_a64multi5_encoder = ;
