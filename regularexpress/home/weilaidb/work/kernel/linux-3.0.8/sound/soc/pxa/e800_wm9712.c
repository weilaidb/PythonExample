static int e800_spk_amp_event(struct snd_soc_dapm_widget *w,
struct snd_kcontrol *kcontrol, int event)
static int e800_hp_amp_event(struct snd_soc_dapm_widget *w,
struct snd_kcontrol *kcontrol, int event)
static const struct snd_soc_dapm_widget e800_dapm_widgets[] = ;
static const struct snd_soc_dapm_route audio_map[] = ;
static int e800_ac97_init(struct snd_soc_pcm_runtime *rtd)
static struct snd_soc_dai_link e800_dai[] = ;
static struct snd_soc_card e800 = ;
static struct platform_device *e800_snd_device;
static int __init e800_init(void)
static void __exit e800_exit(void)
module_init(e800_init);
module_exit(e800_exit);
MODULE_AUTHOR("Ian Molton <spyro@f2s.com>");
MODULE_DESCRIPTION("ALSA SoC driver for e800");
MODULE_LICENSE("GPL v2");
