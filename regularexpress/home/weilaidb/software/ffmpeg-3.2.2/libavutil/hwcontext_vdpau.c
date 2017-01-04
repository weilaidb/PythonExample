typedef struct VDPAUDeviceContext  VDPAUDeviceContext;
typedef struct VDPAUFramesContext  VDPAUFramesContext;
typedef struct VDPAUPixFmtMap  VDPAUPixFmtMap;
static const VDPAUPixFmtMap pix_fmts_420[] = ;
static const VDPAUPixFmtMap pix_fmts_422[] = ;
static const VDPAUPixFmtMap pix_fmts_444[] = ;
static const struct  vdpau_pix_fmts[] = ;
static int count_pixfmts(const VDPAUPixFmtMap *map)
static int vdpau_init_pixmfts(AVHWDeviceContext *ctx)
static int vdpau_device_init(AVHWDeviceContext *ctx)
#undef GET_CALLBACK
static void vdpau_device_uninit(AVHWDeviceContext *ctx)
static void vdpau_buffer_free(void *opaque, uint8_t *data)
static AVBufferRef *vdpau_pool_alloc(void *opaque, int size)
static int vdpau_frames_init(AVHWFramesContext *ctx)
static int vdpau_get_buffer(AVHWFramesContext *ctx, AVFrame *frame)
static int vdpau_transfer_get_formats(AVHWFramesContext *ctx,
enum AVHWFrameTransferDirection dir,
enum AVPixelFormat **formats)
static int vdpau_transfer_data_from(AVHWFramesContext *ctx, AVFrame *dst,
const AVFrame *src)
static int vdpau_transfer_data_to(AVHWFramesContext *ctx, AVFrame *dst,
const AVFrame *src)
#if HAVE_VDPAU_X11
typedef struct VDPAUDevicePriv  VDPAUDevicePriv;
static void vdpau_device_free(AVHWDeviceContext *ctx)
static int vdpau_device_create(AVHWDeviceContext *ctx, const char *device,
AVDictionary *opts, int flags)
const HWContextType ff_hwcontext_type_vdpau = ;
