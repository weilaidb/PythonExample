#define MOD_REG_BIT(val, mask, set) do  while (0)
struct davinci_vcif_dev ;
static void davinci_vcif_start(struct snd_pcm_substream *substream)
static void davinci_vcif_stop(struct snd_pcm_substream *substream)
static int davinci_vcif_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params,
struct snd_soc_dai *dai)
static int davinci_vcif_trigger(struct snd_pcm_substream *substream, int cmd,
struct snd_soc_dai *dai)
static int davinci_vcif_startup(struct snd_pcm_substream *substream,
struct snd_soc_dai *dai)
#define DAVINCI_VCIF_RATES	SNDRV_PCM_RATE_8000_48000
static struct snd_soc_dai_ops davinci_vcif_dai_ops = ;
static struct snd_soc_dai_driver davinci_vcif_dai = ;
static int davinci_vcif_probe(struct platform_device *pdev)
static int davinci_vcif_remove(struct platform_device *pdev)
static struct platform_driver davinci_vcif_driver = ;
static int __init davinci_vcif_init(void)
module_init(davinci_vcif_init);
static void __exit davinci_vcif_exit(void)
module_exit(davinci_vcif_exit);
MODULE_AUTHOR("Miguel Aguilar");
MODULE_DESCRIPTION("Texas Instruments DaVinci ASoC Voice Codec Interface");
MODULE_LICENSE("GPL");
