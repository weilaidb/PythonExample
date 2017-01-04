#define KIRKWOOD_RATES \
(SNDRV_PCM_RATE_44100 | \
SNDRV_PCM_RATE_48000 | SNDRV_PCM_RATE_96000)
#define KIRKWOOD_FORMATS \
(SNDRV_PCM_FMTBIT_S16_LE | \
SNDRV_PCM_FMTBIT_S24_LE | \
SNDRV_PCM_FMTBIT_S32_LE)
struct kirkwood_dma_priv ;
static struct snd_pcm_hardware kirkwood_dma_snd_hw = ;
static u64 kirkwood_dma_dmamask = 0xFFFFFFFFUL;
static irqreturn_t kirkwood_dma_irq(int irq, void *dev_id)
static void kirkwood_dma_conf_mbus_windows(void __iomem *base, int win,
unsigned long dma,
struct mbus_dram_target_info *dram)
static int kirkwood_dma_open(struct snd_pcm_substream *substream)
static int kirkwood_dma_close(struct snd_pcm_substream *substream)
static int kirkwood_dma_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params)
static int kirkwood_dma_hw_free(struct snd_pcm_substream *substream)
static int kirkwood_dma_prepare(struct snd_pcm_substream *substream)
static snd_pcm_uframes_t kirkwood_dma_pointer(struct snd_pcm_substream
*substream)
struct snd_pcm_ops kirkwood_dma_ops = ;
static int kirkwood_dma_preallocate_dma_buffer(struct snd_pcm *pcm,
int stream)
static int kirkwood_dma_new(struct snd_card *card,
struct snd_soc_dai *dai, struct snd_pcm *pcm)
static void kirkwood_dma_free_dma_buffers(struct snd_pcm *pcm)
static struct snd_soc_platform_driver kirkwood_soc_platform = ;
static int __devinit kirkwood_soc_platform_probe(struct platform_device *pdev)
static int __devexit kirkwood_soc_platform_remove(struct platform_device *pdev)
static struct platform_driver kirkwood_pcm_driver = ;
static int __init kirkwood_pcm_init(void)
module_init(kirkwood_pcm_init);
static void __exit kirkwood_pcm_exit(void)
module_exit(kirkwood_pcm_exit);
MODULE_AUTHOR("Arnaud Patard <arnaud.patard@rtp-net.org>");
MODULE_DESCRIPTION("Marvell Kirkwood Audio DMA module");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:kirkwood-pcm-audio");
