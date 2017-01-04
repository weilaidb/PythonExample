#define __LINUX_LEDS_H_INCLUDED
struct device;
enum led_brightness ;
struct led_classdev ;
extern int led_classdev_register(struct device *parent,
struct led_classdev *led_cdev);
extern void led_classdev_unregister(struct led_classdev *led_cdev);
extern void led_classdev_suspend(struct led_classdev *led_cdev);
extern void led_classdev_resume(struct led_classdev *led_cdev);
extern void led_blink_set(struct led_classdev *led_cdev,
unsigned long *delay_on,
unsigned long *delay_off);
extern void led_brightness_set(struct led_classdev *led_cdev,
enum led_brightness brightness);
#define TRIG_NAME_MAX 50
struct led_trigger ;
extern int led_trigger_register(struct led_trigger *trigger);
extern void led_trigger_unregister(struct led_trigger *trigger);
#define DEFINE_LED_TRIGGER(x)		static struct led_trigger *x;
#define DEFINE_LED_TRIGGER_GLOBAL(x)	struct led_trigger *x;
extern void led_trigger_register_simple(const char *name,
struct led_trigger **trigger);
extern void led_trigger_unregister_simple(struct led_trigger *trigger);
extern void led_trigger_event(struct led_trigger *trigger,
enum led_brightness event);
extern void led_trigger_blink(struct led_trigger *trigger,
unsigned long *delay_on,
unsigned long *delay_off);
#define DEFINE_LED_TRIGGER(x)
#define DEFINE_LED_TRIGGER_GLOBAL(x)
#define led_trigger_register_simple(x, y) do  while(0)
#define led_trigger_unregister_simple(x) do  while(0)
#define led_trigger_event(x, y) do  while(0)
extern void ledtrig_ide_activity(void);
#define ledtrig_ide_activity() do  while(0)
struct led_info ;
struct led_platform_data ;
struct gpio_led ;
#define LEDS_GPIO_DEFSTATE_OFF		0
#define LEDS_GPIO_DEFSTATE_ON		1
#define LEDS_GPIO_DEFSTATE_KEEP		2
struct gpio_led_platform_data ;
struct platform_device *gpio_led_register_device(
int id, const struct gpio_led_platform_data *pdata);
