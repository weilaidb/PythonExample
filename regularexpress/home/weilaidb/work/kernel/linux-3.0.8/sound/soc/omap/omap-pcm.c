static const struct snd_pcm_hardware omap_pcm_hardware = ;
struct omap_runtime_data ;
static void omap_pcm_dma_irq(int ch, u16 stat, void *data)
static int omap_pcm_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params)
static int omap_pcm_hw_free(struct snd_pcm_substream *substream)
static int omap_pcm_prepare(struct snd_pcm_substream *substream)
static int omap_pcm_trigger(struct snd_pcm_substream *substream, int cmd)
static snd_pcm_uframes_t omap_pcm_pointer(struct snd_pcm_substream *substream)
static int omap_pcm_open(struct snd_pcm_substream *substream)
static int omap_pcm_close(struct snd_pcm_substream *substream)
static int omap_pcm_mmap(struct snd_pcm_substream *substream,
struct vm_area_struct *vma)
static struct snd_pcm_ops omap_pcm_ops = ;
static u64 omap_pcm_dmamask = DMA_BIT_MASK(64);
static int omap_pcm_preallocate_dma_buffer(struct snd_pcm *pcm,
int stream)
static void omap_pcm_free_dma_buffers(struct snd_pcm *pcm)
static int omap_pcm_new(struct snd_card *card, struct snd_soc_dai *dai,
struct snd_pcm *pcm)
static struct snd_soc_platform_driver omap_soc_platform = ;
static __devinit int omap_pcm_probe(struct platform_device *pdev)
static int __devexit omap_pcm_remove(struct platform_device *pdev)
static struct platform_driver omap_pcm_driver = ;
static int __init snd_omap_pcm_init(void)
module_init(snd_omap_pcm_init);
static void __exit snd_omap_pcm_exit(void)
module_exit(snd_omap_pcm_exit);
MODULE_AUTHOR("Jarkko Nikula <jhnikula@gmail.com>");
MODULE_DESCRIPTION("OMAP PCM DMA module");
MODULE_LICENSE("GPL");
