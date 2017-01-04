#define ALLOW_MAP_OF_KMALLOC_MEMORY 0
#define MAKE_HANDLE(controllerIdx, channelIdx)    (((controllerIdx) << 4) | (channelIdx))
#define CONTROLLER_FROM_HANDLE(handle)    (((handle) >> 4) & 0x0f)
#define CHANNEL_FROM_HANDLE(handle)       ((handle) & 0x0f)
#define DMA_MAP_DEBUG   0
#if DMA_MAP_DEBUG
#   define  DMA_MAP_PRINT(fmt, args...)   printk("%s: " fmt, __func__,  ## args)
#   define  DMA_MAP_PRINT(fmt, args...)
static DMA_Global_t gDMA;
static struct proc_dir_entry *gDmaDir;
static atomic_t gDmaStatMemTypeKmalloc = ATOMIC_INIT(0);
static atomic_t gDmaStatMemTypeVmalloc = ATOMIC_INIT(0);
static atomic_t gDmaStatMemTypeUser = ATOMIC_INIT(0);
static atomic_t gDmaStatMemTypeCoherent = ATOMIC_INIT(0);
static int dma_proc_read_mem_type(char *buf, char **start, off_t offset,
int count, int *eof, void *data)
static int dma_proc_read_channels(char *buf, char **start, off_t offset,
int count, int *eof, void *data)
static int dma_proc_read_devices(char *buf, char **start, off_t offset,
int count, int *eof, void *data)
static inline int IsDeviceValid(DMA_Device_t device)
static inline DMA_Channel_t *HandleToChannel(DMA_Handle_t handle)
static irqreturn_t dma_interrupt_handler(int irq, void *dev_id)
int dma_alloc_descriptor_ring(DMA_DescriptorRing_t *ring,
int numDescriptors
)
EXPORT_SYMBOL(dma_alloc_descriptor_ring);
void dma_free_descriptor_ring(DMA_DescriptorRing_t *ring
)
EXPORT_SYMBOL(dma_free_descriptor_ring);
int dma_init_descriptor_ring(DMA_DescriptorRing_t *ring,
int numDescriptors
)
EXPORT_SYMBOL(dma_init_descriptor_ring);
int dma_calculate_descriptor_count(DMA_Device_t device,
dma_addr_t srcData,
dma_addr_t dstData,
size_t numBytes
)
EXPORT_SYMBOL(dma_calculate_descriptor_count);
int dma_add_descriptors(DMA_DescriptorRing_t *ring,
DMA_Device_t device,
dma_addr_t srcData,
dma_addr_t dstData,
size_t numBytes
)
EXPORT_SYMBOL(dma_add_descriptors);
int dma_set_device_descriptor_ring(DMA_Device_t device,
DMA_DescriptorRing_t *ring
)
EXPORT_SYMBOL(dma_set_device_descriptor_ring);
int dma_get_device_descriptor_ring(DMA_Device_t device,
DMA_DescriptorRing_t *ring
)
EXPORT_SYMBOL(dma_get_device_descriptor_ring);
static int ConfigChannel(DMA_Handle_t handle)
int dma_init(void)
#if (DMA_DEBUG_TRACK_RESERVATION)
DMA_Handle_t dma_request_channel_dbg
(DMA_Device_t dev, const char *fileName, int lineNum)
DMA_Handle_t dma_request_channel(DMA_Device_t dev)
#if (DMA_DEBUG_TRACK_RESERVATION)
#undef dma_request_channel
DMA_Handle_t dma_request_channel(DMA_Device_t dev)
EXPORT_SYMBOL(dma_request_channel_dbg);
EXPORT_SYMBOL(dma_request_channel);
int dma_free_channel(DMA_Handle_t handle
)
EXPORT_SYMBOL(dma_free_channel);
int dma_device_is_channel_shared(DMA_Device_t device
)
EXPORT_SYMBOL(dma_device_is_channel_shared);
int dma_alloc_descriptors(DMA_Handle_t handle,
dmacHw_TRANSFER_TYPE_e transferType,
dma_addr_t srcData,
dma_addr_t dstData,
size_t numBytes
)
EXPORT_SYMBOL(dma_alloc_descriptors);
int dma_alloc_double_dst_descriptors(DMA_Handle_t handle,
dma_addr_t srcData,
dma_addr_t dstData1,
dma_addr_t dstData2,
size_t numBytes
)
EXPORT_SYMBOL(dma_alloc_double_dst_descriptors);
int dma_start_transfer(DMA_Handle_t handle)
EXPORT_SYMBOL(dma_start_transfer);
int dma_stop_transfer(DMA_Handle_t handle)
EXPORT_SYMBOL(dma_stop_transfer);
int dma_wait_transfer_done(DMA_Handle_t handle)
EXPORT_SYMBOL(dma_wait_transfer_done);
int dma_transfer(DMA_Handle_t handle,
dmacHw_TRANSFER_TYPE_e transferType,
dma_addr_t srcData,
dma_addr_t dstData,
size_t numBytes
)
EXPORT_SYMBOL(dma_transfer);
int dma_set_device_handler(DMA_Device_t dev,
DMA_DeviceHandler_t devHandler,
void *userData
)
EXPORT_SYMBOL(dma_set_device_handler);
int dma_init_mem_map(DMA_MemMap_t *memMap)
EXPORT_SYMBOL(dma_init_mem_map);
int dma_term_mem_map(DMA_MemMap_t *memMap)
EXPORT_SYMBOL(dma_term_mem_map);
DMA_MemType_t dma_mem_type(void *addr)
EXPORT_SYMBOL(dma_mem_type);
int dma_mem_supports_dma(void *addr)
EXPORT_SYMBOL(dma_mem_supports_dma);
int dma_map_start(DMA_MemMap_t *memMap,
enum dma_data_direction dir
)
EXPORT_SYMBOL(dma_map_start);
static int dma_map_add_segment(DMA_MemMap_t *memMap,
DMA_Region_t *region,
void *virtAddr,
dma_addr_t physAddr,
size_t numBytes
)
int dma_map_add_region(DMA_MemMap_t *memMap,
void *mem,
size_t numBytes
)
EXPORT_SYMBOL(dma_map_add_segment);
int dma_map_mem(DMA_MemMap_t *memMap,
void *mem,
size_t numBytes,
enum dma_data_direction dir
)
EXPORT_SYMBOL(dma_map_mem);
int dma_map_create_descriptor_ring(DMA_Device_t dev,
DMA_MemMap_t *memMap,
dma_addr_t devPhysAddr
)
EXPORT_SYMBOL(dma_map_create_descriptor_ring);
int dma_unmap(DMA_MemMap_t *memMap,
int dirtied
)
EXPORT_SYMBOL(dma_unmap);
