#define AVCODEC_ASS_H
#define ASS_DEFAULT_PLAYRESX 384
#define ASS_DEFAULT_PLAYRESY 288
#define ASS_DEFAULT_FONT        "Arial"
#define ASS_DEFAULT_FONT_SIZE   16
#define ASS_DEFAULT_COLOR       0xffffff
#define ASS_DEFAULT_BACK_COLOR  0
#define ASS_DEFAULT_BOLD        0
#define ASS_DEFAULT_ITALIC      0
#define ASS_DEFAULT_UNDERLINE   0
#define ASS_DEFAULT_ALIGNMENT   2
#define ASS_DEFAULT_BORDERSTYLE 1
int ff_ass_subtitle_header(AVCodecContext *avctx,
const char *font, int font_size,
int color, int back_color,
int bold, int italic, int underline,
int border_style, int alignment);
int ff_ass_subtitle_header_default(AVCodecContext *avctx);
int ff_ass_add_rect(AVSubtitle *sub, const char *dialog,
int ts_start, int duration, int raw);
int ff_ass_add_rect_bprint(AVSubtitle *sub, AVBPrint *buf,
int ts_start, int duration);
int ff_ass_bprint_dialog(AVBPrint *buf, const char *dialog,
int ts_start, int duration, int raw);
void ff_ass_bprint_text_event(AVBPrint *buf, const char *p, int size,
const char *linebreaks, int keep_ass_markup);
