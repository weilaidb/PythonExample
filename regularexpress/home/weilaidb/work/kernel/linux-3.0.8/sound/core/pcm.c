MODULE_AUTHOR("Jaroslav Kysela <perex@perex.cz>, Abramo Bagnara <abramo@alsa-project.org>");
MODULE_DESCRIPTION("Midlevel PCM code for ALSA.");
MODULE_LICENSE("GPL");
static LIST_HEAD(snd_pcm_devices);
static LIST_HEAD(snd_pcm_notify_list);
static DEFINE_MUTEX(register_mutex);
static int snd_pcm_free(struct snd_pcm *pcm);
static int snd_pcm_dev_free(struct snd_device *device);
static int snd_pcm_dev_register(struct snd_device *device);
static int snd_pcm_dev_disconnect(struct snd_device *device);
static struct snd_pcm *snd_pcm_get(struct snd_card *card, int device)
static int snd_pcm_next(struct snd_card *card, int device)
static int snd_pcm_add(struct snd_pcm *newpcm)
static int snd_pcm_control_ioctl(struct snd_card *card,
struct snd_ctl_file *control,
unsigned int cmd, unsigned long arg)
#define FORMAT(v) [SNDRV_PCM_FORMAT_##v] = #v
static char *snd_pcm_format_names[] = ;
const char *snd_pcm_format_name(snd_pcm_format_t format)
EXPORT_SYMBOL_GPL(snd_pcm_format_name);
#define STATE(v) [SNDRV_PCM_STATE_##v] = #v
#define STREAM(v) [SNDRV_PCM_STREAM_##v] = #v
#define READY(v) [SNDRV_PCM_READY_##v] = #v
#define XRUN(v) [SNDRV_PCM_XRUN_##v] = #v
#define SILENCE(v) [SNDRV_PCM_SILENCE_##v] = #v
#define TSTAMP(v) [SNDRV_PCM_TSTAMP_##v] = #v
#define ACCESS(v) [SNDRV_PCM_ACCESS_##v] = #v
#define START(v) [SNDRV_PCM_START_##v] = #v
#define SUBFORMAT(v) [SNDRV_PCM_SUBFORMAT_##v] = #v
static char *snd_pcm_stream_names[] = ;
static char *snd_pcm_state_names[] = ;
static char *snd_pcm_access_names[] = ;
static char *snd_pcm_subformat_names[] = ;
static char *snd_pcm_tstamp_mode_names[] = ;
static const char *snd_pcm_stream_name(int stream)
static const char *snd_pcm_access_name(snd_pcm_access_t access)
static const char *snd_pcm_subformat_name(snd_pcm_subformat_t subformat)
static const char *snd_pcm_tstamp_mode_name(int mode)
static const char *snd_pcm_state_name(snd_pcm_state_t state)
#if defined(CONFIG_SND_PCM_OSS) || defined(CONFIG_SND_PCM_OSS_MODULE)
static const char *snd_pcm_oss_format_name(int format)
static void snd_pcm_proc_info_read(struct snd_pcm_substream *substream,
struct snd_info_buffer *buffer)
static void snd_pcm_stream_proc_info_read(struct snd_info_entry *entry,
struct snd_info_buffer *buffer)
static void snd_pcm_substream_proc_info_read(struct snd_info_entry *entry,
struct snd_info_buffer *buffer)
static void snd_pcm_substream_proc_hw_params_read(struct snd_info_entry *entry,
struct snd_info_buffer *buffer)
static void snd_pcm_substream_proc_sw_params_read(struct snd_info_entry *entry,
struct snd_info_buffer *buffer)
static void snd_pcm_substream_proc_status_read(struct snd_info_entry *entry,
struct snd_info_buffer *buffer)
static void snd_pcm_xrun_debug_read(struct snd_info_entry *entry,
struct snd_info_buffer *buffer)
static void snd_pcm_xrun_debug_write(struct snd_info_entry *entry,
struct snd_info_buffer *buffer)
static int snd_pcm_stream_proc_init(struct snd_pcm_str *pstr)
static int snd_pcm_stream_proc_done(struct snd_pcm_str *pstr)
static int snd_pcm_substream_proc_init(struct snd_pcm_substream *substream)
static int snd_pcm_substream_proc_done(struct snd_pcm_substream *substream)
static inline int snd_pcm_stream_proc_init(struct snd_pcm_str *pstr)
static inline int snd_pcm_stream_proc_done(struct snd_pcm_str *pstr)
static inline int snd_pcm_substream_proc_init(struct snd_pcm_substream *substream)
static inline int snd_pcm_substream_proc_done(struct snd_pcm_substream *substream)
int snd_pcm_new_stream(struct snd_pcm *pcm, int stream, int substream_count)
EXPORT_SYMBOL(snd_pcm_new_stream);
int snd_pcm_new(struct snd_card *card, const char *id, int device,
int playback_count, int capture_count,
struct snd_pcm ** rpcm)
EXPORT_SYMBOL(snd_pcm_new);
static void snd_pcm_free_stream(struct snd_pcm_str * pstr)
static int snd_pcm_free(struct snd_pcm *pcm)
static int snd_pcm_dev_free(struct snd_device *device)
int snd_pcm_attach_substream(struct snd_pcm *pcm, int stream,
struct file *file,
struct snd_pcm_substream **rsubstream)
void snd_pcm_detach_substream(struct snd_pcm_substream *substream)
static ssize_t show_pcm_class(struct device *dev,
struct device_attribute *attr, char *buf)
static struct device_attribute pcm_attrs =
__ATTR(pcm_class, S_IRUGO, show_pcm_class, NULL);
static int snd_pcm_dev_register(struct snd_device *device)
static int snd_pcm_dev_disconnect(struct snd_device *device)
int snd_pcm_notify(struct snd_pcm_notify *notify, int nfree)
EXPORT_SYMBOL(snd_pcm_notify);
static void snd_pcm_proc_read(struct snd_info_entry *entry,
struct snd_info_buffer *buffer)
static struct snd_info_entry *snd_pcm_proc_entry;
static void snd_pcm_proc_init(void)
static void snd_pcm_proc_done(void)
#define snd_pcm_proc_init()
#define snd_pcm_proc_done()
static int __init alsa_pcm_init(void)
static void __exit alsa_pcm_exit(void)
module_init(alsa_pcm_init)
module_exit(alsa_pcm_exit)
