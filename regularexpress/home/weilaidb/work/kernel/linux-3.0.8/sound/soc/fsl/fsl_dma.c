#define FSLDMA_PCM_FORMATS (SNDRV_PCM_FMTBIT_S8 	| \
SNDRV_PCM_FMTBIT_U8 	| \
SNDRV_PCM_FMTBIT_S16_LE     | \
SNDRV_PCM_FMTBIT_S16_BE     | \
SNDRV_PCM_FMTBIT_U16_LE     | \
SNDRV_PCM_FMTBIT_U16_BE     | \
SNDRV_PCM_FMTBIT_S24_LE     | \
SNDRV_PCM_FMTBIT_S24_BE     | \
SNDRV_PCM_FMTBIT_U24_LE     | \
SNDRV_PCM_FMTBIT_U24_BE     | \
SNDRV_PCM_FMTBIT_S32_LE     | \
SNDRV_PCM_FMTBIT_S32_BE     | \
SNDRV_PCM_FMTBIT_U32_LE     | \
SNDRV_PCM_FMTBIT_U32_BE)
#define FSLDMA_PCM_RATES (SNDRV_PCM_RATE_5512 | SNDRV_PCM_RATE_8000_192000 | \
SNDRV_PCM_RATE_CONTINUOUS)
struct dma_object ;
#define NUM_DMA_LINKS   2
struct fsl_dma_private ;
static const struct snd_pcm_hardware fsl_dma_hardware = ;
static void fsl_dma_abort_stream(struct snd_pcm_substream *substream)
static void fsl_dma_update_pointers(struct fsl_dma_private *dma_private)
static irqreturn_t fsl_dma_isr(int irq, void *dev_id)
static int fsl_dma_new(struct snd_card *card, struct snd_soc_dai *dai,
struct snd_pcm *pcm)
static int fsl_dma_open(struct snd_pcm_substream *substream)
static int fsl_dma_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *hw_params)
static snd_pcm_uframes_t fsl_dma_pointer(struct snd_pcm_substream *substream)
static int fsl_dma_hw_free(struct snd_pcm_substream *substream)
static int fsl_dma_close(struct snd_pcm_substream *substream)
static void fsl_dma_free_dma_buffers(struct snd_pcm *pcm)
static struct device_node *find_ssi_node(struct device_node *dma_channel_np)
static struct snd_pcm_ops fsl_dma_ops = ;
static int __devinit fsl_soc_dma_probe(struct platform_device *pdev)
static int __devexit fsl_soc_dma_remove(struct platform_device *pdev)
static const struct of_device_id fsl_soc_dma_ids[] = ;
MODULE_DEVICE_TABLE(of, fsl_soc_dma_ids);
static struct platform_driver fsl_soc_dma_driver = ;
static int __init fsl_soc_dma_init(void)
static void __exit fsl_soc_dma_exit(void)
module_init(fsl_soc_dma_init);
module_exit(fsl_soc_dma_exit);
MODULE_AUTHOR("Timur Tabi <timur@freescale.com>");
MODULE_DESCRIPTION("Freescale Elo DMA ASoC PCM Driver");
MODULE_LICENSE("GPL v2");
