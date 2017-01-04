#define DRV_NAME "spdif-dit"
#define STUB_RATES	SNDRV_PCM_RATE_8000_96000
#define STUB_FORMATS	SNDRV_PCM_FMTBIT_S16_LE
static struct snd_soc_codec_driver soc_codec_spdif_dit;
static struct snd_soc_dai_driver dit_stub_dai = ;
static int spdif_dit_probe(struct platform_device *pdev)
static int spdif_dit_remove(struct platform_device *pdev)
static struct platform_driver spdif_dit_driver = ;
static int __init dit_modinit(void)
static void __exit dit_exit(void)
module_init(dit_modinit);
module_exit(dit_exit);
MODULE_AUTHOR("Steve Chen <schen@mvista.com>");
MODULE_DESCRIPTION("SPDIF dummy codec driver");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:" DRV_NAME);
