#define FSG_LED_WLAN_BIT	0
#define FSG_LED_WAN_BIT		1
#define FSG_LED_SATA_BIT	2
#define FSG_LED_USB_BIT		4
#define FSG_LED_RING_BIT	5
#define FSG_LED_SYNC_BIT	7
static short __iomem *latch_address;
static unsigned short latch_value;
static void fsg_led_wlan_set(struct led_classdev *led_cdev,
enum led_brightness value)
static void fsg_led_wan_set(struct led_classdev *led_cdev,
enum led_brightness value)
static void fsg_led_sata_set(struct led_classdev *led_cdev,
enum led_brightness value)
static void fsg_led_usb_set(struct led_classdev *led_cdev,
enum led_brightness value)
static void fsg_led_sync_set(struct led_classdev *led_cdev,
enum led_brightness value)
static void fsg_led_ring_set(struct led_classdev *led_cdev,
enum led_brightness value)
static struct led_classdev fsg_wlan_led = ;
static struct led_classdev fsg_wan_led = ;
static struct led_classdev fsg_sata_led = ;
static struct led_classdev fsg_usb_led = ;
static struct led_classdev fsg_sync_led = ;
static struct led_classdev fsg_ring_led = ;
static int fsg_led_probe(struct platform_device *pdev)
static int fsg_led_remove(struct platform_device *pdev)
static struct platform_driver fsg_led_driver = ;
static int __init fsg_led_init(void)
static void __exit fsg_led_exit(void)
module_init(fsg_led_init);
module_exit(fsg_led_exit);
MODULE_AUTHOR("Rod Whitby <rod@whitby.id.au>");
MODULE_DESCRIPTION("Freecom FSG-3 LED driver");
MODULE_LICENSE("GPL");
