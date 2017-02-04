#define AVCODEC_ASS_H
#define ASS_DEFAULT_PLAYRESX 384
#define ASS_DEFAULT_PLAYRESY 288
#define ASS_DEFAULT_FONT
#define ASS_DEFAULT_FONT_SIZE   16
#define ASS_DEFAULT_COLOR       0xffffff
#define ASS_DEFAULT_BACK_COLOR  0
#define ASS_DEFAULT_BOLD        0
#define ASS_DEFAULT_ITALIC      0
#define ASS_DEFAULT_UNDERLINE   0
#define ASS_DEFAULT_ALIGNMENT   2
#define ASS_DEFAULT_BORDERSTYLE 1
typedef struct FFASSDecoderContext  FFASSDecoderContext;
ff_ass_subtitle_header;
ff_ass_subtitle_header_default;
*ff_ass_get_dialog;
ff_ass_add_rect;
ff_ass_decoder_flush;
ff_ass_bprint_text_event;
