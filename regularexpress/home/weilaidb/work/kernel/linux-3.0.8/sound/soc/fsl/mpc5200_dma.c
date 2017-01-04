static irqreturn_t psc_dma_status_irq(int irq, void *_psc_dma)
static void psc_dma_bcom_enqueue_next_buffer(struct psc_dma_stream *s)
static irqreturn_t psc_dma_bcom_irq(int irq, void *_psc_dma_stream)
static int psc_dma_hw_free(struct snd_pcm_substream *substream)
static int psc_dma_trigger(struct snd_pcm_substream *substream, int cmd)
static const struct snd_pcm_hardware psc_dma_hardware = ;
static int psc_dma_open(struct snd_pcm_substream *substream)
static int psc_dma_close(struct snd_pcm_substream *substream)
static snd_pcm_uframes_t
psc_dma_pointer(struct snd_pcm_substream *substream)
static int
psc_dma_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params)
static struct snd_pcm_ops psc_dma_ops = ;
static u64 psc_dma_dmamask = 0xffffffff;
static int psc_dma_new(struct snd_card *card, struct snd_soc_dai *dai,
struct snd_pcm *pcm)
static void psc_dma_free(struct snd_pcm *pcm)
static struct snd_soc_platform_driver mpc5200_audio_dma_platform = ;
static int mpc5200_hpcd_probe(struct platform_device *op)
static int mpc5200_hpcd_remove(struct platform_device *op)
static struct of_device_id mpc5200_hpcd_match[] = ;
MODULE_DEVICE_TABLE(of, mpc5200_hpcd_match);
static struct platform_driver mpc5200_hpcd_of_driver = ;
static int __init mpc5200_hpcd_init(void)
module_init(mpc5200_hpcd_init);
static void __exit mpc5200_hpcd_exit(void)
module_exit(mpc5200_hpcd_exit);
MODULE_AUTHOR("Grant Likely <grant.likely@secretlab.ca>");
MODULE_DESCRIPTION("Freescale MPC5200 PSC in DMA mode ASoC Driver");
MODULE_LICENSE("GPL");
