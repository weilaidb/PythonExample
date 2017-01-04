MODULE_AUTHOR("Torsten Schenk <torsten.schenk@zoho.com>");
MODULE_DESCRIPTION("TerraTec DMX 6Fire USB audio driver, version 0.3.0");
MODULE_LICENSE("GPL v2");
MODULE_SUPPORTED_DEVICE("");
static int index[SNDRV_CARDS] = SNDRV_DEFAULT_IDX;
static char *id[SNDRV_CARDS] = SNDRV_DEFAULT_STR;
static int enable[SNDRV_CARDS] = SNDRV_DEFAULT_ENABLE_PNP;
static struct sfire_chip *chips[SNDRV_CARDS] = SNDRV_DEFAULT_PTR;
static struct usb_device *devices[SNDRV_CARDS] = SNDRV_DEFAULT_PTR;
module_param_array(index, int, NULL, 0444);
MODULE_PARM_DESC(index, "Index value for the 6fire sound device");
module_param_array(id, charp, NULL, 0444);
MODULE_PARM_DESC(id, "ID string for the 6fire sound device.");
module_param_array(enable, bool, NULL, 0444);
MODULE_PARM_DESC(enable, "Enable the 6fire sound device.");
static DEFINE_MUTEX(register_mutex);
static void usb6fire_chip_abort(struct sfire_chip *chip)
static void usb6fire_chip_destroy(struct sfire_chip *chip)
static int __devinit usb6fire_chip_probe(struct usb_interface *intf,
const struct usb_device_id *usb_id)
static void usb6fire_chip_disconnect(struct usb_interface *intf)
static struct usb_device_id device_table[] = ;
MODULE_DEVICE_TABLE(usb, device_table);
static struct usb_driver driver = ;
static int __init usb6fire_chip_init(void)
static void __exit usb6fire_chip_cleanup(void)
module_init(usb6fire_chip_init);
module_exit(usb6fire_chip_cleanup);
