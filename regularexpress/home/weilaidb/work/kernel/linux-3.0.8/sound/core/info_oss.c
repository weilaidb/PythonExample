#if defined(CONFIG_SND_OSSEMUL) && defined(CONFIG_PROC_FS)
static DEFINE_MUTEX(strings);
static char *snd_sndstat_strings[SNDRV_CARDS][SNDRV_OSS_INFO_DEV_COUNT];
static struct snd_info_entry *snd_sndstat_proc_entry;
int snd_oss_info_register(int dev, int num, char *string)
EXPORT_SYMBOL(snd_oss_info_register);
static int snd_sndstat_show_strings(struct snd_info_buffer *buf, char *id, int dev)
static void snd_sndstat_proc_read(struct snd_info_entry *entry,
struct snd_info_buffer *buffer)
int snd_info_minor_register(void)
int snd_info_minor_unregister(void)
