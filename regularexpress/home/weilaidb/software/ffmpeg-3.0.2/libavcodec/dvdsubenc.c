typedef struct  DVDSubtitleContext;
#define PUTNIBBLE(val)\
do  while(0)
static void dvd_encode_rle(uint8_t **pq,
const uint8_t *bitmap, int linesize,
int w, int h,
const int cmap[256])
static int color_distance(uint32_t a, uint32_t b)
static void count_colors(AVCodecContext *avctx, unsigned hits[33],
const AVSubtitleRect *r)
static void select_palette(AVCodecContext *avctx, int out_palette[4],
int out_alpha[4], unsigned hits[33])
static void build_color_map(AVCodecContext *avctx, int cmap[],
const uint32_t palette[],
const int out_palette[], unsigned int const out_alpha[])
static void copy_rectangle(AVSubtitleRect *dst, AVSubtitleRect *src, int cmap[])
static int encode_dvd_subtitles(AVCodecContext *avctx,
uint8_t *outbuf, int outbuf_size,
const AVSubtitle *h)
static int dvdsub_init(AVCodecContext *avctx)
static int dvdsub_encode(AVCodecContext *avctx,
unsigned char *buf, int buf_size,
const AVSubtitle *sub)
#define OFFSET(x) offsetof(DVDSubtitleContext, x)
#define SE AV_OPT_FLAG_SUBTITLE_PARAM | AV_OPT_FLAG_ENCODING_PARAM
static const AVOption options[] = ;
static const AVClass dvdsubenc_class = ;
AVCodec ff_dvdsub_encoder = ;
