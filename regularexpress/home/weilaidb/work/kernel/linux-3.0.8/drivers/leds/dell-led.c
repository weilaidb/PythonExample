MODULE_AUTHOR("Louis Davis/Jim Dailey");
MODULE_DESCRIPTION("Dell LED Control Driver");
MODULE_LICENSE("GPL");
#define DELL_LED_BIOS_GUID "F6E4FE6E-909D-47cb-8BAB-C9F6F2F8D396"
MODULE_ALIAS("wmi:" DELL_LED_BIOS_GUID);
#define INVALID_DEVICE_ID	250
#define INVALID_PARAMETER	251
#define INVALID_BUFFER		252
#define INTERFACE_ERROR		253
#define UNSUPPORTED_COMMAND	254
#define UNSPECIFIED_ERROR	255
#define DEVICE_ID_PANEL_BACK	1
#define CMD_LED_ON	16
#define CMD_LED_OFF	17
#define CMD_LED_BLINK	18
struct bios_args ;
static int dell_led_perform_fn(u8 length,
u8 result_code,
u8 device_id,
u8 command,
u8 on_time,
u8 off_time)
static int led_on(void)
static int led_off(void)
static int led_blink(unsigned char on_eighths,
unsigned char off_eighths)
static void dell_led_set(struct led_classdev *led_cdev,
enum led_brightness value)
static int dell_led_blink(struct led_classdev *led_cdev,
unsigned long *delay_on,
unsigned long *delay_off)
static struct led_classdev dell_led = ;
static int __init dell_led_init(void)
static void __exit dell_led_exit(void)
module_init(dell_led_init);
module_exit(dell_led_exit);
