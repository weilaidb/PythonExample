#define E740_AUDIO_OUT 1
#define E740_AUDIO_IN  2
static int e740_audio_power;
static void e740_sync_audio_power(int status)
static int e740_mic_amp_event(struct snd_soc_dapm_widget *w,
struct snd_kcontrol *kcontrol, int event)
static int e740_output_amp_event(struct snd_soc_dapm_widget *w,
struct snd_kcontrol *kcontrol, int event)
static const struct snd_soc_dapm_widget e740_dapm_widgets[] = ;
static const struct snd_soc_dapm_route audio_map[] = ;
static int e740_ac97_init(struct snd_soc_pcm_runtime *rtd)
static struct snd_soc_dai_link e740_dai[] = ;
static struct snd_soc_card e740 = ;
static struct platform_device *e740_snd_device;
static int __init e740_init(void)
static void __exit e740_exit(void)
module_init(e740_init);
module_exit(e740_exit);
MODULE_AUTHOR("Ian Molton <spyro@f2s.com>");
MODULE_DESCRIPTION("ALSA SoC driver for e740");
MODULE_LICENSE("GPL v2");
