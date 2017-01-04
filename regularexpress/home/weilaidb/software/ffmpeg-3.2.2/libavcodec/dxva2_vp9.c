struct vp9_dxva2_picture_context ;
static void fill_picture_entry(DXVA_PicEntry_VPx *pic,
unsigned index, unsigned flag)
static int fill_picture_parameters(const AVCodecContext *avctx, AVDXVAContext *ctx, const VP9SharedContext *h,
DXVA_PicParams_VP9 *pp)
static void fill_slice_short(DXVA_Slice_VPx_Short *slice,
unsigned position, unsigned size)
static int commit_bitstream_and_slice_buffer(AVCodecContext *avctx,
DECODER_BUFFER_DESC *bs,
DECODER_BUFFER_DESC *sc)
static int dxva2_vp9_start_frame(AVCodecContext *avctx,
av_unused const uint8_t *buffer,
av_unused uint32_t size)
static int dxva2_vp9_decode_slice(AVCodecContext *avctx,
const uint8_t *buffer,
uint32_t size)
static int dxva2_vp9_end_frame(AVCodecContext *avctx)
#if CONFIG_VP9_DXVA2_HWACCEL
AVHWAccel ff_vp9_dxva2_hwaccel = ;
#if CONFIG_VP9_D3D11VA_HWACCEL
AVHWAccel ff_vp9_d3d11va_hwaccel = ;
