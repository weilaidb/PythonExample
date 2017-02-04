#define WEBVTT_STACK_SIZE 64
typedef struct  WebVTTContext;
__attribute__ ((__format__ (__printf__, 2, 3)))
webvtt_print
webvtt_stack_push
webvtt_stack_pop
webvtt_stack_find
webvtt_close_tag
webvtt_stack_push_pop
webvtt_style_apply
webvtt_text_cb
webvtt_new_line_cb
webvtt_style_cb
webvtt_cancel_overrides_cb
webvtt_end_cb
static const ASSCodesCallbacks webvtt_callbacks = ;
webvtt_encode_frame
webvtt_encode_close
webvtt_encode_init
AVCodec ff_webvtt_encoder = ;
