#if defined(_WIN32)
#if defined(_WIN32)
#define CUDAAPI __stdcall
#define CUDAAPI
#if defined(_WIN32)
#define LOAD_FUNC(l, s) GetProcAddress(l, s)
#define DL_CLOSE_FUNC(l) FreeLibrary(l)
#define LOAD_FUNC(l, s) dlsym(l, s)
#define DL_CLOSE_FUNC(l) dlclose(l)
typedef enum cudaError_enum  CUresult;
typedef int CUdevice;
typedef void* CUcontext;
typedef CUresult(CUDAAPI *PCUINIT)(unsigned int Flags);
typedef CUresult(CUDAAPI *PCUDEVICEGETCOUNT)(int *count);
typedef CUresult(CUDAAPI *PCUDEVICEGET)(CUdevice *device, int ordinal);
typedef CUresult(CUDAAPI *PCUDEVICEGETNAME)(char *name, int len, CUdevice dev);
typedef CUresult(CUDAAPI *PCUDEVICECOMPUTECAPABILITY)(int *major, int *minor, CUdevice dev);
typedef CUresult(CUDAAPI *PCUCTXCREATE)(CUcontext *pctx, unsigned int flags, CUdevice dev);
typedef CUresult(CUDAAPI *PCUCTXPOPCURRENT)(CUcontext *pctx);
typedef CUresult(CUDAAPI *PCUCTXDESTROY)(CUcontext ctx);
typedef NVENCSTATUS (NVENCAPI* PNVENCODEAPICREATEINSTANCE)(NV_ENCODE_API_FUNCTION_LIST *functionList);
typedef struct NvencInputSurface
NvencInputSurface;
typedef struct NvencOutputSurface
NvencOutputSurface;
typedef struct NvencData
NvencData;
typedef struct NvencDataList
NvencDataList;
typedef struct NvencDynLoadFunctions
NvencDynLoadFunctions;
typedef struct NvencValuePair
NvencValuePair;
typedef struct NvencContext
NvencContext;
static const NvencValuePair nvenc_h264_level_pairs[] = ;
static const NvencValuePair nvenc_hevc_level_pairs[] = ;
static int input_string_to_uint32(AVCodecContext *avctx, const NvencValuePair *pair, const char *input, uint32_t *output)
static NvencData* data_queue_dequeue(NvencDataList* queue)
static int data_queue_enqueue(NvencDataList* queue, NvencData *data)
static int out_surf_queue_enqueue(NvencDataList* queue, NvencOutputSurface* surface)
static NvencOutputSurface* out_surf_queue_dequeue(NvencDataList* queue)
static int timestamp_queue_enqueue(NvencDataList* queue, int64_t timestamp)
static int64_t timestamp_queue_dequeue(NvencDataList* queue)
#define CHECK_LOAD_FUNC(t, f, s) \
do  while (0)
static av_cold int nvenc_dyload_cuda(AVCodecContext *avctx)
static av_cold int check_cuda_errors(AVCodecContext *avctx, CUresult err, const char *func)
#define check_cuda_errors(f) if (!check_cuda_errors(avctx, f, #f)) goto error
static av_cold int nvenc_check_cuda(AVCodecContext *avctx)
static av_cold int nvenc_dyload_nvenc(AVCodecContext *avctx)
static av_cold void nvenc_unload_nvenc(AVCodecContext *avctx)
static av_cold int nvenc_encode_init(AVCodecContext *avctx)
static av_cold int nvenc_encode_close(AVCodecContext *avctx)
static int process_output_surface(AVCodecContext *avctx, AVPacket *pkt, NvencOutputSurface *tmpoutsurf)
static int nvenc_encode_frame(AVCodecContext *avctx, AVPacket *pkt,
const AVFrame *frame, int *got_packet)
static const enum AVPixelFormat pix_fmts_nvenc[] = ;
#define OFFSET(x) offsetof(NvencContext, x)
#define VE AV_OPT_FLAG_VIDEO_PARAM | AV_OPT_FLAG_ENCODING_PARAM
static const AVOption options[] = ;
static const AVCodecDefault nvenc_defaults[] = ;
#if CONFIG_NVENC_ENCODER
static const AVClass nvenc_class = ;
AVCodec ff_nvenc_encoder = ;
#if CONFIG_NVENC_H264_ENCODER
static const AVClass nvenc_h264_class = ;
AVCodec ff_nvenc_h264_encoder = ;
#if CONFIG_NVENC_HEVC_ENCODER
static const AVClass nvenc_hevc_class = ;
AVCodec ff_nvenc_hevc_encoder = ;
