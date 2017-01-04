#define OMAP3_PANDORA_DAC_POWER_GPIO	118
#define OMAP3_PANDORA_AMP_POWER_GPIO	14
#define PREFIX "ASoC omap3pandora: "
static struct regulator *omap3pandora_dac_reg;
static int omap3pandora_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params)
static int omap3pandora_dac_event(struct snd_soc_dapm_widget *w,
struct snd_kcontrol *k, int event)
static int omap3pandora_hp_event(struct snd_soc_dapm_widget *w,
struct snd_kcontrol *k, int event)
static const struct snd_soc_dapm_widget omap3pandora_out_dapm_widgets[] = ;
static const struct snd_soc_dapm_widget omap3pandora_in_dapm_widgets[] = ;
static const struct snd_soc_dapm_route omap3pandora_out_map[] = ;
static const struct snd_soc_dapm_route omap3pandora_in_map[] = ;
static int omap3pandora_out_init(struct snd_soc_pcm_runtime *rtd)
static int omap3pandora_in_init(struct snd_soc_pcm_runtime *rtd)
static struct snd_soc_ops omap3pandora_ops = ;
static struct snd_soc_dai_link omap3pandora_dai[] = ;
static struct snd_soc_card snd_soc_card_omap3pandora = ;
static struct platform_device *omap3pandora_snd_device;
static int __init omap3pandora_soc_init(void)
module_init(omap3pandora_soc_init);
static void __exit omap3pandora_soc_exit(void)
module_exit(omap3pandora_soc_exit);
MODULE_AUTHOR("Grazvydas Ignotas <notasas@gmail.com>");
MODULE_DESCRIPTION("ALSA SoC OMAP3 Pandora");
MODULE_LICENSE("GPL");
