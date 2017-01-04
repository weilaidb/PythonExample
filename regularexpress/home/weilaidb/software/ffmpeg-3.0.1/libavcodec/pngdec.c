typedef struct PNGDecContext  PNGDecContext;
static const uint8_t png_pass_mask[NB_PASSES] = ;
static const uint8_t png_pass_dsp_ymask[NB_PASSES] = ;
static const uint8_t png_pass_dsp_mask[NB_PASSES] = ;
static void png_put_interlaced_row(uint8_t *dst, int width,
int bits_per_pixel, int pass,
int color_type, const uint8_t *src)
void ff_add_png_paeth_prediction(uint8_t *dst, uint8_t *src, uint8_t *top,
int w, int bpp)
#define UNROLL1(bpp, op)                                                      \
#define UNROLL_FILTER(op)                                                     \
if (bpp == 1)  else if (bpp == 2)  else if (bpp == 3)  else if (bpp == 4)                                                                          \
for (; i < size; i++)
static void png_filter_row(PNGDSPContext *dsp, uint8_t *dst, int filter_type,
uint8_t *src, uint8_t *last, int size, int bpp)
#define YUV2RGB(NAME, TYPE) \
static void deloco_ ## NAME(TYPE *dst, int size, int alpha) \
YUV2RGB(rgb8, uint8_t)
YUV2RGB(rgb16, uint16_t)
static void png_handle_row(PNGDecContext *s)
static int png_decode_idat(PNGDecContext *s, int length)
static int decode_zbuf(AVBPrint *bp, const uint8_t *data,
const uint8_t *data_end)
static uint8_t *iso88591_to_utf8(const uint8_t *in, size_t size_in)
static int decode_text_chunk(PNGDecContext *s, uint32_t length, int compressed,
AVDictionary **dict)
static int decode_ihdr_chunk(AVCodecContext *avctx, PNGDecContext *s,
uint32_t length)
static int decode_phys_chunk(AVCodecContext *avctx, PNGDecContext *s)
static int decode_idat_chunk(AVCodecContext *avctx, PNGDecContext *s,
uint32_t length, AVFrame *p)
static int decode_plte_chunk(AVCodecContext *avctx, PNGDecContext *s,
uint32_t length)
static int decode_trns_chunk(AVCodecContext *avctx, PNGDecContext *s,
uint32_t length)
static void handle_small_bpp(PNGDecContext *s, AVFrame *p)
static int decode_fctl_chunk(AVCodecContext *avctx, PNGDecContext *s,
uint32_t length)
static void handle_p_frame_png(PNGDecContext *s, AVFrame *p)
#define FAST_DIV255(x) ((((x) + 128) * 257) >> 16)
static int handle_p_frame_apng(AVCodecContext *avctx, PNGDecContext *s,
AVFrame *p)
static int decode_frame_common(AVCodecContext *avctx, PNGDecContext *s,
AVFrame *p, AVPacket *avpkt)
#if CONFIG_PNG_DECODER
static int decode_frame_png(AVCodecContext *avctx,
void *data, int *got_frame,
AVPacket *avpkt)
#if CONFIG_APNG_DECODER
static int decode_frame_apng(AVCodecContext *avctx,
void *data, int *got_frame,
AVPacket *avpkt)
#if HAVE_THREADS
static int update_thread_context(AVCodecContext *dst, const AVCodecContext *src)
static av_cold int png_dec_init(AVCodecContext *avctx)
static av_cold int png_dec_end(AVCodecContext *avctx)
#if CONFIG_APNG_DECODER
AVCodec ff_apng_decoder = ;
#if CONFIG_PNG_DECODER
AVCodec ff_png_decoder = ;
