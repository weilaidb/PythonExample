#if !defined(_WIN32_WINNT) || _WIN32_WINNT < 0x0600
#undef _WIN32_WINNT
#define _WIN32_WINNT 0x0600
#define DXVA2API_USE_BITFIELDS
#define COBJMACROS
pDirect3DCreate9;
pCreateDeviceManager9;
typedef struct DXVA2FramesContext  DXVA2FramesContext;
typedef struct DXVA2DevicePriv  DXVA2DevicePriv;
static const struct  supported_formats[] = ;
DEFINE_GUID(video_decoder_service,   0xfc51a551, 0xd5e7, 0x11d9, 0xaf, 0x55, 0x00, 0x05, 0x4e, 0x43, 0xff, 0x02);
DEFINE_GUID(video_processor_service, 0xfc51a552, 0xd5e7, 0x11d9, 0xaf, 0x55, 0x00, 0x05, 0x4e, 0x43, 0xff, 0x02);
dxva2_frames_uninit
*dxva2_pool_alloc
dxva2_init_pool
dxva2_frames_init
dxva2_get_buffer
dxva2_transfer_get_formats
dxva2_transfer_data
dxva2_device_free
dxva2_device_create
const HWContextType ff_hwcontext_type_dxva2 = ;
