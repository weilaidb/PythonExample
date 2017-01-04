#define STYLE_FLAG_BOLD         (1<<0)
#define STYLE_FLAG_ITALIC       (1<<1)
#define STYLE_FLAG_UNDERLINE    (1<<2)
#define STYLE_RECORD_SIZE       12
#define SIZE_ADD                10
#define STYL_BOX   (1<<0)
#define HLIT_BOX   (1<<1)
#define HCLR_BOX   (1<<2)
#define av_bprint_append_any(buf, data, size)   av_bprint_append_data(buf, ((const char*)data), size)
typedef struct  StyleBox;
typedef struct  HighlightBox;
typedef struct  HilightcolorBox;
typedef struct  MovTextContext;
typedef struct  Box;
static void mov_text_cleanup(MovTextContext *s)
static void encode_styl(MovTextContext *s, uint32_t tsmb_type)
static void encode_hlit(MovTextContext *s, uint32_t tsmb_type)
static void encode_hclr(MovTextContext *s, uint32_t tsmb_type)
static const Box box_types[] = ;
const static size_t box_count = FF_ARRAY_ELEMS(box_types);
static av_cold int mov_text_encode_init(AVCodecContext *avctx)
static void mov_text_style_cb(void *priv, const char style, int close)
static void mov_text_color_cb(void *priv, unsigned int color, unsigned int color_id)
static void mov_text_text_cb(void *priv, const char *text, int len)
static void mov_text_new_line_cb(void *priv, int forced)
static const ASSCodesCallbacks mov_text_callbacks = ;
static int mov_text_encode_frame(AVCodecContext *avctx, unsigned char *buf,
int bufsize, const AVSubtitle *sub)
static int mov_text_encode_close(AVCodecContext *avctx)
AVCodec ff_movtext_encoder = ;
