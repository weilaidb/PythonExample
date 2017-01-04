#if !defined(_WIN32_WINNT) || _WIN32_WINNT < 0x0600
#undef _WIN32_WINNT
#define _WIN32_WINNT 0x0600
#define DXVA2API_USE_BITFIELDS
#define COBJMACROS
typedef IDirect3D9* WINAPI pDirect3DCreate9(UINT);
typedef HRESULT WINAPI pCreateDeviceManager9(UINT *, IDirect3DDeviceManager9 **);
typedef struct DXVA2FramesContext  DXVA2FramesContext;
typedef struct DXVA2DevicePriv  DXVA2DevicePriv;
static const struct  supported_formats[] = ;
DEFINE_GUID(video_decoder_service,   0xfc51a551, 0xd5e7, 0x11d9, 0xaf, 0x55, 0x00, 0x05, 0x4e, 0x43, 0xff, 0x02);
DEFINE_GUID(video_processor_service, 0xfc51a552, 0xd5e7, 0x11d9, 0xaf, 0x55, 0x00, 0x05, 0x4e, 0x43, 0xff, 0x02);
static void dxva2_frames_uninit(AVHWFramesContext *ctx)
static AVBufferRef *dxva2_pool_alloc(void *opaque, int size)
static int dxva2_init_pool(AVHWFramesContext *ctx)
static int dxva2_frames_init(AVHWFramesContext *ctx)
static int dxva2_get_buffer(AVHWFramesContext *ctx, AVFrame *frame)
static int dxva2_transfer_get_formats(AVHWFramesContext *ctx,
enum AVHWFrameTransferDirection dir,
enum AVPixelFormat **formats)
static int dxva2_transfer_data(AVHWFramesContext *ctx, AVFrame *dst,
const AVFrame *src)
static void dxva2_device_free(AVHWDeviceContext *ctx)
static int dxva2_device_create(AVHWDeviceContext *ctx, const char *device,
AVDictionary *opts, int flags)
const HWContextType ff_hwcontext_type_dxva2 = ;
