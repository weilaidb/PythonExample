struct dxva2_picture_context ;
static void fill_picture_parameters(AVCodecContext *avctx,
AVDXVAContext *ctx, const VC1Context *v,
DXVA_PictureParameters *pp)
static void fill_slice(AVCodecContext *avctx, DXVA_SliceInfo *slice,
unsigned position, unsigned size)
static int commit_bitstream_and_slice_buffer(AVCodecContext *avctx,
DECODER_BUFFER_DESC *bs,
DECODER_BUFFER_DESC *sc)
static int dxva2_vc1_start_frame(AVCodecContext *avctx,
av_unused const uint8_t *buffer,
av_unused uint32_t size)
static int dxva2_vc1_decode_slice(AVCodecContext *avctx,
const uint8_t *buffer,
uint32_t size)
static int dxva2_vc1_end_frame(AVCodecContext *avctx)
#if CONFIG_WMV3_DXVA2_HWACCEL
AVHWAccel ff_wmv3_dxva2_hwaccel = ;
#if CONFIG_VC1_DXVA2_HWACCEL
AVHWAccel ff_vc1_dxva2_hwaccel = ;
#if CONFIG_WMV3_D3D11VA_HWACCEL
AVHWAccel ff_wmv3_d3d11va_hwaccel = ;
#if CONFIG_VC1_D3D11VA_HWACCEL
AVHWAccel ff_vc1_d3d11va_hwaccel = ;
