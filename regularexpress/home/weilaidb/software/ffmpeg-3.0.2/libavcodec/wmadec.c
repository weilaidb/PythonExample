#define EXPVLCBITS 8
#define EXPMAX     ((19 + EXPVLCBITS - 1) / EXPVLCBITS)
#define HGAINVLCBITS 9
#define HGAINMAX     ((13 + HGAINVLCBITS - 1) / HGAINVLCBITS)
static void wma_lsp_to_curve_init(WMACodecContext *s, int frame_len);
static void dump_floats(WMACodecContext *s, const char *name,
int prec, const float *tab, int n)
static av_cold int wma_decode_init(AVCodecContext *avctx)
static inline float pow_m1_4(WMACodecContext *s, float x)
static av_cold void wma_lsp_to_curve_init(WMACodecContext *s, int frame_len)
static void wma_lsp_to_curve(WMACodecContext *s, float *out, float *val_max_ptr,
int n, float *lsp)
static void decode_exp_lsp(WMACodecContext *s, int ch)
static const float pow_tab[] = ;
static int decode_exp_vlc(WMACodecContext *s, int ch)
static void wma_window(WMACodecContext *s, float *out)
static int wma_decode_block(WMACodecContext *s)
static int wma_decode_frame(WMACodecContext *s, float **samples,
int samples_offset)
static int wma_decode_superframe(AVCodecContext *avctx, void *data,
int *got_frame_ptr, AVPacket *avpkt)
static av_cold void flush(AVCodecContext *avctx)
#if CONFIG_WMAV1_DECODER
AVCodec ff_wmav1_decoder = ;
#if CONFIG_WMAV2_DECODER
AVCodec ff_wmav2_decoder = ;
