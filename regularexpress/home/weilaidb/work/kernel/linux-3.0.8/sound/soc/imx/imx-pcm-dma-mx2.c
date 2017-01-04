struct imx_pcm_runtime_data ;
static void audio_dma_irq(void *data)
static bool filter(struct dma_chan *chan, void *param)
static int imx_ssi_dma_alloc(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params)
static int snd_imx_pcm_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params)
static int snd_imx_pcm_hw_free(struct snd_pcm_substream *substream)
static int snd_imx_pcm_prepare(struct snd_pcm_substream *substream)
static int snd_imx_pcm_trigger(struct snd_pcm_substream *substream, int cmd)
static snd_pcm_uframes_t snd_imx_pcm_pointer(struct snd_pcm_substream *substream)
static struct snd_pcm_hardware snd_imx_hardware = ;
static int snd_imx_open(struct snd_pcm_substream *substream)
static int snd_imx_close(struct snd_pcm_substream *substream)
static struct snd_pcm_ops imx_pcm_ops = ;
static struct snd_soc_platform_driver imx_soc_platform_mx2 = ;
static int __devinit imx_soc_platform_probe(struct platform_device *pdev)
static int __devexit imx_soc_platform_remove(struct platform_device *pdev)
static struct platform_driver imx_pcm_driver = ;
static int __init snd_imx_pcm_init(void)
module_init(snd_imx_pcm_init);
static void __exit snd_imx_pcm_exit(void)
module_exit(snd_imx_pcm_exit);
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:imx-pcm-audio");
