#define STYLE_FLAG_BOLD         (1<<0)
#define STYLE_FLAG_ITALIC       (1<<1)
#define STYLE_FLAG_UNDERLINE    (1<<2)
#define BOX_SIZE_INITIAL    40
#define STYL_BOX   (1<<0)
#define HLIT_BOX   (1<<1)
#define HCLR_BOX   (1<<2)
#define TWRP_BOX   (1<<3)
#define BOTTOM_LEFT     1
#define BOTTOM_CENTER   2
#define BOTTOM_RIGHT    3
#define MIDDLE_LEFT     4
#define MIDDLE_CENTER   5
#define MIDDLE_RIGHT    6
#define TOP_LEFT        7
#define TOP_CENTER      8
#define TOP_RIGHT       9
typedef struct  MovTextDefault;
typedef struct  FontRecord;
typedef struct  StyleBox;
typedef struct  HighlightBox;
typedef struct  HilightcolorBox;
typedef struct  TextWrapBox;
typedef struct  MovTextContext;
typedef struct  Box;
mov_text_cleanup
mov_text_cleanup_ftab
mov_text_tx3g
decode_twrp
decode_hlit
decode_hclr
decode_styl
static const Box box_types[] = ;
const static size_t box_count = FF_ARRAY_ELEMS(box_types);
text_to_ass
mov_text_init
mov_text_decode_frame
mov_text_decode_close
mov_text_flush
AVCodec ff_movtext_decoder = ;
