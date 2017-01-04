#define PCM_BUFFER_MAX  0x8000
#define FRAGMENT_SIZE_MIN  (4*1024)
#define FRAGMENTS_MIN  2
#define FRAGMENTS_MAX  32
static void bf5xx_dma_irq(void *data)
static const struct snd_pcm_hardware bf5xx_pcm_hardware = ;
static int bf5xx_pcm_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params)
static int bf5xx_pcm_hw_free(struct snd_pcm_substream *substream)
static int bf5xx_pcm_prepare(struct snd_pcm_substream *substream)
static int bf5xx_pcm_trigger(struct snd_pcm_substream *substream, int cmd)
static snd_pcm_uframes_t bf5xx_pcm_pointer(struct snd_pcm_substream *substream)
static int bf5xx_pcm_open(struct snd_pcm_substream *substream)
static int bf5xx_pcm_copy(struct snd_pcm_substream *substream, int channel,
snd_pcm_uframes_t pos, void *buf, snd_pcm_uframes_t count)
static int bf5xx_pcm_silence(struct snd_pcm_substream *substream,
int channel, snd_pcm_uframes_t pos, snd_pcm_uframes_t count)
struct snd_pcm_ops bf5xx_pcm_tdm_ops = ;
static int bf5xx_pcm_preallocate_dma_buffer(struct snd_pcm *pcm, int stream)
static void bf5xx_pcm_free_dma_buffers(struct snd_pcm *pcm)
static u64 bf5xx_pcm_dmamask = DMA_BIT_MASK(32);
static int bf5xx_pcm_tdm_new(struct snd_card *card, struct snd_soc_dai *dai,
struct snd_pcm *pcm)
static struct snd_soc_platform_driver bf5xx_tdm_soc_platform = ;
static int __devinit bf5xx_soc_platform_probe(struct platform_device *pdev)
static int __devexit bf5xx_soc_platform_remove(struct platform_device *pdev)
static struct platform_driver bfin_tdm_driver = ;
static int __init snd_bfin_tdm_init(void)
module_init(snd_bfin_tdm_init);
static void __exit snd_bfin_tdm_exit(void)
module_exit(snd_bfin_tdm_exit);
MODULE_AUTHOR("Barry Song");
MODULE_DESCRIPTION("ADI Blackfin TDM PCM DMA module");
MODULE_LICENSE("GPL");
