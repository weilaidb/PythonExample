static unsigned int rates[] = ;
static struct snd_pcm_hw_constraint_list hw_rates = ;
static struct snd_soc_jack hp_jack;
static struct snd_soc_jack_pin hp_jack_pins[] = ;
static struct snd_soc_jack_gpio hp_jack_gpios[] = ;
static int h1940_startup(struct snd_pcm_substream *substream)
static int h1940_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params)
static struct snd_soc_ops h1940_ops = ;
static int h1940_spk_power(struct snd_soc_dapm_widget *w,
struct snd_kcontrol *kcontrol, int event)
static const struct snd_soc_dapm_widget uda1380_dapm_widgets[] = ;
static const struct snd_soc_dapm_route audio_map[] = ;
static struct platform_device *s3c24xx_snd_device;
static int h1940_uda1380_init(struct snd_soc_pcm_runtime *rtd)
static struct snd_soc_dai_link h1940_uda1380_dai[] = ;
static struct snd_soc_card h1940_asoc = ;
static int __init h1940_init(void)
static void __exit h1940_exit(void)
module_init(h1940_init);
module_exit(h1940_exit);
MODULE_AUTHOR("Arnaud Patard, Vasily Khoruzhick");
MODULE_DESCRIPTION("ALSA SoC H1940");
MODULE_LICENSE("GPL");
