static struct s3c24xx_audio_simtec_pdata *pdata;
static struct clk *xtal_clk;
static int spk_gain;
static int spk_unmute;
static int speaker_gain_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static void speaker_gain_set(int value)
static int speaker_gain_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static const struct snd_kcontrol_new amp_gain_controls[] = ;
static void spk_unmute_state(int to)
static int speaker_unmute_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int speaker_unmute_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static const struct snd_kcontrol_new amp_unmute_controls[] = ;
void simtec_audio_init(struct snd_soc_pcm_runtime *rtd)
EXPORT_SYMBOL_GPL(simtec_audio_init);
#define CODEC_CLOCK 12000000
static int simtec_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params)
static int simtec_call_startup(struct s3c24xx_audio_simtec_pdata *pd)
static struct snd_soc_ops simtec_snd_ops = ;
static int attach_gpio_amp(struct device *dev,
struct s3c24xx_audio_simtec_pdata *pd)
static void detach_gpio_amp(struct s3c24xx_audio_simtec_pdata *pd)
int simtec_audio_resume(struct device *dev)
const struct dev_pm_ops simtec_audio_pmops = ;
EXPORT_SYMBOL_GPL(simtec_audio_pmops);
int __devinit simtec_audio_core_probe(struct platform_device *pdev,
struct snd_soc_card *card)
EXPORT_SYMBOL_GPL(simtec_audio_core_probe);
int __devexit simtec_audio_remove(struct platform_device *pdev)
EXPORT_SYMBOL_GPL(simtec_audio_remove);
MODULE_AUTHOR("Ben Dooks <ben@simtec.co.uk>");
MODULE_DESCRIPTION("ALSA SoC Simtec Audio common support");
MODULE_LICENSE("GPL");
