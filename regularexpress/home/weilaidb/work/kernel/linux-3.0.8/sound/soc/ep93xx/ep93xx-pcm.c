static const struct snd_pcm_hardware ep93xx_pcm_hardware = ;
struct ep93xx_runtime_data
;
static void ep93xx_pcm_period_elapsed(unsigned long data)
static void ep93xx_pcm_buffer_started(void *cookie,
struct ep93xx_dma_buffer *buf)
static void ep93xx_pcm_buffer_finished(void *cookie,
struct ep93xx_dma_buffer *buf,
int bytes, int error)
static int ep93xx_pcm_open(struct snd_pcm_substream *substream)
static int ep93xx_pcm_close(struct snd_pcm_substream *substream)
static int ep93xx_pcm_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params)
static int ep93xx_pcm_hw_free(struct snd_pcm_substream *substream)
static int ep93xx_pcm_trigger(struct snd_pcm_substream *substream, int cmd)
static snd_pcm_uframes_t ep93xx_pcm_pointer(struct snd_pcm_substream *substream)
static int ep93xx_pcm_mmap(struct snd_pcm_substream *substream,
struct vm_area_struct *vma)
static struct snd_pcm_ops ep93xx_pcm_ops = ;
static int ep93xx_pcm_preallocate_dma_buffer(struct snd_pcm *pcm, int stream)
static void ep93xx_pcm_free_dma_buffers(struct snd_pcm *pcm)
static u64 ep93xx_pcm_dmamask = 0xffffffff;
static int ep93xx_pcm_new(struct snd_card *card, struct snd_soc_dai *dai,
struct snd_pcm *pcm)
static struct snd_soc_platform_driver ep93xx_soc_platform = ;
static int __devinit ep93xx_soc_platform_probe(struct platform_device *pdev)
static int __devexit ep93xx_soc_platform_remove(struct platform_device *pdev)
static struct platform_driver ep93xx_pcm_driver = ;
static int __init ep93xx_soc_platform_init(void)
static void __exit ep93xx_soc_platform_exit(void)
module_init(ep93xx_soc_platform_init);
module_exit(ep93xx_soc_platform_exit);
MODULE_AUTHOR("Ryan Mallon <ryan@bluewatersys.com>");
MODULE_DESCRIPTION("EP93xx ALSA PCM interface");
MODULE_LICENSE("GPL");
