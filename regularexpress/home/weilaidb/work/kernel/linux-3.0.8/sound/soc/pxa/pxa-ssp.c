struct ssp_priv ;
static void dump_registers(struct ssp_device *ssp)
static void pxa_ssp_enable(struct ssp_device *ssp)
static void pxa_ssp_disable(struct ssp_device *ssp)
struct pxa2xx_pcm_dma_data ;
static struct pxa2xx_pcm_dma_params *
pxa_ssp_get_dma_params(struct ssp_device *ssp, int width4, int out)
static int pxa_ssp_startup(struct snd_pcm_substream *substream,
struct snd_soc_dai *cpu_dai)
static void pxa_ssp_shutdown(struct snd_pcm_substream *substream,
struct snd_soc_dai *cpu_dai)
static int pxa_ssp_suspend(struct snd_soc_dai *cpu_dai)
static int pxa_ssp_resume(struct snd_soc_dai *cpu_dai)
#define pxa_ssp_suspend	NULL
#define pxa_ssp_resume	NULL
static void pxa_ssp_set_scr(struct ssp_device *ssp, u32 div)
static u32 pxa_ssp_get_scr(struct ssp_device *ssp)
static int pxa_ssp_set_dai_sysclk(struct snd_soc_dai *cpu_dai,
int clk_id, unsigned int freq, int dir)
static int pxa_ssp_set_dai_clkdiv(struct snd_soc_dai *cpu_dai,
int div_id, int div)
static int pxa_ssp_set_dai_pll(struct snd_soc_dai *cpu_dai, int pll_id,
int source, unsigned int freq_in, unsigned int freq_out)
static int pxa_ssp_set_dai_tdm_slot(struct snd_soc_dai *cpu_dai,
unsigned int tx_mask, unsigned int rx_mask, int slots, int slot_width)
static int pxa_ssp_set_dai_tristate(struct snd_soc_dai *cpu_dai,
int tristate)
static int pxa_ssp_set_dai_fmt(struct snd_soc_dai *cpu_dai,
unsigned int fmt)
static int pxa_ssp_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params,
struct snd_soc_dai *cpu_dai)
static int pxa_ssp_trigger(struct snd_pcm_substream *substream, int cmd,
struct snd_soc_dai *cpu_dai)
static int pxa_ssp_probe(struct snd_soc_dai *dai)
static int pxa_ssp_remove(struct snd_soc_dai *dai)
#define PXA_SSP_RATES (SNDRV_PCM_RATE_8000 | SNDRV_PCM_RATE_11025 |\
SNDRV_PCM_RATE_16000 | SNDRV_PCM_RATE_22050 |	\
SNDRV_PCM_RATE_44100 | SNDRV_PCM_RATE_48000 |	\
SNDRV_PCM_RATE_88200 | SNDRV_PCM_RATE_96000)
#define PXA_SSP_FORMATS (SNDRV_PCM_FMTBIT_S16_LE |\
SNDRV_PCM_FMTBIT_S24_LE |	\
SNDRV_PCM_FMTBIT_S32_LE)
static struct snd_soc_dai_ops pxa_ssp_dai_ops = ;
static struct snd_soc_dai_driver pxa_ssp_dai = ;
static __devinit int asoc_ssp_probe(struct platform_device *pdev)
static int __devexit asoc_ssp_remove(struct platform_device *pdev)
static struct platform_driver asoc_ssp_driver = ;
static int __init pxa_ssp_init(void)
module_init(pxa_ssp_init);
static void __exit pxa_ssp_exit(void)
module_exit(pxa_ssp_exit);
MODULE_AUTHOR("Mark Brown <broonie@opensource.wolfsonmicro.com>");
MODULE_DESCRIPTION("PXA SSP/PCM SoC Interface");
MODULE_LICENSE("GPL");
