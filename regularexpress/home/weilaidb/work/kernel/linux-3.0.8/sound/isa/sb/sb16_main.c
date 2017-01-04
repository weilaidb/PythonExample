MODULE_AUTHOR("Jaroslav Kysela <perex@perex.cz>");
MODULE_DESCRIPTION("Routines for control of 16-bit SoundBlaster cards and clones");
MODULE_LICENSE("GPL");
static void snd_sb16_csp_playback_prepare(struct snd_sb *chip, struct snd_pcm_runtime *runtime)
static void snd_sb16_csp_capture_prepare(struct snd_sb *chip, struct snd_pcm_runtime *runtime)
static void snd_sb16_csp_update(struct snd_sb *chip)
static void snd_sb16_csp_playback_open(struct snd_sb *chip, struct snd_pcm_runtime *runtime)
static void snd_sb16_csp_playback_close(struct snd_sb *chip)
static void snd_sb16_csp_capture_open(struct snd_sb *chip, struct snd_pcm_runtime *runtime)
static void snd_sb16_csp_capture_close(struct snd_sb *chip)
#define snd_sb16_csp_playback_prepare(chip, runtime)
#define snd_sb16_csp_capture_prepare(chip, runtime)
#define snd_sb16_csp_update(chip)
#define snd_sb16_csp_playback_open(chip, runtime)
#define snd_sb16_csp_playback_close(chip)
#define snd_sb16_csp_capture_open(chip, runtime)
#define snd_sb16_csp_capture_close(chip)
static void snd_sb16_setup_rate(struct snd_sb *chip,
unsigned short rate,
int channel)
static int snd_sb16_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *hw_params)
static int snd_sb16_hw_free(struct snd_pcm_substream *substream)
static int snd_sb16_playback_prepare(struct snd_pcm_substream *substream)
static int snd_sb16_playback_trigger(struct snd_pcm_substream *substream,
int cmd)
static int snd_sb16_capture_prepare(struct snd_pcm_substream *substream)
static int snd_sb16_capture_trigger(struct snd_pcm_substream *substream,
int cmd)
irqreturn_t snd_sb16dsp_interrupt(int irq, void *dev_id)
static snd_pcm_uframes_t snd_sb16_playback_pointer(struct snd_pcm_substream *substream)
static snd_pcm_uframes_t snd_sb16_capture_pointer(struct snd_pcm_substream *substream)
static struct snd_pcm_hardware snd_sb16_playback =
;
static struct snd_pcm_hardware snd_sb16_capture =
;
static int snd_sb16_playback_open(struct snd_pcm_substream *substream)
static int snd_sb16_playback_close(struct snd_pcm_substream *substream)
static int snd_sb16_capture_open(struct snd_pcm_substream *substream)
static int snd_sb16_capture_close(struct snd_pcm_substream *substream)
static int snd_sb16_set_dma_mode(struct snd_sb *chip, int what)
static int snd_sb16_get_dma_mode(struct snd_sb *chip)
static int snd_sb16_dma_control_info(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_info *uinfo)
static int snd_sb16_dma_control_get(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int snd_sb16_dma_control_put(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static struct snd_kcontrol_new snd_sb16_dma_control = ;
int snd_sb16dsp_configure(struct snd_sb * chip)
static struct snd_pcm_ops snd_sb16_playback_ops = ;
static struct snd_pcm_ops snd_sb16_capture_ops = ;
int snd_sb16dsp_pcm(struct snd_sb * chip, int device, struct snd_pcm ** rpcm)
const struct snd_pcm_ops *snd_sb16dsp_get_pcm_ops(int direction)
EXPORT_SYMBOL(snd_sb16dsp_pcm);
EXPORT_SYMBOL(snd_sb16dsp_get_pcm_ops);
EXPORT_SYMBOL(snd_sb16dsp_configure);
EXPORT_SYMBOL(snd_sb16dsp_interrupt);
static int __init alsa_sb16_init(void)
static void __exit alsa_sb16_exit(void)
module_init(alsa_sb16_init)
module_exit(alsa_sb16_exit)
