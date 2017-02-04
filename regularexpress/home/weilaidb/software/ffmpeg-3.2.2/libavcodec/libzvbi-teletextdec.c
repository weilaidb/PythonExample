#define TEXT_MAXSZ    (25 * (56 + 1) * 4 + 2)
#define VBI_NB_COLORS 40
#define VBI_TRANSPARENT_BLACK 8
RGBA (((a) << 24) | ((r) << 16) | ((g) << 8) | (b))
VBI_R   (((rgba) >> 0) & 0xFF)
VBI_G   (((rgba) >> 8) & 0xFF)
VBI_B   (((rgba) >> 16) & 0xFF)
VBI_A   (((rgba) >> 24) & 0xFF)
#define MAX_BUFFERED_PAGES 25
#define BITMAP_CHAR_WIDTH  12
#define BITMAP_CHAR_HEIGHT 10
#define MAX_SLICES 64
typedef struct TeletextPage
TeletextPage;
typedef struct TeletextContext
TeletextContext;
chop_spaces_utf8
subtitle_rect_free
*create_ass_text
gen_sub_text
fix_transparency
gen_sub_bitmap
handler
slice_to_vbi_lines
teletext_decode_frame
teletext_init_decoder
teletext_close_decoder
teletext_flush
OFFSET offsetof(TeletextContext, x)
#define SD AV_OPT_FLAG_SUBTITLE_PARAM | AV_OPT_FLAG_DECODING_PARAM
static const AVOption options[] = ,
,
,
,
,
,
,
,
,
,
,
,
};
static const AVClass teletext_class = ;
AVCodec ff_libzvbi_teletext_decoder = ;
