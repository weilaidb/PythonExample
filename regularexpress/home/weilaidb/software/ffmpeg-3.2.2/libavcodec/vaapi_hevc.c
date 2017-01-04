typedef struct vaapi_hevc_frame_data  vaapi_hevc_frame_data;
static void init_vaapi_pic(VAPictureHEVC *va_pic)
static void fill_vaapi_pic(VAPictureHEVC *va_pic, const HEVCFrame *pic, int rps_type)
static int find_frame_rps_type(const HEVCContext *h, const HEVCFrame *pic)
static void fill_vaapi_ReferenceFrames(const HEVCContext *h, VAPictureParameterBufferHEVC *pp)
static uint8_t get_ref_pic_index(const HEVCContext *h, const HEVCFrame *frame)
static void fill_picture_parameters(const HEVCContext *h, VAPictureParameterBufferHEVC *pp)
static int vaapi_hevc_start_frame(AVCodecContext          *avctx,
av_unused const uint8_t *buffer,
av_unused uint32_t       size)
static int vaapi_hevc_end_frame(AVCodecContext *avctx)
static int fill_pred_weight_table(HEVCContext * const h,
VASliceParameterBufferHEVC *slice_param,
SliceHeader * const sh)
static int vaapi_hevc_decode_slice(AVCodecContext *avctx,
const uint8_t  *buffer,
uint32_t        size)
AVHWAccel ff_hevc_vaapi_hwaccel = ;
