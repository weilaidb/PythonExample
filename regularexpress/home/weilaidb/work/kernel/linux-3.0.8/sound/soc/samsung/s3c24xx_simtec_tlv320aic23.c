static const struct snd_soc_dapm_widget dapm_widgets[] = ;
static const struct snd_soc_dapm_route base_map[] = ;
static int simtec_tlv320aic23_init(struct snd_soc_pcm_runtime *rtd)
static struct snd_soc_dai_link simtec_dai_aic23 = ;
static struct snd_soc_card snd_soc_machine_simtec_aic23 = ;
static int __devinit simtec_audio_tlv320aic23_probe(struct platform_device *pd)
static struct platform_driver simtec_audio_tlv320aic23_platdrv = ;
MODULE_ALIAS("platform:s3c24xx-simtec-tlv320aic23");
static int __init simtec_tlv320aic23_modinit(void)
static void __exit simtec_tlv320aic23_modexit(void)
module_init(simtec_tlv320aic23_modinit);
module_exit(simtec_tlv320aic23_modexit);
MODULE_AUTHOR("Ben Dooks <ben@simtec.co.uk>");
MODULE_DESCRIPTION("ALSA SoC Simtec Audio support");
MODULE_LICENSE("GPL");
