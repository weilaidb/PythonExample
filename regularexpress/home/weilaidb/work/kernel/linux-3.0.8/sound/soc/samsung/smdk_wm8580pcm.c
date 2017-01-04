#define SMDK_WM8580_EXT_OSC 12000000
#define SMDK_WM8580_EXT_MCLK 4096000
#define SMDK_WM8580_EXT_VOICE 2048000
static unsigned long mclk_freq;
static unsigned long xtal_freq;
static int smdk_wm8580_pcm_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params)
static struct snd_soc_ops smdk_wm8580_pcm_ops = ;
static struct snd_soc_dai_link smdk_dai[] = ;
static struct snd_soc_card smdk_pcm = ;
static int __devinit snd_smdk_probe(struct platform_device *pdev)
static int __devexit snd_smdk_remove(struct platform_device *pdev)
static struct platform_driver snd_smdk_driver = ;
static int __init smdk_audio_init(void)
module_init(smdk_audio_init);
static void __exit smdk_audio_exit(void)
module_exit(smdk_audio_exit);
MODULE_AUTHOR("Sangbeom Kim, <sbkim73@samsung.com>");
MODULE_DESCRIPTION("ALSA SoC SMDK WM8580 for PCM");
MODULE_LICENSE("GPL");
