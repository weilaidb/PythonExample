#define S6_PCM_PREALLOCATE_SIZE (96 * 1024)
#define S6_PCM_PREALLOCATE_MAX  (2048 * 1024)
static struct snd_pcm_hardware s6000_pcm_hardware = ;
struct s6000_runtime_data ;
static void s6000_pcm_enqueue_dma(struct snd_pcm_substream *substream)
static irqreturn_t s6000_pcm_irq(int irq, void *data)
static int s6000_pcm_start(struct snd_pcm_substream *substream)
static int s6000_pcm_stop(struct snd_pcm_substream *substream)
static int s6000_pcm_trigger(struct snd_pcm_substream *substream, int cmd)
static int s6000_pcm_prepare(struct snd_pcm_substream *substream)
static snd_pcm_uframes_t s6000_pcm_pointer(struct snd_pcm_substream *substream)
static int s6000_pcm_open(struct snd_pcm_substream *substream)
static int s6000_pcm_close(struct snd_pcm_substream *substream)
static int s6000_pcm_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *hw_params)
static int s6000_pcm_hw_free(struct snd_pcm_substream *substream)
static struct snd_pcm_ops s6000_pcm_ops = ;
static void s6000_pcm_free(struct snd_pcm *pcm)
static u64 s6000_pcm_dmamask = DMA_BIT_MASK(32);
static int s6000_pcm_new(struct snd_card *card,
struct snd_soc_dai *dai, struct snd_pcm *pcm)
static struct snd_soc_platform_driver s6000_soc_platform = ;
static int __devinit s6000_soc_platform_probe(struct platform_device *pdev)
static int __devexit s6000_soc_platform_remove(struct platform_device *pdev)
static struct platform_driver s6000_pcm_driver = ;
static int __init snd_s6000_pcm_init(void)
module_init(snd_s6000_pcm_init);
static void __exit snd_s6000_pcm_exit(void)
module_exit(snd_s6000_pcm_exit);
MODULE_AUTHOR("Daniel Gloeckner");
MODULE_DESCRIPTION("Stretch s6000 family PCM DMA module");
MODULE_LICENSE("GPL");
