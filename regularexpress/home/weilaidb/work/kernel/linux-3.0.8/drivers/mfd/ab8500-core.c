#define AB8500_IT_SOURCE1_REG		0x00
#define AB8500_IT_SOURCE2_REG		0x01
#define AB8500_IT_SOURCE3_REG		0x02
#define AB8500_IT_SOURCE4_REG		0x03
#define AB8500_IT_SOURCE5_REG		0x04
#define AB8500_IT_SOURCE6_REG		0x05
#define AB8500_IT_SOURCE7_REG		0x06
#define AB8500_IT_SOURCE8_REG		0x07
#define AB8500_IT_SOURCE19_REG		0x12
#define AB8500_IT_SOURCE20_REG		0x13
#define AB8500_IT_SOURCE21_REG		0x14
#define AB8500_IT_SOURCE22_REG		0x15
#define AB8500_IT_SOURCE23_REG		0x16
#define AB8500_IT_SOURCE24_REG		0x17
#define AB8500_IT_LATCH1_REG		0x20
#define AB8500_IT_LATCH2_REG		0x21
#define AB8500_IT_LATCH3_REG		0x22
#define AB8500_IT_LATCH4_REG		0x23
#define AB8500_IT_LATCH5_REG		0x24
#define AB8500_IT_LATCH6_REG		0x25
#define AB8500_IT_LATCH7_REG		0x26
#define AB8500_IT_LATCH8_REG		0x27
#define AB8500_IT_LATCH9_REG		0x28
#define AB8500_IT_LATCH10_REG		0x29
#define AB8500_IT_LATCH12_REG		0x2B
#define AB8500_IT_LATCH19_REG		0x32
#define AB8500_IT_LATCH20_REG		0x33
#define AB8500_IT_LATCH21_REG		0x34
#define AB8500_IT_LATCH22_REG		0x35
#define AB8500_IT_LATCH23_REG		0x36
#define AB8500_IT_LATCH24_REG		0x37
#define AB8500_IT_MASK1_REG		0x40
#define AB8500_IT_MASK2_REG		0x41
#define AB8500_IT_MASK3_REG		0x42
#define AB8500_IT_MASK4_REG		0x43
#define AB8500_IT_MASK5_REG		0x44
#define AB8500_IT_MASK6_REG		0x45
#define AB8500_IT_MASK7_REG		0x46
#define AB8500_IT_MASK8_REG		0x47
#define AB8500_IT_MASK9_REG		0x48
#define AB8500_IT_MASK10_REG		0x49
#define AB8500_IT_MASK11_REG		0x4A
#define AB8500_IT_MASK12_REG		0x4B
#define AB8500_IT_MASK13_REG		0x4C
#define AB8500_IT_MASK14_REG		0x4D
#define AB8500_IT_MASK15_REG		0x4E
#define AB8500_IT_MASK16_REG		0x4F
#define AB8500_IT_MASK17_REG		0x50
#define AB8500_IT_MASK18_REG		0x51
#define AB8500_IT_MASK19_REG		0x52
#define AB8500_IT_MASK20_REG		0x53
#define AB8500_IT_MASK21_REG		0x54
#define AB8500_IT_MASK22_REG		0x55
#define AB8500_IT_MASK23_REG		0x56
#define AB8500_IT_MASK24_REG		0x57
#define AB8500_REV_REG			0x80
#define AB8500_SWITCH_OFF_STATUS	0x00
static const int ab8500_irq_regoffset[AB8500_NUM_IRQ_REGS] = ;
static int ab8500_get_chip_id(struct device *dev)
static int set_register_interruptible(struct ab8500 *ab8500, u8 bank,
u8 reg, u8 data)
static int ab8500_set_register(struct device *dev, u8 bank,
u8 reg, u8 value)
static int get_register_interruptible(struct ab8500 *ab8500, u8 bank,
u8 reg, u8 *value)
static int ab8500_get_register(struct device *dev, u8 bank,
u8 reg, u8 *value)
static int mask_and_set_register_interruptible(struct ab8500 *ab8500, u8 bank,
u8 reg, u8 bitmask, u8 bitvalues)
static int ab8500_mask_and_set_register(struct device *dev,
u8 bank, u8 reg, u8 bitmask, u8 bitvalues)
static struct abx500_ops ab8500_ops = ;
static void ab8500_irq_lock(struct irq_data *data)
static void ab8500_irq_sync_unlock(struct irq_data *data)
static void ab8500_irq_mask(struct irq_data *data)
static void ab8500_irq_unmask(struct irq_data *data)
static struct irq_chip ab8500_irq_chip = ;
static irqreturn_t ab8500_irq(int irq, void *dev)
static int ab8500_irq_init(struct ab8500 *ab8500)
static void ab8500_irq_remove(struct ab8500 *ab8500)
static struct resource ab8500_gpio_resources[] = ;
static struct resource ab8500_gpadc_resources[] = ;
static struct resource ab8500_rtc_resources[] = ;
static struct resource ab8500_poweronkey_db_resources[] = ;
static struct resource ab8500_bm_resources[] = ;
static struct resource ab8500_debug_resources[] = ;
static struct resource ab8500_usb_resources[] = ;
static struct resource ab8500_temp_resources[] = ;
static struct mfd_cell ab8500_devs[] = ;
static ssize_t show_chip_id(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t show_switch_off_status(struct device *dev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(chip_id, S_IRUGO, show_chip_id, NULL);
static DEVICE_ATTR(switch_off_status, S_IRUGO, show_switch_off_status, NULL);
static struct attribute *ab8500_sysfs_entries[] = ;
static struct attribute_group ab8500_attr_group = ;
int __devinit ab8500_init(struct ab8500 *ab8500)
int __devexit ab8500_exit(struct ab8500 *ab8500)
MODULE_AUTHOR("Mattias Wallin, Srinidhi Kasagar, Rabin Vincent");
MODULE_DESCRIPTION("AB8500 MFD core");
MODULE_LICENSE("GPL v2");
