#define CUDA_FRAME_ALIGNMENT 256
typedef struct CUDAFramesContext  CUDAFramesContext;
static const enum AVPixelFormat supported_formats[] = ;
static void cuda_buffer_free(void *opaque, uint8_t *data)
static AVBufferRef *cuda_pool_alloc(void *opaque, int size)
static int cuda_frames_init(AVHWFramesContext *ctx)
static int cuda_get_buffer(AVHWFramesContext *ctx, AVFrame *frame)
static int cuda_transfer_get_formats(AVHWFramesContext *ctx,
enum AVHWFrameTransferDirection dir,
enum AVPixelFormat **formats)
static int cuda_transfer_data_from(AVHWFramesContext *ctx, AVFrame *dst,
const AVFrame *src)
static int cuda_transfer_data_to(AVHWFramesContext *ctx, AVFrame *dst,
const AVFrame *src)
static void cuda_device_free(AVHWDeviceContext *ctx)
static int cuda_device_create(AVHWDeviceContext *ctx, const char *device,
AVDictionary *opts, int flags)
const HWContextType ff_hwcontext_type_cuda = ;
