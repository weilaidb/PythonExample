#define __DIVA_SYNC__H
#define IDI_SYNC_REQ_REMOVE             0x00
#define IDI_SYNC_REQ_GET_NAME           0x01
#define IDI_SYNC_REQ_GET_SERIAL         0x02
#define IDI_SYNC_REQ_SET_POSTCALL       0x03
#define IDI_SYNC_REQ_GET_XLOG           0x04
#define IDI_SYNC_REQ_GET_FEATURES       0x05
#define IDI_SYNC_REQ_USB_REGISTER       0x06
#define IDI_SYNC_REQ_USB_RELEASE        0x07
#define IDI_SYNC_REQ_USB_ADD_DEVICE     0x08
#define IDI_SYNC_REQ_USB_START_DEVICE   0x09
#define IDI_SYNC_REQ_USB_STOP_DEVICE    0x0A
#define IDI_SYNC_REQ_USB_REMOVE_DEVICE  0x0B
#define IDI_SYNC_REQ_GET_CARDTYPE       0x0C
#define IDI_SYNC_REQ_GET_DBG_XLOG       0x0D
#define DIVA_USB
#define DIVA_USB_REQ                    0xAC
#define DIVA_USB_TEST                   0xAB
#define DIVA_USB_ADD_ADAPTER            0xAC
#define DIVA_USB_REMOVE_ADAPTER         0xAD
#define IDI_SYNC_REQ_SERIAL_HOOK        0x80
#define IDI_SYNC_REQ_XCHANGE_STATUS     0x81
#define IDI_SYNC_REQ_USB_HOOK           0x82
#define IDI_SYNC_REQ_PORTDRV_HOOK       0x83
#define IDI_SYNC_REQ_SLI                0x84
#define IDI_SYNC_REQ_RECONFIGURE        0x85
#define IDI_SYNC_REQ_RESET              0x86
#define IDI_SYNC_REQ_GET_85X_DEVICE_DATA     0x87
#define IDI_SYNC_REQ_LOCK_85X                   0x88
#define IDI_SYNC_REQ_DIVA_85X_USB_DATA_EXCHANGE 0x99
#define IDI_SYNC_REQ_DIPORT_EXCHANGE_REQ   0x98
#define IDI_SYNC_REQ_GET_85X_EXT_PORT_TYPE      0xA0
#define IDI_SYNC_REQ_XDI_GET_EXTENDED_FEATURES  0x92
typedef struct _diva_xdi_get_extended_xdi_features  diva_xdi_get_extended_xdi_features_t;
#define DIVA_XDI_EXTENDED_FEATURES_VALID          0x01
#define DIVA_XDI_EXTENDED_FEATURE_CMA             0x02
#define DIVA_XDI_EXTENDED_FEATURE_SDRAM_BAR       0x04
#define DIVA_XDI_EXTENDED_FEATURE_CAPI_PRMS       0x08
#define DIVA_XDI_EXTENDED_FEATURE_NO_CANCEL_RC    0x10
#define DIVA_XDI_EXTENDED_FEATURE_RX_DMA          0x20
#define DIVA_XDI_EXTENDED_FEATURE_MANAGEMENT_DMA  0x40
#define DIVA_XDI_EXTENDED_FEATURE_WIDE_ID         0x80
#define DIVA_XDI_EXTENDED_FEATURES_MAX_SZ    1
#define IDI_SYNC_REQ_XDI_GET_ADAPTER_SDRAM_BAR   0x93
typedef struct _diva_xdi_get_adapter_sdram_bar  diva_xdi_get_adapter_sdram_bar_t;
#define IDI_SYNC_REQ_XDI_GET_CAPI_PARAMS   0x94
typedef struct _diva_xdi_get_capi_parameters  diva_xdi_get_capi_parameters_t;
#define IDI_SYNC_REQ_XDI_GET_LOGICAL_ADAPTER_NUMBER   0x95
typedef struct _diva_xdi_get_logical_adapter_number  diva_xdi_get_logical_adapter_number_s_t;
#define IDI_SYNC_REQ_UP1DM_OPERATION   0x96
#define IDI_SYNC_REQ_DMA_DESCRIPTOR_OPERATION 0x97
#define IDI_SYNC_REQ_DMA_DESCRIPTOR_ALLOC     0x01
#define IDI_SYNC_REQ_DMA_DESCRIPTOR_FREE      0x02
typedef struct _diva_xdi_dma_descriptor_operation  diva_xdi_dma_descriptor_operation_t;
#define IDI_SYNC_REQ_DIDD_REGISTER_ADAPTER_NOTIFY   0x01
#define IDI_SYNC_REQ_DIDD_REMOVE_ADAPTER_NOTIFY     0x02
#define IDI_SYNC_REQ_DIDD_ADD_ADAPTER               0x03
#define IDI_SYNC_REQ_DIDD_REMOVE_ADAPTER            0x04
#define IDI_SYNC_REQ_DIDD_READ_ADAPTER_ARRAY        0x05
#define IDI_SYNC_REQ_DIDD_GET_CFG_LIB_IFC           0x10
typedef struct _diva_didd_adapter_notify  diva_didd_adapter_notify_t;
typedef struct _diva_didd_add_adapter  diva_didd_add_adapter_t;
typedef struct _diva_didd_remove_adapter  diva_didd_remove_adapter_t;
typedef struct _diva_didd_read_adapter_array  diva_didd_read_adapter_array_t;
typedef struct _diva_didd_get_cfg_lib_ifc  diva_didd_get_cfg_lib_ifc_t;
#define IDI_SYNC_REQ_XDI_GET_STREAM    0x91
#define DIVA_XDI_SYNCHRONOUS_SERVICE   0x01
#define DIVA_XDI_DMA_SERVICE           0x02
#define DIVA_XDI_AUTO_SERVICE          0x03
#define DIVA_ISTREAM_COMPLETE_NOTIFY   0
#define DIVA_ISTREAM_COMPLETE_READ     1
#define DIVA_ISTREAM_COMPLETE_WRITE    2
typedef struct _diva_xdi_stream_interface  diva_xdi_stream_interface_t;
typedef struct
SERIAL_STATE;
typedef int (  * SERIAL_INT_CB) (void *Context) ;
typedef int (  * SERIAL_DPC_CB) (void *Context) ;
typedef unsigned char (  * SERIAL_I_SYNC) (void *Context) ;
typedef struct
SERIAL_HOOK;
typedef struct
isdnProps ;
typedef void (  * PORTDRV_HOOK_CB) (void *Context, int Plug) ;
typedef struct
PORTDRV_HOOK ;
#define SLI_INSTALL     (0xA1)
#define SLI_UNINSTALL   (0xA2)
typedef int ( * SLIENTRYPOINT)(void* p3SignalAPI, void* pContext);
typedef struct
SLIENTRYPOINT_REQ ;
typedef int  (  * USB_SEND_REQ) (unsigned char PipeIndex, unsigned char Type,void *Data, int sizeData);
typedef int  (  * USB_START_DEV) (void *Adapter, void *Ipac) ;
typedef void (  * USB_RECV_NOTIFY) (void *Ipac, void *msg) ;
typedef void (  * USB_XMIT_NOTIFY) (void *Ipac, unsigned char PipeIndex) ;
typedef union
IDI_SYNC_REQ;
