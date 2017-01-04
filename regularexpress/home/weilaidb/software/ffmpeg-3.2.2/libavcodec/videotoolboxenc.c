#if !CONFIG_VT_BT2020
# define kCVImageBufferColorPrimaries_ITU_R_2020   CFSTR("ITU_R_2020")
# define kCVImageBufferTransferFunction_ITU_R_2020 CFSTR("ITU_R_2020")
# define kCVImageBufferYCbCrMatrix_ITU_R_2020      CFSTR("ITU_R_2020")
typedef enum VT_H264Profile  VT_H264Profile;
typedef enum VTH264Entropy VTH264Entropy;
static const uint8_t start_code[] = ;
typedef struct ExtraSEI  ExtraSEI;
typedef struct BufNode  BufNode;
typedef struct VTEncContext  VTEncContext;
static int vtenc_populate_extradata(AVCodecContext   *avctx,
CMVideoCodecType codec_type,
CFStringRef      profile_level,
CFNumberRef      gamma_level,
CFDictionaryRef  enc_info,
CFDictionaryRef  pixel_buffer_info);
static void vt_release_num(CFNumberRef* refPtr)
static void set_async_error(VTEncContext *vtctx, int err)
static void clear_frame_queue(VTEncContext *vtctx)
static int vtenc_q_pop(VTEncContext *vtctx, bool wait, CMSampleBufferRef *buf, ExtraSEI **sei)
static void vtenc_q_push(VTEncContext *vtctx, CMSampleBufferRef buffer, ExtraSEI *sei)
static int count_nalus(size_t length_code_size,
CMSampleBufferRef sample_buffer,
int *count)
static CMVideoCodecType get_cm_codec_type(enum AVCodecID id)
static int get_params_size(
AVCodecContext              *avctx,
CMVideoFormatDescriptionRef vid_fmt,
size_t                      *size)
static int copy_param_sets(
AVCodecContext              *avctx,
CMVideoFormatDescriptionRef vid_fmt,
uint8_t                     *dst,
size_t                      dst_size)
static int set_extradata(AVCodecContext *avctx, CMSampleBufferRef sample_buffer)
static void vtenc_output_callback(
void *ctx,
void *sourceFrameCtx,
OSStatus status,
VTEncodeInfoFlags flags,
CMSampleBufferRef sample_buffer)
static int get_length_code_size(
AVCodecContext    *avctx,
CMSampleBufferRef sample_buffer,
size_t            *size)
static bool get_vt_profile_level(AVCodecContext *avctx,
CFStringRef    *profile_level_val)
static int get_cv_pixel_format(AVCodecContext* avctx,
enum AVPixelFormat fmt,
enum AVColorRange range,
int* av_pixel_format,
int* range_guessed)
static void add_color_attr(AVCodecContext *avctx, CFMutableDictionaryRef dict)
static int create_cv_pixel_buffer_info(AVCodecContext* avctx,
CFMutableDictionaryRef* dict)
static int get_cv_color_primaries(AVCodecContext *avctx,
CFStringRef *primaries)
static int get_cv_transfer_function(AVCodecContext *avctx,
CFStringRef *transfer_fnc,
CFNumberRef *gamma_level)
static int get_cv_ycbcr_matrix(AVCodecContext *avctx, CFStringRef *matrix)
static int vtenc_create_encoder(AVCodecContext   *avctx,
CMVideoCodecType codec_type,
CFStringRef      profile_level,
CFNumberRef      gamma_level,
CFDictionaryRef  enc_info,
CFDictionaryRef  pixel_buffer_info,
VTCompressionSessionRef *session)
static av_cold int vtenc_init(AVCodecContext *avctx)
static void vtenc_get_frame_info(CMSampleBufferRef buffer, bool *is_key_frame)
static int is_post_sei_nal_type(int nal_type)
static int find_sei_end(AVCodecContext *avctx,
uint8_t        *nal_data,
size_t          nal_size,
uint8_t       **sei_end)
static int copy_emulation_prev(const uint8_t *src,
size_t         src_size,
uint8_t       *dst,
ssize_t        dst_offset,
size_t         dst_size)
static int write_sei(const ExtraSEI *sei,
int             sei_type,
uint8_t        *dst,
size_t          dst_size)
static int copy_replace_length_codes(
AVCodecContext *avctx,
size_t        length_code_size,
CMSampleBufferRef sample_buffer,
ExtraSEI      *sei,
uint8_t       *dst_data,
size_t        dst_size)
static int get_sei_msg_bytes(const ExtraSEI* sei, int type)
static int vtenc_cm_to_avpacket(
AVCodecContext    *avctx,
CMSampleBufferRef sample_buffer,
AVPacket          *pkt,
ExtraSEI          *sei)
static int get_cv_pixel_info(
AVCodecContext *avctx,
const AVFrame  *frame,
int            *color,
int            *plane_count,
size_t         *widths,
size_t         *heights,
size_t         *strides,
size_t         *contiguous_buf_size)
#if !TARGET_OS_IPHONE
static void free_avframe(
void       *release_ctx,
const void *data,
size_t      size,
size_t      plane_count,
const void *plane_addresses[])
static int copy_avframe_to_pixel_buffer(AVCodecContext   *avctx,
const AVFrame    *frame,
CVPixelBufferRef cv_img,
const size_t     *plane_strides,
const size_t     *plane_rows)
static int create_cv_pixel_buffer(AVCodecContext   *avctx,
const AVFrame    *frame,
CVPixelBufferRef *cv_img)
static int create_encoder_dict_h264(const AVFrame *frame,
CFDictionaryRef* dict_out)
static int vtenc_send_frame(AVCodecContext *avctx,
VTEncContext   *vtctx,
const AVFrame  *frame)
static av_cold int vtenc_frame(
AVCodecContext *avctx,
AVPacket       *pkt,
const AVFrame  *frame,
int            *got_packet)
static int vtenc_populate_extradata(AVCodecContext   *avctx,
CMVideoCodecType codec_type,
CFStringRef      profile_level,
CFNumberRef      gamma_level,
CFDictionaryRef  enc_info,
CFDictionaryRef  pixel_buffer_info)
static av_cold int vtenc_close(AVCodecContext *avctx)
static const enum AVPixelFormat pix_fmts[] = ;
#define OFFSET(x) offsetof(VTEncContext, x)
#define VE AV_OPT_FLAG_VIDEO_PARAM | AV_OPT_FLAG_ENCODING_PARAM
static const AVOption options[] = ;
static const AVClass h264_videotoolbox_class = ;
AVCodec ff_h264_videotoolbox_encoder = ;
