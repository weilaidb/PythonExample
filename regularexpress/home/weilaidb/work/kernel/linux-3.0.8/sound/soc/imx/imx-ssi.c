#define SSI_SACNT_DEFAULT (SSI_SACNT_AC97EN | SSI_SACNT_FV)
static int imx_ssi_set_dai_tdm_slot(struct snd_soc_dai *cpu_dai,
unsigned int tx_mask, unsigned int rx_mask, int slots, int slot_width)
static int imx_ssi_set_dai_fmt(struct snd_soc_dai *cpu_dai, unsigned int fmt)
static int imx_ssi_set_dai_sysclk(struct snd_soc_dai *cpu_dai,
int clk_id, unsigned int freq, int dir)
static int imx_ssi_set_dai_clkdiv(struct snd_soc_dai *cpu_dai,
int div_id, int div)
static int imx_ssi_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params,
struct snd_soc_dai *cpu_dai)
static int imx_ssi_trigger(struct snd_pcm_substream *substream, int cmd,
struct snd_soc_dai *dai)
static struct snd_soc_dai_ops imx_ssi_pcm_dai_ops = ;
int snd_imx_pcm_mmap(struct snd_pcm_substream *substream,
struct vm_area_struct *vma)
EXPORT_SYMBOL_GPL(snd_imx_pcm_mmap);
static int imx_pcm_preallocate_dma_buffer(struct snd_pcm *pcm, int stream)
static u64 imx_pcm_dmamask = DMA_BIT_MASK(32);
int imx_pcm_new(struct snd_card *card, struct snd_soc_dai *dai,
struct snd_pcm *pcm)
EXPORT_SYMBOL_GPL(imx_pcm_new);
void imx_pcm_free(struct snd_pcm *pcm)
EXPORT_SYMBOL_GPL(imx_pcm_free);
static int imx_ssi_dai_probe(struct snd_soc_dai *dai)
static struct snd_soc_dai_driver imx_ssi_dai = ;
static struct snd_soc_dai_driver imx_ac97_dai = ;
static void setup_channel_to_ac97(struct imx_ssi *imx_ssi)
static struct imx_ssi *ac97_ssi;
static void imx_ssi_ac97_write(struct snd_ac97 *ac97, unsigned short reg,
unsigned short val)
static unsigned short imx_ssi_ac97_read(struct snd_ac97 *ac97,
unsigned short reg)
static void imx_ssi_ac97_reset(struct snd_ac97 *ac97)
static void imx_ssi_ac97_warm_reset(struct snd_ac97 *ac97)
struct snd_ac97_bus_ops soc_ac97_ops = ;
EXPORT_SYMBOL_GPL(soc_ac97_ops);
static int imx_ssi_probe(struct platform_device *pdev)
static int __devexit imx_ssi_remove(struct platform_device *pdev)
static struct platform_driver imx_ssi_driver = ;
static int __init imx_ssi_init(void)
static void __exit imx_ssi_exit(void)
module_init(imx_ssi_init);
module_exit(imx_ssi_exit);
MODULE_AUTHOR("Sascha Hauer, <s.hauer@pengutronix.de>");
MODULE_DESCRIPTION("i.MX I2S/ac97 SoC Interface");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:imx-ssi");
