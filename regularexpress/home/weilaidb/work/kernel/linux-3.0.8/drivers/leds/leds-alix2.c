static int force = 0;
module_param(force, bool, 0444);
MODULE_PARM_DESC(force, "Assume system has ALIX.2/ALIX.3 style LEDs");
#define MSR_LBAR_GPIO		0x5140000C
#define CS5535_GPIO_SIZE	256
static u32 gpio_base;
static struct pci_device_id divil_pci[] = ;
MODULE_DEVICE_TABLE(pci, divil_pci);
struct alix_led ;
static void alix_led_set(struct led_classdev *led_cdev,
enum led_brightness brightness)
static struct alix_led alix_leds[] = ;
static int __init alix_led_probe(struct platform_device *pdev)
static int alix_led_remove(struct platform_device *pdev)
static struct platform_driver alix_led_driver = ;
static int __init alix_present(unsigned long bios_phys,
const char *alix_sig,
size_t alix_sig_len)
static struct platform_device *pdev;
static int __init alix_pci_led_init(void)
static int __init alix_led_init(void)
static void __exit alix_led_exit(void)
module_init(alix_led_init);
module_exit(alix_led_exit);
MODULE_AUTHOR("Constantin Baranov <const@mimas.ru>");
MODULE_DESCRIPTION("PCEngines ALIX.2 and ALIX.3 LED driver");
MODULE_LICENSE("GPL");
