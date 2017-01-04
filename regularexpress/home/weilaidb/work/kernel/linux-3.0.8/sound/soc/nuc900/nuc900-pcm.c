static const struct snd_pcm_hardware nuc900_pcm_hardware = ;
static int nuc900_dma_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params)
static void nuc900_update_dma_register(struct snd_pcm_substream *substream,
dma_addr_t dma_addr, size_t count)
static void nuc900_dma_start(struct snd_pcm_substream *substream)
static void nuc900_dma_stop(struct snd_pcm_substream *substream)
static irqreturn_t nuc900_dma_interrupt(int irq, void *dev_id)
static int nuc900_dma_hw_free(struct snd_pcm_substream *substream)
static int nuc900_dma_prepare(struct snd_pcm_substream *substream)
static int nuc900_dma_trigger(struct snd_pcm_substream *substream, int cmd)
int nuc900_dma_getposition(struct snd_pcm_substream *substream,
dma_addr_t *src, dma_addr_t *dst)
static snd_pcm_uframes_t nuc900_dma_pointer(struct snd_pcm_substream *substream)
static int nuc900_dma_open(struct snd_pcm_substream *substream)
static int nuc900_dma_close(struct snd_pcm_substream *substream)
static int nuc900_dma_mmap(struct snd_pcm_substream *substream,
struct vm_area_struct *vma)
static struct snd_pcm_ops nuc900_dma_ops = ;
static void nuc900_dma_free_dma_buffers(struct snd_pcm *pcm)
static u64 nuc900_pcm_dmamask = DMA_BIT_MASK(32);
static int nuc900_dma_new(struct snd_card *card,
struct snd_soc_dai *dai, struct snd_pcm *pcm)
static struct snd_soc_platform_driver nuc900_soc_platform = ;
static int __devinit nuc900_soc_platform_probe(struct platform_device *pdev)
static int __devexit nuc900_soc_platform_remove(struct platform_device *pdev)
static struct platform_driver nuc900_pcm_driver = ;
static int __init nuc900_pcm_init(void)
module_init(nuc900_pcm_init);
static void __exit nuc900_pcm_exit(void)
module_exit(nuc900_pcm_exit);
MODULE_AUTHOR("Wan ZongShun, <mcuos.com@gmail.com>");
MODULE_DESCRIPTION("nuc900 Audio DMA module");
MODULE_LICENSE("GPL");
