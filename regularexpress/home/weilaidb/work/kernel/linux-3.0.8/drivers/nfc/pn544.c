#define DRIVER_CARD	"PN544 NFC"
#define DRIVER_DESC	"NFC driver for PN544"
static struct i2c_device_id pn544_id_table[] = ;
MODULE_DEVICE_TABLE(i2c, pn544_id_table);
#define HCI_MODE	0
#define FW_MODE		1
enum pn544_state ;
enum pn544_irq ;
struct pn544_info ;
static const char reg_vdd_io[]	= "Vdd_IO";
static const char reg_vbat[]	= "VBat";
static const char reg_vsim[]	= "VSim";
static ssize_t pn544_test(struct device *dev,
struct device_attribute *attr, char *buf)
static int pn544_enable(struct pn544_info *info, int mode)
static void pn544_disable(struct pn544_info *info)
static int check_crc(u8 *buf, int buflen)
static int pn544_i2c_write(struct i2c_client *client, u8 *buf, int len)
static int pn544_i2c_read(struct i2c_client *client, u8 *buf, int buflen)
static int pn544_fw_write(struct i2c_client *client, u8 *buf, int len)
static int pn544_fw_read(struct i2c_client *client, u8 *buf, int buflen)
static irqreturn_t pn544_irq_thread_fn(int irq, void *dev_id)
static enum pn544_irq pn544_irq_state(struct pn544_info *info)
static ssize_t pn544_read(struct file *file, char __user *buf,
size_t count, loff_t *offset)
static unsigned int pn544_poll(struct file *file, poll_table *wait)
static ssize_t pn544_write(struct file *file, const char __user *buf,
size_t count, loff_t *ppos)
static long pn544_ioctl(struct file *file, unsigned int cmd, unsigned long arg)
static int pn544_open(struct inode *inode, struct file *file)
static int pn544_close(struct inode *inode, struct file *file)
static const struct file_operations pn544_fops = ;
static int pn544_suspend(struct device *dev)
static int pn544_resume(struct device *dev)
static SIMPLE_DEV_PM_OPS(pn544_pm_ops, pn544_suspend, pn544_resume);
static struct device_attribute pn544_attr =
__ATTR(nfc_test, S_IRUGO, pn544_test, NULL);
static int __devinit pn544_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static __devexit int pn544_remove(struct i2c_client *client)
static struct i2c_driver pn544_driver = ;
static int __init pn544_init(void)
static void __exit pn544_exit(void)
module_init(pn544_init);
module_exit(pn544_exit);
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION(DRIVER_DESC);
