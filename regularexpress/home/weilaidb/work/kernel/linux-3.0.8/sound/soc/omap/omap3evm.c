static int omap3evm_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params)
static struct snd_soc_ops omap3evm_ops = ;
static struct snd_soc_dai_link omap3evm_dai = ;
static struct snd_soc_card snd_soc_omap3evm = ;
static struct platform_device *omap3evm_snd_device;
static int __init omap3evm_soc_init(void)
static void __exit omap3evm_soc_exit(void)
module_init(omap3evm_soc_init);
module_exit(omap3evm_soc_exit);
MODULE_AUTHOR("Anuj Aggarwal <anuj.aggarwal@ti.com>");
MODULE_DESCRIPTION("ALSA SoC OMAP3 EVM");
MODULE_LICENSE("GPL v2");
