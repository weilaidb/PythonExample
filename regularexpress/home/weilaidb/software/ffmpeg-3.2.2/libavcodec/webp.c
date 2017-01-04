#define BITSTREAM_READER_LE
#define VP8X_FLAG_ANIMATION             0x02
#define VP8X_FLAG_XMP_METADATA          0x04
#define VP8X_FLAG_EXIF_METADATA         0x08
#define VP8X_FLAG_ALPHA                 0x10
#define VP8X_FLAG_ICC                   0x20
#define MAX_PALETTE_SIZE                256
#define MAX_CACHE_BITS                  11
#define NUM_CODE_LENGTH_CODES           19
#define HUFFMAN_CODES_PER_META_CODE     5
#define NUM_LITERAL_CODES               256
#define NUM_LENGTH_CODES                24
#define NUM_DISTANCE_CODES              40
#define NUM_SHORT_DISTANCES             120
#define MAX_HUFFMAN_CODE_LENGTH         15
static const uint16_t alphabet_sizes[HUFFMAN_CODES_PER_META_CODE] = ;
static const uint8_t code_length_code_order[NUM_CODE_LENGTH_CODES] = ;
static const int8_t lz77_distance_offsets[NUM_SHORT_DISTANCES][2] = ;
enum AlphaCompression ;
enum AlphaFilter ;
enum TransformType ;
enum PredictionMode ;
enum HuffmanIndex ;
enum ImageRole ;
typedef struct HuffReader  HuffReader;
typedef struct ImageContext  ImageContext;
typedef struct WebPContext  WebPContext;
#define GET_PIXEL(frame, x, y) \
((frame)->data[0] + (y) * frame->linesize[0] + 4 * (x))
#define GET_PIXEL_COMP(frame, x, y, c) \
(*((frame)->data[0] + (y) * frame->linesize[0] + 4 * (x) + c))
static void image_ctx_free(ImageContext *img)
static av_always_inline int webp_get_vlc(GetBitContext *gb, VLC_TYPE (*table)[2])
static int huff_reader_get_symbol(HuffReader *r, GetBitContext *gb)
static int huff_reader_build_canonical(HuffReader *r, int *code_lengths,
int alphabet_size)
static void read_huffman_code_simple(WebPContext *s, HuffReader *hc)
static int read_huffman_code_normal(WebPContext *s, HuffReader *hc,
int alphabet_size)
static int decode_entropy_coded_image(WebPContext *s, enum ImageRole role,
int w, int h);
#define PARSE_BLOCK_SIZE(w, h) do  while (0)
static int decode_entropy_image(WebPContext *s)
static int parse_transform_predictor(WebPContext *s)
static int parse_transform_color(WebPContext *s)
static int parse_transform_color_indexing(WebPContext *s)
static HuffReader *get_huffman_group(WebPContext *s, ImageContext *img,
int x, int y)
static av_always_inline void color_cache_put(ImageContext *img, uint32_t c)
static int decode_entropy_coded_image(WebPContext *s, enum ImageRole role,
int w, int h)
static void inv_predict_0(uint8_t *p, const uint8_t *p_l, const uint8_t *p_tl,
const uint8_t *p_t, const uint8_t *p_tr)
static void inv_predict_1(uint8_t *p, const uint8_t *p_l, const uint8_t *p_tl,
const uint8_t *p_t, const uint8_t *p_tr)
static void inv_predict_2(uint8_t *p, const uint8_t *p_l, const uint8_t *p_tl,
const uint8_t *p_t, const uint8_t *p_tr)
static void inv_predict_3(uint8_t *p, const uint8_t *p_l, const uint8_t *p_tl,
const uint8_t *p_t, const uint8_t *p_tr)
static void inv_predict_4(uint8_t *p, const uint8_t *p_l, const uint8_t *p_tl,
const uint8_t *p_t, const uint8_t *p_tr)
static void inv_predict_5(uint8_t *p, const uint8_t *p_l, const uint8_t *p_tl,
const uint8_t *p_t, const uint8_t *p_tr)
static void inv_predict_6(uint8_t *p, const uint8_t *p_l, const uint8_t *p_tl,
const uint8_t *p_t, const uint8_t *p_tr)
static void inv_predict_7(uint8_t *p, const uint8_t *p_l, const uint8_t *p_tl,
const uint8_t *p_t, const uint8_t *p_tr)
static void inv_predict_8(uint8_t *p, const uint8_t *p_l, const uint8_t *p_tl,
const uint8_t *p_t, const uint8_t *p_tr)
static void inv_predict_9(uint8_t *p, const uint8_t *p_l, const uint8_t *p_tl,
const uint8_t *p_t, const uint8_t *p_tr)
static void inv_predict_10(uint8_t *p, const uint8_t *p_l, const uint8_t *p_tl,
const uint8_t *p_t, const uint8_t *p_tr)
static void inv_predict_11(uint8_t *p, const uint8_t *p_l, const uint8_t *p_tl,
const uint8_t *p_t, const uint8_t *p_tr)
static void inv_predict_12(uint8_t *p, const uint8_t *p_l, const uint8_t *p_tl,
const uint8_t *p_t, const uint8_t *p_tr)
static av_always_inline uint8_t clamp_add_subtract_half(int a, int b, int c)
static void inv_predict_13(uint8_t *p, const uint8_t *p_l, const uint8_t *p_tl,
const uint8_t *p_t, const uint8_t *p_tr)
typedef void (*inv_predict_func)(uint8_t *p, const uint8_t *p_l,
const uint8_t *p_tl, const uint8_t *p_t,
const uint8_t *p_tr);
static const inv_predict_func inverse_predict[14] = ;
static void inverse_prediction(AVFrame *frame, enum PredictionMode m, int x, int y)
static int apply_predictor_transform(WebPContext *s)
static av_always_inline uint8_t color_transform_delta(uint8_t color_pred,
uint8_t color)
static int apply_color_transform(WebPContext *s)
static int apply_subtract_green_transform(WebPContext *s)
static int apply_color_indexing_transform(WebPContext *s)
static int vp8_lossless_decode_frame(AVCodecContext *avctx, AVFrame *p,
int *got_frame, uint8_t *data_start,
unsigned int data_size, int is_alpha_chunk)
static void alpha_inverse_prediction(AVFrame *frame, enum AlphaFilter m)
static int vp8_lossy_decode_alpha(AVCodecContext *avctx, AVFrame *p,
uint8_t *data_start,
unsigned int data_size)
static int vp8_lossy_decode_frame(AVCodecContext *avctx, AVFrame *p,
int *got_frame, uint8_t *data_start,
unsigned int data_size)
static int webp_decode_frame(AVCodecContext *avctx, void *data, int *got_frame,
AVPacket *avpkt)
static av_cold int webp_decode_close(AVCodecContext *avctx)
AVCodec ff_webp_decoder = ;
