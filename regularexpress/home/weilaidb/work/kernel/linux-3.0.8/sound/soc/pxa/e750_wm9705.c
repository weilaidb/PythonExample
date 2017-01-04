static int e750_spk_amp_event(struct snd_soc_dapm_widget *w,
struct snd_kcontrol *kcontrol, int event)
static int e750_hp_amp_event(struct snd_soc_dapm_widget *w,
struct snd_kcontrol *kcontrol, int event)
static const struct snd_soc_dapm_widget e750_dapm_widgets[] = ;
static const struct snd_soc_dapm_route audio_map[] = ;
static int e750_ac97_init(struct snd_soc_pcm_runtime *rtd)
static struct snd_soc_dai_link e750_dai[] = ;
static struct snd_soc_card e750 = ;
static struct platform_device *e750_snd_device;
static int __init e750_init(void)
static void __exit e750_exit(void)
module_init(e750_init);
module_exit(e750_exit);
MODULE_AUTHOR("Ian Molton <spyro@f2s.com>");
MODULE_DESCRIPTION("ALSA SoC driver for e750");
MODULE_LICENSE("GPL v2");
