#define DRIVER_NAME "s3c-mci"
enum dbg_channels ;
static const int dbgmap_err   = dbg_fail;
static const int dbgmap_info  = dbg_info | dbg_conf;
static const int dbgmap_debug = dbg_err | dbg_debug;
#define dbg(host, channels, args...)		  \
do  while (0)
static struct s3c2410_dma_client s3cmci_dma_client = ;
static void finalize_request(struct s3cmci_host *host);
static void s3cmci_send_request(struct mmc_host *mmc);
static void s3cmci_reset(struct s3cmci_host *host);
static void dbg_dumpregs(struct s3cmci_host *host, char *prefix)
static void prepare_dbgmsg(struct s3cmci_host *host, struct mmc_command *cmd,
int stop)
static void dbg_dumpcmd(struct s3cmci_host *host, struct mmc_command *cmd,
int fail)
static void dbg_dumpcmd(struct s3cmci_host *host,
struct mmc_command *cmd, int fail)
static void prepare_dbgmsg(struct s3cmci_host *host, struct mmc_command *cmd,
int stop)
static void dbg_dumpregs(struct s3cmci_host *host, char *prefix)
static inline bool s3cmci_host_usedma(struct s3cmci_host *host)
static inline bool s3cmci_host_canpio(void)
static inline u32 enable_imask(struct s3cmci_host *host, u32 imask)
static inline u32 disable_imask(struct s3cmci_host *host, u32 imask)
static inline void clear_imask(struct s3cmci_host *host)
static void s3cmci_check_sdio_irq(struct s3cmci_host *host)
static inline int get_data_buffer(struct s3cmci_host *host,
u32 *bytes, u32 **pointer)
static inline u32 fifo_count(struct s3cmci_host *host)
static inline u32 fifo_free(struct s3cmci_host *host)
static void s3cmci_enable_irq(struct s3cmci_host *host, bool more)
static void s3cmci_disable_irq(struct s3cmci_host *host, bool transfer)
static void do_pio_read(struct s3cmci_host *host)
static void do_pio_write(struct s3cmci_host *host)
static void pio_tasklet(unsigned long data)
static irqreturn_t s3cmci_irq(int irq, void *dev_id)
static irqreturn_t s3cmci_irq_cd(int irq, void *dev_id)
static void s3cmci_dma_done_callback(struct s3c2410_dma_chan *dma_ch,
void *buf_id, int size,
enum s3c2410_dma_buffresult result)
static void finalize_request(struct s3cmci_host *host)
static void s3cmci_dma_setup(struct s3cmci_host *host,
enum s3c2410_dmasrc source)
static void s3cmci_send_command(struct s3cmci_host *host,
struct mmc_command *cmd)
static int s3cmci_setup_data(struct s3cmci_host *host, struct mmc_data *data)
#define BOTH_DIR (MMC_DATA_WRITE | MMC_DATA_READ)
static int s3cmci_prepare_pio(struct s3cmci_host *host, struct mmc_data *data)
static int s3cmci_prepare_dma(struct s3cmci_host *host, struct mmc_data *data)
static void s3cmci_send_request(struct mmc_host *mmc)
static int s3cmci_card_present(struct mmc_host *mmc)
static void s3cmci_request(struct mmc_host *mmc, struct mmc_request *mrq)
static void s3cmci_set_clk(struct s3cmci_host *host, struct mmc_ios *ios)
static void s3cmci_set_ios(struct mmc_host *mmc, struct mmc_ios *ios)
static void s3cmci_reset(struct s3cmci_host *host)
static int s3cmci_get_ro(struct mmc_host *mmc)
static void s3cmci_enable_sdio_irq(struct mmc_host *mmc, int enable)
static struct mmc_host_ops s3cmci_ops = ;
static struct s3c24xx_mci_pdata s3cmci_def_pdata = ;
static int s3cmci_cpufreq_transition(struct notifier_block *nb,
unsigned long val, void *data)
static inline int s3cmci_cpufreq_register(struct s3cmci_host *host)
static inline void s3cmci_cpufreq_deregister(struct s3cmci_host *host)
static inline int s3cmci_cpufreq_register(struct s3cmci_host *host)
static inline void s3cmci_cpufreq_deregister(struct s3cmci_host *host)
static int s3cmci_state_show(struct seq_file *seq, void *v)
static int s3cmci_state_open(struct inode *inode, struct file *file)
static const struct file_operations s3cmci_fops_state = ;
#define DBG_REG(_r)
struct s3cmci_reg  debug_regs[] = ;
static int s3cmci_regs_show(struct seq_file *seq, void *v)
static int s3cmci_regs_open(struct inode *inode, struct file *file)
static const struct file_operations s3cmci_fops_regs = ;
static void s3cmci_debugfs_attach(struct s3cmci_host *host)
static void s3cmci_debugfs_remove(struct s3cmci_host *host)
static inline void s3cmci_debugfs_attach(struct s3cmci_host *host)
static inline void s3cmci_debugfs_remove(struct s3cmci_host *host)
static int __devinit s3cmci_probe(struct platform_device *pdev)
static void s3cmci_shutdown(struct platform_device *pdev)
static int __devexit s3cmci_remove(struct platform_device *pdev)
static struct platform_device_id s3cmci_driver_ids[] = ;
MODULE_DEVICE_TABLE(platform, s3cmci_driver_ids);
static int s3cmci_suspend(struct device *dev)
static int s3cmci_resume(struct device *dev)
static const struct dev_pm_ops s3cmci_pm = ;
#define s3cmci_pm_ops &s3cmci_pm
#define s3cmci_pm_ops NULL
static struct platform_driver s3cmci_driver = ;
static int __init s3cmci_init(void)
static void __exit s3cmci_exit(void)
module_init(s3cmci_init);
module_exit(s3cmci_exit);
MODULE_DESCRIPTION("Samsung S3C MMC/SD Card Interface driver");
MODULE_LICENSE("GPL v2");
MODULE_AUTHOR("Thomas Kleffel <tk@maintech.de>, Ben Dooks <ben-linux@fluff.org>");
