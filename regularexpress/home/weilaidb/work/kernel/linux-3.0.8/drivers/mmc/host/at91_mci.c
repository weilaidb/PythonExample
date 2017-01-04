#define DRIVER_NAME "at91_mci"
static inline int at91mci_is_mci1rev2xx(void)
#define FL_SENT_COMMAND	(1 << 0)
#define FL_SENT_STOP	(1 << 1)
#define AT91_MCI_ERRORS	(AT91_MCI_RINDE | AT91_MCI_RDIRE | AT91_MCI_RCRCE	\
| AT91_MCI_RENDE | AT91_MCI_RTOE | AT91_MCI_DCRCE		\
| AT91_MCI_DTOE | AT91_MCI_OVRE | AT91_MCI_UNRE)
#define at91_mci_read(host, reg)	__raw_readl((host)->baseaddr + (reg))
#define at91_mci_write(host, reg, val)	__raw_writel((val), (host)->baseaddr + (reg))
#define MCI_BLKSIZE 		512
#define MCI_MAXBLKSIZE 		4095
#define MCI_BLKATONCE 		256
#define MCI_BUFSIZE 		(MCI_BLKSIZE * MCI_BLKATONCE)
struct at91mci_host
;
static void at91_reset_host(struct at91mci_host *host)
static void at91_timeout_timer(unsigned long data)
static inline void at91_mci_sg_to_dma(struct at91mci_host *host, struct mmc_data *data)
static void at91_mci_post_dma_read(struct at91mci_host *host)
static void at91_mci_handle_transmitted(struct at91mci_host *host)
static void at91_mci_update_bytes_xfered(struct at91mci_host *host)
static int at91_mci_handle_cmdrdy(struct at91mci_host *host)
static void at91_mci_enable(struct at91mci_host *host)
static void at91_mci_disable(struct at91mci_host *host)
static void at91_mci_send_command(struct at91mci_host *host, struct mmc_command *cmd)
static void at91_mci_process_next(struct at91mci_host *host)
static void at91_mci_completed_command(struct at91mci_host *host, unsigned int status)
static void at91_mci_request(struct mmc_host *mmc, struct mmc_request *mrq)
static void at91_mci_set_ios(struct mmc_host *mmc, struct mmc_ios *ios)
static irqreturn_t at91_mci_irq(int irq, void *devid)
static irqreturn_t at91_mmc_det_irq(int irq, void *_host)
static int at91_mci_get_ro(struct mmc_host *mmc)
static void at91_mci_enable_sdio_irq(struct mmc_host *mmc, int enable)
static const struct mmc_host_ops at91_mci_ops = ;
static int __init at91_mci_probe(struct platform_device *pdev)
static int __exit at91_mci_remove(struct platform_device *pdev)
static int at91_mci_suspend(struct platform_device *pdev, pm_message_t state)
static int at91_mci_resume(struct platform_device *pdev)
#define at91_mci_suspend	NULL
#define at91_mci_resume		NULL
static struct platform_driver at91_mci_driver = ;
static int __init at91_mci_init(void)
static void __exit at91_mci_exit(void)
module_init(at91_mci_init);
module_exit(at91_mci_exit);
MODULE_DESCRIPTION("AT91 Multimedia Card Interface driver");
MODULE_AUTHOR("Nick Randell");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:at91_mci");
