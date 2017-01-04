static struct snd_soc_dai_link em_x270_dai[] = ;
static struct snd_soc_card em_x270 = ;
static struct platform_device *em_x270_snd_device;
static int __init em_x270_init(void)
static void __exit em_x270_exit(void)
module_init(em_x270_init);
module_exit(em_x270_exit);
MODULE_AUTHOR("Mike Rapoport");
MODULE_DESCRIPTION("ALSA SoC EM-X270, eXeda and CM-X300");
MODULE_LICENSE("GPL");
