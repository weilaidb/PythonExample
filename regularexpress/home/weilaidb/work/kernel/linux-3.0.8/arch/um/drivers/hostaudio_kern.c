struct hostaudio_state ;
struct hostmixer_state ;
#define HOSTAUDIO_DEV_DSP "/dev/sound/dsp"
#define HOSTAUDIO_DEV_MIXER "/dev/sound/mixer"
static char *dsp = HOSTAUDIO_DEV_DSP;
static char *mixer = HOSTAUDIO_DEV_MIXER;
#define DSP_HELP \
"    This is used to specify the host dsp device to the hostaudio driver.\n" \
"    The default is \"" HOSTAUDIO_DEV_DSP "\".\n\n"
#define MIXER_HELP \
"    This is used to specify the host mixer device to the hostaudio driver.\n"\
"    The default is \"" HOSTAUDIO_DEV_MIXER "\".\n\n"
module_param(dsp, charp, 0644);
MODULE_PARM_DESC(dsp, DSP_HELP);
module_param(mixer, charp, 0644);
MODULE_PARM_DESC(mixer, MIXER_HELP);
static int set_dsp(char *name, int *add)
__uml_setup("dsp=", set_dsp, "dsp=<dsp device>\n" DSP_HELP);
static int set_mixer(char *name, int *add)
__uml_setup("mixer=", set_mixer, "mixer=<mixer device>\n" MIXER_HELP);
static DEFINE_MUTEX(hostaudio_mutex);
static ssize_t hostaudio_read(struct file *file, char __user *buffer,
size_t count, loff_t *ppos)
static ssize_t hostaudio_write(struct file *file, const char __user *buffer,
size_t count, loff_t *ppos)
static unsigned int hostaudio_poll(struct file *file,
struct poll_table_struct *wait)
static long hostaudio_ioctl(struct file *file,
unsigned int cmd, unsigned long arg)
static int hostaudio_open(struct inode *inode, struct file *file)
static int hostaudio_release(struct inode *inode, struct file *file)
static long hostmixer_ioctl_mixdev(struct file *file,
unsigned int cmd, unsigned long arg)
static int hostmixer_open_mixdev(struct inode *inode, struct file *file)
static int hostmixer_release(struct inode *inode, struct file *file)
static const struct file_operations hostaudio_fops = ;
static const struct file_operations hostmixer_fops = ;
struct  module_data;
MODULE_AUTHOR("Steve Schmidtke");
MODULE_DESCRIPTION("UML Audio Relay");
MODULE_LICENSE("GPL");
static int __init hostaudio_init_module(void)
static void __exit hostaudio_cleanup_module (void)
module_init(hostaudio_init_module);
module_exit(hostaudio_cleanup_module);
