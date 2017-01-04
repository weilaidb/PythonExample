#if HAVE_VAAPI_X11
#   include <va/va_x11.h>
#if HAVE_VAAPI_DRM
#   include <va/va_drm.h>
#if HAVE_UNISTD_H
#   include <unistd.h>
typedef struct VAAPIDevicePriv  VAAPIDevicePriv;
typedef struct VAAPISurfaceFormat  VAAPISurfaceFormat;
typedef struct VAAPIDeviceContext  VAAPIDeviceContext;
typedef struct VAAPIFramesContext  VAAPIFramesContext;
enum ;
typedef struct VAAPISurfaceMap  VAAPISurfaceMap;
#define MAP(va, rt, av)
static struct  vaapi_format_map[] = ;
#undef MAP
static enum AVPixelFormat vaapi_pix_fmt_from_fourcc(unsigned int fourcc)
static int vaapi_get_image_format(AVHWDeviceContext *hwdev,
enum AVPixelFormat pix_fmt,
VAImageFormat **image_format)
static int vaapi_frames_get_constraints(AVHWDeviceContext *hwdev,
const void *hwconfig,
AVHWFramesConstraints *constraints)
static int vaapi_device_init(AVHWDeviceContext *hwdev)
static void vaapi_device_uninit(AVHWDeviceContext *hwdev)
static void vaapi_buffer_free(void *opaque, uint8_t *data)
static AVBufferRef *vaapi_pool_alloc(void *opaque, int size)
static int vaapi_frames_init(AVHWFramesContext *hwfc)
static void vaapi_frames_uninit(AVHWFramesContext *hwfc)
static int vaapi_get_buffer(AVHWFramesContext *hwfc, AVFrame *frame)
static int vaapi_transfer_get_formats(AVHWFramesContext *hwfc,
enum AVHWFrameTransferDirection dir,
enum AVPixelFormat **formats)
static void vaapi_unmap_frame(void *opaque, uint8_t *data)
static int vaapi_map_frame(AVHWFramesContext *hwfc,
AVFrame *dst, const AVFrame *src, int flags)
static int vaapi_transfer_data_from(AVHWFramesContext *hwfc,
AVFrame *dst, const AVFrame *src)
static int vaapi_transfer_data_to(AVHWFramesContext *hwfc,
AVFrame *dst, const AVFrame *src)
static void vaapi_device_free(AVHWDeviceContext *ctx)
static int vaapi_device_create(AVHWDeviceContext *ctx, const char *device,
AVDictionary *opts, int flags)
const HWContextType ff_hwcontext_type_vaapi = ;
