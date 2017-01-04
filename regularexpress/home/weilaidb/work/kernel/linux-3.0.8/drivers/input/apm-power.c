#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
static void system_power_event(unsigned int keycode)
static void apmpower_event(struct input_handle *handle, unsigned int type,
unsigned int code, int value)
static int apmpower_connect(struct input_handler *handler,
struct input_dev *dev,
const struct input_device_id *id)
static void apmpower_disconnect(struct input_handle *handle)
static const struct input_device_id apmpower_ids[] = ;
MODULE_DEVICE_TABLE(input, apmpower_ids);
static struct input_handler apmpower_handler = ;
static int __init apmpower_init(void)
static void __exit apmpower_exit(void)
module_init(apmpower_init);
module_exit(apmpower_exit);
MODULE_AUTHOR("Richard Purdie <rpurdie@rpsys.net>");
MODULE_DESCRIPTION("Input Power Event -> APM Bridge");
MODULE_LICENSE("GPL");
