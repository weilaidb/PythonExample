#define MAX_SLICES 256
struct hevc_dxva2_picture_context ;
static void fill_picture_entry(DXVA_PicEntry_HEVC *pic,
unsigned index, unsigned flag)
static int get_refpic_index(const DXVA_PicParams_HEVC *pp, int surface_index)
static void fill_picture_parameters(const AVCodecContext *avctx, AVDXVAContext *ctx, const HEVCContext *h,
DXVA_PicParams_HEVC *pp)
static void fill_scaling_lists(AVDXVAContext *ctx, const HEVCContext *h, DXVA_Qmatrix_HEVC *qm)
static void fill_slice_short(DXVA_Slice_HEVC_Short *slice,
unsigned position, unsigned size)
static int commit_bitstream_and_slice_buffer(AVCodecContext *avctx,
DECODER_BUFFER_DESC *bs,
DECODER_BUFFER_DESC *sc)
static int dxva2_hevc_start_frame(AVCodecContext *avctx,
av_unused const uint8_t *buffer,
av_unused uint32_t size)
static int dxva2_hevc_decode_slice(AVCodecContext *avctx,
const uint8_t *buffer,
uint32_t size)
static int dxva2_hevc_end_frame(AVCodecContext *avctx)
#if CONFIG_HEVC_DXVA2_HWACCEL
AVHWAccel ff_hevc_dxva2_hwaccel = ;
#if CONFIG_HEVC_D3D11VA_HWACCEL
AVHWAccel ff_hevc_d3d11va_hwaccel = ;
