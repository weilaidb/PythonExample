#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
MODULE_AUTHOR("Rodney Girod <rgirod@confocus.com>, Dave Hansen <dave@sr71.net>");
MODULE_DESCRIPTION("Intel NAS/Home Server ICH7 GPIO Driver");
MODULE_LICENSE("GPL");
#define PMBASE		0x040
#define GPIO_BASE	0x048
#define GPIO_CTRL	0x04c
#define GPIO_EN		0x010
#define ICH7_GPIO_SIZE	64
#define GPIO_USE_SEL	0x000
#define GP_IO_SEL	0x004
#define GP_LVL		0x00c
#define GPO_BLINK	0x018
#define GPI_INV		0x030
#define GPIO_USE_SEL2	0x034
#define GP_IO_SEL2	0x038
#define GP_LVL2		0x03c
static const struct pci_device_id ich7_lpc_pci_id[] =
;
MODULE_DEVICE_TABLE(pci, ich7_lpc_pci_id);
static int __init ss4200_led_dmi_callback(const struct dmi_system_id *id)
static unsigned int __initdata nodetect;
module_param_named(nodetect, nodetect, bool, 0);
MODULE_PARM_DESC(nodetect, "Skip DMI-based hardware detection");
static struct dmi_system_id __initdata nas_led_whitelist[] = ;
static u32 g_pm_io_base;
static u32 nas_gpio_io_base;
static struct resource *gp_gpio_resource;
struct nasgpio_led ;
static struct nasgpio_led nasgpio_leds[] = ;
#define NAS_RECOVERY	0x00000400
static struct nasgpio_led *
led_classdev_to_nasgpio_led(struct led_classdev *led_cdev)
static struct nasgpio_led *get_led_named(char *name)
static DEFINE_SPINLOCK(nasgpio_gpio_lock);
static void __nasgpio_led_set_attr(struct led_classdev *led_cdev,
u32 port, u32 value)
static void nasgpio_led_set_attr(struct led_classdev *led_cdev,
u32 port, u32 value)
u32 nasgpio_led_get_attr(struct led_classdev *led_cdev, u32 port)
static void nasgpio_led_set_brightness(struct led_classdev *led_cdev,
enum led_brightness brightness)
static int nasgpio_led_set_blink(struct led_classdev *led_cdev,
unsigned long *delay_on,
unsigned long *delay_off)
static int __devinit ich7_gpio_init(struct device *dev)
static void ich7_lpc_cleanup(struct device *dev)
static struct pci_dev *nas_gpio_pci_dev;
static int __devinit ich7_lpc_probe(struct pci_dev *dev,
const struct pci_device_id *id)
static void ich7_lpc_remove(struct pci_dev *dev)
static struct pci_driver nas_gpio_pci_driver = ;
static struct led_classdev *get_classdev_for_led_nr(int nr)
static void set_power_light_amber_noblink(void)
static ssize_t nas_led_blink_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t nas_led_blink_store(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t size)
static DEVICE_ATTR(blink, 0644, nas_led_blink_show, nas_led_blink_store);
static int register_nasgpio_led(int led_nr)
static void unregister_nasgpio_led(int led_nr)
static int __init nas_gpio_init(void)
static void __exit nas_gpio_exit(void)
module_init(nas_gpio_init);
module_exit(nas_gpio_exit);
