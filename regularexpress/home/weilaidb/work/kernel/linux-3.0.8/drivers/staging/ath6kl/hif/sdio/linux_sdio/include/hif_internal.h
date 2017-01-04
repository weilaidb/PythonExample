#define _HIF_INTERNAL_H_
#define HIF_LINUX_MMC_SCATTER_SUPPORT
#define BUS_REQUEST_MAX_NUM                64
#define SDIO_CLOCK_FREQUENCY_DEFAULT       25000000
#define SDWLAN_ENABLE_DISABLE_TIMEOUT      20
#define FLAGS_CARD_ENAB                    0x02
#define FLAGS_CARD_IRQ_UNMSK               0x04
#define HIF_MBOX_BLOCK_SIZE                HIF_DEFAULT_IO_BLOCK_SIZE
#define HIF_MBOX0_BLOCK_SIZE               1
#define HIF_MBOX1_BLOCK_SIZE               HIF_MBOX_BLOCK_SIZE
#define HIF_MBOX2_BLOCK_SIZE               HIF_MBOX_BLOCK_SIZE
#define HIF_MBOX3_BLOCK_SIZE               HIF_MBOX_BLOCK_SIZE
typedef struct bus_request  BUS_REQUEST;
struct hif_device ;
#define HIF_DMA_BUFFER_SIZE (32 * 1024)
#define CMD53_FIXED_ADDRESS 1
#define CMD53_INCR_ADDRESS  2
BUS_REQUEST *hifAllocateBusRequest(struct hif_device *device);
void hifFreeBusRequest(struct hif_device *device, BUS_REQUEST *busrequest);
void AddToAsyncList(struct hif_device *device, BUS_REQUEST *busrequest);
#define MAX_SCATTER_REQUESTS             4
#define MAX_SCATTER_ENTRIES_PER_REQ      16
#define MAX_SCATTER_REQ_TRANSFER_SIZE    32*1024
struct hif_scatter_req_priv ;
#define ATH_DEBUG_SCATTER  ATH_DEBUG_MAKE_MODULE_MASK(0)
int SetupHIFScatterSupport(struct hif_device *device, struct hif_device_scatter_support_info *pInfo);
void CleanupHIFScatterResources(struct hif_device *device);
int DoHifReadWriteScatter(struct hif_device *device, BUS_REQUEST *busrequest);
static inline int SetupHIFScatterSupport(struct hif_device *device, struct hif_device_scatter_support_info *pInfo)
static inline int DoHifReadWriteScatter(struct hif_device *device, BUS_REQUEST *busrequest)
#define CleanupHIFScatterResources(d)
