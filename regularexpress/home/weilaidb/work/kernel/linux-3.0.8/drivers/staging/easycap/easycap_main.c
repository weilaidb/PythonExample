MODULE_LICENSE("GPL");
MODULE_AUTHOR("R.M. Thomas <rmthomas@sciolus.org>");
MODULE_DESCRIPTION(EASYCAP_DRIVER_DESCRIPTION);
MODULE_VERSION(EASYCAP_DRIVER_VERSION);
int easycap_debug;
module_param_named(debug, easycap_debug, int, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(debug, "Debug level: 0(default),1,2,...,9");
bool easycap_readback;
module_param_named(readback, easycap_readback, bool, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(readback, "read back written registers: (default false)");
static int easycap_bars = 1;
module_param_named(bars, easycap_bars, int, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(bars,
"Testcard bars on input signal failure: 0=>no, 1=>yes(default)");
static int easycap_gain = 16;
module_param_named(gain, easycap_gain, int, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(gain, "Audio gain: 0,...,16(default),...31");
static bool easycap_ntsc;
module_param_named(ntsc, easycap_ntsc, bool, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(ntsc, "NTCS default encoding (default PAL)");
struct easycap_dongle easycapdc60_dongle[DONGLE_MANY];
static struct mutex mutex_dongle;
static void easycap_complete(struct urb *purb);
static int reset(struct easycap *peasycap);
const char *strerror(int err)
int isdongle(struct easycap *peasycap)
static int easycap_open(struct inode *inode, struct file *file)
static int reset(struct easycap *peasycap)
int
newinput(struct easycap *peasycap, int input)
int submit_video_urbs(struct easycap *peasycap)
int kill_video_urbs(struct easycap *peasycap)
static int easycap_open_noinode(struct file *file)
static int videodev_release(struct video_device *pvideo_device)
static void easycap_delete(struct kref *pkref)
static unsigned int easycap_poll(struct file *file, poll_table *wait)
int easycap_dqbuf(struct easycap *peasycap, int mode)
int
field2frame(struct easycap *peasycap)
struct signed_div_result
signed_div(long long int above, long long int below)
int
redaub(struct easycap *peasycap, void *pad, void *pex, int much, int more,
u8 mask, u8 margin, bool isuy)
static void easycap_vma_open(struct vm_area_struct *pvma)
static void easycap_vma_close(struct vm_area_struct *pvma)
static int easycap_vma_fault(struct vm_area_struct *pvma, struct vm_fault *pvmf)
static const struct vm_operations_struct easycap_vm_ops = ;
static int easycap_mmap(struct file *file, struct vm_area_struct *pvma)
static void easycap_complete(struct urb *purb)
static const struct file_operations easycap_fops = ;
static const struct usb_class_driver easycap_class = ;
static const struct v4l2_file_operations v4l2_fops = ;
static int easycap_usb_probe(struct usb_interface *intf,
const struct usb_device_id *id)
static void easycap_usb_disconnect(struct usb_interface *pusb_interface)
static struct usb_device_id easycap_usb_device_id_table[] = ;
MODULE_DEVICE_TABLE(usb, easycap_usb_device_id_table);
struct usb_driver easycap_usb_driver = ;
static int __init easycap_module_init(void)
static void __exit easycap_module_exit(void)
module_init(easycap_module_init);
module_exit(easycap_module_exit);
