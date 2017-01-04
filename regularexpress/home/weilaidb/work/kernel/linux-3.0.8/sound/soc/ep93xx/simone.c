static struct snd_soc_dai_link simone_dai = ;
static struct snd_soc_card snd_soc_simone = ;
static struct platform_device *simone_snd_ac97_device;
static struct platform_device *simone_snd_device;
static int __init simone_init(void)
module_init(simone_init);
static void __exit simone_exit(void)
module_exit(simone_exit);
MODULE_DESCRIPTION("ALSA SoC Simplemachines Sim.One");
MODULE_AUTHOR("Mika Westerberg <mika.westerberg@iki.fi>");
MODULE_LICENSE("GPL");
