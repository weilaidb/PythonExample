#define MODNAME "US122L"
MODULE_AUTHOR("Karsten Wiese <fzu@wemgehoertderstaat.de>");
MODULE_DESCRIPTION("TASCAM "NAME_ALLCAPS" Version 0.5");
MODULE_LICENSE("GPL");
static int index[SNDRV_CARDS] = SNDRV_DEFAULT_IDX;
static char *id[SNDRV_CARDS] = SNDRV_DEFAULT_STR;
static int enable[SNDRV_CARDS] = SNDRV_DEFAULT_ENABLE_PNP;
module_param_array(index, int, NULL, 0444);
MODULE_PARM_DESC(index, "Index value for "NAME_ALLCAPS".");
module_param_array(id, charp, NULL, 0444);
MODULE_PARM_DESC(id, "ID string for "NAME_ALLCAPS".");
module_param_array(enable, bool, NULL, 0444);
MODULE_PARM_DESC(enable, "Enable "NAME_ALLCAPS".");
static int snd_us122l_card_used[SNDRV_CARDS];
static int us122l_create_usbmidi(struct snd_card *card)
static int us144_create_usbmidi(struct snd_card *card)
static int us122l_ctl_msg(struct usb_device *dev, unsigned int pipe,
__u8 request, __u8 requesttype,
__u16 value, __u16 index, void *data,
__u16 size, int timeout)
static void pt_info_set(struct usb_device *dev, u8 v)
static void usb_stream_hwdep_vm_open(struct vm_area_struct *area)
static int usb_stream_hwdep_vm_fault(struct vm_area_struct *area,
struct vm_fault *vmf)
static void usb_stream_hwdep_vm_close(struct vm_area_struct *area)
static const struct vm_operations_struct usb_stream_hwdep_vm_ops = ;
static int usb_stream_hwdep_open(struct snd_hwdep *hw, struct file *file)
static int usb_stream_hwdep_release(struct snd_hwdep *hw, struct file *file)
static int usb_stream_hwdep_mmap(struct snd_hwdep *hw,
struct file *filp, struct vm_area_struct *area)
static unsigned int usb_stream_hwdep_poll(struct snd_hwdep *hw,
struct file *file, poll_table *wait)
static void us122l_stop(struct us122l *us122l)
static int us122l_set_sample_rate(struct usb_device *dev, int rate)
static bool us122l_start(struct us122l *us122l,
unsigned rate, unsigned period_frames)
static int usb_stream_hwdep_ioctl(struct snd_hwdep *hw, struct file *file,
unsigned cmd, unsigned long arg)
#define SND_USB_STREAM_ID "USB STREAM"
static int usb_stream_hwdep_new(struct snd_card *card)
static bool us122l_create_card(struct snd_card *card)
static void snd_us122l_free(struct snd_card *card)
static int usx2y_create_card(struct usb_device *device, struct snd_card **cardp)
static int us122l_usb_probe(struct usb_interface *intf,
const struct usb_device_id *device_id,
struct snd_card **cardp)
static int snd_us122l_probe(struct usb_interface *intf,
const struct usb_device_id *id)
static void snd_us122l_disconnect(struct usb_interface *intf)
static int snd_us122l_suspend(struct usb_interface *intf, pm_message_t message)
static int snd_us122l_resume(struct usb_interface *intf)
static struct usb_device_id snd_us122l_usb_id_table[] = ;
MODULE_DEVICE_TABLE(usb, snd_us122l_usb_id_table);
static struct usb_driver snd_us122l_usb_driver = ;
static int __init snd_us122l_module_init(void)
static void __exit snd_us122l_module_exit(void)
module_init(snd_us122l_module_init)
module_exit(snd_us122l_module_exit)
