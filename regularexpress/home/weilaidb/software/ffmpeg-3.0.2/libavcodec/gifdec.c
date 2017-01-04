#define GIF_TRANSPARENT_COLOR    0x00ffffff
typedef struct GifState  GifState;
static void gif_read_palette(GifState *s, uint32_t *pal, int nb)
static void gif_fill(AVFrame *picture, uint32_t color)
static void gif_fill_rect(AVFrame *picture, uint32_t color, int l, int t, int w, int h)
static void gif_copy_img_rect(const uint32_t *src, uint32_t *dst,
int linesize, int l, int t, int w, int h)
static int gif_read_image(GifState *s, AVFrame *frame)
static int gif_read_extension(GifState *s)
static int gif_read_header1(GifState *s)
static int gif_parse_next_image(GifState *s, AVFrame *frame)
static av_cold int gif_decode_init(AVCodecContext *avctx)
static int gif_decode_frame(AVCodecContext *avctx, void *data, int *got_frame, AVPacket *avpkt)
static av_cold int gif_decode_close(AVCodecContext *avctx)
static const AVOption options[] = ;
static const AVClass decoder_class = ;
AVCodec ff_gif_decoder = ;
