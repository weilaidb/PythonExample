#undef time
static int insert_text(AVBPrint *dst, const char *in, const char *arg)
static int insert_datetime(AVBPrint *dst, const char *in, const char *arg)
static int insert_color(AVBPrint *dst, const char *in, const char *arg)
static int insert_font(AVBPrint *dst, const char *in, const char *arg)
static const struct  ass_codes_map[] = ;
enum ;
static void jacosub_to_ass(AVCodecContext *avctx, AVBPrint *dst, const char *src)
static int jacosub_decode_frame(AVCodecContext *avctx,
void *data, int *got_sub_ptr, AVPacket *avpkt)
AVCodec ff_jacosub_decoder = ;
