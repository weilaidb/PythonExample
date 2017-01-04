MODULE_AUTHOR("Takashi Iwai <tiwai@suse.de>");
MODULE_DESCRIPTION("USB Audio");
MODULE_LICENSE("GPL");
MODULE_SUPPORTED_DEVICE("");
static int index[SNDRV_CARDS] = SNDRV_DEFAULT_IDX;
static char *id[SNDRV_CARDS] = SNDRV_DEFAULT_STR;
static int enable[SNDRV_CARDS] = SNDRV_DEFAULT_ENABLE_PNP;
static int vid[SNDRV_CARDS] = ;
static int pid[SNDRV_CARDS] = ;
static int nrpacks = 8;
static int async_unlink = 1;
static int device_setup[SNDRV_CARDS];
static int ignore_ctl_error;
module_param_array(index, int, NULL, 0444);
MODULE_PARM_DESC(index, "Index value for the USB audio adapter.");
module_param_array(id, charp, NULL, 0444);
MODULE_PARM_DESC(id, "ID string for the USB audio adapter.");
module_param_array(enable, bool, NULL, 0444);
MODULE_PARM_DESC(enable, "Enable USB audio adapter.");
module_param_array(vid, int, NULL, 0444);
MODULE_PARM_DESC(vid, "Vendor ID for the USB audio device.");
module_param_array(pid, int, NULL, 0444);
MODULE_PARM_DESC(pid, "Product ID for the USB audio device.");
module_param(nrpacks, int, 0644);
MODULE_PARM_DESC(nrpacks, "Max. number of packets per URB.");
module_param(async_unlink, bool, 0444);
MODULE_PARM_DESC(async_unlink, "Use async unlink mode.");
module_param_array(device_setup, int, NULL, 0444);
MODULE_PARM_DESC(device_setup, "Specific device setup (if needed).");
module_param(ignore_ctl_error, bool, 0444);
MODULE_PARM_DESC(ignore_ctl_error,
"Ignore errors from USB controller for mixer interfaces.");
static DEFINE_MUTEX(register_mutex);
static struct snd_usb_audio *usb_chip[SNDRV_CARDS];
static struct usb_driver usb_audio_driver;
static void snd_usb_stream_disconnect(struct list_head *head)
static int snd_usb_create_stream(struct snd_usb_audio *chip, int ctrlif, int interface)
static int snd_usb_create_streams(struct snd_usb_audio *chip, int ctrlif)
static int snd_usb_audio_free(struct snd_usb_audio *chip)
static int snd_usb_audio_dev_free(struct snd_device *device)
static void remove_trailing_spaces(char *str)
static int snd_usb_audio_create(struct usb_device *dev, int idx,
const struct snd_usb_audio_quirk *quirk,
struct snd_usb_audio **rchip)
static void *snd_usb_audio_probe(struct usb_device *dev,
struct usb_interface *intf,
const struct usb_device_id *usb_id)
static void snd_usb_audio_disconnect(struct usb_device *dev, void *ptr)
static int usb_audio_probe(struct usb_interface *intf,
const struct usb_device_id *id)
static void usb_audio_disconnect(struct usb_interface *intf)
int snd_usb_autoresume(struct snd_usb_audio *chip)
void snd_usb_autosuspend(struct snd_usb_audio *chip)
static int usb_audio_suspend(struct usb_interface *intf, pm_message_t message)
static int usb_audio_resume(struct usb_interface *intf)
#define usb_audio_suspend	NULL
#define usb_audio_resume	NULL
static struct usb_device_id usb_audio_ids [] = ;
MODULE_DEVICE_TABLE (usb, usb_audio_ids);
static struct usb_driver usb_audio_driver = ;
static int __init snd_usb_audio_init(void)
static void __exit snd_usb_audio_cleanup(void)
module_init(snd_usb_audio_init);
module_exit(snd_usb_audio_cleanup);
