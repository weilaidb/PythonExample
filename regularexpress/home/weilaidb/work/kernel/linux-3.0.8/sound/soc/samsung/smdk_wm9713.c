static struct snd_soc_card smdk;
static struct snd_soc_dai_link smdk_dai = ;
static struct snd_soc_card smdk = ;
static struct platform_device *smdk_snd_wm9713_device;
static struct platform_device *smdk_snd_ac97_device;
static int __init smdk_init(void)
static void __exit smdk_exit(void)
module_init(smdk_init);
module_exit(smdk_exit);
MODULE_AUTHOR("Jaswinder Singh Brar, jassi.brar@samsung.com");
MODULE_DESCRIPTION("ALSA SoC SMDK+WM9713");
MODULE_LICENSE("GPL");
