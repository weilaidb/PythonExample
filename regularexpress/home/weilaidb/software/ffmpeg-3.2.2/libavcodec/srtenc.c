#define SRT_STACK_SIZE 64
typedef struct  SRTContext;
__attribute__ ((__format__ (__printf__, 2, 3)))
srt_print
srt_stack_push
srt_stack_pop
srt_stack_find
srt_close_tag
srt_stack_push_pop
srt_style_apply
srt_encode_init
srt_text_cb
srt_new_line_cb
srt_style_cb
srt_color_cb
srt_font_name_cb
srt_font_size_cb
srt_alignment_cb
srt_cancel_overrides_cb
srt_move_cb
srt_end_cb
static const ASSCodesCallbacks srt_callbacks = ;
static const ASSCodesCallbacks text_callbacks = ;
encode_frame
srt_encode_frame
text_encode_frame
srt_encode_close
#if CONFIG_SRT_ENCODER
AVCodec ff_srt_encoder = ;
#if CONFIG_SUBRIP_ENCODER
AVCodec ff_subrip_encoder = ;
#if CONFIG_TEXT_ENCODER
AVCodec ff_text_encoder = ;
