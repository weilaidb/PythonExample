static int bf5xx_tdm_set_dai_fmt(struct snd_soc_dai *cpu_dai,
unsigned int fmt)
static int bf5xx_tdm_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params,
struct snd_soc_dai *dai)
static void bf5xx_tdm_shutdown(struct snd_pcm_substream *substream,
struct snd_soc_dai *dai)
static int bf5xx_tdm_set_channel_map(struct snd_soc_dai *dai,
unsigned int tx_num, unsigned int *tx_slot,
unsigned int rx_num, unsigned int *rx_slot)
static int bf5xx_tdm_suspend(struct snd_soc_dai *dai)
static int bf5xx_tdm_resume(struct snd_soc_dai *dai)
#define bf5xx_tdm_suspend      NULL
#define bf5xx_tdm_resume       NULL
static struct snd_soc_dai_ops bf5xx_tdm_dai_ops = ;
static struct snd_soc_dai_driver bf5xx_tdm_dai = ;
static int __devinit bfin_tdm_probe(struct platform_device *pdev)
static int __devexit bfin_tdm_remove(struct platform_device *pdev)
static struct platform_driver bfin_tdm_driver = ;
static int __init bfin_tdm_init(void)
module_init(bfin_tdm_init);
static void __exit bfin_tdm_exit(void)
module_exit(bfin_tdm_exit);
MODULE_AUTHOR("Barry Song");
MODULE_DESCRIPTION("TDM driver for ADI Blackfin");
MODULE_LICENSE("GPL");
