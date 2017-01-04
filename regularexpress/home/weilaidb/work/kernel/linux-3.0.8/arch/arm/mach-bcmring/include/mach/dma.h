#if !defined(ASM_ARM_ARCH_BCMRING_DMA_H)
#define ASM_ARM_ARCH_BCMRING_DMA_H
#define DMA_DEBUG_TRACK_RESERVATION   1
#define DMA_NUM_CONTROLLERS     2
#define DMA_NUM_CHANNELS        8
typedef enum  DMA_Device_t;
#define DMA_INVALID_HANDLE  ((DMA_Handle_t) -1)
typedef int DMA_Handle_t;
typedef struct  DMA_DescriptorRing_t;
#define DMA_MEM_MAP_MIN_SIZE    4096
typedef enum  DMA_MemType_t;
typedef struct  DMA_Segment_t;
typedef struct  DMA_Region_t;
typedef struct  DMA_MemMap_t;
#define DMA_HANDLER_REASON_BLOCK_COMPLETE       dmacHw_INTERRUPT_STATUS_BLOCK
#define DMA_HANDLER_REASON_TRANSFER_COMPLETE    dmacHw_INTERRUPT_STATUS_TRANS
#define DMA_HANDLER_REASON_ERROR                dmacHw_INTERRUPT_STATUS_ERROR
typedef void (*DMA_DeviceHandler_t) (DMA_Device_t dev, int reason,
void *userData);
#define DMA_DEVICE_FLAG_ON_DMA0             0x00000001
#define DMA_DEVICE_FLAG_ON_DMA1             0x00000002
#define DMA_DEVICE_FLAG_PORT_PER_DMAC       0x00000004
#define DMA_DEVICE_FLAG_ALLOC_DMA1_FIRST    0x00000008
#define DMA_DEVICE_FLAG_IS_DEDICATED        0x00000100
#define DMA_DEVICE_FLAG_NO_ISR              0x00000200
#define DMA_DEVICE_FLAG_ALLOW_LARGE_FIFO    0x00000400
#define DMA_DEVICE_FLAG_IN_USE              0x00000800
typedef struct  DMA_DeviceAttribute_t;
#define DMA_CHANNEL_FLAG_IN_USE         0x00000001
#define DMA_CHANNEL_FLAG_IS_DEDICATED   0x00000002
#define DMA_CHANNEL_FLAG_NO_ISR         0x00000004
#define DMA_CHANNEL_FLAG_LARGE_FIFO     0x00000008
typedef struct  DMA_Channel_t;
typedef struct  DMA_Controller_t;
typedef struct  DMA_Global_t;
extern DMA_DeviceAttribute_t DMA_gDeviceAttribute[DMA_NUM_DEVICE_ENTRIES];
#if defined(__KERNEL__)
int dma_init(void);
#if (DMA_DEBUG_TRACK_RESERVATION)
DMA_Handle_t dma_request_channel_dbg(DMA_Device_t dev, const char *fileName,
int lineNum);
#define dma_request_channel(dev)  dma_request_channel_dbg(dev, __FILE__, __LINE__)
DMA_Handle_t dma_request_channel(DMA_Device_t dev
);
int dma_free_channel(DMA_Handle_t channel
);
int dma_device_is_channel_shared(DMA_Device_t dev
);
int dma_alloc_descriptor_ring(DMA_DescriptorRing_t *ring,
int numDescriptors
);
void dma_free_descriptor_ring(DMA_DescriptorRing_t *ring
);
int dma_init_descriptor_ring(DMA_DescriptorRing_t *ring,
int numDescriptors
);
int dma_calculate_descriptor_count(DMA_Device_t device,
dma_addr_t srcData,
dma_addr_t dstData,
size_t numBytes
);
int dma_add_descriptors(DMA_DescriptorRing_t *ring,
DMA_Device_t device,
dma_addr_t srcData,
dma_addr_t dstData,
size_t numBytes
);
int dma_set_device_descriptor_ring(DMA_Device_t device,
DMA_DescriptorRing_t *ring
);
int dma_get_device_descriptor_ring(DMA_Device_t device,
DMA_DescriptorRing_t *ring
);
int dma_alloc_descriptors(DMA_Handle_t handle,
dmacHw_TRANSFER_TYPE_e transferType,
dma_addr_t srcData,
dma_addr_t dstData,
size_t numBytes
);
int dma_alloc_double_dst_descriptors(DMA_Handle_t handle,
dma_addr_t srcData,
dma_addr_t dstData1,
dma_addr_t dstData2,
size_t numBytes
);
int dma_init_mem_map(DMA_MemMap_t *memMap
);
int dma_term_mem_map(DMA_MemMap_t *memMap
);
DMA_MemType_t dma_mem_type(void *addr);
static inline void dma_mem_map_set_user_task(DMA_MemMap_t *memMap,
struct task_struct *task)
int dma_mem_supports_dma(void *addr);
int dma_map_start(DMA_MemMap_t *memMap,
enum dma_data_direction dir
);
int dma_map_add_region(DMA_MemMap_t *memMap,
void *mem,
size_t numBytes
);
int dma_map_create_descriptor_ring(DMA_Device_t dev,
DMA_MemMap_t *memMap,
dma_addr_t devPhysAddr
);
int dma_map_mem(DMA_MemMap_t *memMap,
void *addr,
size_t count,
enum dma_data_direction dir
);
int dma_unmap(DMA_MemMap_t *memMap,
int dirtied
);
int dma_start_transfer(DMA_Handle_t handle);
int dma_stop_transfer(DMA_Handle_t handle);
int dma_wait_transfer_done(DMA_Handle_t handle);
int dma_transfer(DMA_Handle_t handle,
dmacHw_TRANSFER_TYPE_e transferType,
dma_addr_t srcData,
dma_addr_t dstData,
size_t numBytes
);
static inline int dma_transfer_to_device(DMA_Handle_t handle,
dma_addr_t srcData,
dma_addr_t dstData,
size_t numBytes
)
static inline int dma_transfer_from_device(DMA_Handle_t handle,
dma_addr_t srcData,
dma_addr_t dstData,
size_t numBytes
)
static inline int dma_transfer_mem_to_mem(DMA_Handle_t handle,
dma_addr_t srcData,
dma_addr_t dstData,
size_t numBytes
)
int dma_set_device_handler(DMA_Device_t dev,
DMA_DeviceHandler_t devHandler,
void *userData
);
