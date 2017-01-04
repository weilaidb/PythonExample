#define SYS_IRQ_SOURCE_CTL	0x24
#define SYS_IRQ_OUTPUT_EN	0x28
#define SYS_IRQ_OUTPUT_DATA	0x2C
#define SYS_IRQ_INPUT_DATA	0x30
#define SYS_FPGA_CONFIG_STATUS	0x44
#define IRQ_CORL_DONE		0x10
#define MMAP_REG_VERSION	0x00
#define MMAP_REG_CORL_CONF1	0x08
#define MMAP_REG_CORL_CONF2	0x0C
#define MMAP_REG_STATUS		0x48
#define SYS_FPGA_BLOCK		0xF0000000
#define DATA_FPGA_START		0x400000
#define DATA_FPGA_SIZE		0x80000
static const char drv_name[] = "carma-fpga";
#define NUM_FPGA	4
#define MIN_DATA_BUFS	8
#define MAX_DATA_BUFS	64
struct fpga_info ;
struct data_buf ;
struct fpga_device ;
struct fpga_reader ;
static void fpga_device_release(struct kref *ref)
static void data_free_buffer(struct data_buf *buf)
static struct data_buf *data_alloc_buffer(const size_t bytes)
static void data_free_buffers(struct fpga_device *priv)
static int data_alloc_buffers(struct fpga_device *priv)
static dma_addr_t fpga_start_addr(struct fpga_device *priv, unsigned int fpga)
static dma_addr_t fpga_block_addr(struct fpga_device *priv, unsigned int fpga,
unsigned int blknum)
#define REG_BLOCK_SIZE	(32 * 4)
static int data_setup_corl_table(struct fpga_device *priv)
static void fpga_write_reg(struct fpga_device *priv, unsigned int fpga,
unsigned int reg, u32 val)
static u32 fpga_read_reg(struct fpga_device *priv, unsigned int fpga,
unsigned int reg)
static int data_calculate_bufsize(struct fpga_device *priv)
static void data_disable_interrupts(struct fpga_device *priv)
static void data_enable_interrupts(struct fpga_device *priv)
static void data_dma_cb(void *data)
static int data_submit_dma(struct fpga_device *priv, struct data_buf *buf)
#define CORL_DONE	0x1
#define CORL_ERR	0x2
static irqreturn_t data_irq(int irq, void *dev_id)
static int data_device_enable(struct fpga_device *priv)
static int data_device_disable(struct fpga_device *priv)
static unsigned int list_num_entries(struct list_head *list)
static int data_debug_show(struct seq_file *f, void *offset)
static int data_debug_open(struct inode *inode, struct file *file)
static const struct file_operations data_debug_fops = ;
static int data_debugfs_init(struct fpga_device *priv)
static void data_debugfs_exit(struct fpga_device *priv)
static inline int data_debugfs_init(struct fpga_device *priv)
static inline void data_debugfs_exit(struct fpga_device *priv)
static ssize_t data_en_show(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t data_en_set(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(enable, S_IWUSR | S_IRUGO, data_en_show, data_en_set);
static struct attribute *data_sysfs_attrs[] = ;
static const struct attribute_group rt_sysfs_attr_group = ;
static int data_open(struct inode *inode, struct file *filp)
static int data_release(struct inode *inode, struct file *filp)
static ssize_t data_read(struct file *filp, char __user *ubuf, size_t count,
loff_t *f_pos)
static unsigned int data_poll(struct file *filp, struct poll_table_struct *tbl)
static int data_mmap(struct file *filp, struct vm_area_struct *vma)
static const struct file_operations data_fops = ;
static bool dma_filter(struct dma_chan *chan, void *data)
static int data_of_probe(struct platform_device *op,
const struct of_device_id *match)
static int data_of_remove(struct platform_device *op)
static struct of_device_id data_of_match[] = ;
static struct of_platform_driver data_of_driver = ;
static int __init data_init(void)
static void __exit data_exit(void)
MODULE_AUTHOR("Ira W. Snyder <iws@ovro.caltech.edu>");
MODULE_DESCRIPTION("CARMA DATA-FPGA Access Driver");
MODULE_LICENSE("GPL");
module_init(data_init);
module_exit(data_exit);
