static void fill_picture_parameters(AVCodecContext                 *avctx,
const VP9SharedContext         *h,
VADecPictureParameterBufferVP9 *pp)
static int vaapi_vp9_start_frame(AVCodecContext          *avctx,
av_unused const uint8_t *buffer,
av_unused uint32_t       size)
static int vaapi_vp9_end_frame(AVCodecContext *avctx)
static int vaapi_vp9_decode_slice(AVCodecContext *avctx,
const uint8_t  *buffer,
uint32_t        size)
AVHWAccel ff_vp9_vaapi_hwaccel = ;
