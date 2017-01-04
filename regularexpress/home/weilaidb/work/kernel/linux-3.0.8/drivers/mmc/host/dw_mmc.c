#define DW_MCI_DATA_ERROR_FLAGS	(SDMMC_INT_DTO | SDMMC_INT_DCRC | \
SDMMC_INT_HTO | SDMMC_INT_SBE  | \
SDMMC_INT_EBE)
#define DW_MCI_CMD_ERROR_FLAGS	(SDMMC_INT_RTO | SDMMC_INT_RCRC | \
SDMMC_INT_RESP_ERR)
#define DW_MCI_ERROR_FLAGS	(DW_MCI_DATA_ERROR_FLAGS | \
DW_MCI_CMD_ERROR_FLAGS  | SDMMC_INT_HLE)
#define DW_MCI_SEND_STATUS	1
#define DW_MCI_RECV_STATUS	2
#define DW_MCI_DMA_THRESHOLD	16
struct idmac_desc ;
struct dw_mci_slot ;
#if defined(CONFIG_DEBUG_FS)
static int dw_mci_req_show(struct seq_file *s, void *v)
static int dw_mci_req_open(struct inode *inode, struct file *file)
static const struct file_operations dw_mci_req_fops = ;
static int dw_mci_regs_show(struct seq_file *s, void *v)
static int dw_mci_regs_open(struct inode *inode, struct file *file)
static const struct file_operations dw_mci_regs_fops = ;
static void dw_mci_init_debugfs(struct dw_mci_slot *slot)
static void dw_mci_set_timeout(struct dw_mci *host)
static u32 dw_mci_prepare_command(struct mmc_host *mmc, struct mmc_command *cmd)
static void dw_mci_start_command(struct dw_mci *host,
struct mmc_command *cmd, u32 cmd_flags)
static void send_stop_cmd(struct dw_mci *host, struct mmc_data *data)
static void dw_mci_stop_dma(struct dw_mci *host)
static void dw_mci_dma_cleanup(struct dw_mci *host)
static void dw_mci_idmac_stop_dma(struct dw_mci *host)
static void dw_mci_idmac_complete_dma(struct dw_mci *host)
static void dw_mci_translate_sglist(struct dw_mci *host, struct mmc_data *data,
unsigned int sg_len)
static void dw_mci_idmac_start_dma(struct dw_mci *host, unsigned int sg_len)
static int dw_mci_idmac_init(struct dw_mci *host)
static struct dw_mci_dma_ops dw_mci_idmac_ops = ;
static int dw_mci_submit_data_dma(struct dw_mci *host, struct mmc_data *data)
static void dw_mci_submit_data(struct dw_mci *host, struct mmc_data *data)
static void mci_send_cmd(struct dw_mci_slot *slot, u32 cmd, u32 arg)
static void dw_mci_setup_bus(struct dw_mci_slot *slot)
static void dw_mci_start_request(struct dw_mci *host,
struct dw_mci_slot *slot)
static void dw_mci_queue_request(struct dw_mci *host, struct dw_mci_slot *slot,
struct mmc_request *mrq)
static void dw_mci_request(struct mmc_host *mmc, struct mmc_request *mrq)
static void dw_mci_set_ios(struct mmc_host *mmc, struct mmc_ios *ios)
static int dw_mci_get_ro(struct mmc_host *mmc)
static int dw_mci_get_cd(struct mmc_host *mmc)
static const struct mmc_host_ops dw_mci_ops = ;
static void dw_mci_request_end(struct dw_mci *host, struct mmc_request *mrq)
__releases(&host->lock)
__acquires(&host->lock)
static void dw_mci_command_complete(struct dw_mci *host, struct mmc_command *cmd)
static void dw_mci_tasklet_func(unsigned long priv)
static void dw_mci_push_data16(struct dw_mci *host, void *buf, int cnt)
static void dw_mci_pull_data16(struct dw_mci *host, void *buf, int cnt)
static void dw_mci_push_data32(struct dw_mci *host, void *buf, int cnt)
static void dw_mci_pull_data32(struct dw_mci *host, void *buf, int cnt)
static void dw_mci_push_data64(struct dw_mci *host, void *buf, int cnt)
static void dw_mci_pull_data64(struct dw_mci *host, void *buf, int cnt)
static void dw_mci_read_data_pio(struct dw_mci *host)
static void dw_mci_write_data_pio(struct dw_mci *host)
static void dw_mci_cmd_interrupt(struct dw_mci *host, u32 status)
static irqreturn_t dw_mci_interrupt(int irq, void *dev_id)
static void dw_mci_tasklet_card(unsigned long data)
static int __init dw_mci_init_slot(struct dw_mci *host, unsigned int id)
static void dw_mci_cleanup_slot(struct dw_mci_slot *slot, unsigned int id)
static void dw_mci_init_dma(struct dw_mci *host)
static bool mci_wait_reset(struct device *dev, struct dw_mci *host)
static int dw_mci_probe(struct platform_device *pdev)
static int __exit dw_mci_remove(struct platform_device *pdev)
static int dw_mci_suspend(struct platform_device *pdev, pm_message_t mesg)
static int dw_mci_resume(struct platform_device *pdev)
#define dw_mci_suspend	NULL
#define dw_mci_resume	NULL
static struct platform_driver dw_mci_driver = ;
static int __init dw_mci_init(void)
static void __exit dw_mci_exit(void)
module_init(dw_mci_init);
module_exit(dw_mci_exit);
MODULE_DESCRIPTION("DW Multimedia Card Interface driver");
MODULE_AUTHOR("NXP Semiconductor VietNam");
MODULE_AUTHOR("Imagination Technologies Ltd");
MODULE_LICENSE("GPL v2");
