#define S3C_PCM_CTL		0x00
#define S3C_PCM_CLKCTL		0x04
#define S3C_PCM_TXFIFO		0x08
#define S3C_PCM_RXFIFO		0x0C
#define S3C_PCM_IRQCTL		0x10
#define S3C_PCM_IRQSTAT		0x14
#define S3C_PCM_FIFOSTAT	0x18
#define S3C_PCM_CLRINT		0x20
#define S3C_PCM_CTL_TXDIPSTICK_MASK	0x3f
#define S3C_PCM_CTL_TXDIPSTICK_SHIFT	13
#define S3C_PCM_CTL_RXDIPSTICK_MASK	0x3f
#define S3C_PCM_CTL_RXDIPSTICK_SHIFT	7
#define S3C_PCM_CTL_TXDMA_EN		(0x1 << 6)
#define S3C_PCM_CTL_RXDMA_EN		(0x1 << 5)
#define S3C_PCM_CTL_TXMSB_AFTER_FSYNC	(0x1 << 4)
#define S3C_PCM_CTL_RXMSB_AFTER_FSYNC	(0x1 << 3)
#define S3C_PCM_CTL_TXFIFO_EN		(0x1 << 2)
#define S3C_PCM_CTL_RXFIFO_EN		(0x1 << 1)
#define S3C_PCM_CTL_ENABLE		(0x1 << 0)
#define S3C_PCM_CLKCTL_SERCLK_EN	(0x1 << 19)
#define S3C_PCM_CLKCTL_SERCLKSEL_PCLK	(0x1 << 18)
#define S3C_PCM_CLKCTL_SCLKDIV_MASK	0x1ff
#define S3C_PCM_CLKCTL_SYNCDIV_MASK	0x1ff
#define S3C_PCM_CLKCTL_SCLKDIV_SHIFT	9
#define S3C_PCM_CLKCTL_SYNCDIV_SHIFT	0
#define S3C_PCM_TXFIFO_DVALID	(0x1 << 16)
#define S3C_PCM_TXFIFO_DATA_MSK	(0xffff << 0)
#define S3C_PCM_RXFIFO_DVALID	(0x1 << 16)
#define S3C_PCM_RXFIFO_DATA_MSK	(0xffff << 0)
#define S3C_PCM_IRQCTL_IRQEN		(0x1 << 14)
#define S3C_PCM_IRQCTL_WRDEN		(0x1 << 12)
#define S3C_PCM_IRQCTL_TXEMPTYEN	(0x1 << 11)
#define S3C_PCM_IRQCTL_TXALMSTEMPTYEN	(0x1 << 10)
#define S3C_PCM_IRQCTL_TXFULLEN		(0x1 << 9)
#define S3C_PCM_IRQCTL_TXALMSTFULLEN	(0x1 << 8)
#define S3C_PCM_IRQCTL_TXSTARVEN	(0x1 << 7)
#define S3C_PCM_IRQCTL_TXERROVRFLEN	(0x1 << 6)
#define S3C_PCM_IRQCTL_RXEMPTEN		(0x1 << 5)
#define S3C_PCM_IRQCTL_RXALMSTEMPTEN	(0x1 << 4)
#define S3C_PCM_IRQCTL_RXFULLEN		(0x1 << 3)
#define S3C_PCM_IRQCTL_RXALMSTFULLEN	(0x1 << 2)
#define S3C_PCM_IRQCTL_RXSTARVEN	(0x1 << 1)
#define S3C_PCM_IRQCTL_RXERROVRFLEN	(0x1 << 0)
#define S3C_PCM_IRQSTAT_IRQPND		(0x1 << 13)
#define S3C_PCM_IRQSTAT_WRD_XFER	(0x1 << 12)
#define S3C_PCM_IRQSTAT_TXEMPTY		(0x1 << 11)
#define S3C_PCM_IRQSTAT_TXALMSTEMPTY	(0x1 << 10)
#define S3C_PCM_IRQSTAT_TXFULL		(0x1 << 9)
#define S3C_PCM_IRQSTAT_TXALMSTFULL	(0x1 << 8)
#define S3C_PCM_IRQSTAT_TXSTARV		(0x1 << 7)
#define S3C_PCM_IRQSTAT_TXERROVRFL	(0x1 << 6)
#define S3C_PCM_IRQSTAT_RXEMPT		(0x1 << 5)
#define S3C_PCM_IRQSTAT_RXALMSTEMPT	(0x1 << 4)
#define S3C_PCM_IRQSTAT_RXFULL		(0x1 << 3)
#define S3C_PCM_IRQSTAT_RXALMSTFULL	(0x1 << 2)
#define S3C_PCM_IRQSTAT_RXSTARV		(0x1 << 1)
#define S3C_PCM_IRQSTAT_RXERROVRFL	(0x1 << 0)
#define S3C_PCM_FIFOSTAT_TXCNT_MSK		(0x3f << 14)
#define S3C_PCM_FIFOSTAT_TXFIFOEMPTY		(0x1 << 13)
#define S3C_PCM_FIFOSTAT_TXFIFOALMSTEMPTY	(0x1 << 12)
#define S3C_PCM_FIFOSTAT_TXFIFOFULL		(0x1 << 11)
#define S3C_PCM_FIFOSTAT_TXFIFOALMSTFULL	(0x1 << 10)
#define S3C_PCM_FIFOSTAT_RXCNT_MSK		(0x3f << 4)
#define S3C_PCM_FIFOSTAT_RXFIFOEMPTY		(0x1 << 3)
#define S3C_PCM_FIFOSTAT_RXFIFOALMSTEMPTY	(0x1 << 2)
#define S3C_PCM_FIFOSTAT_RXFIFOFULL		(0x1 << 1)
#define S3C_PCM_FIFOSTAT_RXFIFOALMSTFULL	(0x1 << 0)
struct s3c_pcm_info ;
static struct s3c2410_dma_client s3c_pcm_dma_client_out = ;
static struct s3c2410_dma_client s3c_pcm_dma_client_in = ;
static struct s3c_dma_params s3c_pcm_stereo_out[] = ;
static struct s3c_dma_params s3c_pcm_stereo_in[] = ;
static struct s3c_pcm_info s3c_pcm[2];
static void s3c_pcm_snd_txctrl(struct s3c_pcm_info *pcm, int on)
static void s3c_pcm_snd_rxctrl(struct s3c_pcm_info *pcm, int on)
static int s3c_pcm_trigger(struct snd_pcm_substream *substream, int cmd,
struct snd_soc_dai *dai)
static int s3c_pcm_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params,
struct snd_soc_dai *socdai)
static int s3c_pcm_set_fmt(struct snd_soc_dai *cpu_dai,
unsigned int fmt)
static int s3c_pcm_set_clkdiv(struct snd_soc_dai *cpu_dai,
int div_id, int div)
static int s3c_pcm_set_sysclk(struct snd_soc_dai *cpu_dai,
int clk_id, unsigned int freq, int dir)
static struct snd_soc_dai_ops s3c_pcm_dai_ops = ;
#define S3C_PCM_RATES  SNDRV_PCM_RATE_8000_96000
#define S3C_PCM_DAI_DECLARE			\
.symmetric_rates = 1,					\
.ops = &s3c_pcm_dai_ops,				\
.playback = ,							\
.capture =
struct snd_soc_dai_driver s3c_pcm_dai[] = ;
EXPORT_SYMBOL_GPL(s3c_pcm_dai);
static __devinit int s3c_pcm_dev_probe(struct platform_device *pdev)
static __devexit int s3c_pcm_dev_remove(struct platform_device *pdev)
static struct platform_driver s3c_pcm_driver = ;
static int __init s3c_pcm_init(void)
module_init(s3c_pcm_init);
static void __exit s3c_pcm_exit(void)
module_exit(s3c_pcm_exit);
MODULE_AUTHOR("Jaswinder Singh, <jassi.brar@samsung.com>");
MODULE_DESCRIPTION("S3C PCM Controller Driver");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:samsung-pcm");
