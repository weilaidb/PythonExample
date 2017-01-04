MODULE_AUTHOR("Jaroslav Kysela <perex@perex.cz>");
MODULE_DESCRIPTION("Hardware dependent layer");
MODULE_LICENSE("GPL");
static LIST_HEAD(snd_hwdep_devices);
static DEFINE_MUTEX(register_mutex);
static int snd_hwdep_free(struct snd_hwdep *hwdep);
static int snd_hwdep_dev_free(struct snd_device *device);
static int snd_hwdep_dev_register(struct snd_device *device);
static int snd_hwdep_dev_disconnect(struct snd_device *device);
static struct snd_hwdep *snd_hwdep_search(struct snd_card *card, int device)
static loff_t snd_hwdep_llseek(struct file * file, loff_t offset, int orig)
static ssize_t snd_hwdep_read(struct file * file, char __user *buf,
size_t count, loff_t *offset)
static ssize_t snd_hwdep_write(struct file * file, const char __user *buf,
size_t count, loff_t *offset)
static int snd_hwdep_open(struct inode *inode, struct file * file)
static int snd_hwdep_release(struct inode *inode, struct file * file)
static unsigned int snd_hwdep_poll(struct file * file, poll_table * wait)
static int snd_hwdep_info(struct snd_hwdep *hw,
struct snd_hwdep_info __user *_info)
static int snd_hwdep_dsp_status(struct snd_hwdep *hw,
struct snd_hwdep_dsp_status __user *_info)
static int snd_hwdep_dsp_load(struct snd_hwdep *hw,
struct snd_hwdep_dsp_image __user *_info)
static long snd_hwdep_ioctl(struct file * file, unsigned int cmd,
unsigned long arg)
static int snd_hwdep_mmap(struct file * file, struct vm_area_struct * vma)
static int snd_hwdep_control_ioctl(struct snd_card *card,
struct snd_ctl_file * control,
unsigned int cmd, unsigned long arg)
#define snd_hwdep_ioctl_compat	NULL
static const struct file_operations snd_hwdep_f_ops =
;
int snd_hwdep_new(struct snd_card *card, char *id, int device,
struct snd_hwdep **rhwdep)
static int snd_hwdep_free(struct snd_hwdep *hwdep)
static int snd_hwdep_dev_free(struct snd_device *device)
static int snd_hwdep_dev_register(struct snd_device *device)
static int snd_hwdep_dev_disconnect(struct snd_device *device)
static void snd_hwdep_proc_read(struct snd_info_entry *entry,
struct snd_info_buffer *buffer)
static struct snd_info_entry *snd_hwdep_proc_entry;
static void __init snd_hwdep_proc_init(void)
static void __exit snd_hwdep_proc_done(void)
#define snd_hwdep_proc_init()
#define snd_hwdep_proc_done()
static int __init alsa_hwdep_init(void)
static void __exit alsa_hwdep_exit(void)
module_init(alsa_hwdep_init)
module_exit(alsa_hwdep_exit)
EXPORT_SYMBOL(snd_hwdep_new);
