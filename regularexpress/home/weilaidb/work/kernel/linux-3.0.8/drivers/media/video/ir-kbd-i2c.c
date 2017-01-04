static int debug;
module_param(debug, int, 0644);
#define MODULE_NAME "ir-kbd-i2c"
#define dprintk(level, fmt, arg...)	if (debug >= level) \
printk(KERN_DEBUG MODULE_NAME ": " fmt , ## arg)
static int get_key_haup_common(struct IR_i2c *ir, u32 *ir_key, u32 *ir_raw,
int size, int offset)
static int get_key_haup(struct IR_i2c *ir, u32 *ir_key, u32 *ir_raw)
static int get_key_haup_xvr(struct IR_i2c *ir, u32 *ir_key, u32 *ir_raw)
static int get_key_pixelview(struct IR_i2c *ir, u32 *ir_key, u32 *ir_raw)
static int get_key_fusionhdtv(struct IR_i2c *ir, u32 *ir_key, u32 *ir_raw)
static int get_key_knc1(struct IR_i2c *ir, u32 *ir_key, u32 *ir_raw)
static int get_key_avermedia_cardbus(struct IR_i2c *ir,
u32 *ir_key, u32 *ir_raw)
static void ir_key_poll(struct IR_i2c *ir)
static void ir_work(struct work_struct *work)
static int ir_probe(struct i2c_client *client, const struct i2c_device_id *id)
static int ir_remove(struct i2c_client *client)
static const struct i2c_device_id ir_kbd_id[] = ;
static struct i2c_driver driver = ;
MODULE_AUTHOR("Gerd Knorr, Michal Kochanowicz, Christoph Bartelmus, Ulrich Mueller");
MODULE_DESCRIPTION("input driver for i2c IR remote controls");
MODULE_LICENSE("GPL");
static int __init ir_init(void)
static void __exit ir_fini(void)
module_init(ir_init);
module_exit(ir_fini);
