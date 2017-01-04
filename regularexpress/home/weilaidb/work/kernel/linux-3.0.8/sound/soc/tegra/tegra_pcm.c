#define DRV_NAME "tegra-pcm-audio"
static const struct snd_pcm_hardware tegra_pcm_hardware = ;
static void tegra_pcm_queue_dma(struct tegra_runtime_data *prtd)
static void dma_complete_callback(struct tegra_dma_req *req)
static void setup_dma_tx_request(struct tegra_dma_req *req,
struct tegra_pcm_dma_params * dmap)
static void setup_dma_rx_request(struct tegra_dma_req *req,
struct tegra_pcm_dma_params * dmap)
static int tegra_pcm_open(struct snd_pcm_substream *substream)
static int tegra_pcm_close(struct snd_pcm_substream *substream)
static int tegra_pcm_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params)
static int tegra_pcm_hw_free(struct snd_pcm_substream *substream)
static int tegra_pcm_trigger(struct snd_pcm_substream *substream, int cmd)
static snd_pcm_uframes_t tegra_pcm_pointer(struct snd_pcm_substream *substream)
static int tegra_pcm_mmap(struct snd_pcm_substream *substream,
struct vm_area_struct *vma)
static struct snd_pcm_ops tegra_pcm_ops = ;
static int tegra_pcm_preallocate_dma_buffer(struct snd_pcm *pcm, int stream)
static void tegra_pcm_deallocate_dma_buffer(struct snd_pcm *pcm, int stream)
static u64 tegra_dma_mask = DMA_BIT_MASK(32);
static int tegra_pcm_new(struct snd_card *card,
struct snd_soc_dai *dai, struct snd_pcm *pcm)
static void tegra_pcm_free(struct snd_pcm *pcm)
struct snd_soc_platform_driver tegra_pcm_platform = ;
static int __devinit tegra_pcm_platform_probe(struct platform_device *pdev)
static int __devexit tegra_pcm_platform_remove(struct platform_device *pdev)
static struct platform_driver tegra_pcm_driver = ;
static int __init snd_tegra_pcm_init(void)
module_init(snd_tegra_pcm_init);
static void __exit snd_tegra_pcm_exit(void)
module_exit(snd_tegra_pcm_exit);
MODULE_AUTHOR("Stephen Warren <swarren@nvidia.com>");
MODULE_DESCRIPTION("Tegra PCM ASoC driver");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:" DRV_NAME);
