int ff_ass_subtitle_header(AVCodecContext *avctx,
const char *font, int font_size,
int color, int back_color,
int bold, int italic, int underline,
int border_style, int alignment)
int ff_ass_subtitle_header_default(AVCodecContext *avctx)
char *ff_ass_get_dialog(int readorder, int layer, const char *style,
const char *speaker, const char *text)
int ff_ass_add_rect(AVSubtitle *sub, const char *dialog,
int readorder, int layer, const char *style,
const char *speaker)
void ff_ass_decoder_flush(AVCodecContext *avctx)
void ff_ass_bprint_text_event(AVBPrint *buf, const char *p, int size,
const char *linebreaks, int keep_ass_markup)
