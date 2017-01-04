static int openrd_client_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params)
static struct snd_soc_ops openrd_client_ops = ;
static struct snd_soc_dai_link openrd_client_dai[] = ;
static struct snd_soc_card openrd_client = ;
static struct platform_device *openrd_client_snd_device;
static int __init openrd_client_init(void)
static void __exit openrd_client_exit(void)
module_init(openrd_client_init);
module_exit(openrd_client_exit);
MODULE_AUTHOR("Arnaud Patard <arnaud.patard@rtp-net.org>");
MODULE_DESCRIPTION("ALSA SoC OpenRD Client");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:soc-audio");
