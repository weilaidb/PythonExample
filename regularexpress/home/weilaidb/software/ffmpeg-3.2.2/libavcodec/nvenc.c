#if defined(_WIN32) || defined(__CYGWIN__)
# define CUDA_LIBNAME "nvcuda.dll"
# if ARCH_X86_64
#  define NVENC_LIBNAME "nvEncodeAPI64.dll"
# else
#  define NVENC_LIBNAME "nvEncodeAPI.dll"
# endif
# define CUDA_LIBNAME "libcuda.so.1"
# define NVENC_LIBNAME "libnvidia-encode.so.1"
#if defined(_WIN32)
#define dlopen(filename, flags) LoadLibrary(TEXT(filename))
#define dlsym(handle, symbol)   GetProcAddress(handle, symbol)
#define dlclose(handle)         FreeLibrary(handle)
#define NVENC_CAP 0x30
#define IS_CBR(rc) (rc == NV_ENC_PARAMS_RC_CBR ||               \
rc == NV_ENC_PARAMS_RC_2_PASS_QUALITY ||    \
rc == NV_ENC_PARAMS_RC_2_PASS_FRAMESIZE_CAP)
#define LOAD_LIBRARY(l, path)                   \
do  while (0)
#define LOAD_SYMBOL(fun, lib, symbol)        \
do  while (0)
const enum AVPixelFormat ff_nvenc_pix_fmts[] = ;
#define IS_10BIT(pix_fmt) (pix_fmt == AV_PIX_FMT_P010 ||    \
pix_fmt == AV_PIX_FMT_YUV444P16)
#define IS_YUV444(pix_fmt) (pix_fmt == AV_PIX_FMT_YUV444P || \
pix_fmt == AV_PIX_FMT_YUV444P16)
static const struct  nvenc_errors[] = ;
static int nvenc_map_error(NVENCSTATUS err, const char **desc)
static int nvenc_print_error(void *log_ctx, NVENCSTATUS err,
const char *error_string)
static av_cold int nvenc_load_libraries(AVCodecContext *avctx)
static av_cold int nvenc_open_session(AVCodecContext *avctx)
static int nvenc_check_codec_support(AVCodecContext *avctx)
static int nvenc_check_cap(AVCodecContext *avctx, NV_ENC_CAPS cap)
static int nvenc_check_capabilities(AVCodecContext *avctx)
static av_cold int nvenc_check_device(AVCodecContext *avctx, int idx)
static av_cold int nvenc_setup_device(AVCodecContext *avctx)
typedef struct GUIDTuple  GUIDTuple;
#define PRESET_ALIAS(alias, name, ...) \
[PRESET_ ## alias] =
#define PRESET(name, ...) PRESET_ALIAS(name, name, __VA_ARGS__)
static void nvenc_map_preset(NvencContext *ctx)
#undef PRESET
#undef PRESET_ALIAS
static av_cold void set_constqp(AVCodecContext *avctx)
static av_cold void set_vbr(AVCodecContext *avctx)
static av_cold void set_lossless(AVCodecContext *avctx)
static void nvenc_override_rate_control(AVCodecContext *avctx)
static av_cold void nvenc_setup_rate_control(AVCodecContext *avctx)
static av_cold int nvenc_setup_h264_config(AVCodecContext *avctx)
static av_cold int nvenc_setup_hevc_config(AVCodecContext *avctx)
static av_cold int nvenc_setup_codec_config(AVCodecContext *avctx)
static av_cold int nvenc_setup_encoder(AVCodecContext *avctx)
static av_cold int nvenc_alloc_surface(AVCodecContext *avctx, int idx)
static av_cold int nvenc_setup_surfaces(AVCodecContext *avctx)
static av_cold int nvenc_setup_extradata(AVCodecContext *avctx)
av_cold int ff_nvenc_encode_close(AVCodecContext *avctx)
av_cold int ff_nvenc_encode_init(AVCodecContext *avctx)
static NvencSurface *get_free_frame(NvencContext *ctx)
static int nvenc_copy_frame(AVCodecContext *avctx, NvencSurface *nv_surface,
NV_ENC_LOCK_INPUT_BUFFER *lock_buffer_params, const AVFrame *frame)
static int nvenc_find_free_reg_resource(AVCodecContext *avctx)
static int nvenc_register_frame(AVCodecContext *avctx, const AVFrame *frame)
static int nvenc_upload_frame(AVCodecContext *avctx, const AVFrame *frame,
NvencSurface *nvenc_frame)
static void nvenc_codec_specific_pic_params(AVCodecContext *avctx,
NV_ENC_PIC_PARAMS *params)
static inline void timestamp_queue_enqueue(AVFifoBuffer* queue, int64_t timestamp)
static inline int64_t timestamp_queue_dequeue(AVFifoBuffer* queue)
static int nvenc_set_timestamp(AVCodecContext *avctx,
NV_ENC_LOCK_BITSTREAM *params,
AVPacket *pkt)
static int process_output_surface(AVCodecContext *avctx, AVPacket *pkt, NvencSurface *tmpoutsurf)
static int output_ready(AVCodecContext *avctx, int flush)
int ff_nvenc_encode_frame(AVCodecContext *avctx, AVPacket *pkt,
const AVFrame *frame, int *got_packet)
