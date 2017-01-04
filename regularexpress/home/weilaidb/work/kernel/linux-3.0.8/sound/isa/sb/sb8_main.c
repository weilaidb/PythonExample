MODULE_AUTHOR("Jaroslav Kysela <perex@perex.cz>, Uros Bizjak <uros@kss-loka.si>");
MODULE_DESCRIPTION("Routines for control of 8-bit SoundBlaster cards and clones");
MODULE_LICENSE("GPL");
#define SB8_CLOCK	1000000
#define SB8_DEN(v)	((SB8_CLOCK + (v) / 2) / (v))
#define SB8_RATE(v)	(SB8_CLOCK / SB8_DEN(v))
static struct snd_ratnum clock = ;
static struct snd_pcm_hw_constraint_ratnums hw_constraints_clock = ;
static struct snd_ratnum stereo_clocks[] = ;
static int snd_sb8_hw_constraint_rate_channels(struct snd_pcm_hw_params *params,
struct snd_pcm_hw_rule *rule)
static int snd_sb8_hw_constraint_channels_rate(struct snd_pcm_hw_params *params,
struct snd_pcm_hw_rule *rule)
static int snd_sb8_playback_prepare(struct snd_pcm_substream *substream)
static int snd_sb8_playback_trigger(struct snd_pcm_substream *substream,
int cmd)
static int snd_sb8_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *hw_params)
static int snd_sb8_hw_free(struct snd_pcm_substream *substream)
static int snd_sb8_capture_prepare(struct snd_pcm_substream *substream)
static int snd_sb8_capture_trigger(struct snd_pcm_substream *substream,
int cmd)
irqreturn_t snd_sb8dsp_interrupt(struct snd_sb *chip)
static snd_pcm_uframes_t snd_sb8_playback_pointer(struct snd_pcm_substream *substream)
static snd_pcm_uframes_t snd_sb8_capture_pointer(struct snd_pcm_substream *substream)
static struct snd_pcm_hardware snd_sb8_playback =
;
static struct snd_pcm_hardware snd_sb8_capture =
;
static int snd_sb8_open(struct snd_pcm_substream *substream)
static int snd_sb8_close(struct snd_pcm_substream *substream)
static struct snd_pcm_ops snd_sb8_playback_ops = ;
static struct snd_pcm_ops snd_sb8_capture_ops = ;
int snd_sb8dsp_pcm(struct snd_sb *chip, int device, struct snd_pcm ** rpcm)
EXPORT_SYMBOL(snd_sb8dsp_pcm);
EXPORT_SYMBOL(snd_sb8dsp_interrupt);
EXPORT_SYMBOL(snd_sb8dsp_midi_interrupt);
EXPORT_SYMBOL(snd_sb8dsp_midi);
static int __init alsa_sb8_init(void)
static void __exit alsa_sb8_exit(void)
module_init(alsa_sb8_init)
module_exit(alsa_sb8_exit)
