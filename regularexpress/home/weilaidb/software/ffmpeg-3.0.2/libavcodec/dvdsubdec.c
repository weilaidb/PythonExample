typedef struct DVDSubContext
DVDSubContext;
static void yuv_a_to_rgba(const uint8_t *ycbcr, const uint8_t *alpha, uint32_t *rgba, int num_values)
static int decode_run_2bit(GetBitContext *gb, int *color)
static int decode_run_8bit(GetBitContext *gb, int *color)
static int decode_rle(uint8_t *bitmap, int linesize, int w, int h,
const uint8_t *buf, int start, int buf_size, int is_8bit)
static void guess_palette(DVDSubContext* ctx,
uint32_t *rgba_palette,
uint32_t subtitle_color)
static void reset_rects(AVSubtitle *sub_header)
#define READ_OFFSET(a) (big_offsets ? AV_RB32(a) : AV_RB16(a))
static int decode_dvd_subtitles(DVDSubContext *ctx, AVSubtitle *sub_header,
const uint8_t *buf, int buf_size)
static int is_transp(const uint8_t *buf, int pitch, int n,
const uint8_t *transp_color)
static int find_smallest_bounding_rectangle(AVSubtitle *s)
#define ALPHA_MIX(A,BACK,FORE) (((255-(A)) * (BACK) + (A) * (FORE)) / 255)
static void ppm_save(const char *filename, uint8_t *bitmap, int w, int h,
uint32_t *rgba_palette)
static int append_to_cached_buf(AVCodecContext *avctx,
const uint8_t *buf, int buf_size)
static int dvdsub_decode(AVCodecContext *avctx,
void *data, int *data_size,
AVPacket *avpkt)
static void parse_palette(DVDSubContext *ctx, char *p)
static int parse_ifo_palette(DVDSubContext *ctx, char *p)
static int dvdsub_parse_extradata(AVCodecContext *avctx)
static av_cold int dvdsub_init(AVCodecContext *avctx)
static void dvdsub_flush(AVCodecContext *avctx)
static av_cold int dvdsub_close(AVCodecContext *avctx)
#define OFFSET(field) offsetof(DVDSubContext, field)
#define SD AV_OPT_FLAG_SUBTITLE_PARAM | AV_OPT_FLAG_DECODING_PARAM
static const AVOption options[] = ;
static const AVClass dvdsub_class = ;
AVCodec ff_dvdsub_decoder = ;
