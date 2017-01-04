static void pxa2xx_ac97_warm_reset(struct snd_ac97 *ac97)
static void pxa2xx_ac97_cold_reset(struct snd_ac97 *ac97)
struct snd_ac97_bus_ops soc_ac97_ops = ;
static struct pxa2xx_pcm_dma_params pxa2xx_ac97_pcm_stereo_out = ;
static struct pxa2xx_pcm_dma_params pxa2xx_ac97_pcm_stereo_in = ;
static struct pxa2xx_pcm_dma_params pxa2xx_ac97_pcm_aux_mono_out = ;
static struct pxa2xx_pcm_dma_params pxa2xx_ac97_pcm_aux_mono_in = ;
static struct pxa2xx_pcm_dma_params pxa2xx_ac97_pcm_mic_mono_in = ;
static int pxa2xx_ac97_suspend(struct snd_soc_dai *dai)
static int pxa2xx_ac97_resume(struct snd_soc_dai *dai)
#define pxa2xx_ac97_suspend	NULL
#define pxa2xx_ac97_resume	NULL
static int pxa2xx_ac97_probe(struct snd_soc_dai *dai)
static int pxa2xx_ac97_remove(struct snd_soc_dai *dai)
static int pxa2xx_ac97_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params,
struct snd_soc_dai *cpu_dai)
static int pxa2xx_ac97_hw_aux_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params,
struct snd_soc_dai *cpu_dai)
static int pxa2xx_ac97_hw_mic_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params,
struct snd_soc_dai *cpu_dai)
#define PXA2XX_AC97_RATES (SNDRV_PCM_RATE_8000 | SNDRV_PCM_RATE_11025 |\
SNDRV_PCM_RATE_16000 | SNDRV_PCM_RATE_22050 | SNDRV_PCM_RATE_44100 | \
SNDRV_PCM_RATE_48000)
static struct snd_soc_dai_ops pxa_ac97_hifi_dai_ops = ;
static struct snd_soc_dai_ops pxa_ac97_aux_dai_ops = ;
static struct snd_soc_dai_ops pxa_ac97_mic_dai_ops = ;
static struct snd_soc_dai_driver pxa_ac97_dai[] = ;
EXPORT_SYMBOL_GPL(soc_ac97_ops);
static __devinit int pxa2xx_ac97_dev_probe(struct platform_device *pdev)
static int __devexit pxa2xx_ac97_dev_remove(struct platform_device *pdev)
static struct platform_driver pxa2xx_ac97_driver = ;
static int __init pxa_ac97_init(void)
module_init(pxa_ac97_init);
static void __exit pxa_ac97_exit(void)
module_exit(pxa_ac97_exit);
MODULE_AUTHOR("Nicolas Pitre");
MODULE_DESCRIPTION("AC97 driver for the Intel PXA2xx chip");
MODULE_LICENSE("GPL");
