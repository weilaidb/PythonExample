#define DRIVER_NAME	"pxa2xx-mci"
#define NR_SG	1
#define CLKRT_OFF	(~0)
#define mmc_has_26MHz()		(cpu_is_pxa300() || cpu_is_pxa310() \
|| cpu_is_pxa935())
struct pxamci_host ;
static inline void pxamci_init_ocr(struct pxamci_host *host)
static inline int pxamci_set_power(struct pxamci_host *host,
unsigned char power_mode,
unsigned int vdd)
static void pxamci_stop_clock(struct pxamci_host *host)
static void pxamci_enable_irq(struct pxamci_host *host, unsigned int mask)
static void pxamci_disable_irq(struct pxamci_host *host, unsigned int mask)
static void pxamci_setup_data(struct pxamci_host *host, struct mmc_data *data)
static void pxamci_start_cmd(struct pxamci_host *host, struct mmc_command *cmd, unsigned int cmdat)
static void pxamci_finish_request(struct pxamci_host *host, struct mmc_request *mrq)
static int pxamci_cmd_done(struct pxamci_host *host, unsigned int stat)
static int pxamci_data_done(struct pxamci_host *host, unsigned int stat)
static irqreturn_t pxamci_irq(int irq, void *devid)
static void pxamci_request(struct mmc_host *mmc, struct mmc_request *mrq)
static int pxamci_get_ro(struct mmc_host *mmc)
static void pxamci_set_ios(struct mmc_host *mmc, struct mmc_ios *ios)
static void pxamci_enable_sdio_irq(struct mmc_host *host, int enable)
static const struct mmc_host_ops pxamci_ops = ;
static void pxamci_dma_irq(int dma, void *devid)
static irqreturn_t pxamci_detect_irq(int irq, void *devid)
static int pxamci_probe(struct platform_device *pdev)
static int pxamci_remove(struct platform_device *pdev)
static int pxamci_suspend(struct device *dev)
static int pxamci_resume(struct device *dev)
static const struct dev_pm_ops pxamci_pm_ops = ;
static struct platform_driver pxamci_driver = ;
static int __init pxamci_init(void)
static void __exit pxamci_exit(void)
module_init(pxamci_init);
module_exit(pxamci_exit);
MODULE_DESCRIPTION("PXA Multimedia Card Interface Driver");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:pxa2xx-mci");
