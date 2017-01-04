static int fsi_da7210_init(struct snd_soc_pcm_runtime *rtd)
static struct snd_soc_dai_link fsi_da7210_dai = ;
static struct snd_soc_card fsi_soc_card = ;
static struct platform_device *fsi_da7210_snd_device;
static int __init fsi_da7210_sound_init(void)
static void __exit fsi_da7210_sound_exit(void)
module_init(fsi_da7210_sound_init);
module_exit(fsi_da7210_sound_exit);
MODULE_DESCRIPTION("ALSA SoC FSI DA2710");
MODULE_AUTHOR("Kuninori Morimoto <morimoto.kuninori@renesas.com>");
MODULE_LICENSE("GPL");
