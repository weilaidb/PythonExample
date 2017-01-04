#define QI_LB60_SND_GPIO JZ_GPIO_PORTB(29)
#define QI_LB60_AMP_GPIO JZ_GPIO_PORTD(4)
static int qi_lb60_spk_event(struct snd_soc_dapm_widget *widget,
struct snd_kcontrol *ctrl, int event)
static const struct snd_soc_dapm_widget qi_lb60_widgets[] = ;
static const struct snd_soc_dapm_route qi_lb60_routes[] = ;
#define QI_LB60_DAIFMT (SND_SOC_DAIFMT_I2S | \
SND_SOC_DAIFMT_NB_NF | \
SND_SOC_DAIFMT_CBM_CFM)
static int qi_lb60_codec_init(struct snd_soc_pcm_runtime *rtd)
static struct snd_soc_dai_link qi_lb60_dai = ;
static struct snd_soc_card qi_lb60 = ;
static struct platform_device *qi_lb60_snd_device;
static const struct gpio qi_lb60_gpios[] = ;
static int __init qi_lb60_init(void)
module_init(qi_lb60_init);
static void __exit qi_lb60_exit(void)
module_exit(qi_lb60_exit);
MODULE_AUTHOR("Lars-Peter Clausen <lars@metafoo.de>");
MODULE_DESCRIPTION("ALSA SoC QI LB60 Audio support");
MODULE_LICENSE("GPL v2");
