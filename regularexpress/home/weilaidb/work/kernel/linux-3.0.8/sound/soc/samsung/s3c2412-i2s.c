static struct s3c2410_dma_client s3c2412_dma_client_out = ;
static struct s3c2410_dma_client s3c2412_dma_client_in = ;
static struct s3c_dma_params s3c2412_i2s_pcm_stereo_out = ;
static struct s3c_dma_params s3c2412_i2s_pcm_stereo_in = ;
static struct s3c_i2sv2_info s3c2412_i2s;
static int s3c2412_i2s_probe(struct snd_soc_dai *dai)
static int s3c2412_i2s_remove(struct snd_soc_dai *dai)
static int s3c2412_i2s_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params,
struct snd_soc_dai *cpu_dai)
#define S3C2412_I2S_RATES \
(SNDRV_PCM_RATE_8000 | SNDRV_PCM_RATE_11025 | SNDRV_PCM_RATE_16000 | \
SNDRV_PCM_RATE_22050 | SNDRV_PCM_RATE_32000 | SNDRV_PCM_RATE_44100 | \
SNDRV_PCM_RATE_48000 | SNDRV_PCM_RATE_88200 | SNDRV_PCM_RATE_96000)
static struct snd_soc_dai_ops s3c2412_i2s_dai_ops = ;
static struct snd_soc_dai_driver s3c2412_i2s_dai = ;
static __devinit int s3c2412_iis_dev_probe(struct platform_device *pdev)
static __devexit int s3c2412_iis_dev_remove(struct platform_device *pdev)
static struct platform_driver s3c2412_iis_driver = ;
static int __init s3c2412_i2s_init(void)
module_init(s3c2412_i2s_init);
static void __exit s3c2412_i2s_exit(void)
module_exit(s3c2412_i2s_exit);
MODULE_AUTHOR("Ben Dooks, <ben@simtec.co.uk>");
MODULE_DESCRIPTION("S3C2412 I2S SoC Interface");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:s3c2412-iis");
