static int tuner = -1;
module_param(tuner, int, 0444);
MODULE_PARM_DESC(tuner, "tuner type");
static int transfer_mode = 1;
module_param(transfer_mode, int, 0444);
MODULE_PARM_DESC(transfer_mode, "transfer mode (1-ISO or 0-BULK)");
static unsigned int disable_ir;
module_param(disable_ir, int, 0444);
MODULE_PARM_DESC(disable_ir, "disable infrared remote support");
static unsigned long cx231xx_devused;
static struct cx231xx_reg_seq RDE250_XCV_TUNER[] = ;
struct cx231xx_board cx231xx_boards[] = ;
const unsigned int cx231xx_bcount = ARRAY_SIZE(cx231xx_boards);
struct usb_device_id cx231xx_id_table[] = ;
MODULE_DEVICE_TABLE(usb, cx231xx_id_table);
int cx231xx_tuner_callback(void *ptr, int component, int command, int arg)
EXPORT_SYMBOL_GPL(cx231xx_tuner_callback);
void cx231xx_reset_out(struct cx231xx *dev)
void cx231xx_enable_OSC(struct cx231xx *dev)
void cx231xx_sleep_s5h1432(struct cx231xx *dev)
static inline void cx231xx_set_model(struct cx231xx *dev)
void cx231xx_pre_card_setup(struct cx231xx *dev)
static void cx231xx_config_tuner(struct cx231xx *dev)
void cx231xx_card_setup(struct cx231xx *dev)
int cx231xx_config(struct cx231xx *dev)
void cx231xx_config_i2c(struct cx231xx *dev)
void cx231xx_release_resources(struct cx231xx *dev)
static int cx231xx_init_dev(struct cx231xx **devhandle, struct usb_device *udev,
int minor)
#if defined(CONFIG_MODULES) && defined(MODULE)
static void request_module_async(struct work_struct *work)
static void request_modules(struct cx231xx *dev)
static void flush_request_modules(struct cx231xx *dev)
#define request_modules(dev)
#define flush_request_modules(dev)
static int cx231xx_usb_probe(struct usb_interface *interface,
const struct usb_device_id *id)
static void cx231xx_usb_disconnect(struct usb_interface *interface)
static struct usb_driver cx231xx_usb_driver = ;
static int __init cx231xx_module_init(void)
static void __exit cx231xx_module_exit(void)
module_init(cx231xx_module_init);
module_exit(cx231xx_module_exit);
