static struct snd_soc_dai_link txx9aclc_generic_dai = ;
static struct snd_soc_card txx9aclc_generic_card = ;
static struct platform_device *soc_pdev;
static int __init txx9aclc_generic_probe(struct platform_device *pdev)
static int __exit txx9aclc_generic_remove(struct platform_device *pdev)
static struct platform_driver txx9aclc_generic_driver = ;
static int __init txx9aclc_generic_init(void)
static void __exit txx9aclc_generic_exit(void)
module_init(txx9aclc_generic_init);
module_exit(txx9aclc_generic_exit);
MODULE_AUTHOR("Atsushi Nemoto <anemo@mba.ocn.ne.jp>");
MODULE_DESCRIPTION("Generic TXx9 ACLC ALSA SoC audio driver");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:txx9aclc-generic");
