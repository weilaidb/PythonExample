MODULE_AUTHOR("Karsten Wiese <annabellesgarden@yahoo.de>");
MODULE_DESCRIPTION("TASCAM "NAME_ALLCAPS" Version 0.8.7.2");
MODULE_LICENSE("GPL");
MODULE_SUPPORTED_DEVICE("");
static int index[SNDRV_CARDS] = SNDRV_DEFAULT_IDX;
static char* id[SNDRV_CARDS] = SNDRV_DEFAULT_STR;
static int enable[SNDRV_CARDS] = SNDRV_DEFAULT_ENABLE_PNP;
module_param_array(index, int, NULL, 0444);
MODULE_PARM_DESC(index, "Index value for "NAME_ALLCAPS".");
module_param_array(id, charp, NULL, 0444);
MODULE_PARM_DESC(id, "ID string for "NAME_ALLCAPS".");
module_param_array(enable, bool, NULL, 0444);
MODULE_PARM_DESC(enable, "Enable "NAME_ALLCAPS".");
static int snd_usX2Y_card_used[SNDRV_CARDS];
static void usX2Y_usb_disconnect(struct usb_device* usb_device, void* ptr);
static void snd_usX2Y_card_private_free(struct snd_card *card);
static void i_usX2Y_Out04Int(struct urb *urb)
static void i_usX2Y_In04Int(struct urb *urb)
int usX2Y_AsyncSeq04_init(struct usX2Ydev *usX2Y)
int usX2Y_In04_init(struct usX2Ydev *usX2Y)
static void usX2Y_unlinkSeq(struct snd_usX2Y_AsyncSeq *S)
static struct usb_device_id snd_usX2Y_usb_id_table[] = ;
static int usX2Y_create_card(struct usb_device *device, struct snd_card **cardp)
static int usX2Y_usb_probe(struct usb_device *device,
struct usb_interface *intf,
const struct usb_device_id *device_id,
struct snd_card **cardp)
static int snd_usX2Y_probe(struct usb_interface *intf, const struct usb_device_id *id)
static void snd_usX2Y_disconnect(struct usb_interface *intf)
MODULE_DEVICE_TABLE(usb, snd_usX2Y_usb_id_table);
static struct usb_driver snd_usX2Y_usb_driver = ;
static void snd_usX2Y_card_private_free(struct snd_card *card)
static void usX2Y_usb_disconnect(struct usb_device *device, void* ptr)
static int __init snd_usX2Y_module_init(void)
static void __exit snd_usX2Y_module_exit(void)
module_init(snd_usX2Y_module_init)
module_exit(snd_usX2Y_module_exit)
