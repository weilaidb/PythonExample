#define MSG(x...)	printk(KERN_INFO "au1xpsc_pcm: " x)
#define DBG		MSG
#define DBG(x...)	do  while (0)
struct au1xpsc_audio_dmadata ;
#define AU1XPSC_PERIOD_MIN_BYTES	1024
#define AU1XPSC_BUFFER_MIN_BYTES	65536
#define AU1XPSC_PCM_FMTS					\
(SNDRV_PCM_FMTBIT_S8     | SNDRV_PCM_FMTBIT_U8 |	\
SNDRV_PCM_FMTBIT_S16_LE | SNDRV_PCM_FMTBIT_S16_BE |	\
SNDRV_PCM_FMTBIT_U16_LE | SNDRV_PCM_FMTBIT_U16_BE |	\
SNDRV_PCM_FMTBIT_S32_LE | SNDRV_PCM_FMTBIT_S32_BE |	\
SNDRV_PCM_FMTBIT_U32_LE | SNDRV_PCM_FMTBIT_U32_BE |	\
0)
static const struct snd_pcm_hardware au1xpsc_pcm_hardware = ;
static void au1x_pcm_queue_tx(struct au1xpsc_audio_dmadata *cd)
static void au1x_pcm_queue_rx(struct au1xpsc_audio_dmadata *cd)
static void au1x_pcm_dmatx_cb(int irq, void *dev_id)
static void au1x_pcm_dmarx_cb(int irq, void *dev_id)
static void au1x_pcm_dbdma_free(struct au1xpsc_audio_dmadata *pcd)
static int au1x_pcm_dbdma_realloc(struct au1xpsc_audio_dmadata *pcd,
int stype, int msbits)
static inline struct au1xpsc_audio_dmadata *to_dmadata(struct snd_pcm_substream *ss)
static int au1xpsc_pcm_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params)
static int au1xpsc_pcm_hw_free(struct snd_pcm_substream *substream)
static int au1xpsc_pcm_prepare(struct snd_pcm_substream *substream)
static int au1xpsc_pcm_trigger(struct snd_pcm_substream *substream, int cmd)
static snd_pcm_uframes_t
au1xpsc_pcm_pointer(struct snd_pcm_substream *substream)
static int au1xpsc_pcm_open(struct snd_pcm_substream *substream)
static int au1xpsc_pcm_close(struct snd_pcm_substream *substream)
static struct snd_pcm_ops au1xpsc_pcm_ops = ;
static void au1xpsc_pcm_free_dma_buffers(struct snd_pcm *pcm)
static int au1xpsc_pcm_new(struct snd_card *card,
struct snd_soc_dai *dai,
struct snd_pcm *pcm)
struct snd_soc_platform_driver au1xpsc_soc_platform = ;
static int __devinit au1xpsc_pcm_drvprobe(struct platform_device *pdev)
static int __devexit au1xpsc_pcm_drvremove(struct platform_device *pdev)
static struct platform_driver au1xpsc_pcm_driver = ;
static int __init au1xpsc_audio_dbdma_load(void)
static void __exit au1xpsc_audio_dbdma_unload(void)
module_init(au1xpsc_audio_dbdma_load);
module_exit(au1xpsc_audio_dbdma_unload);
struct platform_device *au1xpsc_pcm_add(struct platform_device *pdev)
EXPORT_SYMBOL_GPL(au1xpsc_pcm_add);
void au1xpsc_pcm_destroy(struct platform_device *dmapd)
EXPORT_SYMBOL_GPL(au1xpsc_pcm_destroy);
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Au12x0/Au1550 PSC Audio DMA driver");
MODULE_AUTHOR("Manuel Lauss");
