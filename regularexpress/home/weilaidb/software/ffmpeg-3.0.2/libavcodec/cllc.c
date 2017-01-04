typedef struct CLLCContext  CLLCContext;
static int read_code_table(CLLCContext *ctx, GetBitContext *gb, VLC *vlc)
static int read_argb_line(CLLCContext *ctx, GetBitContext *gb, int *top_left,
VLC *vlc, uint8_t *outbuf)
static int read_rgb24_component_line(CLLCContext *ctx, GetBitContext *gb,
int *top_left, VLC *vlc, uint8_t *outbuf)
static int read_yuv_component_line(CLLCContext *ctx, GetBitContext *gb,
int *top_left, VLC *vlc, uint8_t *outbuf,
int is_chroma)
static int decode_argb_frame(CLLCContext *ctx, GetBitContext *gb, AVFrame *pic)
static int decode_rgb24_frame(CLLCContext *ctx, GetBitContext *gb, AVFrame *pic)
static int decode_yuv_frame(CLLCContext *ctx, GetBitContext *gb, AVFrame *pic)
static int cllc_decode_frame(AVCodecContext *avctx, void *data,
int *got_picture_ptr, AVPacket *avpkt)
static av_cold int cllc_decode_close(AVCodecContext *avctx)
static av_cold int cllc_decode_init(AVCodecContext *avctx)
AVCodec ff_cllc_decoder = ;
