#define DRIVER_NAME "icap"
#define HWICAP_REGS   (0x10000)
#define XHWICAP_MAJOR 259
#define XHWICAP_MINOR 0
#define HWICAP_DEVICES 1
static DEFINE_MUTEX(hwicap_mutex);
static bool probed_devices[HWICAP_DEVICES];
static struct mutex icap_sem;
static struct class *icap_class;
#define UNIMPLEMENTED 0xFFFF
static const struct config_registers v2_config_registers = ;
static const struct config_registers v4_config_registers = ;
static const struct config_registers v5_config_registers = ;
static int hwicap_command_desync(struct hwicap_drvdata *drvdata)
static int hwicap_get_configuration_register(struct hwicap_drvdata *drvdata,
u32 reg, u32 *reg_data)
static int hwicap_initialize_hwicap(struct hwicap_drvdata *drvdata)
static ssize_t
hwicap_read(struct file *file, char __user *buf, size_t count, loff_t *ppos)
static ssize_t
hwicap_write(struct file *file, const char __user *buf,
size_t count, loff_t *ppos)
static int hwicap_open(struct inode *inode, struct file *file)
static int hwicap_release(struct inode *inode, struct file *file)
static const struct file_operations hwicap_fops = ;
static int __devinit hwicap_setup(struct device *dev, int id,
const struct resource *regs_res,
const struct hwicap_driver_config *config,
const struct config_registers *config_regs)
static struct hwicap_driver_config buffer_icap_config = ;
static struct hwicap_driver_config fifo_icap_config = ;
static int __devexit hwicap_remove(struct device *dev)
static int __devinit hwicap_of_probe(struct platform_device *op,
const struct hwicap_driver_config *config)
static inline int hwicap_of_probe(struct platform_device *op,
const struct hwicap_driver_config *config)
static const struct of_device_id __devinitconst hwicap_of_match[];
static int __devinit hwicap_drv_probe(struct platform_device *pdev)
static int __devexit hwicap_drv_remove(struct platform_device *pdev)
static const struct of_device_id __devinitconst hwicap_of_match[] = ;
MODULE_DEVICE_TABLE(of, hwicap_of_match);
#define hwicap_of_match NULL
static struct platform_driver hwicap_platform_driver = ;
static int __init hwicap_module_init(void)
static void __exit hwicap_module_cleanup(void)
module_init(hwicap_module_init);
module_exit(hwicap_module_cleanup);
MODULE_AUTHOR("Xilinx, Inc; Xilinx Research Labs Group");
MODULE_DESCRIPTION("Xilinx ICAP Port Driver");
MODULE_LICENSE("GPL");
