#define IRQ_LOCOMO_KEY		(0)
#define IRQ_LOCOMO_GPIO		(1)
#define IRQ_LOCOMO_LT		(2)
#define IRQ_LOCOMO_SPI		(3)
#define M62332_EVR_CH	1
#define	M62332_SLAVE_ADDR	0x4e
#define	M62332_W_BIT		0x00
#define	M62332_SUB_ADDR		0x00
#define	M62332_A_BIT		0x00
#define DAC_BUS_FREE_TIME	5
#define DAC_START_SETUP_TIME	5
#define DAC_STOP_SETUP_TIME	4
#define DAC_START_HOLD_TIME	5
#define DAC_SCL_LOW_HOLD_TIME	5
#define DAC_SCL_HIGH_HOLD_TIME	4
#define DAC_DATA_SETUP_TIME	1
#define DAC_DATA_HOLD_TIME	1
#define DAC_LOW_SETUP_TIME	1
#define DAC_HIGH_SETUP_TIME	1
struct locomo ;
struct locomo_dev_info ;
static struct locomo_dev_info locomo_devices[] = ;
static void locomo_handler(unsigned int irq, struct irq_desc *desc)
static void locomo_ack_irq(struct irq_data *d)
static void locomo_mask_irq(struct irq_data *d)
static void locomo_unmask_irq(struct irq_data *d)
static struct irq_chip locomo_chip = ;
static void locomo_setup_irq(struct locomo *lchip)
static void locomo_dev_release(struct device *_dev)
static int
locomo_init_one_child(struct locomo *lchip, struct locomo_dev_info *info)
struct locomo_save_data ;
static int locomo_suspend(struct platform_device *dev, pm_message_t state)
static int locomo_resume(struct platform_device *dev)
static int
__locomo_probe(struct device *me, struct resource *mem, int irq)
static int locomo_remove_child(struct device *dev, void *data)
static void __locomo_remove(struct locomo *lchip)
static int locomo_probe(struct platform_device *dev)
static int locomo_remove(struct platform_device *dev)
static struct platform_driver locomo_device_driver = ;
static inline struct locomo *locomo_chip_driver(struct locomo_dev *ldev)
void locomo_gpio_set_dir(struct device *dev, unsigned int bits, unsigned int dir)
EXPORT_SYMBOL(locomo_gpio_set_dir);
int locomo_gpio_read_level(struct device *dev, unsigned int bits)
EXPORT_SYMBOL(locomo_gpio_read_level);
int locomo_gpio_read_output(struct device *dev, unsigned int bits)
EXPORT_SYMBOL(locomo_gpio_read_output);
void locomo_gpio_write(struct device *dev, unsigned int bits, unsigned int set)
EXPORT_SYMBOL(locomo_gpio_write);
static void locomo_m62332_sendbit(void *mapbase, int bit)
void locomo_m62332_senddata(struct locomo_dev *ldev, unsigned int dac_data, int channel)
EXPORT_SYMBOL(locomo_m62332_senddata);
void locomo_frontlight_set(struct locomo_dev *dev, int duty, int vr, int bpwf)
EXPORT_SYMBOL(locomo_frontlight_set);
static int locomo_match(struct device *_dev, struct device_driver *_drv)
static int locomo_bus_suspend(struct device *dev, pm_message_t state)
static int locomo_bus_resume(struct device *dev)
static int locomo_bus_probe(struct device *dev)
static int locomo_bus_remove(struct device *dev)
struct bus_type locomo_bus_type = ;
int locomo_driver_register(struct locomo_driver *driver)
EXPORT_SYMBOL(locomo_driver_register);
void locomo_driver_unregister(struct locomo_driver *driver)
EXPORT_SYMBOL(locomo_driver_unregister);
static int __init locomo_init(void)
static void __exit locomo_exit(void)
module_init(locomo_init);
module_exit(locomo_exit);
MODULE_DESCRIPTION("Sharp LoCoMo core driver");
MODULE_LICENSE("GPL");
MODULE_AUTHOR("John Lenz <lenz@cs.wisc.edu>");
