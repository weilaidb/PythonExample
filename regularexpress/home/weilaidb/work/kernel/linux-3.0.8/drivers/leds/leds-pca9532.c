#define PCA9532_REG_INPUT(i)	((i) >> 3)
#define PCA9532_REG_OFFSET(m)	((m) >> 4)
#define PCA9532_REG_PSC(m, i)	(PCA9532_REG_OFFSET(m) + 0x1 + (i) * 2)
#define PCA9532_REG_PWM(m, i)	(PCA9532_REG_OFFSET(m) + 0x2 + (i) * 2)
#define LED_REG(m, led)		(PCA9532_REG_OFFSET(m) + 0x5 + (led >> 2))
#define LED_NUM(led)		(led & 0x3)
#define ldev_to_led(c)       container_of(c, struct pca9532_led, ldev)
struct pca9532_chip_info ;
struct pca9532_data ;
static int pca9532_probe(struct i2c_client *client,
const struct i2c_device_id *id);
static int pca9532_remove(struct i2c_client *client);
enum ;
static const struct i2c_device_id pca9532_id[] = ;
MODULE_DEVICE_TABLE(i2c, pca9532_id);
static const struct pca9532_chip_info pca9532_chip_info_tbl[] = ;
static struct i2c_driver pca9532_driver = ;
static int pca9532_calcpwm(struct i2c_client *client, int pwm, int blink,
enum led_brightness value)
static int pca9532_setpwm(struct i2c_client *client, int pwm)
static void pca9532_setled(struct pca9532_led *led)
static void pca9532_set_brightness(struct led_classdev *led_cdev,
enum led_brightness value)
static int pca9532_set_blink(struct led_classdev *led_cdev,
unsigned long *delay_on, unsigned long *delay_off)
static int pca9532_event(struct input_dev *dev, unsigned int type,
unsigned int code, int value)
static void pca9532_input_work(struct work_struct *work)
static void pca9532_led_work(struct work_struct *work)
static int pca9532_gpio_request_pin(struct gpio_chip *gc, unsigned offset)
static void pca9532_gpio_set_value(struct gpio_chip *gc, unsigned offset, int val)
static int pca9532_gpio_get_value(struct gpio_chip *gc, unsigned offset)
static int pca9532_gpio_direction_input(struct gpio_chip *gc, unsigned offset)
static int pca9532_gpio_direction_output(struct gpio_chip *gc, unsigned offset, int val)
static int pca9532_destroy_devices(struct pca9532_data *data, int n_devs)
static int pca9532_configure(struct i2c_client *client,
struct pca9532_data *data, struct pca9532_platform_data *pdata)
static int pca9532_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int pca9532_remove(struct i2c_client *client)
static int __init pca9532_init(void)
static void __exit pca9532_exit(void)
MODULE_AUTHOR("Riku Voipio");
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("PCA 9532 LED dimmer");
module_init(pca9532_init);
module_exit(pca9532_exit);
