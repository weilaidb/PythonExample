struct bf5xx_i2s_port ;
static int bf5xx_i2s_set_dai_fmt(struct snd_soc_dai *cpu_dai,
unsigned int fmt)
static int bf5xx_i2s_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params,
struct snd_soc_dai *dai)
static void bf5xx_i2s_shutdown(struct snd_pcm_substream *substream,
struct snd_soc_dai *dai)
static int bf5xx_i2s_suspend(struct snd_soc_dai *dai)
static int bf5xx_i2s_resume(struct snd_soc_dai *dai)
#define bf5xx_i2s_suspend	NULL
#define bf5xx_i2s_resume	NULL
#define BF5XX_I2S_RATES (SNDRV_PCM_RATE_8000 | SNDRV_PCM_RATE_11025 |\
SNDRV_PCM_RATE_16000 | SNDRV_PCM_RATE_22050 | \
SNDRV_PCM_RATE_44100 | SNDRV_PCM_RATE_48000 | \
SNDRV_PCM_RATE_96000)
#define BF5XX_I2S_FORMATS \
(SNDRV_PCM_FMTBIT_S8 | \
SNDRV_PCM_FMTBIT_S16_LE | \
SNDRV_PCM_FMTBIT_S24_LE | \
SNDRV_PCM_FMTBIT_S32_LE)
static struct snd_soc_dai_ops bf5xx_i2s_dai_ops = ;
static struct snd_soc_dai_driver bf5xx_i2s_dai = ;
static int __devinit bf5xx_i2s_probe(struct platform_device *pdev)
static int __devexit bf5xx_i2s_remove(struct platform_device *pdev)
static struct platform_driver bfin_i2s_driver = ;
static int __init bfin_i2s_init(void)
static void __exit bfin_i2s_exit(void)
module_init(bfin_i2s_init);
module_exit(bfin_i2s_exit);
MODULE_AUTHOR("Cliff Cai");
MODULE_DESCRIPTION("I2S driver for ADI Blackfin");
MODULE_LICENSE("GPL");
