MODULE_AUTHOR("Takashi Iwai <tiwai@suse.de>");
MODULE_DESCRIPTION("OSS-compatible sequencer module");
MODULE_LICENSE("GPL");
MODULE_ALIAS_SNDRV_MINOR(SNDRV_MINOR_OSS_SEQUENCER);
MODULE_ALIAS_SNDRV_MINOR(SNDRV_MINOR_OSS_MUSIC);
module_param(seq_oss_debug, int, 0644);
MODULE_PARM_DESC(seq_oss_debug, "debug option");
int seq_oss_debug = 0;
static int register_device(void);
static void unregister_device(void);
static int register_proc(void);
static void unregister_proc(void);
static inline int register_proc(void)
static inline void unregister_proc(void)
static int odev_open(struct inode *inode, struct file *file);
static int odev_release(struct inode *inode, struct file *file);
static ssize_t odev_read(struct file *file, char __user *buf, size_t count, loff_t *offset);
static ssize_t odev_write(struct file *file, const char __user *buf, size_t count, loff_t *offset);
static long odev_ioctl(struct file *file, unsigned int cmd, unsigned long arg);
static unsigned int odev_poll(struct file *file, poll_table * wait);
static int __init alsa_seq_oss_init(void)
static void __exit alsa_seq_oss_exit(void)
module_init(alsa_seq_oss_init)
module_exit(alsa_seq_oss_exit)
static DEFINE_MUTEX(register_mutex);
static int
odev_open(struct inode *inode, struct file *file)
static int
odev_release(struct inode *inode, struct file *file)
static ssize_t
odev_read(struct file *file, char __user *buf, size_t count, loff_t *offset)
static ssize_t
odev_write(struct file *file, const char __user *buf, size_t count, loff_t *offset)
static long
odev_ioctl(struct file *file, unsigned int cmd, unsigned long arg)
#define odev_ioctl_compat	odev_ioctl
#define odev_ioctl_compat	NULL
static unsigned int
odev_poll(struct file *file, poll_table * wait)
static const struct file_operations seq_oss_f_ops =
;
static int __init
register_device(void)
static void
unregister_device(void)
static struct snd_info_entry *info_entry;
static void
info_read(struct snd_info_entry *entry, struct snd_info_buffer *buf)
static int __init
register_proc(void)
static void
unregister_proc(void)
