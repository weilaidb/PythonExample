#if CONFIG_VAAPI
#if CONFIG_DXVA2
typedef struct QSVDevicePriv  QSVDevicePriv;
typedef struct QSVDeviceContext  QSVDeviceContext;
typedef struct QSVFramesContext  QSVFramesContext;
static const struct  supported_handle_types[] = ;
static const struct  supported_pixel_formats[] = ;
static int qsv_device_init(AVHWDeviceContext *ctx)
static void qsv_frames_uninit(AVHWFramesContext *ctx)
static void qsv_pool_release_dummy(void *opaque, uint8_t *data)
static AVBufferRef *qsv_pool_alloc(void *opaque, int size)
static int qsv_init_child_ctx(AVHWFramesContext *ctx)
static int qsv_init_pool(AVHWFramesContext *ctx, uint32_t fourcc)
static mfxStatus frame_alloc(mfxHDL pthis, mfxFrameAllocRequest *req,
mfxFrameAllocResponse *resp)
static mfxStatus frame_free(mfxHDL pthis, mfxFrameAllocResponse *resp)
static mfxStatus frame_lock(mfxHDL pthis, mfxMemId mid, mfxFrameData *ptr)
static mfxStatus frame_unlock(mfxHDL pthis, mfxMemId mid, mfxFrameData *ptr)
static mfxStatus frame_get_hdl(mfxHDL pthis, mfxMemId mid, mfxHDL *hdl)
static int qsv_init_internal_session(AVHWFramesContext *ctx,
mfxSession *session, int upload)
static int qsv_frames_init(AVHWFramesContext *ctx)
static int qsv_get_buffer(AVHWFramesContext *ctx, AVFrame *frame)
static int qsv_transfer_get_formats(AVHWFramesContext *ctx,
enum AVHWFrameTransferDirection dir,
enum AVPixelFormat **formats)
static int qsv_transfer_data_from(AVHWFramesContext *ctx, AVFrame *dst,
const AVFrame *src)
static int qsv_transfer_data_to(AVHWFramesContext *ctx, AVFrame *dst,
const AVFrame *src)
static int qsv_frames_get_constraints(AVHWDeviceContext *ctx,
const void *hwconfig,
AVHWFramesConstraints *constraints)
static void qsv_device_free(AVHWDeviceContext *ctx)
static mfxIMPL choose_implementation(const char *device)
static int qsv_device_create(AVHWDeviceContext *ctx, const char *device,
AVDictionary *opts, int flags)
const HWContextType ff_hwcontext_type_qsv = ;
