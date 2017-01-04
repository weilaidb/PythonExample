struct omap_mcpdm_data ;
static struct omap_mcpdm_link omap_mcpdm_links[] = ;
static struct omap_mcpdm_data mcpdm_data = ;
static struct omap_pcm_dma_data omap_mcpdm_dai_dma_params[] = ;
static int omap_mcpdm_dai_startup(struct snd_pcm_substream *substream,
struct snd_soc_dai *dai)
static void omap_mcpdm_dai_shutdown(struct snd_pcm_substream *substream,
struct snd_soc_dai *dai)
static int omap_mcpdm_dai_trigger(struct snd_pcm_substream *substream, int cmd,
struct snd_soc_dai *dai)
static int omap_mcpdm_dai_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params,
struct snd_soc_dai *dai)
static int omap_mcpdm_dai_hw_free(struct snd_pcm_substream *substream,
struct snd_soc_dai *dai)
static struct snd_soc_dai_ops omap_mcpdm_dai_ops = ;
#define OMAP_MCPDM_RATES	(SNDRV_PCM_RATE_88200 | SNDRV_PCM_RATE_96000)
#define OMAP_MCPDM_FORMATS	(SNDRV_PCM_FMTBIT_S32_LE)
static int omap_mcpdm_dai_probe(struct snd_soc_dai *dai)
static struct snd_soc_dai_driver omap_mcpdm_dai = ;
static __devinit int asoc_mcpdm_probe(struct platform_device *pdev)
static int __devexit asoc_mcpdm_remove(struct platform_device *pdev)
static struct platform_driver asoc_mcpdm_driver = ;
static int __init snd_omap_mcpdm_init(void)
module_init(snd_omap_mcpdm_init);
static void __exit snd_omap_mcpdm_exit(void)
module_exit(snd_omap_mcpdm_exit);
MODULE_AUTHOR("Misael Lopez Cruz <x0052729@ti.com>");
MODULE_DESCRIPTION("OMAP PDM SoC Interface");
MODULE_LICENSE("GPL");
