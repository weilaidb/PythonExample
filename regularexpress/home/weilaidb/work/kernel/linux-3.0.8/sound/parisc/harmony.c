static int index = SNDRV_DEFAULT_IDX1;
static char *id = SNDRV_DEFAULT_STR1;
module_param(index, int, 0444);
MODULE_PARM_DESC(index, "Index value for Harmony driver.");
module_param(id, charp, 0444);
MODULE_PARM_DESC(id, "ID string for Harmony driver.");
static struct parisc_device_id snd_harmony_devtable[] = ;
MODULE_DEVICE_TABLE(parisc, snd_harmony_devtable);
#define NAME "harmony"
#define PFX  NAME ": "
static unsigned int snd_harmony_rates[] = ;
static unsigned int rate_bits[14] = ;
static struct snd_pcm_hw_constraint_list hw_constraint_rates = ;
static inline unsigned long
harmony_read(struct snd_harmony *h, unsigned r)
static inline void
harmony_write(struct snd_harmony *h, unsigned r, unsigned long v)
static inline void
harmony_wait_for_control(struct snd_harmony *h)
static inline void
harmony_reset(struct snd_harmony *h)
static void
harmony_disable_interrupts(struct snd_harmony *h)
static void
harmony_enable_interrupts(struct snd_harmony *h)
static void
harmony_mute(struct snd_harmony *h)
static void
harmony_unmute(struct snd_harmony *h)
static void
harmony_set_control(struct snd_harmony *h)
static irqreturn_t
snd_harmony_interrupt(int irq, void *dev)
static unsigned int
snd_harmony_rate_bits(int rate)
static struct snd_pcm_hardware snd_harmony_playback =
;
static struct snd_pcm_hardware snd_harmony_capture =
;
static int
snd_harmony_playback_trigger(struct snd_pcm_substream *ss, int cmd)
static int
snd_harmony_capture_trigger(struct snd_pcm_substream *ss, int cmd)
static int
snd_harmony_set_data_format(struct snd_harmony *h, int fmt, int force)
static int
snd_harmony_playback_prepare(struct snd_pcm_substream *ss)
static int
snd_harmony_capture_prepare(struct snd_pcm_substream *ss)
static snd_pcm_uframes_t
snd_harmony_playback_pointer(struct snd_pcm_substream *ss)
static snd_pcm_uframes_t
snd_harmony_capture_pointer(struct snd_pcm_substream *ss)
static int
snd_harmony_playback_open(struct snd_pcm_substream *ss)
static int
snd_harmony_capture_open(struct snd_pcm_substream *ss)
static int
snd_harmony_playback_close(struct snd_pcm_substream *ss)
static int
snd_harmony_capture_close(struct snd_pcm_substream *ss)
static int
snd_harmony_hw_params(struct snd_pcm_substream *ss,
struct snd_pcm_hw_params *hw)
static int
snd_harmony_hw_free(struct snd_pcm_substream *ss)
static struct snd_pcm_ops snd_harmony_playback_ops = ;
static struct snd_pcm_ops snd_harmony_capture_ops = ;
static int
snd_harmony_pcm_init(struct snd_harmony *h)
static void
snd_harmony_set_new_gain(struct snd_harmony *h)
static int
snd_harmony_mixercontrol_info(struct snd_kcontrol *kc,
struct snd_ctl_elem_info *uinfo)
static int
snd_harmony_volume_get(struct snd_kcontrol *kc,
struct snd_ctl_elem_value *ucontrol)
static int
snd_harmony_volume_put(struct snd_kcontrol *kc,
struct snd_ctl_elem_value *ucontrol)
static int
snd_harmony_captureroute_info(struct snd_kcontrol *kc,
struct snd_ctl_elem_info *uinfo)
static int
snd_harmony_captureroute_get(struct snd_kcontrol *kc,
struct snd_ctl_elem_value *ucontrol)
static int
snd_harmony_captureroute_put(struct snd_kcontrol *kc,
struct snd_ctl_elem_value *ucontrol)
#define HARMONY_CONTROLS	ARRAY_SIZE(snd_harmony_controls)
#define HARMONY_VOLUME(xname, left_shift, right_shift, mask, invert) \
static struct snd_kcontrol_new snd_harmony_controls[] = ;
static void __devinit
snd_harmony_mixer_reset(struct snd_harmony *h)
static int __devinit
snd_harmony_mixer_init(struct snd_harmony *h)
static int
snd_harmony_free(struct snd_harmony *h)
static int
snd_harmony_dev_free(struct snd_device *dev)
static int __devinit
snd_harmony_create(struct snd_card *card,
struct parisc_device *padev,
struct snd_harmony **rchip)
static int __devinit
snd_harmony_probe(struct parisc_device *padev)
static int __devexit
snd_harmony_remove(struct parisc_device *padev)
static struct parisc_driver snd_harmony_driver = ;
static int __init
alsa_harmony_init(void)
static void __exit
alsa_harmony_fini(void)
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Kyle McMartin <kyle@parisc-linux.org>");
MODULE_DESCRIPTION("Harmony sound driver");
module_init(alsa_harmony_init);
module_exit(alsa_harmony_fini);
