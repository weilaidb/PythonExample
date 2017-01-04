MODULE_AUTHOR("Daniel Mack <daniel@caiaq.de>");
MODULE_DESCRIPTION("caiaq USB audio");
MODULE_LICENSE("GPL");
MODULE_SUPPORTED_DEVICE("{,"
","
","
","
","
","
","
","
","
","
""
""
"");
static int index[SNDRV_CARDS] = SNDRV_DEFAULT_IDX;
static char* id[SNDRV_CARDS] = SNDRV_DEFAULT_STR;
static int enable[SNDRV_CARDS] = SNDRV_DEFAULT_ENABLE_PNP;
static int snd_card_used[SNDRV_CARDS];
module_param_array(index, int, NULL, 0444);
MODULE_PARM_DESC(index, "Index value for the caiaq sound device");
module_param_array(id, charp, NULL, 0444);
MODULE_PARM_DESC(id, "ID string for the caiaq soundcard.");
module_param_array(enable, bool, NULL, 0444);
MODULE_PARM_DESC(enable, "Enable the caiaq soundcard.");
enum ;
enum ;
static struct usb_device_id snd_usb_id_table[] = ;
static void usb_ep1_command_reply_dispatch (struct urb* urb)
int snd_usb_caiaq_send_command(struct snd_usb_caiaqdev *dev,
unsigned char command,
const unsigned char *buffer,
int len)
int snd_usb_caiaq_set_audio_params (struct snd_usb_caiaqdev *dev,
int rate, int depth, int bpp)
int snd_usb_caiaq_set_auto_msg(struct snd_usb_caiaqdev *dev,
int digital, int analog, int erp)
static void __devinit setup_card(struct snd_usb_caiaqdev *dev)
static int create_card(struct usb_device *usb_dev,
struct usb_interface *intf,
struct snd_card **cardp)
static int __devinit init_card(struct snd_usb_caiaqdev *dev)
static int __devinit snd_probe(struct usb_interface *intf,
const struct usb_device_id *id)
static void snd_disconnect(struct usb_interface *intf)
MODULE_DEVICE_TABLE(usb, snd_usb_id_table);
static struct usb_driver snd_usb_driver = ;
static int __init snd_module_init(void)
static void __exit snd_module_exit(void)
module_init(snd_module_init)
module_exit(snd_module_exit)
