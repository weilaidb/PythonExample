#if defined(CONFIG_ARCH_AT91SAM9260) || defined(CONFIG_ARCH_AT91SAM9G20)
#define NUM_SSC_DEVICES		1
#define NUM_SSC_DEVICES		3
static struct atmel_pdc_regs pdc_tx_reg = ;
static struct atmel_pdc_regs pdc_rx_reg = ;
static struct atmel_ssc_mask ssc_tx_mask = ;
static struct atmel_ssc_mask ssc_rx_mask = ;
static struct atmel_pcm_dma_params ssc_dma_params[NUM_SSC_DEVICES][2] = ;
static struct atmel_ssc_info ssc_info[NUM_SSC_DEVICES] = ;
static irqreturn_t atmel_ssc_interrupt(int irq, void *dev_id)
static int atmel_ssc_startup(struct snd_pcm_substream *substream,
struct snd_soc_dai *dai)
static void atmel_ssc_shutdown(struct snd_pcm_substream *substream,
struct snd_soc_dai *dai)
static int atmel_ssc_set_dai_fmt(struct snd_soc_dai *cpu_dai,
unsigned int fmt)
static int atmel_ssc_set_dai_clkdiv(struct snd_soc_dai *cpu_dai,
int div_id, int div)
static int atmel_ssc_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params,
struct snd_soc_dai *dai)
static int atmel_ssc_prepare(struct snd_pcm_substream *substream,
struct snd_soc_dai *dai)
static int atmel_ssc_suspend(struct snd_soc_dai *cpu_dai)
static int atmel_ssc_resume(struct snd_soc_dai *cpu_dai)
#  define atmel_ssc_suspend	NULL
#  define atmel_ssc_resume	NULL
static int atmel_ssc_probe(struct snd_soc_dai *dai)
static int atmel_ssc_remove(struct snd_soc_dai *dai)
#define ATMEL_SSC_RATES (SNDRV_PCM_RATE_8000_96000)
#define ATMEL_SSC_FORMATS (SNDRV_PCM_FMTBIT_S8     | SNDRV_PCM_FMTBIT_S16_LE |\
SNDRV_PCM_FMTBIT_S24_LE | SNDRV_PCM_FMTBIT_S32_LE)
static struct snd_soc_dai_ops atmel_ssc_dai_ops = ;
static struct snd_soc_dai_driver atmel_ssc_dai[NUM_SSC_DEVICES] = ;
static __devinit int asoc_ssc_probe(struct platform_device *pdev)
static int __devexit asoc_ssc_remove(struct platform_device *pdev)
static struct platform_driver asoc_ssc_driver = ;
int atmel_ssc_set_audio(int ssc_id)
EXPORT_SYMBOL_GPL(atmel_ssc_set_audio);
static int __init snd_atmel_ssc_init(void)
module_init(snd_atmel_ssc_init);
static void __exit snd_atmel_ssc_exit(void)
module_exit(snd_atmel_ssc_exit);
MODULE_AUTHOR("Sedji Gaouaou, sedji.gaouaou@atmel.com, www.atmel.com");
MODULE_DESCRIPTION("ATMEL SSC ASoC Interface");
MODULE_LICENSE("GPL");
