#define TCA6416_INPUT          0
#define TCA6416_OUTPUT         1
#define TCA6416_INVERT         2
#define TCA6416_DIRECTION      3
static const struct i2c_device_id tca6416_id[] = ;
MODULE_DEVICE_TABLE(i2c, tca6416_id);
struct tca6416_drv_data ;
struct tca6416_keypad_chip ;
static int tca6416_write_reg(struct tca6416_keypad_chip *chip, int reg, u16 val)
static int tca6416_read_reg(struct tca6416_keypad_chip *chip, int reg, u16 *val)
static void tca6416_keys_scan(struct tca6416_keypad_chip *chip)
static irqreturn_t tca6416_keys_isr(int irq, void *dev_id)
static void tca6416_keys_work_func(struct work_struct *work)
static int tca6416_keys_open(struct input_dev *dev)
static void tca6416_keys_close(struct input_dev *dev)
static int __devinit tca6416_setup_registers(struct tca6416_keypad_chip *chip)
static int __devinit tca6416_keypad_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int __devexit tca6416_keypad_remove(struct i2c_client *client)
static int tca6416_keypad_suspend(struct device *dev)
static int tca6416_keypad_resume(struct device *dev)
static SIMPLE_DEV_PM_OPS(tca6416_keypad_dev_pm_ops,
tca6416_keypad_suspend, tca6416_keypad_resume);
static struct i2c_driver tca6416_keypad_driver = ;
static int __init tca6416_keypad_init(void)
subsys_initcall(tca6416_keypad_init);
static void __exit tca6416_keypad_exit(void)
module_exit(tca6416_keypad_exit);
MODULE_AUTHOR("Sriramakrishnan <srk@ti.com>");
MODULE_DESCRIPTION("Keypad driver over tca6146 IO expander");
MODULE_LICENSE("GPL");
