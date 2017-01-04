struct fsi_hdmi_data ;
static int fsi_hdmi_dai_init(struct snd_soc_pcm_runtime *rtd)
static struct snd_soc_dai_link fsi_dai_link = ;
static struct snd_soc_card fsi_soc_card  = ;
static struct platform_device *fsi_snd_device;
static int fsi_hdmi_probe(struct platform_device *pdev)
static int fsi_hdmi_remove(struct platform_device *pdev)
static struct fsi_hdmi_data fsi2_a_hdmi = ;
static struct fsi_hdmi_data fsi2_b_hdmi = ;
static struct platform_device_id fsi_id_table[] = ;
static struct platform_driver fsi_hdmi = ;
static int __init fsi_hdmi_init(void)
static void __exit fsi_hdmi_exit(void)
module_init(fsi_hdmi_init);
module_exit(fsi_hdmi_exit);
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Generic SH4 FSI-HDMI sound card");
MODULE_AUTHOR("Kuninori Morimoto <kuninori.morimoto.gx@renesas.com>");
