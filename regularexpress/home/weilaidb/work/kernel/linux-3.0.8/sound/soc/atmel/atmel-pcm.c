static const struct snd_pcm_hardware atmel_pcm_hardware = ;
struct atmel_runtime_data ;
static int atmel_pcm_preallocate_dma_buffer(struct snd_pcm *pcm,
int stream)
static void atmel_pcm_dma_irq(u32 ssc_sr,
struct snd_pcm_substream *substream)
static int atmel_pcm_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params)
static int atmel_pcm_hw_free(struct snd_pcm_substream *substream)
static int atmel_pcm_prepare(struct snd_pcm_substream *substream)
static int atmel_pcm_trigger(struct snd_pcm_substream *substream,
int cmd)
static snd_pcm_uframes_t atmel_pcm_pointer(
struct snd_pcm_substream *substream)
static int atmel_pcm_open(struct snd_pcm_substream *substream)
static int atmel_pcm_close(struct snd_pcm_substream *substream)
static int atmel_pcm_mmap(struct snd_pcm_substream *substream,
struct vm_area_struct *vma)
static struct snd_pcm_ops atmel_pcm_ops = ;
static u64 atmel_pcm_dmamask = 0xffffffff;
static int atmel_pcm_new(struct snd_card *card,
struct snd_soc_dai *dai, struct snd_pcm *pcm)
static void atmel_pcm_free_dma_buffers(struct snd_pcm *pcm)
static int atmel_pcm_suspend(struct snd_soc_dai *dai)
static int atmel_pcm_resume(struct snd_soc_dai *dai)
#define atmel_pcm_suspend	NULL
#define atmel_pcm_resume	NULL
static struct snd_soc_platform_driver atmel_soc_platform = ;
static int __devinit atmel_soc_platform_probe(struct platform_device *pdev)
static int __devexit atmel_soc_platform_remove(struct platform_device *pdev)
static struct platform_driver atmel_pcm_driver = ;
static int __init snd_atmel_pcm_init(void)
module_init(snd_atmel_pcm_init);
static void __exit snd_atmel_pcm_exit(void)
module_exit(snd_atmel_pcm_exit);
MODULE_AUTHOR("Sedji Gaouaou <sedji.gaouaou@atmel.com>");
MODULE_DESCRIPTION("Atmel PCM module");
MODULE_LICENSE("GPL");
