#define MAX_SLICES 1024
struct dxva2_picture_context ;
static void fill_picture_parameters(AVCodecContext *avctx,
AVDXVAContext *ctx,
const struct MpegEncContext *s,
DXVA_PictureParameters *pp)
static void fill_quantization_matrices(AVCodecContext *avctx,
AVDXVAContext *ctx,
const struct MpegEncContext *s,
DXVA_QmatrixData *qm)
static void fill_slice(AVCodecContext *avctx,
const struct MpegEncContext *s,
DXVA_SliceInfo *slice,
unsigned position,
const uint8_t *buffer, unsigned size)
static int commit_bitstream_and_slice_buffer(AVCodecContext *avctx,
DECODER_BUFFER_DESC *bs,
DECODER_BUFFER_DESC *sc)
static int dxva2_mpeg2_start_frame(AVCodecContext *avctx,
av_unused const uint8_t *buffer,
av_unused uint32_t size)
static int dxva2_mpeg2_decode_slice(AVCodecContext *avctx,
const uint8_t *buffer, uint32_t size)
static int dxva2_mpeg2_end_frame(AVCodecContext *avctx)
#if CONFIG_MPEG2_DXVA2_HWACCEL
AVHWAccel ff_mpeg2_dxva2_hwaccel = ;
#if CONFIG_MPEG2_D3D11VA_HWACCEL
AVHWAccel ff_mpeg2_d3d11va_hwaccel = ;
