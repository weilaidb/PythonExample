int ff_ass_subtitle_header(AVCodecContext *avctx,
const char *font, int font_size,
int color, int back_color,
int bold, int italic, int underline,
int border_style, int alignment)
int ff_ass_subtitle_header_default(AVCodecContext *avctx)
static void insert_ts(AVBPrint *buf, int ts)
int ff_ass_bprint_dialog(AVBPrint *buf, const char *dialog,
int ts_start, int duration, int raw)
int ff_ass_add_rect(AVSubtitle *sub, const char *dialog,
int ts_start, int duration, int raw)
int ff_ass_add_rect_bprint(AVSubtitle *sub, AVBPrint *buf,
int ts_start, int duration)
void ff_ass_bprint_text_event(AVBPrint *buf, const char *p, int size,
const char *linebreaks, int keep_ass_markup)
