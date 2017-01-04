#define AVUTIL_HWCONTEXT_H
enum AVHWDeviceType ;
typedef struct AVHWDeviceInternal AVHWDeviceInternal;
typedef struct AVHWDeviceContext  AVHWDeviceContext;
typedef struct AVHWFramesInternal AVHWFramesInternal;
typedef struct AVHWFramesContext  AVHWFramesContext;
AVBufferRef *av_hwdevice_ctx_alloc(enum AVHWDeviceType type);
int av_hwdevice_ctx_init(AVBufferRef *ref);
int av_hwdevice_ctx_create(AVBufferRef **device_ctx, enum AVHWDeviceType type,
const char *device, AVDictionary *opts, int flags);
AVBufferRef *av_hwframe_ctx_alloc(AVBufferRef *device_ctx);
int av_hwframe_ctx_init(AVBufferRef *ref);
int av_hwframe_get_buffer(AVBufferRef *hwframe_ctx, AVFrame *frame, int flags);
int av_hwframe_transfer_data(AVFrame *dst, const AVFrame *src, int flags);
enum AVHWFrameTransferDirection ;
int av_hwframe_transfer_get_formats(AVBufferRef *hwframe_ctx,
enum AVHWFrameTransferDirection dir,
enum AVPixelFormat **formats, int flags);
typedef struct AVHWFramesConstraints  AVHWFramesConstraints;
void *av_hwdevice_hwconfig_alloc(AVBufferRef *device_ctx);
AVHWFramesConstraints *av_hwdevice_get_hwframe_constraints(AVBufferRef *ref,
const void *hwconfig);
void av_hwframe_constraints_free(AVHWFramesConstraints **constraints);
