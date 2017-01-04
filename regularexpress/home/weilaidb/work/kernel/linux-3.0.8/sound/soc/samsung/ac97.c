#define AC_CMD_ADDR(x) (x << 16)
#define AC_CMD_DATA(x) (x & 0xffff)
#define S3C_AC97_DAI_PCM 0
#define S3C_AC97_DAI_MIC 1
struct s3c_ac97_info ;
static struct s3c_ac97_info s3c_ac97;
static struct s3c2410_dma_client s3c_dma_client_out = ;
static struct s3c2410_dma_client s3c_dma_client_in = ;
static struct s3c2410_dma_client s3c_dma_client_micin = ;
static struct s3c_dma_params s3c_ac97_pcm_out = ;
static struct s3c_dma_params s3c_ac97_pcm_in = ;
static struct s3c_dma_params s3c_ac97_mic_in = ;
static void s3c_ac97_activate(struct snd_ac97 *ac97)
static unsigned short s3c_ac97_read(struct snd_ac97 *ac97,
unsigned short reg)
static void s3c_ac97_write(struct snd_ac97 *ac97, unsigned short reg,
unsigned short val)
static void s3c_ac97_cold_reset(struct snd_ac97 *ac97)
static void s3c_ac97_warm_reset(struct snd_ac97 *ac97)
static irqreturn_t s3c_ac97_irq(int irq, void *dev_id)
struct snd_ac97_bus_ops soc_ac97_ops = ;
EXPORT_SYMBOL_GPL(soc_ac97_ops);
static int s3c_ac97_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params,
struct snd_soc_dai *dai)
static int s3c_ac97_trigger(struct snd_pcm_substream *substream, int cmd,
struct snd_soc_dai *dai)
static int s3c_ac97_hw_mic_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params,
struct snd_soc_dai *dai)
static int s3c_ac97_mic_trigger(struct snd_pcm_substream *substream,
int cmd, struct snd_soc_dai *dai)
static struct snd_soc_dai_ops s3c_ac97_dai_ops = ;
static struct snd_soc_dai_ops s3c_ac97_mic_dai_ops = ;
static struct snd_soc_dai_driver s3c_ac97_dai[] = ;
static __devinit int s3c_ac97_probe(struct platform_device *pdev)
static __devexit int s3c_ac97_remove(struct platform_device *pdev)
static struct platform_driver s3c_ac97_driver = ;
static int __init s3c_ac97_init(void)
module_init(s3c_ac97_init);
static void __exit s3c_ac97_exit(void)
module_exit(s3c_ac97_exit);
MODULE_AUTHOR("Jaswinder Singh, <jassi.brar@samsung.com>");
MODULE_DESCRIPTION("AC97 driver for the Samsung SoC");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:samsung-ac97");
