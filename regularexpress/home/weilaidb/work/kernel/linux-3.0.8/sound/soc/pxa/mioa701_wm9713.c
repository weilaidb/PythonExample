#define ARRAY_AND_SIZE(x)	(x), ARRAY_SIZE(x)
#define AC97_GPIO_PULL		0x58
static int rear_amp_power(struct snd_soc_codec *codec, int power)
static int rear_amp_event(struct snd_soc_dapm_widget *widget,
struct snd_kcontrol *kctl, int event)
static const struct snd_soc_dapm_widget mioa701_dapm_widgets[] = ;
static const struct snd_soc_dapm_route audio_map[] = ;
static int mioa701_wm9713_init(struct snd_soc_pcm_runtime *rtd)
static struct snd_soc_ops mioa701_ops;
static struct snd_soc_dai_link mioa701_dai[] = ;
static struct snd_soc_card mioa701 = ;
static struct platform_device *mioa701_snd_device;
static int mioa701_wm9713_probe(struct platform_device *pdev)
static int __devexit mioa701_wm9713_remove(struct platform_device *pdev)
static struct platform_driver mioa701_wm9713_driver = ;
static int __init mioa701_asoc_init(void)
static void __exit mioa701_asoc_exit(void)
module_init(mioa701_asoc_init);
module_exit(mioa701_asoc_exit);
MODULE_AUTHOR("Robert Jarzmik (rjarzmik@free.fr)");
MODULE_DESCRIPTION("ALSA SoC WM9713 MIO A701");
MODULE_LICENSE("GPL");
