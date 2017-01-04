#define HIF_USE_DMA_BOUNCE_BUFFER 1
#define ATH_MODULE_NAME hif
#if HIF_USE_DMA_BOUNCE_BUFFER
#define BUFFER_NEEDS_BOUNCE(buffer)  (((unsigned long)(buffer) & 0x3) || !virt_addr_valid((buffer)))
#define BUFFER_NEEDS_BOUNCE(buffer)   (false)
#if defined(CONFIG_PM)
#define dev_to_sdio_func(d)	container_of(d, struct sdio_func, dev)
#define to_sdio_driver(d)      container_of(d, struct sdio_driver, drv)
static void delHifDevice(struct hif_device * device);
static int Func0_CMD52WriteByte(struct mmc_card *card, unsigned int address, unsigned char byte);
static int Func0_CMD52ReadByte(struct mmc_card *card, unsigned int address, unsigned char *byte);
static int hifEnableFunc(struct hif_device *device, struct sdio_func *func);
static int hifDisableFunc(struct hif_device *device, struct sdio_func *func);
OSDRV_CALLBACKS osdrvCallbacks;
int reset_sdio_on_unload = 0;
module_param(reset_sdio_on_unload, int, 0644);
extern u32 nohifscattersupport;
static struct hif_device *ath6kl_alloc_hifdev(struct sdio_func *func)
static struct hif_device *ath6kl_get_hifdev(struct sdio_func *func)
static const struct sdio_device_id ath6kl_hifdev_ids[] = ;
MODULE_DEVICE_TABLE(sdio, ath6kl_hifdev_ids);
static int ath6kl_hifdev_probe(struct sdio_func *func,
const struct sdio_device_id *id)
static void ath6kl_hifdev_remove(struct sdio_func *func)
#if defined(CONFIG_PM)
static int ath6kl_hifdev_suspend(struct device *dev)
static int ath6kl_hifdev_resume(struct device *dev)
static const struct dev_pm_ops ath6kl_hifdev_pmops = ;
static struct sdio_driver ath6kl_hifdev_driver = ;
static int registered = 0;
extern u32 onebitmode;
extern u32 busspeedlow;
extern u32 debughif;
static void ResetAllCards(void);
ATH_DEBUG_INSTANTIATE_MODULE_VAR(hif,
"hif",
"(Linux MMC) Host Interconnect Framework",
ATH_DEBUG_MASK_DEFAULTS,
0,
NULL);
int HIFInit(OSDRV_CALLBACKS *callbacks)
static int
__HIFReadWrite(struct hif_device *device,
u32 address,
u8 *buffer,
u32 length,
u32 request,
void *context)
void AddToAsyncList(struct hif_device *device, BUS_REQUEST *busrequest)
int
HIFReadWrite(struct hif_device *device,
u32 address,
u8 *buffer,
u32 length,
u32 request,
void *context)
static int async_task(void *param)
static s32 IssueSDCommand(struct hif_device *device, u32 opcode, u32 arg, u32 flags, u32 *resp)
int ReinitSDIO(struct hif_device *device)
int
PowerStateChangeNotify(struct hif_device *device, HIF_DEVICE_POWER_CHANGE_TYPE config)
int
HIFConfigureDevice(struct hif_device *device, HIF_DEVICE_CONFIG_OPCODE opcode,
void *config, u32 configLen)
void
HIFShutDownDevice(struct hif_device *device)
static void
hifIRQHandler(struct sdio_func *func)
static int startup_task(void *param)
#if defined(CONFIG_PM)
static int enable_task(void *param)
void
HIFAckInterrupt(struct hif_device *device)
void
HIFUnMaskInterrupt(struct hif_device *device)
void HIFMaskInterrupt(struct hif_device *device)
BUS_REQUEST *hifAllocateBusRequest(struct hif_device *device)
void
hifFreeBusRequest(struct hif_device *device, BUS_REQUEST *busrequest)
static int hifDisableFunc(struct hif_device *device, struct sdio_func *func)
static int hifEnableFunc(struct hif_device *device, struct sdio_func *func)
int hifWaitForPendingRecv(struct hif_device *device)
static void
delHifDevice(struct hif_device * device)
static void ResetAllCards(void)
void HIFClaimDevice(struct hif_device  *device, void *context)
void HIFReleaseDevice(struct hif_device  *device)
int HIFAttachHTC(struct hif_device *device, HTC_CALLBACKS *callbacks)
void HIFDetachHTC(struct hif_device *device)
#define SDIO_SET_CMD52_ARG(arg,rw,func,raw,address,writedata) \
(arg) = (((rw) & 1) << 31)           | \
(((func) & 0x7) << 28)       | \
(((raw) & 1) << 27)          | \
(1 << 26)                    | \
(((address) & 0x1FFFF) << 9) | \
(1 << 8)                     | \
((writedata) & 0xFF)
#define SDIO_SET_CMD52_READ_ARG(arg,func,address) \
SDIO_SET_CMD52_ARG(arg,0,(func),0,address,0x00)
#define SDIO_SET_CMD52_WRITE_ARG(arg,func,address,value) \
SDIO_SET_CMD52_ARG(arg,1,(func),0,address,value)
static int Func0_CMD52WriteByte(struct mmc_card *card, unsigned int address, unsigned char byte)
static int Func0_CMD52ReadByte(struct mmc_card *card, unsigned int address, unsigned char *byte)
