static const HWContextType *hw_table[] = ;
static const AVClass hwdevice_ctx_class = ;
static void hwdevice_ctx_free(void *opaque, uint8_t *data)
AVBufferRef *av_hwdevice_ctx_alloc(enum AVHWDeviceType type)
int av_hwdevice_ctx_init(AVBufferRef *ref)
static const AVClass hwframe_ctx_class = ;
static void hwframe_ctx_free(void *opaque, uint8_t *data)
AVBufferRef *av_hwframe_ctx_alloc(AVBufferRef *device_ref_in)
static int hwframe_pool_prealloc(AVBufferRef *ref)
int av_hwframe_ctx_init(AVBufferRef *ref)
int av_hwframe_transfer_get_formats(AVBufferRef *hwframe_ref,
enum AVHWFrameTransferDirection dir,
enum AVPixelFormat **formats, int flags)
static int transfer_data_alloc(AVFrame *dst, const AVFrame *src, int flags)
int av_hwframe_transfer_data(AVFrame *dst, const AVFrame *src, int flags)
int av_hwframe_get_buffer(AVBufferRef *hwframe_ref, AVFrame *frame, int flags)
void *av_hwdevice_hwconfig_alloc(AVBufferRef *ref)
AVHWFramesConstraints *av_hwdevice_get_hwframe_constraints(AVBufferRef *ref,
const void *hwconfig)
void av_hwframe_constraints_free(AVHWFramesConstraints **constraints)
int av_hwdevice_ctx_create(AVBufferRef **pdevice_ref, enum AVHWDeviceType type,
const char *device, AVDictionary *opts, int flags)
