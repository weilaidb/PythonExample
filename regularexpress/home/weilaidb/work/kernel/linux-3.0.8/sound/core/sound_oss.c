#if !defined(CONFIG_SOUND) && !(defined(MODULE) && defined(CONFIG_SOUND_MODULE))
#error "Enable the OSS soundcore multiplexer (CONFIG_SOUND) in the kernel."
#define SNDRV_OSS_MINORS 128
static struct snd_minor *snd_oss_minors[SNDRV_OSS_MINORS];
static DEFINE_MUTEX(sound_oss_mutex);
void *snd_lookup_oss_minor_data(unsigned int minor, int type)
EXPORT_SYMBOL(snd_lookup_oss_minor_data);
static int snd_oss_kernel_minor(int type, struct snd_card *card, int dev)
int snd_register_oss_device(int type, struct snd_card *card, int dev,
const struct file_operations *f_ops, void *private_data,
const char *name)
EXPORT_SYMBOL(snd_register_oss_device);
int snd_unregister_oss_device(int type, struct snd_card *card, int dev)
EXPORT_SYMBOL(snd_unregister_oss_device);
static struct snd_info_entry *snd_minor_info_oss_entry;
static const char *snd_oss_device_type_name(int type)
static void snd_minor_info_oss_read(struct snd_info_entry *entry,
struct snd_info_buffer *buffer)
int __init snd_minor_info_oss_init(void)
int __exit snd_minor_info_oss_done(void)
