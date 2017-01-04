#define MCU_REG_CTRL	0x20
#define MCU_CTRL_POFF	0x40
#define MCU_NUM_GPIO	2
struct mcu ;
static struct mcu *glob_mcu;
static void mcu_power_off(void)
static void mcu_gpio_set(struct gpio_chip *gc, unsigned int gpio, int val)
static int mcu_gpio_dir_out(struct gpio_chip *gc, unsigned int gpio, int val)
static int mcu_gpiochip_add(struct mcu *mcu)
static int mcu_gpiochip_remove(struct mcu *mcu)
static int __devinit mcu_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int __devexit mcu_remove(struct i2c_client *client)
static const struct i2c_device_id mcu_ids[] = ;
MODULE_DEVICE_TABLE(i2c, mcu_ids);
static struct of_device_id mcu_of_match_table[] __devinitdata = ;
static struct i2c_driver mcu_driver = ;
static int __init mcu_init(void)
module_init(mcu_init);
static void __exit mcu_exit(void)
module_exit(mcu_exit);
MODULE_DESCRIPTION("Power Management and GPIO expander driver for "
"MPC8349E-mITX-compatible MCU");
MODULE_AUTHOR("Anton Vorontsov <avorontsov@ru.mvista.com>");
MODULE_LICENSE("GPL");
