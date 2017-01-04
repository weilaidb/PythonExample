#define DRIVER_NAME "mmci-pl18x"
static unsigned int fmax = 515633;
struct variant_data ;
static struct variant_data variant_arm = ;
static struct variant_data variant_arm_extended_fifo = ;
static struct variant_data variant_u300 = ;
static struct variant_data variant_ux500 = ;
static struct variant_data variant_ux500v2 = ;
static void mmci_set_clkreg(struct mmci_host *host, unsigned int desired)
static void
mmci_request_end(struct mmci_host *host, struct mmc_request *mrq)
static void mmci_set_mask1(struct mmci_host *host, unsigned int mask)
static void mmci_stop_data(struct mmci_host *host)
static void mmci_init_sg(struct mmci_host *host, struct mmc_data *data)
static void __devinit mmci_dma_setup(struct mmci_host *host)
static inline void mmci_dma_release(struct mmci_host *host)
static void mmci_dma_unmap(struct mmci_host *host, struct mmc_data *data)
static void mmci_dma_data_error(struct mmci_host *host)
static int mmci_dma_start_data(struct mmci_host *host, unsigned int datactrl)
static inline void mmci_dma_setup(struct mmci_host *host)
static inline void mmci_dma_release(struct mmci_host *host)
static inline void mmci_dma_unmap(struct mmci_host *host, struct mmc_data *data)
static inline void mmci_dma_data_error(struct mmci_host *host)
static inline int mmci_dma_start_data(struct mmci_host *host, unsigned int datactrl)
static void mmci_start_data(struct mmci_host *host, struct mmc_data *data)
static void
mmci_start_command(struct mmci_host *host, struct mmc_command *cmd, u32 c)
static void
mmci_data_irq(struct mmci_host *host, struct mmc_data *data,
unsigned int status)
static void
mmci_cmd_irq(struct mmci_host *host, struct mmc_command *cmd,
unsigned int status)
static int mmci_pio_read(struct mmci_host *host, char *buffer, unsigned int remain)
static int mmci_pio_write(struct mmci_host *host, char *buffer, unsigned int remain, u32 status)
static irqreturn_t mmci_pio_irq(int irq, void *dev_id)
static irqreturn_t mmci_irq(int irq, void *dev_id)
static void mmci_request(struct mmc_host *mmc, struct mmc_request *mrq)
static void mmci_set_ios(struct mmc_host *mmc, struct mmc_ios *ios)
static int mmci_get_ro(struct mmc_host *mmc)
static int mmci_get_cd(struct mmc_host *mmc)
static irqreturn_t mmci_cd_irq(int irq, void *dev_id)
static const struct mmc_host_ops mmci_ops = ;
static int __devinit mmci_probe(struct amba_device *dev,
const struct amba_id *id)
static int __devexit mmci_remove(struct amba_device *dev)
static int mmci_suspend(struct amba_device *dev, pm_message_t state)
static int mmci_resume(struct amba_device *dev)
#define mmci_suspend	NULL
#define mmci_resume	NULL
static struct amba_id mmci_ids[] = ;
static struct amba_driver mmci_driver = ;
static int __init mmci_init(void)
static void __exit mmci_exit(void)
module_init(mmci_init);
module_exit(mmci_exit);
module_param(fmax, uint, 0444);
MODULE_DESCRIPTION("ARM PrimeCell PL180/181 Multimedia Card Interface driver");
MODULE_LICENSE("GPL");
