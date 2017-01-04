static struct s3c2410_dma_client s3c24xx_dma_client_out = ;
static struct s3c2410_dma_client s3c24xx_dma_client_in = ;
static struct s3c_dma_params s3c24xx_i2s_pcm_stereo_out = ;
static struct s3c_dma_params s3c24xx_i2s_pcm_stereo_in = ;
struct s3c24xx_i2s_info ;
static struct s3c24xx_i2s_info s3c24xx_i2s;
static void s3c24xx_snd_txctrl(int on)
static void s3c24xx_snd_rxctrl(int on)
static int s3c24xx_snd_lrsync(void)
static inline int s3c24xx_snd_is_clkmaster(void)
static int s3c24xx_i2s_set_fmt(struct snd_soc_dai *cpu_dai,
unsigned int fmt)
static int s3c24xx_i2s_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params,
struct snd_soc_dai *dai)
static int s3c24xx_i2s_trigger(struct snd_pcm_substream *substream, int cmd,
struct snd_soc_dai *dai)
static int s3c24xx_i2s_set_sysclk(struct snd_soc_dai *cpu_dai,
int clk_id, unsigned int freq, int dir)
static int s3c24xx_i2s_set_clkdiv(struct snd_soc_dai *cpu_dai,
int div_id, int div)
u32 s3c24xx_i2s_get_clockrate(void)
EXPORT_SYMBOL_GPL(s3c24xx_i2s_get_clockrate);
static int s3c24xx_i2s_probe(struct snd_soc_dai *dai)
static int s3c24xx_i2s_suspend(struct snd_soc_dai *cpu_dai)
static int s3c24xx_i2s_resume(struct snd_soc_dai *cpu_dai)
#define s3c24xx_i2s_suspend NULL
#define s3c24xx_i2s_resume NULL
#define S3C24XX_I2S_RATES \
(SNDRV_PCM_RATE_8000 | SNDRV_PCM_RATE_11025 | SNDRV_PCM_RATE_16000 | \
SNDRV_PCM_RATE_22050 | SNDRV_PCM_RATE_32000 | SNDRV_PCM_RATE_44100 | \
SNDRV_PCM_RATE_48000 | SNDRV_PCM_RATE_88200 | SNDRV_PCM_RATE_96000)
static struct snd_soc_dai_ops s3c24xx_i2s_dai_ops = ;
static struct snd_soc_dai_driver s3c24xx_i2s_dai = ;
static __devinit int s3c24xx_iis_dev_probe(struct platform_device *pdev)
static __devexit int s3c24xx_iis_dev_remove(struct platform_device *pdev)
static struct platform_driver s3c24xx_iis_driver = ;
static int __init s3c24xx_i2s_init(void)
module_init(s3c24xx_i2s_init);
static void __exit s3c24xx_i2s_exit(void)
module_exit(s3c24xx_i2s_exit);
MODULE_AUTHOR("Ben Dooks, <ben@simtec.co.uk>");
MODULE_DESCRIPTION("s3c24xx I2S SoC Interface");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:s3c24xx-iis");
