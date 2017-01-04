#define TEXT_MAXSZ    (25 * (56 + 1) * 4 + 2)
#define VBI_NB_COLORS 40
#define VBI_TRANSPARENT_BLACK 8
#define RGBA(r,g,b,a) (((a) << 24) | ((r) << 16) | ((g) << 8) | (b))
#define VBI_R(rgba)   (((rgba) >> 0) & 0xFF)
#define VBI_G(rgba)   (((rgba) >> 8) & 0xFF)
#define VBI_B(rgba)   (((rgba) >> 16) & 0xFF)
#define VBI_A(rgba)   (((rgba) >> 24) & 0xFF)
#define MAX_BUFFERED_PAGES 25
#define BITMAP_CHAR_WIDTH  12
#define BITMAP_CHAR_HEIGHT 10
#define MAX_SLICES 64
typedef struct TeletextPage
TeletextPage;
typedef struct TeletextContext
TeletextContext;
static int chop_spaces_utf8(const unsigned char* t, int len)
static void subtitle_rect_free(AVSubtitleRect **sub_rect)
static int create_ass_text(TeletextContext *ctx, const char *text, char **ass)
static int gen_sub_text(TeletextContext *ctx, AVSubtitleRect *sub_rect, vbi_page *page, int chop_top)
static void fix_transparency(TeletextContext *ctx, AVSubtitleRect *sub_rect, vbi_page *page,
int chop_top, int resx, int resy)
static int gen_sub_bitmap(TeletextContext *ctx, AVSubtitleRect *sub_rect, vbi_page *page, int chop_top)
static void handler(vbi_event *ev, void *user_data)
static inline int data_identifier_is_teletext(int data_identifier)
static int slice_to_vbi_lines(TeletextContext *ctx, uint8_t* buf, int size)
static int teletext_decode_frame(AVCodecContext *avctx, void *data, int *data_size, AVPacket *pkt)
static int teletext_init_decoder(AVCodecContext *avctx)
static int teletext_close_decoder(AVCodecContext *avctx)
static void teletext_flush(AVCodecContext *avctx)
#define OFFSET(x) offsetof(TeletextContext, x)
#define SD AV_OPT_FLAG_SUBTITLE_PARAM | AV_OPT_FLAG_DECODING_PARAM
static const AVOption options[] = ;
static const AVClass teletext_class = ;
AVCodec ff_libzvbi_teletext_decoder = ;
