static struct snd_soc_card smdk2443;
static struct snd_soc_dai_link smdk2443_dai[] = ;
static struct snd_soc_card smdk2443 = ;
static struct platform_device *smdk2443_snd_ac97_device;
static int __init smdk2443_init(void)
static void __exit smdk2443_exit(void)
module_init(smdk2443_init);
module_exit(smdk2443_exit);
MODULE_AUTHOR("Graeme Gregory, graeme.gregory@wolfsonmicro.com, www.wolfsonmicro.com");
MODULE_DESCRIPTION("ALSA SoC WM9710 SMDK2443");
MODULE_LICENSE("GPL");
