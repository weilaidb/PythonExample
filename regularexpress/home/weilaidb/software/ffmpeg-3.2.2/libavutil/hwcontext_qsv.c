#if CONFIG_VAAPI
#if CONFIG_DXVA2
typedef struct QSVDevicePriv  QSVDevicePriv;
typedef struct QSVDeviceContext  QSVDeviceContext;
typedef struct QSVFramesContext  QSVFramesContext;
static const struct  supported_handle_types[] = ;
static const struct  supported_pixel_formats[] = ;
qsv_device_init
qsv_frames_uninit
qsv_pool_release_dummy
*qsv_pool_alloc
qsv_init_child_ctx
qsv_init_pool
frame_alloc
frame_free
frame_lock
frame_unlock
frame_get_hdl
qsv_init_internal_session
qsv_frames_init
qsv_get_buffer
qsv_transfer_get_formats
qsv_transfer_data_from
qsv_transfer_data_to
qsv_frames_get_constraints
qsv_device_free
choose_implementation
qsv_device_create
const HWContextType ff_hwcontext_type_qsv = ;
