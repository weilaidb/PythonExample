static struct snd_soc_jack hs_jack;
static struct snd_soc_jack_pin hs_jack_pins[] = ;
static struct snd_soc_jack_gpio hs_jack_gpios[] = ;
static const struct snd_soc_dapm_widget palm27x_dapm_widgets[] = ;
static const struct snd_soc_dapm_route audio_map[] = ;
static struct snd_soc_card palm27x_asoc;
static int palm27x_ac97_init(struct snd_soc_pcm_runtime *rtd)
static struct snd_soc_dai_link palm27x_dai[] = ;
static struct snd_soc_card palm27x_asoc = ;
static struct platform_device *palm27x_snd_device;
static int palm27x_asoc_probe(struct platform_device *pdev)
static int __devexit palm27x_asoc_remove(struct platform_device *pdev)
static struct platform_driver palm27x_wm9712_driver = ;
static int __init palm27x_asoc_init(void)
static void __exit palm27x_asoc_exit(void)
module_init(palm27x_asoc_init);
module_exit(palm27x_asoc_exit);
MODULE_AUTHOR("Marek Vasut <marek.vasut@gmail.com>");
MODULE_DESCRIPTION("ALSA SoC Palm T|X, T5 and LifeDrive");
MODULE_LICENSE("GPL");
