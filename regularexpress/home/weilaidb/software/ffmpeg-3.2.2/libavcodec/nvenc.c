defined || defined(__CYGWIN__)
# define CUDA_LIBNAME
# if ARCH_X86_64
#  define NVENC_LIBNAME
# else
#  define NVENC_LIBNAME
# endif
# define CUDA_LIBNAME
# define NVENC_LIBNAME
defined
dlopen LoadLibrary(TEXT(filename))
dlsym   GetProcAddress(handle, symbol)
dlclose         FreeLibrary(handle)
#define NVENC_CAP 0x30
IS_CBR (rc == NV_ENC_PARAMS_RC_CBR ||               \
rc == NV_ENC_PARAMS_RC_2_PASS_QUALITY ||    \
rc == NV_ENC_PARAMS_RC_2_PASS_FRAMESIZE_CAP)
LOAD_LIBRARY                   \
do  while (0)
LOAD_SYMBOL        \
do  while (0)
const enum AVPixelFormat ff_nvenc_pix_fmts[] = ;
IS_10BIT (pix_fmt == AV_PIX_FMT_P010 ||    \
pix_fmt == AV_PIX_FMT_YUV444P16)
IS_YUV444 (pix_fmt == AV_PIX_FMT_YUV444P || \
pix_fmt == AV_PIX_FMT_YUV444P16)
static const struct  nvenc_errors[] = ;
nvenc_map_error
nvenc_print_error
nvenc_load_libraries
nvenc_open_session
nvenc_check_codec_support
nvenc_check_cap
nvenc_check_capabilities
nvenc_check_device
nvenc_setup_device
typedef struct GUIDTuple  GUIDTuple;
PRESET_ALIAS \
[PRESET_ ## alias] =
PRESET PRESET_ALIAS(name, name, __VA_ARGS__)
nvenc_map_preset
#undef PRESET
#undef PRESET_ALIAS
set_constqp
set_vbr
set_lossless
nvenc_override_rate_control
nvenc_setup_rate_control
nvenc_setup_h264_config
nvenc_setup_hevc_config
nvenc_setup_codec_config
nvenc_setup_encoder
nvenc_alloc_surface
nvenc_setup_surfaces
nvenc_setup_extradata
ff_nvenc_encode_close
ff_nvenc_encode_init
*get_free_frame
nvenc_copy_frame
nvenc_find_free_reg_resource
nvenc_register_frame
nvenc_upload_frame
nvenc_codec_specific_pic_params
timestamp_queue_enqueue
timestamp_queue_dequeue
nvenc_set_timestamp
process_output_surface
output_ready
ff_nvenc_encode_frame
