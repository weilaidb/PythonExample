#define ATMCI_DATA_ERROR_FLAGS	(MCI_DCRCE | MCI_DTOE | MCI_OVRE | MCI_UNRE)
#define ATMCI_DMA_THRESHOLD	16
enum ;
enum atmel_mci_state ;
struct atmel_mci_dma ;
struct atmel_mci ;
struct atmel_mci_slot ;
#define atmci_test_and_clear_pending(host, event)		\
test_and_clear_bit(event, &host->pending_events)
#define atmci_set_completed(host, event)			\
set_bit(event, &host->completed_events)
#define atmci_set_pending(host, event)				\
set_bit(event, &host->pending_events)
static bool mci_has_rwproof(void)
static inline bool atmci_is_mci2(void)
static int atmci_req_show(struct seq_file *s, void *v)
static int atmci_req_open(struct inode *inode, struct file *file)
static const struct file_operations atmci_req_fops = ;
static void atmci_show_status_reg(struct seq_file *s,
const char *regname, u32 value)
static int atmci_regs_show(struct seq_file *s, void *v)
static int atmci_regs_open(struct inode *inode, struct file *file)
static const struct file_operations atmci_regs_fops = ;
static void atmci_init_debugfs(struct atmel_mci_slot *slot)
static inline unsigned int ns_to_clocks(struct atmel_mci *host,
unsigned int ns)
static void atmci_set_timeout(struct atmel_mci *host,
struct atmel_mci_slot *slot, struct mmc_data *data)
static u32 atmci_prepare_command(struct mmc_host *mmc,
struct mmc_command *cmd)
static void atmci_start_command(struct atmel_mci *host,
struct mmc_command *cmd, u32 cmd_flags)
static void send_stop_cmd(struct atmel_mci *host, struct mmc_data *data)
static void atmci_dma_cleanup(struct atmel_mci *host)
static void atmci_stop_dma(struct atmel_mci *host)
static void atmci_dma_complete(void *arg)
static int
atmci_prepare_data_dma(struct atmel_mci *host, struct mmc_data *data)
static void atmci_submit_data(struct atmel_mci *host)
static int atmci_prepare_data_dma(struct atmel_mci *host, struct mmc_data *data)
static void atmci_submit_data(struct atmel_mci *host)
static void atmci_stop_dma(struct atmel_mci *host)
static u32 atmci_prepare_data(struct atmel_mci *host, struct mmc_data *data)
static void atmci_start_request(struct atmel_mci *host,
struct atmel_mci_slot *slot)
static void atmci_queue_request(struct atmel_mci *host,
struct atmel_mci_slot *slot, struct mmc_request *mrq)
static void atmci_request(struct mmc_host *mmc, struct mmc_request *mrq)
static void atmci_set_ios(struct mmc_host *mmc, struct mmc_ios *ios)
static int atmci_get_ro(struct mmc_host *mmc)
static int atmci_get_cd(struct mmc_host *mmc)
static void atmci_enable_sdio_irq(struct mmc_host *mmc, int enable)
static const struct mmc_host_ops atmci_ops = ;
static void atmci_request_end(struct atmel_mci *host, struct mmc_request *mrq)
__releases(&host->lock)
__acquires(&host->lock)
static void atmci_command_complete(struct atmel_mci *host,
struct mmc_command *cmd)
static void atmci_detect_change(unsigned long data)
static void atmci_tasklet_func(unsigned long priv)
static void atmci_read_data_pio(struct atmel_mci *host)
static void atmci_write_data_pio(struct atmel_mci *host)
static void atmci_cmd_interrupt(struct atmel_mci *host, u32 status)
static void atmci_sdio_interrupt(struct atmel_mci *host, u32 status)
static irqreturn_t atmci_interrupt(int irq, void *dev_id)
static irqreturn_t atmci_detect_interrupt(int irq, void *dev_id)
static int __init atmci_init_slot(struct atmel_mci *host,
struct mci_slot_pdata *slot_data, unsigned int id,
u32 sdc_reg, u32 sdio_irq)
static void __exit atmci_cleanup_slot(struct atmel_mci_slot *slot,
unsigned int id)
static bool filter(struct dma_chan *chan, void *slave)
static void atmci_configure_dma(struct atmel_mci *host)
static void atmci_configure_dma(struct atmel_mci *host)
static int __init atmci_probe(struct platform_device *pdev)
static int __exit atmci_remove(struct platform_device *pdev)
static struct platform_driver atmci_driver = ;
static int __init atmci_init(void)
static void __exit atmci_exit(void)
late_initcall(atmci_init);
module_exit(atmci_exit);
MODULE_DESCRIPTION("Atmel Multimedia Card Interface driver");
MODULE_AUTHOR("Haavard Skinnemoen (Atmel)");
MODULE_LICENSE("GPL v2");
