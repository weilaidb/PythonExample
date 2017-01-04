#define ATH_MODULE_NAME hif
#define _CMD53_ARG_READ          0
#define _CMD53_ARG_WRITE         1
#define _CMD53_ARG_BLOCK_BASIS   1
#define _CMD53_ARG_FIXED_ADDRESS 0
#define _CMD53_ARG_INCR_ADDRESS  1
#define SDIO_SET_CMD53_ARG(arg,rw,func,mode,opcode,address,bytes_blocks) \
(arg) = (((rw) & 1) << 31)                  | \
(((func) & 0x7) << 28)              | \
(((mode) & 1) << 27)                | \
(((opcode) & 1) << 26)              | \
(((address) & 0x1FFFF) << 9)        | \
((bytes_blocks) & 0x1FF)
static void FreeScatterReq(struct hif_device *device, struct hif_scatter_req *pReq)
static struct hif_scatter_req *AllocScatterReq(struct hif_device *device)
int DoHifReadWriteScatter(struct hif_device *device, BUS_REQUEST *busrequest)
static int HifReadWriteScatter(struct hif_device *device, struct hif_scatter_req *pReq)
int SetupHIFScatterSupport(struct hif_device *device, struct hif_device_scatter_support_info *pInfo)
void CleanupHIFScatterResources(struct hif_device *device)
