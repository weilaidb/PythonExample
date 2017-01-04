static const unsigned char vaapi_encode_mjpeg_quant_luminance[64] = ;
static const unsigned char vaapi_encode_mjpeg_quant_chrominance[64] = ;
typedef struct VAAPIEncodeMJPEGContext  VAAPIEncodeMJPEGContext;
static av_cold void vaapi_encode_mjpeg_copy_huffman(unsigned char *dst_lengths,
unsigned char *dst_values,
const unsigned char *src_lengths,
const unsigned char *src_values)
static av_cold void vaapi_encode_mjpeg_init_tables(AVCodecContext *avctx)
static void vaapi_encode_mjpeg_write_marker(PutBitContext *pbc, int marker)
static int vaapi_encode_mjpeg_write_image_header(AVCodecContext *avctx,
VAAPIEncodePicture *pic,
VAAPIEncodeSlice *slice,
char *data, size_t *data_len)
static int vaapi_encode_mjpeg_write_extra_buffer(AVCodecContext *avctx,
VAAPIEncodePicture *pic,
int index, int *type,
char *data, size_t *data_len)
static int vaapi_encode_mjpeg_init_picture_params(AVCodecContext *avctx,
VAAPIEncodePicture *pic)
static int vaapi_encode_mjpeg_init_slice_params(AVCodecContext *avctx,
VAAPIEncodePicture *pic,
VAAPIEncodeSlice *slice)
static av_cold int vaapi_encode_mjpeg_init_internal(AVCodecContext *avctx)
static VAAPIEncodeType vaapi_encode_type_mjpeg = ;
static av_cold int vaapi_encode_mjpeg_init(AVCodecContext *avctx)
static const AVCodecDefault vaapi_encode_mjpeg_defaults[] = ;
static const AVClass vaapi_encode_mjpeg_class = ;
AVCodec ff_mjpeg_vaapi_encoder = ;
