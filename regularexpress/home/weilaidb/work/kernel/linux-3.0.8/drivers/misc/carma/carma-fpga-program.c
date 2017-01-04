static const char drv_name[] = "carma-fpga-program";
#define FW_SIZE_EP2S90		12849552
#define FW_SIZE_EP2S130		18662880
struct fpga_dev ;
static void fpga_drop_firmware_data(struct fpga_dev *priv)
static void fpga_dev_remove(struct kref *ref)
DEFINE_LED_TRIGGER(ledtrig_fpga);
static void ledtrig_fpga_programmed(bool enabled)
#define FPGA_CONFIG_CONTROL		0x40
#define FPGA_CONFIG_STATUS		0x44
#define FPGA_CONFIG_FIFO_SIZE		0x48
#define FPGA_CONFIG_FIFO_USED		0x4C
#define FPGA_CONFIG_TOTAL_BYTE_COUNT	0x50
#define FPGA_CONFIG_CUR_BYTE_COUNT	0x54
#define FPGA_FIFO_ADDRESS		0x3000
static int fpga_fifo_size(void __iomem *regs)
#define CFG_STATUS_ERR_MASK	0xfffe
static int fpga_config_error(void __iomem *regs)
static int fpga_fifo_empty(void __iomem *regs)
static void fpga_fifo_write(void __iomem *regs, u32 val)
static void fpga_set_byte_count(void __iomem *regs, u32 count)
#define CFG_CTL_ENABLE	(1 << 0)
#define CFG_CTL_RESET	(1 << 1)
#define CFG_CTL_DMA	(1 << 2)
static void fpga_programmer_enable(struct fpga_dev *priv, bool dma)
static void fpga_programmer_disable(struct fpga_dev *priv)
static void fpga_dump_registers(struct fpga_dev *priv)
#define CTL_PWR_CONTROL		0x2006
#define CTL_PWR_STATUS		0x200A
#define CTL_PWR_FAIL		0x200B
#define PWR_CONTROL_ENABLE	0x01
#define PWR_STATUS_ERROR_MASK	0x10
#define PWR_STATUS_GOOD		0x0f
static bool fpga_power_good(struct fpga_dev *priv)
static void fpga_disable_power_supplies(struct fpga_dev *priv)
static int fpga_enable_power_supplies(struct fpga_dev *priv)
static bool fpga_power_enabled(struct fpga_dev *priv)
static bool fpga_running(struct fpga_dev *priv)
static int fpga_program_block(struct fpga_dev *priv, void *buf, size_t count)
static noinline int fpga_program_cpu(struct fpga_dev *priv)
#define FIFO_DMA_ADDRESS	0xf0003000
#define FIFO_MAX_LEN		4096
static noinline int fpga_program_dma(struct fpga_dev *priv)
static irqreturn_t fpga_irq(int irq, void *dev_id)
static int fpga_do_stop(struct fpga_dev *priv)
static noinline int fpga_do_program(struct fpga_dev *priv)
static int fpga_open(struct inode *inode, struct file *filp)
static int fpga_release(struct inode *inode, struct file *filp)
static ssize_t fpga_write(struct file *filp, const char __user *buf,
size_t count, loff_t *f_pos)
static ssize_t fpga_read(struct file *filp, char __user *buf, size_t count,
loff_t *f_pos)
static loff_t fpga_llseek(struct file *filp, loff_t offset, int origin)
static const struct file_operations fpga_fops = ;
static ssize_t pfail_show(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t pgood_show(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t penable_show(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t penable_store(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t program_show(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t program_store(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(power_fail, S_IRUGO, pfail_show, NULL);
static DEVICE_ATTR(power_good, S_IRUGO, pgood_show, NULL);
static DEVICE_ATTR(power_enable, S_IRUGO | S_IWUSR,
penable_show, penable_store);
static DEVICE_ATTR(program, S_IRUGO | S_IWUSR,
program_show, program_store);
static struct attribute *fpga_attributes[] = ;
static const struct attribute_group fpga_attr_group = ;
#define SYS_REG_VERSION		0x00
#define SYS_REG_GEOGRAPHIC	0x10
static bool dma_filter(struct dma_chan *chan, void *data)
static int fpga_of_remove(struct platform_device *op)
#define CTL_CPLD_VERSION	0x2000
static int fpga_of_probe(struct platform_device *op,
const struct of_device_id *match)
static struct of_device_id fpga_of_match[] = ;
static struct of_platform_driver fpga_of_driver = ;
static int __init fpga_init(void)
static void __exit fpga_exit(void)
MODULE_AUTHOR("Ira W. Snyder <iws@ovro.caltech.edu>");
MODULE_DESCRIPTION("CARMA Board DATA-FPGA Programmer");
MODULE_LICENSE("GPL");
module_init(fpga_init);
module_exit(fpga_exit);
