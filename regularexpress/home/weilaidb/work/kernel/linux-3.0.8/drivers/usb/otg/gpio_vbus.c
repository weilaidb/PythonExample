struct gpio_vbus_data ;
#define VBUS_IRQ_FLAGS \
( IRQF_SAMPLE_RANDOM | IRQF_SHARED \
| IRQF_TRIGGER_RISING | IRQF_TRIGGER_FALLING )
static void set_vbus_draw(struct gpio_vbus_data *gpio_vbus, unsigned mA)
static int is_vbus_powered(struct gpio_vbus_mach_info *pdata)
static void gpio_vbus_work(struct work_struct *work)
static irqreturn_t gpio_vbus_irq(int irq, void *data)
static int gpio_vbus_set_peripheral(struct otg_transceiver *otg,
struct usb_gadget *gadget)
static int gpio_vbus_set_power(struct otg_transceiver *otg, unsigned mA)
static int gpio_vbus_set_suspend(struct otg_transceiver *otg, int suspend)
static int __init gpio_vbus_probe(struct platform_device *pdev)
static int __exit gpio_vbus_remove(struct platform_device *pdev)
MODULE_ALIAS("platform:gpio-vbus");
static struct platform_driver gpio_vbus_driver = ;
static int __init gpio_vbus_init(void)
module_init(gpio_vbus_init);
static void __exit gpio_vbus_exit(void)
module_exit(gpio_vbus_exit);
MODULE_DESCRIPTION("simple GPIO controlled OTG transceiver driver");
MODULE_AUTHOR("Philipp Zabel");
MODULE_LICENSE("GPL");
