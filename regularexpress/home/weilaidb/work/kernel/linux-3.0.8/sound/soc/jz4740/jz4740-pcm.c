struct jz4740_runtime_data ;
static const struct snd_pcm_hardware jz4740_pcm_hardware = ;
static void jz4740_pcm_start_transfer(struct jz4740_runtime_data *prtd,
struct snd_pcm_substream *substream)
static void jz4740_pcm_dma_transfer_done(struct jz4740_dma_chan *dma, int err,
void *dev_id)
static int jz4740_pcm_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params)
static int jz4740_pcm_hw_free(struct snd_pcm_substream *substream)
static int jz4740_pcm_prepare(struct snd_pcm_substream *substream)
static int jz4740_pcm_trigger(struct snd_pcm_substream *substream, int cmd)
static snd_pcm_uframes_t jz4740_pcm_pointer(struct snd_pcm_substream *substream)
static int jz4740_pcm_open(struct snd_pcm_substream *substream)
static int jz4740_pcm_close(struct snd_pcm_substream *substream)
static int jz4740_pcm_mmap(struct snd_pcm_substream *substream,
struct vm_area_struct *vma)
static struct snd_pcm_ops jz4740_pcm_ops = ;
static int jz4740_pcm_preallocate_dma_buffer(struct snd_pcm *pcm, int stream)
static void jz4740_pcm_free(struct snd_pcm *pcm)
static u64 jz4740_pcm_dmamask = DMA_BIT_MASK(32);
int jz4740_pcm_new(struct snd_card *card, struct snd_soc_dai *dai,
struct snd_pcm *pcm)
static struct snd_soc_platform_driver jz4740_soc_platform = ;
static int __devinit jz4740_pcm_probe(struct platform_device *pdev)
static int __devexit jz4740_pcm_remove(struct platform_device *pdev)
static struct platform_driver jz4740_pcm_driver = ;
static int __init jz4740_soc_platform_init(void)
module_init(jz4740_soc_platform_init);
static void __exit jz4740_soc_platform_exit(void)
module_exit(jz4740_soc_platform_exit);
MODULE_AUTHOR("Lars-Peter Clausen <lars@metafoo.de>");
MODULE_DESCRIPTION("Ingenic SoC JZ4740 PCM driver");
MODULE_LICENSE("GPL");
