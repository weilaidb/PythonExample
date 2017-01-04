struct fsi_ak4642_data ;
static int fsi_ak4642_dai_init(struct snd_soc_pcm_runtime *rtd)
static struct snd_soc_dai_link fsi_dai_link = ;
static struct snd_soc_card fsi_soc_card  = ;
static struct platform_device *fsi_snd_device;
static int fsi_ak4642_probe(struct platform_device *pdev)
static int fsi_ak4642_remove(struct platform_device *pdev)
static struct fsi_ak4642_data fsi_a_ak4642 = ;
static struct fsi_ak4642_data fsi_b_ak4642 = ;
static struct fsi_ak4642_data fsi_a_ak4643 = ;
static struct fsi_ak4642_data fsi_b_ak4643 = ;
static struct fsi_ak4642_data fsi2_a_ak4642 = ;
static struct fsi_ak4642_data fsi2_b_ak4642 = ;
static struct fsi_ak4642_data fsi2_a_ak4643 = ;
static struct fsi_ak4642_data fsi2_b_ak4643 = ;
static struct platform_device_id fsi_id_table[] = ;
static struct platform_driver fsi_ak4642 = ;
static int __init fsi_ak4642_init(void)
static void __exit fsi_ak4642_exit(void)
module_init(fsi_ak4642_init);
module_exit(fsi_ak4642_exit);
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Generic SH4 FSI-AK4642 sound card");
MODULE_AUTHOR("Kuninori Morimoto <morimoto.kuninori@renesas.com>");
