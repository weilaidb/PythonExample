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
GET_PIXEL \
((frame)->data[0] + (y) * frame->linesize[0] + 4 * (x))
GET_PIXEL_COMP \
(*((frame)->data[0] + (y) * frame->linesize[0] + 4 * (x) + c))
image_ctx_free
webp_get_vlc[2])
huff_reader_get_symbol
huff_reader_build_canonical
read_huffman_code_simple
read_huffman_code_normal
decode_entropy_coded_image;
PARSE_BLOCK_SIZE do  while (0)
decode_entropy_image
parse_transform_predictor
parse_transform_color
parse_transform_color_indexing
*get_huffman_group
color_cache_put
decode_entropy_coded_image
inv_predict_0
inv_predict_1
inv_predict_2
inv_predict_3
inv_predict_4
inv_predict_5
inv_predict_6
inv_predict_7
inv_predict_8
inv_predict_9
inv_predict_10
inv_predict_11
inv_predict_12
clamp_add_subtract_half
inv_predict_13
typedef void (*inv_predict_func)(uint8_t *p, const uint8_t *p_l,
const uint8_t *p_tl, const uint8_t *p_t,
const uint8_t *p_tr);
static const inv_predict_func inverse_predict[14] = ;
inverse_prediction
apply_predictor_transform
color_transform_delta
apply_color_transform
apply_subtract_green_transform
apply_color_indexing_transform
vp8_lossless_decode_frame
alpha_inverse_prediction
vp8_lossy_decode_alpha
vp8_lossy_decode_frame
webp_decode_frame
webp_decode_close
AVCodec ff_webp_decoder = ;
