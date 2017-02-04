#if !CONFIG_VT_BT2020
CFSTR
CFSTR
CFSTR
typedef enum VT_H264Profile  VT_H264Profile;
typedef enum VTH264Entropy VTH264Entropy;
static const uint8_t start_code[] = ;
typedef struct ExtraSEI  ExtraSEI;
typedef struct BufNode  BufNode;
typedef struct VTEncContext  VTEncContext;
vtenc_populate_extradata;
vt_release_num
set_async_error
clear_frame_queue
vtenc_q_pop
vtenc_q_push
count_nalus
get_cm_codec_type
get_params_size
copy_param_sets
set_extradata
vtenc_output_callback
get_length_code_size
get_vt_profile_level
get_cv_pixel_format
add_color_attr
create_cv_pixel_buffer_info
get_cv_color_primaries
get_cv_transfer_function
get_cv_ycbcr_matrix
vtenc_create_encoder
vtenc_init
vtenc_get_frame_info
is_post_sei_nal_type
find_sei_end
copy_emulation_prev
write_sei
copy_replace_length_codes
get_sei_msg_bytes
vtenc_cm_to_avpacket
get_cv_pixel_info
#if !TARGET_OS_IPHONE
free_avframe
copy_avframe_to_pixel_buffer
create_cv_pixel_buffer
create_encoder_dict_h264
vtenc_send_frame
vtenc_frame
vtenc_populate_extradata
vtenc_close
static const enum AVPixelFormat pix_fmts[] = ;
OFFSET offsetof(VTEncContext, x)
#define VE AV_OPT_FLAG_VIDEO_PARAM | AV_OPT_FLAG_ENCODING_PARAM
static const AVOption options[] = ;
static const AVClass h264_videotoolbox_class = ;
AVCodec ff_h264_videotoolbox_encoder = ;
