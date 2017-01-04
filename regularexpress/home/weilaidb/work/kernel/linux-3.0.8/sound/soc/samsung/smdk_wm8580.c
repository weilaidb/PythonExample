#define SMDK_WM8580_FREQ 12000000
static int smdk_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params)
static struct snd_soc_ops smdk_ops = ;
static const struct snd_soc_dapm_widget wm8580_dapm_widgets_pbk[] = ;
static const struct snd_soc_dapm_widget wm8580_dapm_widgets_cpt[] = ;
static const struct snd_soc_dapm_route audio_map_tx[] = ;
static const struct snd_soc_dapm_route audio_map_rx[] = ;
static int smdk_wm8580_init_paiftx(struct snd_soc_pcm_runtime *rtd)
static int smdk_wm8580_init_paifrx(struct snd_soc_pcm_runtime *rtd)
enum ;
static struct snd_soc_dai_link smdk_dai[] = ;
static struct snd_soc_card smdk = ;
static struct platform_device *smdk_snd_device;
static int __init smdk_audio_init(void)
module_init(smdk_audio_init);
static void __exit smdk_audio_exit(void)
module_exit(smdk_audio_exit);
MODULE_AUTHOR("Jaswinder Singh, jassi.brar@samsung.com");
MODULE_DESCRIPTION("ALSA SoC SMDK WM8580");
MODULE_LICENSE("GPL");
