typedef struct LibSchroFrameContext  LibSchroFrameContext;
typedef struct SchroDecoderParams  SchroDecoderParams;
typedef struct SchroParseUnitContext  SchroParseUnitContext;
static void libschroedinger_decode_buffer_free(SchroBuffer *schro_buf,
void *priv)
static void parse_context_init(SchroParseUnitContext *parse_ctx,
const uint8_t *buf, int buf_size)
static SchroBuffer *find_next_parse_unit(SchroParseUnitContext *parse_ctx)
static enum AVPixelFormat get_chroma_format(SchroChromaFormat schro_pix_fmt)
static av_cold int libschroedinger_decode_init(AVCodecContext *avctx)
static void libschroedinger_decode_frame_free(void *frame)
static void libschroedinger_handle_first_access_unit(AVCodecContext *avctx)
static int libschroedinger_decode_frame(AVCodecContext *avctx,
void *data, int *got_frame,
AVPacket *avpkt)
static av_cold int libschroedinger_decode_close(AVCodecContext *avctx)
static void libschroedinger_flush(AVCodecContext *avctx)
AVCodec ff_libschroedinger_decoder = ;
