static int video_nr[HDPVR_MAX] = ;
module_param_array(video_nr, int, NULL, 0);
MODULE_PARM_DESC(video_nr, "video device number (-1=Auto)");
static atomic_t dev_nr = ATOMIC_INIT(-1);
int hdpvr_debug;
module_param(hdpvr_debug, int, S_IRUGO|S_IWUSR);
MODULE_PARM_DESC(hdpvr_debug, "enable debugging output");
static uint default_video_input = HDPVR_VIDEO_INPUTS;
module_param(default_video_input, uint, S_IRUGO|S_IWUSR);
MODULE_PARM_DESC(default_video_input, "default video input: 0=Component / "
"1=S-Video / 2=Composite");
static uint default_audio_input = HDPVR_AUDIO_INPUTS;
module_param(default_audio_input, uint, S_IRUGO|S_IWUSR);
MODULE_PARM_DESC(default_audio_input, "default audio input: 0=RCA back / "
"1=RCA front / 2=S/PDIF");
static int boost_audio;
module_param(boost_audio, bool, S_IRUGO|S_IWUSR);
MODULE_PARM_DESC(boost_audio, "boost the audio signal");
static struct usb_device_id hdpvr_table[] = ;
MODULE_DEVICE_TABLE(usb, hdpvr_table);
void hdpvr_delete(struct hdpvr_device *dev)
static void challenge(u8 *bytes)
static int device_authorization(struct hdpvr_device *dev)
static int hdpvr_device_init(struct hdpvr_device *dev)
static const struct hdpvr_options hdpvr_default_options = ;
static int hdpvr_probe(struct usb_interface *interface,
const struct usb_device_id *id)
static void hdpvr_disconnect(struct usb_interface *interface)
static struct usb_driver hdpvr_usb_driver = ;
static int __init hdpvr_init(void)
static void __exit hdpvr_exit(void)
module_init(hdpvr_init);
module_exit(hdpvr_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Janne Grunau");
MODULE_DESCRIPTION("Hauppauge HD PVR driver");
