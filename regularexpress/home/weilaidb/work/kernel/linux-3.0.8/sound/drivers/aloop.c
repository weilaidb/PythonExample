MODULE_AUTHOR("Jaroslav Kysela <perex@perex.cz>");
MODULE_DESCRIPTION("A loopback soundcard");
MODULE_LICENSE("GPL");
MODULE_SUPPORTED_DEVICE("");
#define MAX_PCM_SUBSTREAMS	8
static int index[SNDRV_CARDS] = SNDRV_DEFAULT_IDX;
static char *id[SNDRV_CARDS] = SNDRV_DEFAULT_STR;
static int enable[SNDRV_CARDS] = ;
static int pcm_substreams[SNDRV_CARDS] = ;
static int pcm_notify[SNDRV_CARDS];
module_param_array(index, int, NULL, 0444);
MODULE_PARM_DESC(index, "Index value for loopback soundcard.");
module_param_array(id, charp, NULL, 0444);
MODULE_PARM_DESC(id, "ID string for loopback soundcard.");
module_param_array(enable, bool, NULL, 0444);
MODULE_PARM_DESC(enable, "Enable this loopback soundcard.");
module_param_array(pcm_substreams, int, NULL, 0444);
MODULE_PARM_DESC(pcm_substreams, "PCM substreams # (1-8) for loopback driver.");
module_param_array(pcm_notify, int, NULL, 0444);
MODULE_PARM_DESC(pcm_notify, "Break capture when PCM format/rate/channels changes.");
#define NO_PITCH 100000
struct loopback_pcm;
struct loopback_cable ;
struct loopback_setup ;
struct loopback ;
struct loopback_pcm ;
static struct platform_device *devices[SNDRV_CARDS];
static inline unsigned int byte_pos(struct loopback_pcm *dpcm, unsigned int x)
static inline unsigned int frac_pos(struct loopback_pcm *dpcm, unsigned int x)
static inline struct loopback_setup *get_setup(struct loopback_pcm *dpcm)
static inline unsigned int get_notify(struct loopback_pcm *dpcm)
static inline unsigned int get_rate_shift(struct loopback_pcm *dpcm)
static void loopback_timer_start(struct loopback_pcm *dpcm)
static inline void loopback_timer_stop(struct loopback_pcm *dpcm)
#define CABLE_VALID_PLAYBACK	(1 << SNDRV_PCM_STREAM_PLAYBACK)
#define CABLE_VALID_CAPTURE	(1 << SNDRV_PCM_STREAM_CAPTURE)
#define CABLE_VALID_BOTH	(CABLE_VALID_PLAYBACK|CABLE_VALID_CAPTURE)
static int loopback_check_format(struct loopback_cable *cable, int stream)
static void loopback_active_notify(struct loopback_pcm *dpcm)
static int loopback_trigger(struct snd_pcm_substream *substream, int cmd)
static void params_change_substream(struct loopback_pcm *dpcm,
struct snd_pcm_runtime *runtime)
static void params_change(struct snd_pcm_substream *substream)
static int loopback_prepare(struct snd_pcm_substream *substream)
static void clear_capture_buf(struct loopback_pcm *dpcm, unsigned int bytes)
static void copy_play_buf(struct loopback_pcm *play,
struct loopback_pcm *capt,
unsigned int bytes)
#define BYTEPOS_UPDATE_POSONLY	0
#define BYTEPOS_UPDATE_CLEAR	1
#define BYTEPOS_UPDATE_COPY	2
static void loopback_bytepos_update(struct loopback_pcm *dpcm,
unsigned int delta,
unsigned int cmd)
static unsigned int loopback_pos_update(struct loopback_cable *cable)
static void loopback_timer_function(unsigned long data)
static snd_pcm_uframes_t loopback_pointer(struct snd_pcm_substream *substream)
static struct snd_pcm_hardware loopback_pcm_hardware =
;
static void loopback_runtime_free(struct snd_pcm_runtime *runtime)
static int loopback_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params)
static int loopback_hw_free(struct snd_pcm_substream *substream)
static unsigned int get_cable_index(struct snd_pcm_substream *substream)
static int rule_format(struct snd_pcm_hw_params *params,
struct snd_pcm_hw_rule *rule)
static int rule_rate(struct snd_pcm_hw_params *params,
struct snd_pcm_hw_rule *rule)
static int rule_channels(struct snd_pcm_hw_params *params,
struct snd_pcm_hw_rule *rule)
static int loopback_open(struct snd_pcm_substream *substream)
static int loopback_close(struct snd_pcm_substream *substream)
static struct snd_pcm_ops loopback_playback_ops = ;
static struct snd_pcm_ops loopback_capture_ops = ;
static int __devinit loopback_pcm_new(struct loopback *loopback,
int device, int substreams)
static int loopback_rate_shift_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int loopback_rate_shift_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int loopback_rate_shift_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int loopback_notify_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int loopback_notify_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int loopback_active_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int loopback_format_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int loopback_format_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int loopback_rate_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int loopback_rate_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int loopback_channels_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int loopback_channels_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static struct snd_kcontrol_new loopback_controls[]  __devinitdata = ;
static int __devinit loopback_mixer_new(struct loopback *loopback, int notify)
static void print_dpcm_info(struct snd_info_buffer *buffer,
struct loopback_pcm *dpcm,
const char *id)
static void print_substream_info(struct snd_info_buffer *buffer,
struct loopback *loopback,
int sub,
int num)
static void print_cable_info(struct snd_info_entry *entry,
struct snd_info_buffer *buffer)
static int __devinit loopback_proc_new(struct loopback *loopback, int cidx)
#define loopback_proc_new(loopback, cidx) do  while (0)
static int __devinit loopback_probe(struct platform_device *devptr)
static int __devexit loopback_remove(struct platform_device *devptr)
static int loopback_suspend(struct platform_device *pdev,
pm_message_t state)
static int loopback_resume(struct platform_device *pdev)
#define SND_LOOPBACK_DRIVER	"snd_aloop"
static struct platform_driver loopback_driver = ;
static void loopback_unregister_all(void)
static int __init alsa_card_loopback_init(void)
static void __exit alsa_card_loopback_exit(void)
module_init(alsa_card_loopback_init)
module_exit(alsa_card_loopback_exit)
