struct dxva2_picture_context ;
static void fill_picture_entry(DXVA_PicEntry_H264 *pic,
unsigned index, unsigned flag)
static void fill_picture_parameters(const AVCodecContext *avctx, AVDXVAContext *ctx, const H264Context *h,
DXVA_PicParams_H264 *pp)
static void fill_scaling_lists(const AVCodecContext *avctx, AVDXVAContext *ctx, const H264Context *h, DXVA_Qmatrix_H264 *qm)
static int is_slice_short(const AVCodecContext *avctx, AVDXVAContext *ctx)
static void fill_slice_short(DXVA_Slice_H264_Short *slice,
unsigned position, unsigned size)
static int get_refpic_index(const DXVA_PicParams_H264 *pp, int surface_index)
static void fill_slice_long(AVCodecContext *avctx, DXVA_Slice_H264_Long *slice,
const DXVA_PicParams_H264 *pp, unsigned position, unsigned size)
static int commit_bitstream_and_slice_buffer(AVCodecContext *avctx,
DECODER_BUFFER_DESC *bs,
DECODER_BUFFER_DESC *sc)
static int dxva2_h264_start_frame(AVCodecContext *avctx,
av_unused const uint8_t *buffer,
av_unused uint32_t size)
static int dxva2_h264_decode_slice(AVCodecContext *avctx,
const uint8_t *buffer,
uint32_t size)
static int dxva2_h264_end_frame(AVCodecContext *avctx)
#if CONFIG_H264_DXVA2_HWACCEL
AVHWAccel ff_h264_dxva2_hwaccel = ;
#if CONFIG_H264_D3D11VA_HWACCEL
AVHWAccel ff_h264_d3d11va_hwaccel = ;
