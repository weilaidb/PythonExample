static const unsigned short normal_i2c[] = ;
#define ICS932S401_REG_CFG2			0x01
#define 	ICS932S401_CFG1_SPREAD		0x01
#define ICS932S401_REG_CFG7			0x06
#define		ICS932S401_FS_MASK		0x07
#define	ICS932S401_REG_VENDOR_REV		0x07
#define		ICS932S401_VENDOR		1
#define		ICS932S401_VENDOR_MASK		0x0F
#define		ICS932S401_REV			4
#define		ICS932S401_REV_SHIFT		4
#define ICS932S401_REG_DEVICE			0x09
#define		ICS932S401_DEVICE		11
#define	ICS932S401_REG_CTRL			0x0A
#define		ICS932S401_MN_ENABLED		0x80
#define		ICS932S401_CPU_ALT		0x04
#define		ICS932S401_SRC_ALT		0x08
#define ICS932S401_REG_CPU_M_CTRL		0x0B
#define		ICS932S401_M_MASK		0x3F
#define	ICS932S401_REG_CPU_N_CTRL		0x0C
#define	ICS932S401_REG_CPU_SPREAD1		0x0D
#define ICS932S401_REG_CPU_SPREAD2		0x0E
#define		ICS932S401_SPREAD_MASK		0x7FFF
#define ICS932S401_REG_SRC_M_CTRL		0x0F
#define ICS932S401_REG_SRC_N_CTRL		0x10
#define	ICS932S401_REG_SRC_SPREAD1		0x11
#define ICS932S401_REG_SRC_SPREAD2		0x12
#define ICS932S401_REG_CPU_DIVISOR		0x13
#define 	ICS932S401_CPU_DIVISOR_SHIFT	4
#define ICS932S401_REG_PCISRC_DIVISOR		0x14
#define		ICS932S401_SRC_DIVISOR_MASK	0x0F
#define		ICS932S401_PCI_DIVISOR_SHIFT	4
#define BASE_CLOCK				14318
#define NUM_REGS				21
#define NUM_MIRRORED_REGS			15
static int regs_to_copy[NUM_MIRRORED_REGS] = ;
#define SENSOR_REFRESH_INTERVAL	(2 * HZ)
#define LIMIT_REFRESH_INTERVAL	(60 * HZ)
struct ics932s401_data ;
static int ics932s401_probe(struct i2c_client *client,
const struct i2c_device_id *id);
static int ics932s401_detect(struct i2c_client *client,
struct i2c_board_info *info);
static int ics932s401_remove(struct i2c_client *client);
static const struct i2c_device_id ics932s401_id[] = ;
MODULE_DEVICE_TABLE(i2c, ics932s401_id);
static struct i2c_driver ics932s401_driver = ;
static struct ics932s401_data *ics932s401_update_device(struct device *dev)
static ssize_t show_spread_enabled(struct device *dev,
struct device_attribute *devattr,
char *buf)
static const int fs_speeds[] = ;
static const int divisors[] = ;
static int calculate_cpu_freq(struct ics932s401_data *data)
static ssize_t show_cpu_clock(struct device *dev,
struct device_attribute *devattr,
char *buf)
static ssize_t show_cpu_clock_sel(struct device *dev,
struct device_attribute *devattr,
char *buf)
static int calculate_src_freq(struct ics932s401_data *data)
static ssize_t show_src_clock(struct device *dev,
struct device_attribute *devattr,
char *buf)
static ssize_t show_src_clock_sel(struct device *dev,
struct device_attribute *devattr,
char *buf)
static int calculate_pci_freq(struct ics932s401_data *data)
static ssize_t show_pci_clock(struct device *dev,
struct device_attribute *devattr,
char *buf)
static ssize_t show_pci_clock_sel(struct device *dev,
struct device_attribute *devattr,
char *buf)
static ssize_t show_value(struct device *dev,
struct device_attribute *devattr,
char *buf);
static ssize_t show_spread(struct device *dev,
struct device_attribute *devattr,
char *buf);
static DEVICE_ATTR(spread_enabled, S_IRUGO, show_spread_enabled, NULL);
static DEVICE_ATTR(cpu_clock_selection, S_IRUGO, show_cpu_clock_sel, NULL);
static DEVICE_ATTR(cpu_clock, S_IRUGO, show_cpu_clock, NULL);
static DEVICE_ATTR(src_clock_selection, S_IRUGO, show_src_clock_sel, NULL);
static DEVICE_ATTR(src_clock, S_IRUGO, show_src_clock, NULL);
static DEVICE_ATTR(pci_clock_selection, S_IRUGO, show_pci_clock_sel, NULL);
static DEVICE_ATTR(pci_clock, S_IRUGO, show_pci_clock, NULL);
static DEVICE_ATTR(usb_clock, S_IRUGO, show_value, NULL);
static DEVICE_ATTR(ref_clock, S_IRUGO, show_value, NULL);
static DEVICE_ATTR(cpu_spread, S_IRUGO, show_spread, NULL);
static DEVICE_ATTR(src_spread, S_IRUGO, show_spread, NULL);
static struct attribute *ics932s401_attr[] =
;
static ssize_t show_value(struct device *dev,
struct device_attribute *devattr,
char *buf)
static ssize_t show_spread(struct device *dev,
struct device_attribute *devattr,
char *buf)
static int ics932s401_detect(struct i2c_client *client,
struct i2c_board_info *info)
static int ics932s401_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int ics932s401_remove(struct i2c_client *client)
static int __init ics932s401_init(void)
static void __exit ics932s401_exit(void)
MODULE_AUTHOR("Darrick J. Wong <djwong@us.ibm.com>");
MODULE_DESCRIPTION("ICS932S401 driver");
MODULE_LICENSE("GPL");
module_init(ics932s401_init);
module_exit(ics932s401_exit);
MODULE_ALIAS("dmi:bvnIBM:*:rn9228:*");
MODULE_ALIAS("dmi:bvnIBM:*:rn9232:*");
MODULE_ALIAS("dmi:bvnIBM:*:pnIBMSystemx3650*");
MODULE_ALIAS("dmi:bvnIBM:*:pnIBMSystemx3550*");
