#define SMDK_WM8994_FREQ 16934000
static int smdk_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params)
static struct snd_soc_ops smdk_ops = ;
static int smdk_wm8994_init_paiftx(struct snd_soc_pcm_runtime *rtd)
static struct snd_soc_dai_link smdk_dai[] = ;
static struct snd_soc_card smdk = ;
static struct platform_device *smdk_snd_device;
static int __init smdk_audio_init(void)
module_init(smdk_audio_init);
static void __exit smdk_audio_exit(void)
module_exit(smdk_audio_exit);
MODULE_DESCRIPTION("ALSA SoC SMDK WM8994");
MODULE_LICENSE("GPL");
