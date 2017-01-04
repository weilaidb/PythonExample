#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
MODULE_AUTHOR("Vojtech Pavlik <vojtech@ucw.cz>");
MODULE_DESCRIPTION("Input driver event debug module");
MODULE_LICENSE("GPL");
static void evbug_event(struct input_handle *handle, unsigned int type, unsigned int code, int value)
static int evbug_connect(struct input_handler *handler, struct input_dev *dev,
const struct input_device_id *id)
static void evbug_disconnect(struct input_handle *handle)
static const struct input_device_id evbug_ids[] = ;
MODULE_DEVICE_TABLE(input, evbug_ids);
static struct input_handler evbug_handler = ;
static int __init evbug_init(void)
static void __exit evbug_exit(void)
module_init(evbug_init);
module_exit(evbug_exit);
