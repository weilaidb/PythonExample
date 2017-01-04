#define DRIVER_NAME "au1xxx-mmc"
#define DBG(fmt, idx, args...)	\
printk(KERN_DEBUG "au1xmmc(%d): DEBUG: " fmt, idx, ##args)
#define DBG(fmt, idx, args...) do  while (0)
#define AU1XMMC_DESCRIPTOR_COUNT 1
#define AU1XMMC_DESCRIPTOR_SIZE 0x0000ffff
#define AU1XMMC_DESCRIPTOR_SIZE 0x003fffff
#define AU1XMMC_OCR (MMC_VDD_27_28 | MMC_VDD_28_29 | MMC_VDD_29_30 | \
MMC_VDD_30_31 | MMC_VDD_31_32 | MMC_VDD_32_33 | \
MMC_VDD_33_34 | MMC_VDD_34_35 | MMC_VDD_35_36)
#define STOP_CMD	\
(SD_CMD_RT_1B | SD_CMD_CT_7 | (0xC << SD_CMD_CI_SHIFT) | SD_CMD_GO)
#define AU1XMMC_INTERRUPTS 				\
(SD_CONFIG_SC | SD_CONFIG_DT | SD_CONFIG_RAT |	\
SD_CONFIG_CR | SD_CONFIG_I)
#define AU1XMMC_DETECT_TIMEOUT (HZ/2)
struct au1xmmc_host ;
#define HOST_F_XMIT	0x0001
#define HOST_F_RECV	0x0002
#define HOST_F_DMA	0x0010
#define HOST_F_ACTIVE	0x0100
#define HOST_F_STOP	0x1000
#define HOST_S_IDLE	0x0001
#define HOST_S_CMD	0x0002
#define HOST_S_DATA	0x0003
#define HOST_S_STOP	0x0004
#define HOST_STATUS(h)	((h)->iobase + SD_STATUS)
#define HOST_CONFIG(h)	((h)->iobase + SD_CONFIG)
#define HOST_ENABLE(h)	((h)->iobase + SD_ENABLE)
#define HOST_TXPORT(h)	((h)->iobase + SD_TXPORT)
#define HOST_RXPORT(h)	((h)->iobase + SD_RXPORT)
#define HOST_CMDARG(h)	((h)->iobase + SD_CMDARG)
#define HOST_BLKSIZE(h)	((h)->iobase + SD_BLKSIZE)
#define HOST_CMD(h)	((h)->iobase + SD_CMD)
#define HOST_CONFIG2(h)	((h)->iobase + SD_CONFIG2)
#define HOST_TIMEOUT(h)	((h)->iobase + SD_TIMEOUT)
#define HOST_DEBUG(h)	((h)->iobase + SD_DEBUG)
#define DMA_CHANNEL(h)	\
(((h)->flags & HOST_F_XMIT) ? (h)->tx_chan : (h)->rx_chan)
static inline void IRQ_ON(struct au1xmmc_host *host, u32 mask)
static inline void FLUSH_FIFO(struct au1xmmc_host *host)
static inline void IRQ_OFF(struct au1xmmc_host *host, u32 mask)
static inline void SEND_STOP(struct au1xmmc_host *host)
static void au1xmmc_set_power(struct au1xmmc_host *host, int state)
static int au1xmmc_card_inserted(struct mmc_host *mmc)
static int au1xmmc_card_readonly(struct mmc_host *mmc)
static void au1xmmc_finish_request(struct au1xmmc_host *host)
static void au1xmmc_tasklet_finish(unsigned long param)
static int au1xmmc_send_command(struct au1xmmc_host *host, int wait,
struct mmc_command *cmd, struct mmc_data *data)
static void au1xmmc_data_complete(struct au1xmmc_host *host, u32 status)
static void au1xmmc_tasklet_data(unsigned long param)
#define AU1XMMC_MAX_TRANSFER 8
static void au1xmmc_send_pio(struct au1xmmc_host *host)
static void au1xmmc_receive_pio(struct au1xmmc_host *host)
static void au1xmmc_cmd_complete(struct au1xmmc_host *host, u32 status)
static void au1xmmc_set_clock(struct au1xmmc_host *host, int rate)
static int au1xmmc_prepare_data(struct au1xmmc_host *host,
struct mmc_data *data)
static void au1xmmc_request(struct mmc_host* mmc, struct mmc_request* mrq)
static void au1xmmc_reset_controller(struct au1xmmc_host *host)
static void au1xmmc_set_ios(struct mmc_host *mmc, struct mmc_ios *ios)
#define STATUS_TIMEOUT (SD_STATUS_RAT | SD_STATUS_DT)
#define STATUS_DATA_IN  (SD_STATUS_NE)
#define STATUS_DATA_OUT (SD_STATUS_TH)
static irqreturn_t au1xmmc_irq(int irq, void *dev_id)
static dbdev_tab_t au1xmmc_mem_dbdev = ;
static int memid;
static void au1xmmc_dbdma_callback(int irq, void *dev_id)
static int au1xmmc_dbdma_init(struct au1xmmc_host *host)
static void au1xmmc_dbdma_shutdown(struct au1xmmc_host *host)
static void au1xmmc_enable_sdio_irq(struct mmc_host *mmc, int en)
static const struct mmc_host_ops au1xmmc_ops = ;
static int __devinit au1xmmc_probe(struct platform_device *pdev)
static int __devexit au1xmmc_remove(struct platform_device *pdev)
static int au1xmmc_suspend(struct platform_device *pdev, pm_message_t state)
static int au1xmmc_resume(struct platform_device *pdev)
#define au1xmmc_suspend NULL
#define au1xmmc_resume NULL
static struct platform_driver au1xmmc_driver = ;
static int __init au1xmmc_init(void)
static void __exit au1xmmc_exit(void)
module_init(au1xmmc_init);
module_exit(au1xmmc_exit);
MODULE_AUTHOR("Advanced Micro Devices, Inc");
MODULE_DESCRIPTION("MMC/SD driver for the Alchemy Au1XXX");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:au1xxx-mmc");
