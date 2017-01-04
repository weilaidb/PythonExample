static void print_buf_info(int slot, char *name)
static void print_buf_info(int slot, char *name)
static struct snd_pcm_hardware pcm_hardware_playback = ;
static struct snd_pcm_hardware pcm_hardware_capture = ;
struct davinci_runtime_data ;
static void davinci_pcm_enqueue_dma(struct snd_pcm_substream *substream)
static void davinci_pcm_dma_irq(unsigned link, u16 ch_status, void *data)
static int allocate_sram(struct snd_pcm_substream *substream, unsigned size,
struct snd_pcm_hardware *ppcm)
static int ping_pong_dma_setup(struct snd_pcm_substream *substream)
static int request_ping_pong(struct snd_pcm_substream *substream,
struct davinci_runtime_data *prtd,
struct snd_dma_buffer *iram_dma)
static int davinci_pcm_dma_request(struct snd_pcm_substream *substream)
static int davinci_pcm_trigger(struct snd_pcm_substream *substream, int cmd)
static int davinci_pcm_prepare(struct snd_pcm_substream *substream)
static snd_pcm_uframes_t
davinci_pcm_pointer(struct snd_pcm_substream *substream)
static int davinci_pcm_open(struct snd_pcm_substream *substream)
static int davinci_pcm_close(struct snd_pcm_substream *substream)
static int davinci_pcm_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *hw_params)
static int davinci_pcm_hw_free(struct snd_pcm_substream *substream)
static int davinci_pcm_mmap(struct snd_pcm_substream *substream,
struct vm_area_struct *vma)
static struct snd_pcm_ops davinci_pcm_ops = ;
static int davinci_pcm_preallocate_dma_buffer(struct snd_pcm *pcm, int stream,
size_t size)
static void davinci_pcm_free(struct snd_pcm *pcm)
static u64 davinci_pcm_dmamask = 0xffffffff;
static int davinci_pcm_new(struct snd_card *card,
struct snd_soc_dai *dai, struct snd_pcm *pcm)
static struct snd_soc_platform_driver davinci_soc_platform = ;
static int __devinit davinci_soc_platform_probe(struct platform_device *pdev)
static int __devexit davinci_soc_platform_remove(struct platform_device *pdev)
static struct platform_driver davinci_pcm_driver = ;
static int __init snd_davinci_pcm_init(void)
module_init(snd_davinci_pcm_init);
static void __exit snd_davinci_pcm_exit(void)
module_exit(snd_davinci_pcm_exit);
MODULE_AUTHOR("Vladimir Barinov");
MODULE_DESCRIPTION("TI DAVINCI PCM DMA module");
MODULE_LICENSE("GPL");
