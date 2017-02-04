#define STYLE_FLAG_BOLD         (1<<0)
#define STYLE_FLAG_ITALIC       (1<<1)
#define STYLE_FLAG_UNDERLINE    (1<<2)
#define STYLE_RECORD_SIZE       12
#define SIZE_ADD                10
#define STYL_BOX   (1<<0)
#define HLIT_BOX   (1<<1)
#define HCLR_BOX   (1<<2)
av_bprint_append_any   av_bprint_append_data(buf, ((const char*)data), size)
typedef struct  StyleBox;
typedef struct  HighlightBox;
typedef struct  HilightcolorBox;
typedef struct  MovTextContext;
typedef struct  Box;
mov_text_cleanup
encode_styl
encode_hlit
encode_hclr
static const Box box_types[] = ;
const static size_t box_count = FF_ARRAY_ELEMS(box_types);
mov_text_encode_init
mov_text_style_cb
mov_text_color_cb
mov_text_text_cb
mov_text_new_line_cb
static const ASSCodesCallbacks mov_text_callbacks = ;
mov_text_encode_frame
mov_text_encode_close
AVCodec ff_movtext_encoder = ;
