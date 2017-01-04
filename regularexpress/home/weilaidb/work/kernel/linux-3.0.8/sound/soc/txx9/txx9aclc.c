static struct txx9aclc_soc_device  txx9aclc_soc_device;
static struct txx9aclc_plat_drvdata *txx9aclc_drvdata;
static int txx9aclc_dma_init(struct txx9aclc_soc_device *dev,
struct txx9aclc_dmadata *dmadata);
static const struct snd_pcm_hardware txx9aclc_pcm_hardware = ;
static int txx9aclc_pcm_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params)
static int txx9aclc_pcm_hw_free(struct snd_pcm_substream *substream)
static int txx9aclc_pcm_prepare(struct snd_pcm_substream *substream)
static void txx9aclc_dma_complete(void *arg)
static struct dma_async_tx_descriptor *
txx9aclc_dma_submit(struct txx9aclc_dmadata *dmadata, dma_addr_t buf_dma_addr)
#define NR_DMA_CHAIN		2
static void txx9aclc_dma_tasklet(unsigned long data)
static int txx9aclc_pcm_trigger(struct snd_pcm_substream *substream, int cmd)
static snd_pcm_uframes_t
txx9aclc_pcm_pointer(struct snd_pcm_substream *substream)
static int txx9aclc_pcm_open(struct snd_pcm_substream *substream)
static int txx9aclc_pcm_close(struct snd_pcm_substream *substream)
static struct snd_pcm_ops txx9aclc_pcm_ops = ;
static void txx9aclc_pcm_free_dma_buffers(struct snd_pcm *pcm)
static int txx9aclc_pcm_new(struct snd_card *card, struct snd_soc_dai *dai,
struct snd_pcm *pcm)
static bool filter(struct dma_chan *chan, void *param)
static int txx9aclc_dma_init(struct txx9aclc_soc_device *dev,
struct txx9aclc_dmadata *dmadata)
static int txx9aclc_pcm_probe(struct snd_soc_platform *platform)
static int txx9aclc_pcm_remove(struct snd_soc_platform *platform)
static struct snd_soc_platform_driver txx9aclc_soc_platform = ;
static int __devinit txx9aclc_soc_platform_probe(struct platform_device *pdev)
static int __devexit txx9aclc_soc_platform_remove(struct platform_device *pdev)
static struct platform_driver txx9aclc_pcm_driver = ;
static int __init snd_txx9aclc_pcm_init(void)
module_init(snd_txx9aclc_pcm_init);
static void __exit snd_txx9aclc_pcm_exit(void)
module_exit(snd_txx9aclc_pcm_exit);
MODULE_AUTHOR("Atsushi Nemoto <anemo@mba.ocn.ne.jp>");
MODULE_DESCRIPTION("TXx9 ACLC Audio DMA driver");
MODULE_LICENSE("GPL");
