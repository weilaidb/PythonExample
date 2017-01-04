#define COMADJ_DEFAULT	97
#define DAC_CH1		0
#define DAC_CH2		1
struct tosa_bl_data ;
static void tosa_bl_set_backlight(struct tosa_bl_data *data, int brightness)
static int tosa_bl_update_status(struct backlight_device *dev)
static int tosa_bl_get_brightness(struct backlight_device *dev)
static const struct backlight_ops bl_ops = ;
static int __devinit tosa_bl_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int __devexit tosa_bl_remove(struct i2c_client *client)
static int tosa_bl_suspend(struct i2c_client *client, pm_message_t pm)
static int tosa_bl_resume(struct i2c_client *client)
#define tosa_bl_suspend NULL
#define tosa_bl_resume NULL
static const struct i2c_device_id tosa_bl_id[] = ;
static struct i2c_driver tosa_bl_driver = ;
static int __init tosa_bl_init(void)
static void __exit tosa_bl_exit(void)
module_init(tosa_bl_init);
module_exit(tosa_bl_exit);
MODULE_AUTHOR("Dmitry Baryshkov");
MODULE_LICENSE("GPL v2");
MODULE_DESCRIPTION("LCD/Backlight control for Sharp SL-6000 PDA");
