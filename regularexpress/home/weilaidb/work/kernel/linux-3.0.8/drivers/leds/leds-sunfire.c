#define DRIVER_NAME	"leds-sunfire"
#define PFX		DRIVER_NAME ": "
MODULE_AUTHOR("David S. Miller (davem@davemloft.net)");
MODULE_DESCRIPTION("Sun Fire LED driver");
MODULE_LICENSE("GPL");
struct sunfire_led ;
#define	to_sunfire_led(d) container_of(d, struct sunfire_led, led_cdev)
static void __clockboard_set(struct led_classdev *led_cdev,
enum led_brightness led_val, u8 bit)
static void clockboard_left_set(struct led_classdev *led_cdev,
enum led_brightness led_val)
static void clockboard_middle_set(struct led_classdev *led_cdev,
enum led_brightness led_val)
static void clockboard_right_set(struct led_classdev *led_cdev,
enum led_brightness led_val)
static void __fhc_set(struct led_classdev *led_cdev,
enum led_brightness led_val, u32 bit)
static void fhc_left_set(struct led_classdev *led_cdev,
enum led_brightness led_val)
static void fhc_middle_set(struct led_classdev *led_cdev,
enum led_brightness led_val)
static void fhc_right_set(struct led_classdev *led_cdev,
enum led_brightness led_val)
typedef void (*set_handler)(struct led_classdev *, enum led_brightness);
struct led_type ;
#define NUM_LEDS_PER_BOARD	3
struct sunfire_drvdata ;
static int __devinit sunfire_led_generic_probe(struct platform_device *pdev,
struct led_type *types)
static int __devexit sunfire_led_generic_remove(struct platform_device *pdev)
static struct led_type clockboard_led_types[NUM_LEDS_PER_BOARD] = ;
static int __devinit sunfire_clockboard_led_probe(struct platform_device *pdev)
static struct led_type fhc_led_types[NUM_LEDS_PER_BOARD] = ;
static int __devinit sunfire_fhc_led_probe(struct platform_device *pdev)
MODULE_ALIAS("platform:sunfire-clockboard-leds");
MODULE_ALIAS("platform:sunfire-fhc-leds");
static struct platform_driver sunfire_clockboard_led_driver = ;
static struct platform_driver sunfire_fhc_led_driver = ;
static int __init sunfire_leds_init(void)
static void __exit sunfire_leds_exit(void)
module_init(sunfire_leds_init);
module_exit(sunfire_leds_exit);
