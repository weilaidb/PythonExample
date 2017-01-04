#define ST_RUNNING		(1<<0)
#define ST_OPENED		(1<<1)
static const struct snd_pcm_hardware dma_hardware = ;
struct runtime_data ;
static void dma_enqueue(struct snd_pcm_substream *substream)
static void audio_buffdone(struct s3c2410_dma_chan *channel,
void *dev_id, int size,
enum s3c2410_dma_buffresult result)
static int dma_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params)
static int dma_hw_free(struct snd_pcm_substream *substream)
static int dma_prepare(struct snd_pcm_substream *substream)
static int dma_trigger(struct snd_pcm_substream *substream, int cmd)
static snd_pcm_uframes_t
dma_pointer(struct snd_pcm_substream *substream)
static int dma_open(struct snd_pcm_substream *substream)
static int dma_close(struct snd_pcm_substream *substream)
static int dma_mmap(struct snd_pcm_substream *substream,
struct vm_area_struct *vma)
static struct snd_pcm_ops dma_ops = ;
static int preallocate_dma_buffer(struct snd_pcm *pcm, int stream)
static void dma_free_dma_buffers(struct snd_pcm *pcm)
static u64 dma_mask = DMA_BIT_MASK(32);
static int dma_new(struct snd_card *card,
struct snd_soc_dai *dai, struct snd_pcm *pcm)
static struct snd_soc_platform_driver samsung_asoc_platform = ;
static int __devinit samsung_asoc_platform_probe(struct platform_device *pdev)
static int __devexit samsung_asoc_platform_remove(struct platform_device *pdev)
static struct platform_driver asoc_dma_driver = ;
static int __init samsung_asoc_init(void)
module_init(samsung_asoc_init);
static void __exit samsung_asoc_exit(void)
module_exit(samsung_asoc_exit);
MODULE_AUTHOR("Ben Dooks, <ben@simtec.co.uk>");
MODULE_DESCRIPTION("Samsung ASoC DMA Driver");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:samsung-audio");
