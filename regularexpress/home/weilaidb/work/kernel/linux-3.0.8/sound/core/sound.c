static int major = CONFIG_SND_MAJOR;
int snd_major;
EXPORT_SYMBOL(snd_major);
static int cards_limit = 1;
MODULE_AUTHOR("Jaroslav Kysela <perex@perex.cz>");
MODULE_DESCRIPTION("Advanced Linux Sound Architecture driver for soundcards.");
MODULE_LICENSE("GPL");
module_param(major, int, 0444);
MODULE_PARM_DESC(major, "Major # for sound driver.");
module_param(cards_limit, int, 0444);
MODULE_PARM_DESC(cards_limit, "Count of auto-loadable soundcards.");
MODULE_ALIAS_CHARDEV_MAJOR(CONFIG_SND_MAJOR);
int snd_ecards_limit;
EXPORT_SYMBOL(snd_ecards_limit);
static struct snd_minor *snd_minors[SNDRV_OS_MINORS];
static DEFINE_MUTEX(sound_mutex);
void snd_request_card(int card)
EXPORT_SYMBOL(snd_request_card);
static void snd_request_other(int minor)
void *snd_lookup_minor_data(unsigned int minor, int type)
EXPORT_SYMBOL(snd_lookup_minor_data);
static struct snd_minor *autoload_device(unsigned int minor)
#define autoload_device(minor)	NULL
static int snd_open(struct inode *inode, struct file *file)
static const struct file_operations snd_fops =
;
static int snd_find_free_minor(int type)
static int snd_kernel_minor(int type, struct snd_card *card, int dev)
int snd_register_device_for_dev(int type, struct snd_card *card, int dev,
const struct file_operations *f_ops,
void *private_data,
const char *name, struct device *device)
EXPORT_SYMBOL(snd_register_device_for_dev);
static int find_snd_minor(int type, struct snd_card *card, int dev)
int snd_unregister_device(int type, struct snd_card *card, int dev)
EXPORT_SYMBOL(snd_unregister_device);
int snd_add_device_sysfs_file(int type, struct snd_card *card, int dev,
struct device_attribute *attr)
EXPORT_SYMBOL(snd_add_device_sysfs_file);
static struct snd_info_entry *snd_minor_info_entry;
static const char *snd_device_type_name(int type)
static void snd_minor_info_read(struct snd_info_entry *entry, struct snd_info_buffer *buffer)
int __init snd_minor_info_init(void)
int __exit snd_minor_info_done(void)
static int __init alsa_sound_init(void)
static void __exit alsa_sound_exit(void)
subsys_initcall(alsa_sound_init);
module_exit(alsa_sound_exit);
