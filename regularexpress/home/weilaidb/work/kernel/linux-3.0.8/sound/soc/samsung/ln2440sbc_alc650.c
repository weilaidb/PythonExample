static struct snd_soc_card ln2440sbc;
static struct snd_soc_dai_link ln2440sbc_dai[] = ;
static struct snd_soc_card ln2440sbc = ;
static struct platform_device *ln2440sbc_snd_ac97_device;
static int __init ln2440sbc_init(void)
static void __exit ln2440sbc_exit(void)
module_init(ln2440sbc_init);
module_exit(ln2440sbc_exit);
MODULE_AUTHOR("Ivan Kuten");
MODULE_DESCRIPTION("ALSA SoC ALC650 LN2440SBC");
MODULE_LICENSE("GPL");
