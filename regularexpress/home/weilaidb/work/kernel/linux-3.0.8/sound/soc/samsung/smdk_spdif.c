static int set_audio_clock_heirachy(struct platform_device *pdev)
static int set_audio_clock_rate(unsigned long epll_rate,
unsigned long audio_rate)
static int smdk_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params)
static struct snd_soc_ops smdk_spdif_ops = ;
static struct snd_soc_dai_link smdk_dai = ;
static struct snd_soc_card smdk = ;
static struct platform_device *smdk_snd_spdif_dit_device;
static struct platform_device *smdk_snd_spdif_device;
static int __init smdk_init(void)
static void __exit smdk_exit(void)
module_init(smdk_init);
module_exit(smdk_exit);
MODULE_AUTHOR("Seungwhan Youn, <sw.youn@samsung.com>");
MODULE_DESCRIPTION("ALSA SoC SMDK+S/PDIF");
MODULE_LICENSE("GPL");
