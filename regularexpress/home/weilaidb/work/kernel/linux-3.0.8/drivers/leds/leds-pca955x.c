#define PCA955X_LS_LED_ON	0x0
#define PCA955X_LS_LED_OFF	0x1
#define PCA955X_LS_BLINK0	0x2
#define PCA955X_LS_BLINK1	0x3
enum pca955x_type ;
struct pca955x_chipdef ;
static struct pca955x_chipdef pca955x_chipdefs[] = ;
static const struct i2c_device_id pca955x_id[] = ;
MODULE_DEVICE_TABLE(i2c, pca955x_id);
struct pca955x_led ;
static inline int pca95xx_num_input_regs(int bits)
static inline int pca95xx_num_led_regs(int bits)
static inline u8 pca955x_ledsel(u8 oldval, int led_num, int state)
static void pca955x_write_psc(struct i2c_client *client, int n, u8 val)
static void pca955x_write_pwm(struct i2c_client *client, int n, u8 val)
static void pca955x_write_ls(struct i2c_client *client, int n, u8 val)
static u8 pca955x_read_ls(struct i2c_client *client, int n)
static void pca955x_led_work(struct work_struct *work)
static void pca955x_led_set(struct led_classdev *led_cdev, enum led_brightness value)
static int __devinit pca955x_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int __devexit pca955x_remove(struct i2c_client *client)
static struct i2c_driver pca955x_driver = ;
static int __init pca955x_leds_init(void)
static void __exit pca955x_leds_exit(void)
module_init(pca955x_leds_init);
module_exit(pca955x_leds_exit);
MODULE_AUTHOR("Nate Case <ncase@xes-inc.com>");
MODULE_DESCRIPTION("PCA955x LED driver");
MODULE_LICENSE("GPL v2");
