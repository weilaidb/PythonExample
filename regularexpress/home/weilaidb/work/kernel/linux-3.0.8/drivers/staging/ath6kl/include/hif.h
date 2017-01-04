#define _HIF_H_
typedef struct htc_callbacks HTC_CALLBACKS;
struct hif_device;
#define HIF_READ                    0x00000001
#define HIF_WRITE                   0x00000002
#define HIF_DIR_MASK                (HIF_READ | HIF_WRITE)
#define HIF_BASIC_IO                0x00000004
#define HIF_EXTENDED_IO             0x00000008
#define HIF_TYPE_MASK               (HIF_BASIC_IO | HIF_EXTENDED_IO)
#define HIF_SYNCHRONOUS             0x00000010
#define HIF_ASYNCHRONOUS            0x00000020
#define HIF_EMODE_MASK              (HIF_SYNCHRONOUS | HIF_ASYNCHRONOUS)
#define HIF_BYTE_BASIS              0x00000040
#define HIF_BLOCK_BASIS             0x00000080
#define HIF_DMODE_MASK              (HIF_BYTE_BASIS | HIF_BLOCK_BASIS)
#define HIF_FIXED_ADDRESS           0x00000100
#define HIF_INCREMENTAL_ADDRESS     0x00000200
#define HIF_AMODE_MASK              (HIF_FIXED_ADDRESS | HIF_INCREMENTAL_ADDRESS)
#define HIF_WR_ASYNC_BYTE_FIX   \
(HIF_WRITE | HIF_ASYNCHRONOUS | HIF_EXTENDED_IO | HIF_BYTE_BASIS | HIF_FIXED_ADDRESS)
#define HIF_WR_ASYNC_BYTE_INC   \
(HIF_WRITE | HIF_ASYNCHRONOUS | HIF_EXTENDED_IO | HIF_BYTE_BASIS | HIF_INCREMENTAL_ADDRESS)
#define HIF_WR_ASYNC_BLOCK_INC  \
(HIF_WRITE | HIF_ASYNCHRONOUS | HIF_EXTENDED_IO | HIF_BLOCK_BASIS | HIF_INCREMENTAL_ADDRESS)
#define HIF_WR_SYNC_BYTE_FIX    \
(HIF_WRITE | HIF_SYNCHRONOUS | HIF_EXTENDED_IO | HIF_BYTE_BASIS | HIF_FIXED_ADDRESS)
#define HIF_WR_SYNC_BYTE_INC    \
(HIF_WRITE | HIF_SYNCHRONOUS | HIF_EXTENDED_IO | HIF_BYTE_BASIS | HIF_INCREMENTAL_ADDRESS)
#define HIF_WR_SYNC_BLOCK_INC  \
(HIF_WRITE | HIF_SYNCHRONOUS | HIF_EXTENDED_IO | HIF_BLOCK_BASIS | HIF_INCREMENTAL_ADDRESS)
#define HIF_WR_ASYNC_BLOCK_FIX \
(HIF_WRITE | HIF_ASYNCHRONOUS | HIF_EXTENDED_IO | HIF_BLOCK_BASIS | HIF_FIXED_ADDRESS)
#define HIF_WR_SYNC_BLOCK_FIX  \
(HIF_WRITE | HIF_SYNCHRONOUS | HIF_EXTENDED_IO | HIF_BLOCK_BASIS | HIF_FIXED_ADDRESS)
#define HIF_RD_SYNC_BYTE_INC    \
(HIF_READ | HIF_SYNCHRONOUS | HIF_EXTENDED_IO | HIF_BYTE_BASIS | HIF_INCREMENTAL_ADDRESS)
#define HIF_RD_SYNC_BYTE_FIX    \
(HIF_READ | HIF_SYNCHRONOUS | HIF_EXTENDED_IO | HIF_BYTE_BASIS | HIF_FIXED_ADDRESS)
#define HIF_RD_ASYNC_BYTE_FIX   \
(HIF_READ | HIF_ASYNCHRONOUS | HIF_EXTENDED_IO | HIF_BYTE_BASIS | HIF_FIXED_ADDRESS)
#define HIF_RD_ASYNC_BLOCK_FIX  \
(HIF_READ | HIF_ASYNCHRONOUS | HIF_EXTENDED_IO | HIF_BLOCK_BASIS | HIF_FIXED_ADDRESS)
#define HIF_RD_ASYNC_BYTE_INC   \
(HIF_READ | HIF_ASYNCHRONOUS | HIF_EXTENDED_IO | HIF_BYTE_BASIS | HIF_INCREMENTAL_ADDRESS)
#define HIF_RD_ASYNC_BLOCK_INC  \
(HIF_READ | HIF_ASYNCHRONOUS | HIF_EXTENDED_IO | HIF_BLOCK_BASIS | HIF_INCREMENTAL_ADDRESS)
#define HIF_RD_SYNC_BLOCK_INC  \
(HIF_READ | HIF_SYNCHRONOUS | HIF_EXTENDED_IO | HIF_BLOCK_BASIS | HIF_INCREMENTAL_ADDRESS)
#define HIF_RD_SYNC_BLOCK_FIX  \
(HIF_READ | HIF_SYNCHRONOUS | HIF_EXTENDED_IO | HIF_BLOCK_BASIS | HIF_FIXED_ADDRESS)
typedef enum  HIF_DEVICE_CONFIG_OPCODE;
struct hif_mbox_properties ;
#define HIF_MBOX_FLAG_NO_BUNDLING   (1 << 0)
typedef enum _MBOX_BUF_IF_TYPE  MBOX_BUF_IF_TYPE;
struct hif_device_mbox_info ;
typedef enum  HIF_DEVICE_IRQ_PROCESSING_MODE;
typedef enum  HIF_DEVICE_POWER_CHANGE_TYPE;
struct hif_device_irq_yield_params ;
struct hif_scatter_item ;
struct hif_scatter_req;
typedef void ( *HIF_SCATTER_COMP_CB)(struct hif_scatter_req *);
typedef enum _HIF_SCATTER_METHOD  HIF_SCATTER_METHOD;
struct hif_scatter_req ;
typedef struct hif_scatter_req * ( *HIF_ALLOCATE_SCATTER_REQUEST)(struct hif_device *device);
typedef void ( *HIF_FREE_SCATTER_REQUEST)(struct hif_device *device, struct hif_scatter_req *request);
typedef int ( *HIF_READWRITE_SCATTER)(struct hif_device *device, struct hif_scatter_req *request);
struct hif_device_scatter_support_info ;
struct hif_device_os_device_info ;
#define HIF_MAX_DEVICES                 1
struct htc_callbacks ;
typedef struct osdrv_callbacks  OSDRV_CALLBACKS;
#define HIF_OTHER_EVENTS     (1 << 0)
#define HIF_RECV_MSG_AVAIL   (1 << 1)
struct hif_pending_events_info ;
typedef int ( *HIF_PENDING_EVENTS_FUNC)(struct hif_device              *device,
struct hif_pending_events_info *pEvents,
void                    *AsyncContext);
#define HIF_MASK_RECV    true
#define HIF_UNMASK_RECV  false
typedef int ( *HIF_MASK_UNMASK_RECV_EVENT)(struct hif_device  *device,
bool      Mask,
void        *AsyncContext);
int HIFInit(OSDRV_CALLBACKS *callbacks);
void HIFClaimDevice(struct hif_device *device, void *claimedContext);
void HIFReleaseDevice(struct hif_device *device);
int HIFAttachHTC(struct hif_device *device, HTC_CALLBACKS *callbacks);
void     HIFDetachHTC(struct hif_device *device);
int
HIFReadWrite(struct hif_device    *device,
u32 address,
u8       *buffer,
u32 length,
u32 request,
void          *context);
void HIFShutDownDevice(struct hif_device *device);
void HIFAckInterrupt(struct hif_device *device);
void HIFMaskInterrupt(struct hif_device *device);
void HIFUnMaskInterrupt(struct hif_device *device);
int HIFInsertEventNotify(void);
int HIFRemoveEventNotify(void);
int HIFIRQEventNotify(void);
int HIFRWCompleteEventNotify(void);
int
HIFConfigureDevice(struct hif_device *device, HIF_DEVICE_CONFIG_OPCODE opcode,
void *config, u32 configLen);
int hifWaitForPendingRecv(struct hif_device *device);
