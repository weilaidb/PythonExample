#define FLAVOR "Flavour: Vanilla.\n"
#define FLAVOR "Flavour: Master CMD&LEN at start.\n"
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Daniel Martensson<daniel.martensson@stericsson.com>");
MODULE_DESCRIPTION("CAIF SPI driver");
#define PAD_POW2(x, pow) ((((x)&((pow)-1))==0) ? 0 : (((pow)-((x)&((pow)-1)))))
static int spi_loop;
module_param(spi_loop, bool, S_IRUGO);
MODULE_PARM_DESC(spi_loop, "SPI running in loopback mode.");
module_param(spi_frm_align, int, S_IRUGO);
MODULE_PARM_DESC(spi_frm_align, "SPI frame alignment.");
module_param(spi_up_head_align, int, S_IRUGO);
MODULE_PARM_DESC(spi_up_head_align, "SPI uplink head alignment.");
module_param(spi_up_tail_align, int, S_IRUGO);
MODULE_PARM_DESC(spi_up_tail_align, "SPI uplink tail alignment.");
module_param(spi_down_head_align, int, S_IRUGO);
MODULE_PARM_DESC(spi_down_head_align, "SPI downlink head alignment.");
module_param(spi_down_tail_align, int, S_IRUGO);
MODULE_PARM_DESC(spi_down_tail_align, "SPI downlink tail alignment.");
#define BYTE_HEX_FMT "%02X"
#define BYTE_HEX_FMT "%02hhX"
#define SPI_MAX_PAYLOAD_SIZE 4096
#define LOW_WATER_MARK   100
#define HIGH_WATER_MARK  (LOW_WATER_MARK*5)
static inline void *dma_alloc(dma_addr_t *daddr)
static inline void dma_free(void *cpu_addr, dma_addr_t handle)
static inline void *dma_alloc(dma_addr_t *daddr)
static inline void dma_free(void *cpu_addr, dma_addr_t handle)
#define DEBUGFS_BUF_SIZE	4096
static struct dentry *dbgfs_root;
static inline void driver_debugfs_create(void)
static inline void driver_debugfs_remove(void)
static inline void dev_debugfs_rem(struct cfspi *cfspi)
static int dbgfs_open(struct inode *inode, struct file *file)
static ssize_t dbgfs_state(struct file *file, char __user *user_buf,
size_t count, loff_t *ppos)
static ssize_t print_frame(char *buf, size_t size, char *frm,
size_t count, size_t cut)
static ssize_t dbgfs_frame(struct file *file, char __user *user_buf,
size_t count, loff_t *ppos)
static const struct file_operations dbgfs_state_fops = ;
static const struct file_operations dbgfs_frame_fops = ;
static inline void dev_debugfs_add(struct cfspi *cfspi)
inline void cfspi_dbg_state(struct cfspi *cfspi, int state)
;
static inline void driver_debugfs_create(void)
static inline void driver_debugfs_remove(void)
static inline void dev_debugfs_add(struct cfspi *cfspi)
static inline void dev_debugfs_rem(struct cfspi *cfspi)
inline void cfspi_dbg_state(struct cfspi *cfspi, int state)
static LIST_HEAD(cfspi_list);
static spinlock_t cfspi_list_lock;
static ssize_t show_up_head_align(struct device_driver *driver, char *buf)
static DRIVER_ATTR(up_head_align, S_IRUSR, show_up_head_align, NULL);
static ssize_t show_up_tail_align(struct device_driver *driver, char *buf)
static DRIVER_ATTR(up_tail_align, S_IRUSR, show_up_tail_align, NULL);
static ssize_t show_down_head_align(struct device_driver *driver, char *buf)
static DRIVER_ATTR(down_head_align, S_IRUSR, show_down_head_align, NULL);
static ssize_t show_down_tail_align(struct device_driver *driver, char *buf)
static DRIVER_ATTR(down_tail_align, S_IRUSR, show_down_tail_align, NULL);
static ssize_t show_frame_align(struct device_driver *driver, char *buf)
static DRIVER_ATTR(frame_align, S_IRUSR, show_frame_align, NULL);
int cfspi_xmitfrm(struct cfspi *cfspi, u8 *buf, size_t len)
int cfspi_xmitlen(struct cfspi *cfspi)
static void cfspi_ss_cb(bool assert, struct cfspi_ifc *ifc)
static void cfspi_xfer_done_cb(struct cfspi_ifc *ifc)
static int cfspi_xmit(struct sk_buff *skb, struct net_device *dev)
int cfspi_rxfrm(struct cfspi *cfspi, u8 *buf, size_t len)
static int cfspi_open(struct net_device *dev)
static int cfspi_close(struct net_device *dev)
static const struct net_device_ops cfspi_ops = ;
static void cfspi_setup(struct net_device *dev)
int cfspi_spi_probe(struct platform_device *pdev)
int cfspi_spi_remove(struct platform_device *pdev)
static void __exit cfspi_exit_module(void)
static int __init cfspi_init_module(void)
module_init(cfspi_init_module);
module_exit(cfspi_exit_module);
