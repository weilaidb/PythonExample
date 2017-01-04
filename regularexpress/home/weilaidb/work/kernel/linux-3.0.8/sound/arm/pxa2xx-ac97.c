static void pxa2xx_ac97_reset(struct snd_ac97 *ac97)
static struct snd_ac97_bus_ops pxa2xx_ac97_ops = ;
static struct pxa2xx_pcm_dma_params pxa2xx_ac97_pcm_out = ;
static struct pxa2xx_pcm_dma_params pxa2xx_ac97_pcm_in = ;
static struct snd_pcm *pxa2xx_ac97_pcm;
static struct snd_ac97 *pxa2xx_ac97_ac97;
static int pxa2xx_ac97_pcm_startup(struct snd_pcm_substream *substream)
static void pxa2xx_ac97_pcm_shutdown(struct snd_pcm_substream *substream)
static int pxa2xx_ac97_pcm_prepare(struct snd_pcm_substream *substream)
static struct pxa2xx_pcm_client pxa2xx_ac97_pcm_client = ;
static int pxa2xx_ac97_do_suspend(struct snd_card *card, pm_message_t state)
static int pxa2xx_ac97_do_resume(struct snd_card *card)
static int pxa2xx_ac97_suspend(struct device *dev)
static int pxa2xx_ac97_resume(struct device *dev)
static const struct dev_pm_ops pxa2xx_ac97_pm_ops = ;
static int __devinit pxa2xx_ac97_probe(struct platform_device *dev)
static int __devexit pxa2xx_ac97_remove(struct platform_device *dev)
static struct platform_driver pxa2xx_ac97_driver = ;
static int __init pxa2xx_ac97_init(void)
static void __exit pxa2xx_ac97_exit(void)
module_init(pxa2xx_ac97_init);
module_exit(pxa2xx_ac97_exit);
MODULE_AUTHOR("Nicolas Pitre");
MODULE_DESCRIPTION("AC97 driver for the Intel PXA2xx chip");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:pxa2xx-ac97");
