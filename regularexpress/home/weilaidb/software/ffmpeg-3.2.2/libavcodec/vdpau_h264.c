static int32_t h264_foc(int foc)
static void vdpau_h264_clear_rf(VdpReferenceFrameH264 *rf)
static void vdpau_h264_set_rf(VdpReferenceFrameH264 *rf, H264Picture *pic,
int pic_structure)
static void vdpau_h264_set_reference_frames(AVCodecContext *avctx)
static int vdpau_h264_start_frame(AVCodecContext *avctx,
const uint8_t *buffer, uint32_t size)
static const uint8_t start_code_prefix[3] = ;
static int vdpau_h264_decode_slice(AVCodecContext *avctx,
const uint8_t *buffer, uint32_t size)
static int vdpau_h264_end_frame(AVCodecContext *avctx)
static int vdpau_h264_init(AVCodecContext *avctx)
AVHWAccel ff_h264_vdpau_hwaccel = ;
