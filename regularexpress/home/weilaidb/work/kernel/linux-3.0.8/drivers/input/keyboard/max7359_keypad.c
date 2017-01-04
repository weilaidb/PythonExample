#define MAX7359_MAX_KEY_ROWS	8
#define MAX7359_MAX_KEY_COLS	8
#define MAX7359_MAX_KEY_NUM	(MAX7359_MAX_KEY_ROWS * MAX7359_MAX_KEY_COLS)
#define MAX7359_ROW_SHIFT	3
#define MAX7359_REG_KEYFIFO	0x00
#define MAX7359_REG_CONFIG	0x01
#define MAX7359_REG_DEBOUNCE	0x02
#define MAX7359_REG_INTERRUPT	0x03
#define MAX7359_REG_PORTS	0x04
#define MAX7359_REG_KEYREP	0x05
#define MAX7359_REG_SLEEP	0x06
#define MAX7359_CFG_SLEEP	(1 << 7)
#define MAX7359_CFG_INTERRUPT	(1 << 5)
#define MAX7359_CFG_KEY_RELEASE	(1 << 3)
#define MAX7359_CFG_WAKEUP	(1 << 1)
#define MAX7359_CFG_TIMEOUT	(1 << 0)
#define MAX7359_AUTOSLEEP_8192	0x01
#define MAX7359_AUTOSLEEP_4096	0x02
#define MAX7359_AUTOSLEEP_2048	0x03
#define MAX7359_AUTOSLEEP_1024	0x04
#define MAX7359_AUTOSLEEP_512	0x05
#define MAX7359_AUTOSLEEP_256	0x06
struct max7359_keypad ;
static int max7359_write_reg(struct i2c_client *client, u8 reg, u8 val)
static int max7359_read_reg(struct i2c_client *client, int reg)
static void max7359_build_keycode(struct max7359_keypad *keypad,
const struct matrix_keymap_data *keymap_data)
static irqreturn_t max7359_interrupt(int irq, void *dev_id)
static inline void max7359_fall_deepsleep(struct i2c_client *client)
static inline void max7359_take_catnap(struct i2c_client *client)
static int max7359_open(struct input_dev *dev)
static void max7359_close(struct input_dev *dev)
static void max7359_initialize(struct i2c_client *client)
static int __devinit max7359_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int __devexit max7359_remove(struct i2c_client *client)
static int max7359_suspend(struct device *dev)
static int max7359_resume(struct device *dev)
static SIMPLE_DEV_PM_OPS(max7359_pm, max7359_suspend, max7359_resume);
static const struct i2c_device_id max7359_ids[] = ;
MODULE_DEVICE_TABLE(i2c, max7359_ids);
static struct i2c_driver max7359_i2c_driver = ;
static int __init max7359_init(void)
module_init(max7359_init);
static void __exit max7359_exit(void)
module_exit(max7359_exit);
MODULE_AUTHOR("Kim Kyuwon <q1.kim@samsung.com>");
MODULE_DESCRIPTION("MAX7359 Key Switch Controller Driver");
MODULE_LICENSE("GPL v2");
