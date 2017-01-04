static const struct snd_soc_dapm_widget dapm_widgets[] = ;
static const struct snd_soc_dapm_route base_map[] = ;
static int simtec_hermes_init(struct snd_soc_pcm_runtime *rtd)
static struct snd_soc_dai_link simtec_dai_aic33 = ;
static struct snd_soc_card snd_soc_machine_simtec_aic33 = ;
static int __devinit simtec_audio_hermes_probe(struct platform_device *pd)
static struct platform_driver simtec_audio_hermes_platdrv = ;
MODULE_ALIAS("platform:s3c24xx-simtec-hermes-snd");
static int __init simtec_hermes_modinit(void)
static void __exit simtec_hermes_modexit(void)
module_init(simtec_hermes_modinit);
module_exit(simtec_hermes_modexit);
MODULE_AUTHOR("Ben Dooks <ben@simtec.co.uk>");
MODULE_DESCRIPTION("ALSA SoC Simtec Audio support");
MODULE_LICENSE("GPL");
