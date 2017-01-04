#define CODEC_CLOCK 5644800
static int snappercl15_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params)
static struct snd_soc_ops snappercl15_ops = ;
static const struct snd_soc_dapm_widget tlv320aic23_dapm_widgets[] = ;
static const struct snd_soc_dapm_route audio_map[] = ;
static int snappercl15_tlv320aic23_init(struct snd_soc_pcm_runtime *rtd)
static struct snd_soc_dai_link snappercl15_dai = ;
static struct snd_soc_card snd_soc_snappercl15 = ;
static struct platform_device *snappercl15_snd_device;
static int __init snappercl15_init(void)
static void __exit snappercl15_exit(void)
module_init(snappercl15_init);
module_exit(snappercl15_exit);
MODULE_AUTHOR("Ryan Mallon <ryan@bluewatersys.com>");
MODULE_DESCRIPTION("ALSA SoC Snapper CL15");
MODULE_LICENSE("GPL");
