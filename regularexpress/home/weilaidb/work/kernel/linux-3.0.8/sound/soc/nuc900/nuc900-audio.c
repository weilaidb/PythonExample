static struct snd_soc_dai_link nuc900evb_ac97_dai = ;
static struct snd_soc_card nuc900evb_audio_machine = ;
static struct platform_device *nuc900evb_asoc_dev;
static int __init nuc900evb_audio_init(void)
static void __exit nuc900evb_audio_exit(void)
module_init(nuc900evb_audio_init);
module_exit(nuc900evb_audio_exit);
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("NUC900 Series ASoC audio support");
MODULE_AUTHOR("Wan ZongShun");
