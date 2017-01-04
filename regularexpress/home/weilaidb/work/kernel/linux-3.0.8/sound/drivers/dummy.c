MODULE_AUTHOR("Jaroslav Kysela <perex@perex.cz>");
MODULE_DESCRIPTION("Dummy soundcard (/dev/null)");
MODULE_LICENSE("GPL");
MODULE_SUPPORTED_DEVICE("");
#define MAX_PCM_DEVICES		4
#define MAX_PCM_SUBSTREAMS	128
#define MAX_MIDI_DEVICES	2
#define MAX_BUFFER_SIZE		(64*1024)
#define MIN_PERIOD_SIZE		64
#define MAX_PERIOD_SIZE		MAX_BUFFER_SIZE
#define USE_FORMATS 		(SNDRV_PCM_FMTBIT_U8 | SNDRV_PCM_FMTBIT_S16_LE)
#define USE_RATE		SNDRV_PCM_RATE_CONTINUOUS | SNDRV_PCM_RATE_8000_48000
#define USE_RATE_MIN		5500
#define USE_RATE_MAX		48000
#define USE_CHANNELS_MIN 	1
#define USE_CHANNELS_MAX 	2
#define USE_PERIODS_MIN 	1
#define USE_PERIODS_MAX 	1024
static int index[SNDRV_CARDS] = SNDRV_DEFAULT_IDX;
static char *id[SNDRV_CARDS] = SNDRV_DEFAULT_STR;
static int enable[SNDRV_CARDS] = ;
static char *model[SNDRV_CARDS] = ;
static int pcm_devs[SNDRV_CARDS] = ;
static int pcm_substreams[SNDRV_CARDS] = ;
static int hrtimer = 1;
static int fake_buffer = 1;
module_param_array(index, int, NULL, 0444);
MODULE_PARM_DESC(index, "Index value for dummy soundcard.");
module_param_array(id, charp, NULL, 0444);
MODULE_PARM_DESC(id, "ID string for dummy soundcard.");
module_param_array(enable, bool, NULL, 0444);
MODULE_PARM_DESC(enable, "Enable this dummy soundcard.");
module_param_array(model, charp, NULL, 0444);
MODULE_PARM_DESC(model, "Soundcard model.");
module_param_array(pcm_devs, int, NULL, 0444);
MODULE_PARM_DESC(pcm_devs, "PCM devices # (0-4) for dummy driver.");
module_param_array(pcm_substreams, int, NULL, 0444);
MODULE_PARM_DESC(pcm_substreams, "PCM substreams # (1-128) for dummy driver.");
module_param(fake_buffer, bool, 0444);
MODULE_PARM_DESC(fake_buffer, "Fake buffer allocations.");
module_param(hrtimer, bool, 0644);
MODULE_PARM_DESC(hrtimer, "Use hrtimer as the timer source.");
static struct platform_device *devices[SNDRV_CARDS];
#define MIXER_ADDR_MASTER	0
#define MIXER_ADDR_LINE		1
#define MIXER_ADDR_MIC		2
#define MIXER_ADDR_SYNTH	3
#define MIXER_ADDR_CD		4
#define MIXER_ADDR_LAST		4
struct dummy_timer_ops ;
struct dummy_model ;
struct snd_dummy ;
static int emu10k1_playback_constraints(struct snd_pcm_runtime *runtime)
struct dummy_model model_emu10k1 = ;
struct dummy_model model_rme9652 = ;
struct dummy_model model_ice1712 = ;
struct dummy_model model_uda1341 = ;
struct dummy_model model_ac97 = ;
struct dummy_model model_ca0106 = ;
struct dummy_model *dummy_models[] = ;
struct dummy_systimer_pcm ;
static void dummy_systimer_rearm(struct dummy_systimer_pcm *dpcm)
static void dummy_systimer_update(struct dummy_systimer_pcm *dpcm)
static int dummy_systimer_start(struct snd_pcm_substream *substream)
static int dummy_systimer_stop(struct snd_pcm_substream *substream)
static int dummy_systimer_prepare(struct snd_pcm_substream *substream)
static void dummy_systimer_callback(unsigned long data)
static snd_pcm_uframes_t
dummy_systimer_pointer(struct snd_pcm_substream *substream)
static int dummy_systimer_create(struct snd_pcm_substream *substream)
static void dummy_systimer_free(struct snd_pcm_substream *substream)
static struct dummy_timer_ops dummy_systimer_ops = ;
struct dummy_hrtimer_pcm ;
static void dummy_hrtimer_pcm_elapsed(unsigned long priv)
static enum hrtimer_restart dummy_hrtimer_callback(struct hrtimer *timer)
static int dummy_hrtimer_start(struct snd_pcm_substream *substream)
static int dummy_hrtimer_stop(struct snd_pcm_substream *substream)
static inline void dummy_hrtimer_sync(struct dummy_hrtimer_pcm *dpcm)
static snd_pcm_uframes_t
dummy_hrtimer_pointer(struct snd_pcm_substream *substream)
static int dummy_hrtimer_prepare(struct snd_pcm_substream *substream)
static int dummy_hrtimer_create(struct snd_pcm_substream *substream)
static void dummy_hrtimer_free(struct snd_pcm_substream *substream)
static struct dummy_timer_ops dummy_hrtimer_ops = ;
static int dummy_pcm_trigger(struct snd_pcm_substream *substream, int cmd)
static int dummy_pcm_prepare(struct snd_pcm_substream *substream)
static snd_pcm_uframes_t dummy_pcm_pointer(struct snd_pcm_substream *substream)
static struct snd_pcm_hardware dummy_pcm_hardware = ;
static int dummy_pcm_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *hw_params)
static int dummy_pcm_hw_free(struct snd_pcm_substream *substream)
static int dummy_pcm_open(struct snd_pcm_substream *substream)
static int dummy_pcm_close(struct snd_pcm_substream *substream)
static void *dummy_page[2];
static void free_fake_buffer(void)
static int alloc_fake_buffer(void)
static int dummy_pcm_copy(struct snd_pcm_substream *substream,
int channel, snd_pcm_uframes_t pos,
void __user *dst, snd_pcm_uframes_t count)
static int dummy_pcm_silence(struct snd_pcm_substream *substream,
int channel, snd_pcm_uframes_t pos,
snd_pcm_uframes_t count)
static struct page *dummy_pcm_page(struct snd_pcm_substream *substream,
unsigned long offset)
static struct snd_pcm_ops dummy_pcm_ops = ;
static struct snd_pcm_ops dummy_pcm_ops_no_buf = ;
static int __devinit snd_card_dummy_pcm(struct snd_dummy *dummy, int device,
int substreams)
#define DUMMY_VOLUME(xname, xindex, addr) \
static int snd_dummy_volume_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int snd_dummy_volume_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_dummy_volume_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static const DECLARE_TLV_DB_SCALE(db_scale_dummy, -4500, 30, 0);
#define DUMMY_CAPSRC(xname, xindex, addr) \
#define snd_dummy_capsrc_info	snd_ctl_boolean_stereo_info
static int snd_dummy_capsrc_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_dummy_capsrc_put(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static struct snd_kcontrol_new snd_dummy_controls[] = ;
static int __devinit snd_card_dummy_new_mixer(struct snd_dummy *dummy)
#if defined(CONFIG_SND_DEBUG) && defined(CONFIG_PROC_FS)
static void print_formats(struct snd_dummy *dummy,
struct snd_info_buffer *buffer)
static void print_rates(struct snd_dummy *dummy,
struct snd_info_buffer *buffer)
#define get_dummy_int_ptr(dummy, ofs) \
(unsigned int *)((char *)&((dummy)->pcm_hw) + (ofs))
#define get_dummy_ll_ptr(dummy, ofs) \
(unsigned long long *)((char *)&((dummy)->pcm_hw) + (ofs))
struct dummy_hw_field ;
#define FIELD_ENTRY(item, fmt)
static struct dummy_hw_field fields[] = ;
static void dummy_proc_read(struct snd_info_entry *entry,
struct snd_info_buffer *buffer)
static void dummy_proc_write(struct snd_info_entry *entry,
struct snd_info_buffer *buffer)
static void __devinit dummy_proc_init(struct snd_dummy *chip)
#define dummy_proc_init(x)
static int __devinit snd_dummy_probe(struct platform_device *devptr)
static int __devexit snd_dummy_remove(struct platform_device *devptr)
static int snd_dummy_suspend(struct platform_device *pdev, pm_message_t state)
static int snd_dummy_resume(struct platform_device *pdev)
#define SND_DUMMY_DRIVER	"snd_dummy"
static struct platform_driver snd_dummy_driver = ;
static void snd_dummy_unregister_all(void)
static int __init alsa_card_dummy_init(void)
static void __exit alsa_card_dummy_exit(void)
module_init(alsa_card_dummy_init)
module_exit(alsa_card_dummy_exit)
