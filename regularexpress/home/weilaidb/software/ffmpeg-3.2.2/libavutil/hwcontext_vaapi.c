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
MAP
static struct  vaapi_format_map[] = ;
#undef MAP
vaapi_pix_fmt_from_fourcc
vaapi_get_image_format
vaapi_frames_get_constraints
vaapi_device_init
vaapi_device_uninit
vaapi_buffer_free
*vaapi_pool_alloc
vaapi_frames_init
vaapi_frames_uninit
vaapi_get_buffer
vaapi_transfer_get_formats
vaapi_unmap_frame
vaapi_map_frame
vaapi_transfer_data_from
vaapi_transfer_data_to
vaapi_device_free
vaapi_device_create
const HWContextType ff_hwcontext_type_vaapi = ;
