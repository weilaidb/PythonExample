static struct snd_soc_jack hs_jack;
static struct snd_soc_jack_pin hs_jack_pin[] = ;
static struct snd_soc_jack_gpio hs_jack_gpio = ;
static int hx4700_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params)
static struct snd_soc_ops hx4700_ops = ;
static int hx4700_spk_power(struct snd_soc_dapm_widget *w,
struct snd_kcontrol *k, int event)
static int hx4700_hp_power(struct snd_soc_dapm_widget *w,
struct snd_kcontrol *k, int event)
static const struct snd_soc_dapm_widget hx4700_dapm_widgets[] = ;
static const struct snd_soc_dapm_route hx4700_audio_map[] = ;
static int hx4700_ak4641_init(struct snd_soc_pcm_runtime *rtd)
static struct snd_soc_dai_link hx4700_dai = ;
static struct snd_soc_card snd_soc_card_hx4700 = ;
static struct gpio hx4700_audio_gpios[] = ;
static int __devinit hx4700_audio_probe(struct platform_device *pdev)
static int __devexit hx4700_audio_remove(struct platform_device *pdev)
static struct platform_driver hx4700_audio_driver = ;
static int __init hx4700_modinit(void)
module_init(hx4700_modinit);
static void __exit hx4700_modexit(void)
module_exit(hx4700_modexit);
MODULE_AUTHOR("Philipp Zabel");
MODULE_DESCRIPTION("ALSA SoC iPAQ hx4700");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:hx4700-audio");
