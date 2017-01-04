static void init_vaapi_pic(VAPictureH264 *va_pic)
static void fill_vaapi_pic(VAPictureH264 *va_pic,
H264Picture   *pic,
int            pic_structure)
typedef struct DPB  DPB;
static int dpb_add(DPB *dpb, H264Picture *pic)
static int fill_vaapi_ReferenceFrames(VAPictureParameterBufferH264 *pic_param,
H264Context                  *h)
static void fill_vaapi_RefPicList(VAPictureH264 RefPicList[32],
H264Ref  *ref_list,
unsigned int  ref_count)
static void fill_vaapi_plain_pred_weight_table(H264Context   *h,
int            list,
unsigned char *luma_weight_flag,
short          luma_weight[32],
short          luma_offset[32],
unsigned char *chroma_weight_flag,
short          chroma_weight[32][2],
short          chroma_offset[32][2])
static int vaapi_h264_start_frame(AVCodecContext          *avctx,
av_unused const uint8_t *buffer,
av_unused uint32_t       size)
static int vaapi_h264_end_frame(AVCodecContext *avctx)
static int vaapi_h264_decode_slice(AVCodecContext *avctx,
const uint8_t  *buffer,
uint32_t        size)
AVHWAccel ff_h264_vaapi_hwaccel = ;
