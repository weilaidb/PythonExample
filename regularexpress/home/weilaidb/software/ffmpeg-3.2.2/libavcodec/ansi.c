#define ATTR_BOLD         0x01
#define ATTR_FAINT        0x02
#define ATTR_UNDERLINE    0x08
#define ATTR_BLINK        0x10
#define ATTR_REVERSE      0x40
#define ATTR_CONCEALED    0x80
#define DEFAULT_FG_COLOR     7
#define DEFAULT_BG_COLOR     0
#define DEFAULT_SCREEN_MODE  3
#define FONT_WIDTH           8
static const uint8_t ansi_to_cga[16] = ;
typedef struct AnsiContext  AnsiContext;
static av_cold int decode_init(AVCodecContext *avctx)
static void set_palette(uint32_t *pal)
static void hscroll(AVCodecContext *avctx)
static void erase_line(AVCodecContext * avctx, int xoffset, int xlength)
static void erase_screen(AVCodecContext *avctx)
static void draw_char(AVCodecContext *avctx, int c)
static int execute_code(AVCodecContext * avctx, int c)
static int decode_frame(AVCodecContext *avctx,
void *data, int *got_frame,
AVPacket *avpkt)
static av_cold int decode_close(AVCodecContext *avctx)
AVCodec ff_ansi_decoder = ;
