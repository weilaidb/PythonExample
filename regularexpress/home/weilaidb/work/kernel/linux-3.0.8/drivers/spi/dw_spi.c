#define START_STATE	((void *)0)
#define RUNNING_STATE	((void *)1)
#define DONE_STATE	((void *)2)
#define ERROR_STATE	((void *)-1)
#define QUEUE_RUNNING	0
#define QUEUE_STOPPED	1
#define MRST_SPI_DEASSERT	0
#define MRST_SPI_ASSERT		1
struct chip_data ;
static int spi_show_regs_open(struct inode *inode, struct file *file)
#define SPI_REGS_BUFSIZE	1024
static ssize_t  spi_show_regs(struct file *file, char __user *user_buf,
size_t count, loff_t *ppos)
static const struct file_operations mrst_spi_regs_ops = ;
static int mrst_spi_debugfs_init(struct dw_spi *dws)
static void mrst_spi_debugfs_remove(struct dw_spi *dws)
static inline int mrst_spi_debugfs_init(struct dw_spi *dws)
static inline void mrst_spi_debugfs_remove(struct dw_spi *dws)
static inline u32 tx_max(struct dw_spi *dws)
static inline u32 rx_max(struct dw_spi *dws)
static void dw_writer(struct dw_spi *dws)
static void dw_reader(struct dw_spi *dws)
static void *next_transfer(struct dw_spi *dws)
static int map_dma_buffers(struct dw_spi *dws)
static void giveback(struct dw_spi *dws)
static void int_error_stop(struct dw_spi *dws, const char *msg)
void dw_spi_xfer_done(struct dw_spi *dws)
EXPORT_SYMBOL_GPL(dw_spi_xfer_done);
static irqreturn_t interrupt_transfer(struct dw_spi *dws)
static irqreturn_t dw_spi_irq(int irq, void *dev_id)
static void poll_transfer(struct dw_spi *dws)
static void pump_transfers(unsigned long data)
static void pump_messages(struct work_struct *work)
static int dw_spi_transfer(struct spi_device *spi, struct spi_message *msg)
static int dw_spi_setup(struct spi_device *spi)
static void dw_spi_cleanup(struct spi_device *spi)
static int __devinit init_queue(struct dw_spi *dws)
static int start_queue(struct dw_spi *dws)
static int stop_queue(struct dw_spi *dws)
static int destroy_queue(struct dw_spi *dws)
static void spi_hw_init(struct dw_spi *dws)
int __devinit dw_spi_add_host(struct dw_spi *dws)
EXPORT_SYMBOL_GPL(dw_spi_add_host);
void __devexit dw_spi_remove_host(struct dw_spi *dws)
EXPORT_SYMBOL_GPL(dw_spi_remove_host);
int dw_spi_suspend_host(struct dw_spi *dws)
EXPORT_SYMBOL_GPL(dw_spi_suspend_host);
int dw_spi_resume_host(struct dw_spi *dws)
EXPORT_SYMBOL_GPL(dw_spi_resume_host);
MODULE_AUTHOR("Feng Tang <feng.tang@intel.com>");
MODULE_DESCRIPTION("Driver for DesignWare SPI controller core");
MODULE_LICENSE("GPL v2");
