typedef struct SheerVideoContext  SheerVideoContext;
static const uint8_t l_r_rgb[256] = ;
static const uint8_t l_r_rgbi[256] = ;
static const uint8_t l_g_rgbi[256] = ;
static const uint8_t l_g_rgb[256] = ;
static const uint8_t l_y_ybr[256] = ;
static const uint8_t l_u_ybr[256] = ;
static const uint8_t l_y_ybyr[256] = ;
static const uint8_t l_u_ybyr[256] = ;
static const uint8_t l_y_byry[256] = ;
static const uint8_t l_u_byry[256] = ;
static const uint8_t l_y_ybr10i[1024] = ;
static const uint8_t l_y_ybr10[1024] = ;
static const uint8_t l_u_ybr10i[1024] = ;
static const uint8_t l_u_ybr10[1024] = ;
static const uint8_t l_r_rgbx[1024] = ;
static const uint8_t l_g_rgbx[1024] = ;
static const uint8_t l_y_yry10[1024] = ;
static const uint8_t l_y_yry10i[1024] = ;
static const uint8_t l_u_yry10[1024] = ;
static const uint8_t l_u_yry10i[1024] = ;
static const uint8_t l_y_ybri[256] = ;
static const uint8_t l_u_ybri[256] = ;
static const uint8_t l_y_byryi[256] = ;
static const uint8_t l_u_byryi[256] = ;
static const uint8_t l_r_rgbxi[1024] = ;
static const uint8_t l_g_rgbxi[1024] = ;
static void decode_ca4i(AVCodecContext *avctx, AVFrame *p, GetBitContext *gb)
static void decode_ca4p(AVCodecContext *avctx, AVFrame *p, GetBitContext *gb)
static void decode_ybr10i(AVCodecContext *avctx, AVFrame *p, GetBitContext *gb)
static void decode_ybr10(AVCodecContext *avctx, AVFrame *p, GetBitContext *gb)
static void decode_yry10i(AVCodecContext *avctx, AVFrame *p, GetBitContext *gb)
static void decode_yry10(AVCodecContext *avctx, AVFrame *p, GetBitContext *gb)
static void decode_ca2i(AVCodecContext *avctx, AVFrame *p, GetBitContext *gb)
static void decode_ca2p(AVCodecContext *avctx, AVFrame *p, GetBitContext *gb)
static void decode_c82i(AVCodecContext *avctx, AVFrame *p, GetBitContext *gb)
static void decode_c82p(AVCodecContext *avctx, AVFrame *p, GetBitContext *gb)
static void decode_ybyr(AVCodecContext *avctx, AVFrame *p, GetBitContext *gb)
static void decode_byryi(AVCodecContext *avctx, AVFrame *p, GetBitContext *gb)
static void decode_byry(AVCodecContext *avctx, AVFrame *p, GetBitContext *gb)
static void decode_ybri(AVCodecContext *avctx, AVFrame *p, GetBitContext *gb)
static void decode_ybr(AVCodecContext *avctx, AVFrame *p, GetBitContext *gb)
static void decode_aybri(AVCodecContext *avctx, AVFrame *p, GetBitContext *gb)
static void decode_aybr(AVCodecContext *avctx, AVFrame *p, GetBitContext *gb)
static void decode_argxi(AVCodecContext *avctx, AVFrame *p, GetBitContext *gb)
static void decode_argx(AVCodecContext *avctx, AVFrame *p, GetBitContext *gb)
static void decode_rgbxi(AVCodecContext *avctx, AVFrame *p, GetBitContext *gb)
static void decode_rgbx(AVCodecContext *avctx, AVFrame *p, GetBitContext *gb)
static void decode_argbi(AVCodecContext *avctx, AVFrame *p, GetBitContext *gb)
static void decode_argb(AVCodecContext *avctx, AVFrame *p, GetBitContext *gb)
static void decode_rgbi(AVCodecContext *avctx, AVFrame *p, GetBitContext *gb)
static void decode_rgb(AVCodecContext *avctx, AVFrame *p, GetBitContext *gb)
static int build_vlc(VLC *vlc, const uint8_t *len, int count)
static int decode_frame(AVCodecContext *avctx,
void *data, int *got_frame,
AVPacket *avpkt)
#if HAVE_THREADS
static int decode_init_thread_copy(AVCodecContext *avctx)
static av_cold int decode_end(AVCodecContext *avctx)
AVCodec ff_sheervideo_decoder = ;
