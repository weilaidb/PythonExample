static int igep2_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params)
static struct snd_soc_ops igep2_ops = ;
static struct snd_soc_dai_link igep2_dai = ;
static struct snd_soc_card snd_soc_card_igep2 = ;
static struct platform_device *igep2_snd_device;
static int __init igep2_soc_init(void)
module_init(igep2_soc_init);
static void __exit igep2_soc_exit(void)
module_exit(igep2_soc_exit);
MODULE_AUTHOR("Enric Balletbo i Serra <eballetbo@iseebcn.com>");
MODULE_DESCRIPTION("ALSA SoC IGEP v2");
MODULE_LICENSE("GPL");
