static struct snd_soc_card snd_soc_z2;
static int z2_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params)
static struct snd_soc_jack hs_jack;
static struct snd_soc_jack_pin hs_jack_pins[] = ;
static struct snd_soc_jack_gpio hs_jack_gpios[] = ;
static const struct snd_soc_dapm_widget wm8750_dapm_widgets[] = ;
static const struct snd_soc_dapm_route audio_map[] = ;
static int z2_wm8750_init(struct snd_soc_pcm_runtime *rtd)
static struct snd_soc_ops z2_ops = ;
static struct snd_soc_dai_link z2_dai = ;
static struct snd_soc_card snd_soc_z2 = ;
static struct platform_device *z2_snd_device;
static int __init z2_init(void)
static void __exit z2_exit(void)
module_init(z2_init);
module_exit(z2_exit);
MODULE_AUTHOR("Ken McGuire <kenm@desertweyr.com>, "
"Marek Vasut <marek.vasut@gmail.com>");
MODULE_DESCRIPTION("ALSA SoC ZipitZ2");
MODULE_LICENSE("GPL");
