struct ad1836_priv ;
static const char *ad1836_deemp[] = ;
static const struct soc_enum ad1836_deemp_enum =
SOC_ENUM_SINGLE(AD1836_DAC_CTRL1, 8, 4, ad1836_deemp);
static const struct snd_kcontrol_new ad1836_snd_controls[] = ;
static const struct snd_soc_dapm_widget ad1836_dapm_widgets[] = ;
static const struct snd_soc_dapm_route audio_paths[] = ;
static int ad1836_set_dai_fmt(struct snd_soc_dai *codec_dai,
unsigned int fmt)
static int ad1836_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params,
struct snd_soc_dai *dai)
static int ad1836_soc_suspend(struct snd_soc_codec *codec,
pm_message_t state)
static int ad1836_soc_resume(struct snd_soc_codec *codec)
#define ad1836_soc_suspend NULL
#define ad1836_soc_resume  NULL
static struct snd_soc_dai_ops ad1836_dai_ops = ;
static struct snd_soc_dai_driver ad1836_dai = ;
static int ad1836_probe(struct snd_soc_codec *codec)
static int ad1836_remove(struct snd_soc_codec *codec)
static struct snd_soc_codec_driver soc_codec_dev_ad1836 = ;
static int __devinit ad1836_spi_probe(struct spi_device *spi)
static int __devexit ad1836_spi_remove(struct spi_device *spi)
static struct spi_driver ad1836_spi_driver = ;
static int __init ad1836_init(void)
module_init(ad1836_init);
static void __exit ad1836_exit(void)
module_exit(ad1836_exit);
MODULE_DESCRIPTION("ASoC ad1836 driver");
MODULE_AUTHOR("Barry Song <21cnbao@gmail.com>");
MODULE_LICENSE("GPL");
