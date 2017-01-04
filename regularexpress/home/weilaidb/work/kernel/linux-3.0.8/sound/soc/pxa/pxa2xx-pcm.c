static int pxa2xx_pcm_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params)
static int pxa2xx_pcm_hw_free(struct snd_pcm_substream *substream)
static struct snd_pcm_ops pxa2xx_pcm_ops = ;
static u64 pxa2xx_pcm_dmamask = DMA_BIT_MASK(32);
static int pxa2xx_soc_pcm_new(struct snd_card *card, struct snd_soc_dai *dai,
struct snd_pcm *pcm)
static struct snd_soc_platform_driver pxa2xx_soc_platform = ;
static int __devinit pxa2xx_soc_platform_probe(struct platform_device *pdev)
static int __devexit pxa2xx_soc_platform_remove(struct platform_device *pdev)
static struct platform_driver pxa_pcm_driver = ;
static int __init snd_pxa_pcm_init(void)
module_init(snd_pxa_pcm_init);
static void __exit snd_pxa_pcm_exit(void)
module_exit(snd_pxa_pcm_exit);
MODULE_AUTHOR("Nicolas Pitre");
MODULE_DESCRIPTION("Intel PXA2xx PCM DMA module");
MODULE_LICENSE("GPL");
