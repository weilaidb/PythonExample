#define	OMAP_MMC_REG_CMD	0x00
#define	OMAP_MMC_REG_ARGL	0x01
#define	OMAP_MMC_REG_ARGH	0x02
#define	OMAP_MMC_REG_CON	0x03
#define	OMAP_MMC_REG_STAT	0x04
#define	OMAP_MMC_REG_IE		0x05
#define	OMAP_MMC_REG_CTO	0x06
#define	OMAP_MMC_REG_DTO	0x07
#define	OMAP_MMC_REG_DATA	0x08
#define	OMAP_MMC_REG_BLEN	0x09
#define	OMAP_MMC_REG_NBLK	0x0a
#define	OMAP_MMC_REG_BUF	0x0b
#define	OMAP_MMC_REG_SDIO	0x0d
#define	OMAP_MMC_REG_REV	0x0f
#define	OMAP_MMC_REG_RSP0	0x10
#define	OMAP_MMC_REG_RSP1	0x11
#define	OMAP_MMC_REG_RSP2	0x12
#define	OMAP_MMC_REG_RSP3	0x13
#define	OMAP_MMC_REG_RSP4	0x14
#define	OMAP_MMC_REG_RSP5	0x15
#define	OMAP_MMC_REG_RSP6	0x16
#define	OMAP_MMC_REG_RSP7	0x17
#define	OMAP_MMC_REG_IOSR	0x18
#define	OMAP_MMC_REG_SYSC	0x19
#define	OMAP_MMC_REG_SYSS	0x1a
#define	OMAP_MMC_STAT_CARD_ERR		(1 << 14)
#define	OMAP_MMC_STAT_CARD_IRQ		(1 << 13)
#define	OMAP_MMC_STAT_OCR_BUSY		(1 << 12)
#define	OMAP_MMC_STAT_A_EMPTY		(1 << 11)
#define	OMAP_MMC_STAT_A_FULL		(1 << 10)
#define	OMAP_MMC_STAT_CMD_CRC		(1 <<  8)
#define	OMAP_MMC_STAT_CMD_TOUT		(1 <<  7)
#define	OMAP_MMC_STAT_DATA_CRC		(1 <<  6)
#define	OMAP_MMC_STAT_DATA_TOUT		(1 <<  5)
#define	OMAP_MMC_STAT_END_BUSY		(1 <<  4)
#define	OMAP_MMC_STAT_END_OF_DATA	(1 <<  3)
#define	OMAP_MMC_STAT_CARD_BUSY		(1 <<  2)
#define	OMAP_MMC_STAT_END_OF_CMD	(1 <<  0)
#define OMAP_MMC_REG(host, reg)		(OMAP_MMC_REG_##reg << (host)->reg_shift)
#define OMAP_MMC_READ(host, reg)	__raw_readw((host)->virt_base + OMAP_MMC_REG(host, reg))
#define OMAP_MMC_WRITE(host, reg, val)	__raw_writew((val), (host)->virt_base + OMAP_MMC_REG(host, reg))
#define OMAP_MMC_CMDTYPE_BC	0
#define OMAP_MMC_CMDTYPE_BCR	1
#define OMAP_MMC_CMDTYPE_AC	2
#define OMAP_MMC_CMDTYPE_ADTC	3
#define DRIVER_NAME "mmci-omap"
#define OMAP_MMC_COVER_POLL_DELAY	500
struct mmc_omap_host;
struct mmc_omap_slot ;
struct mmc_omap_host ;
static struct workqueue_struct *mmc_omap_wq;
static void mmc_omap_fclk_offdelay(struct mmc_omap_slot *slot)
static void mmc_omap_fclk_enable(struct mmc_omap_host *host, unsigned int enable)
static void mmc_omap_select_slot(struct mmc_omap_slot *slot, int claimed)
static void mmc_omap_start_request(struct mmc_omap_host *host,
struct mmc_request *req);
static void mmc_omap_slot_release_work(struct work_struct *work)
static void mmc_omap_release_slot(struct mmc_omap_slot *slot, int clk_enabled)
static inline
int mmc_omap_cover_is_open(struct mmc_omap_slot *slot)
static ssize_t
mmc_omap_show_cover_switch(struct device *dev, struct device_attribute *attr,
char *buf)
static DEVICE_ATTR(cover_switch, S_IRUGO, mmc_omap_show_cover_switch, NULL);
static ssize_t
mmc_omap_show_slot_name(struct device *dev, struct device_attribute *attr,
char *buf)
static DEVICE_ATTR(slot_name, S_IRUGO, mmc_omap_show_slot_name, NULL);
static void
mmc_omap_start_command(struct mmc_omap_host *host, struct mmc_command *cmd)
static void
mmc_omap_release_dma(struct mmc_omap_host *host, struct mmc_data *data,
int abort)
static void mmc_omap_send_stop_work(struct work_struct *work)
static void
mmc_omap_xfer_done(struct mmc_omap_host *host, struct mmc_data *data)
static void
mmc_omap_send_abort(struct mmc_omap_host *host, int maxloops)
static void
mmc_omap_abort_xfer(struct mmc_omap_host *host, struct mmc_data *data)
static void
mmc_omap_end_of_data(struct mmc_omap_host *host, struct mmc_data *data)
static void
mmc_omap_dma_timer(unsigned long data)
static void
mmc_omap_dma_done(struct mmc_omap_host *host, struct mmc_data *data)
static void
mmc_omap_cmd_done(struct mmc_omap_host *host, struct mmc_command *cmd)
static void mmc_omap_abort_command(struct work_struct *work)
static void
mmc_omap_cmd_timer(unsigned long data)
static void
mmc_omap_sg_to_buf(struct mmc_omap_host *host)
static void
mmc_omap_clk_timer(unsigned long data)
static void
mmc_omap_xfer_data(struct mmc_omap_host *host, int write)
static inline void mmc_omap_report_irq(u16 status)
static irqreturn_t mmc_omap_irq(int irq, void *dev_id)
void omap_mmc_notify_cover_event(struct device *dev, int num, int is_closed)
static void mmc_omap_cover_timer(unsigned long arg)
static void mmc_omap_cover_handler(unsigned long param)
static void
mmc_omap_prepare_dma(struct mmc_omap_host *host, struct mmc_data *data)
static void mmc_omap_dma_cb(int lch, u16 ch_status, void *data)
static int mmc_omap_get_dma_channel(struct mmc_omap_host *host, struct mmc_data *data)
static inline void set_cmd_timeout(struct mmc_omap_host *host, struct mmc_request *req)
static inline void set_data_timeout(struct mmc_omap_host *host, struct mmc_request *req)
static void
mmc_omap_prepare_data(struct mmc_omap_host *host, struct mmc_request *req)
static void mmc_omap_start_request(struct mmc_omap_host *host,
struct mmc_request *req)
static void mmc_omap_request(struct mmc_host *mmc, struct mmc_request *req)
static void mmc_omap_set_power(struct mmc_omap_slot *slot, int power_on,
int vdd)
static int mmc_omap_calc_divisor(struct mmc_host *mmc, struct mmc_ios *ios)
static void mmc_omap_set_ios(struct mmc_host *mmc, struct mmc_ios *ios)
static const struct mmc_host_ops mmc_omap_ops = ;
static int __init mmc_omap_new_slot(struct mmc_omap_host *host, int id)
static void mmc_omap_remove_slot(struct mmc_omap_slot *slot)
static int __init mmc_omap_probe(struct platform_device *pdev)
static int mmc_omap_remove(struct platform_device *pdev)
static int mmc_omap_suspend(struct platform_device *pdev, pm_message_t mesg)
static int mmc_omap_resume(struct platform_device *pdev)
#define mmc_omap_suspend	NULL
#define mmc_omap_resume		NULL
static struct platform_driver mmc_omap_driver = ;
static int __init mmc_omap_init(void)
static void __exit mmc_omap_exit(void)
module_init(mmc_omap_init);
module_exit(mmc_omap_exit);
MODULE_DESCRIPTION("OMAP Multimedia Card driver");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:" DRIVER_NAME);
MODULE_AUTHOR("Juha Yrjölä");
