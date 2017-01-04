#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
static unsigned short force_id;
module_param(force_id, ushort, 0);
MODULE_PARM_DESC(force_id, "Override the detected device ID");
static struct platform_device *pdev;
#define DRVNAME "smsc47b397"
#define	REG	0x2e
#define	VAL	0x2f
static inline void superio_outb(int reg, int val)
static inline int superio_inb(int reg)
static inline void superio_select(int ld)
static inline void superio_enter(void)
static inline void superio_exit(void)
#define SUPERIO_REG_DEVID	0x20
#define SUPERIO_REG_DEVREV	0x21
#define SUPERIO_REG_BASE_MSB	0x60
#define SUPERIO_REG_BASE_LSB	0x61
#define SUPERIO_REG_LD8		0x08
#define SMSC_EXTENT		0x02
static u8 smsc47b397_reg_temp[] = ;
#define SMSC47B397_REG_TEMP(nr)	(smsc47b397_reg_temp[(nr)])
#define SMSC47B397_REG_FAN_LSB(nr) (0x28 + 2 * (nr))
#define SMSC47B397_REG_FAN_MSB(nr) (0x29 + 2 * (nr))
struct smsc47b397_data ;
static int smsc47b397_read_value(struct smsc47b397_data* data, u8 reg)
static struct smsc47b397_data *smsc47b397_update_device(struct device *dev)
static int temp_from_reg(u8 reg)
static ssize_t show_temp(struct device *dev, struct device_attribute
*devattr, char *buf)
static SENSOR_DEVICE_ATTR(temp1_input, S_IRUGO, show_temp, NULL, 0);
static SENSOR_DEVICE_ATTR(temp2_input, S_IRUGO, show_temp, NULL, 1);
static SENSOR_DEVICE_ATTR(temp3_input, S_IRUGO, show_temp, NULL, 2);
static SENSOR_DEVICE_ATTR(temp4_input, S_IRUGO, show_temp, NULL, 3);
static int fan_from_reg(u16 reg)
static ssize_t show_fan(struct device *dev, struct device_attribute
*devattr, char *buf)
static SENSOR_DEVICE_ATTR(fan1_input, S_IRUGO, show_fan, NULL, 0);
static SENSOR_DEVICE_ATTR(fan2_input, S_IRUGO, show_fan, NULL, 1);
static SENSOR_DEVICE_ATTR(fan3_input, S_IRUGO, show_fan, NULL, 2);
static SENSOR_DEVICE_ATTR(fan4_input, S_IRUGO, show_fan, NULL, 3);
static ssize_t show_name(struct device *dev, struct device_attribute
*devattr, char *buf)
static DEVICE_ATTR(name, S_IRUGO, show_name, NULL);
static struct attribute *smsc47b397_attributes[] = ;
static const struct attribute_group smsc47b397_group = ;
static int __devexit smsc47b397_remove(struct platform_device *pdev)
static int smsc47b397_probe(struct platform_device *pdev);
static struct platform_driver smsc47b397_driver = ;
static int __devinit smsc47b397_probe(struct platform_device *pdev)
static int __init smsc47b397_device_add(unsigned short address)
static int __init smsc47b397_find(unsigned short *addr)
static int __init smsc47b397_init(void)
static void __exit smsc47b397_exit(void)
MODULE_AUTHOR("Mark M. Hoffman <mhoffman@lightlink.com>");
MODULE_DESCRIPTION("SMSC LPC47B397 driver");
MODULE_LICENSE("GPL");
module_init(smsc47b397_init);
module_exit(smsc47b397_exit);
