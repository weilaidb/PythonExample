static int rx1950_uda1380_init(struct snd_soc_pcm_runtime *rtd);
static int rx1950_startup(struct snd_pcm_substream *substream);
static int rx1950_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params);
static int rx1950_spk_power(struct snd_soc_dapm_widget *w,
struct snd_kcontrol *kcontrol, int event);
static unsigned int rates[] = ;
static struct snd_pcm_hw_constraint_list hw_rates = ;
static struct snd_soc_jack hp_jack;
static struct snd_soc_jack_pin hp_jack_pins[] = ;
static struct snd_soc_jack_gpio hp_jack_gpios[] = ;
static struct snd_soc_ops rx1950_ops = ;
static struct snd_soc_dai_link rx1950_uda1380_dai[] = ;
static struct snd_soc_card rx1950_asoc = ;
static const struct snd_soc_dapm_widget uda1380_dapm_widgets[] = ;
static const struct snd_soc_dapm_route audio_map[] = ;
static struct platform_device *s3c24xx_snd_device;
static int rx1950_startup(struct snd_pcm_substream *substream)
static int rx1950_spk_power(struct snd_soc_dapm_widget *w,
struct snd_kcontrol *kcontrol, int event)
static int rx1950_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params)
static int rx1950_uda1380_init(struct snd_soc_pcm_runtime *rtd)
static int __init rx1950_init(void)
static void __exit rx1950_exit(void)
module_init(rx1950_init);
module_exit(rx1950_exit);
MODULE_AUTHOR("Vasily Khoruzhick");
MODULE_DESCRIPTION("ALSA SoC RX1950");
MODULE_LICENSE("GPL");
