#define SACR0		__REG(0x40400000)
#define SACR1		__REG(0x40400004)
#define SASR0		__REG(0x4040000C)
#define SAIMR		__REG(0x40400014)
#define SAICR		__REG(0x40400018)
#define SADIV		__REG(0x40400060)
#define SADR		__REG(0x40400080)
#define SACR0_RFTH(x)	((x) << 12)
#define SACR0_TFTH(x)	((x) << 8)
#define SACR0_STRF	(1 << 5)
#define SACR0_EFWR	(1 << 4)
#define SACR0_RST	(1 << 3)
#define SACR0_BCKD	(1 << 2)
#define SACR0_ENB	(1 << 0)
#define SACR1_ENLBF	(1 << 5)
#define SACR1_DRPL	(1 << 4)
#define SACR1_DREC	(1 << 3)
#define SACR1_AMSL	(1 << 0)
#define SASR0_I2SOFF	(1 << 7)
#define SASR0_ROR	(1 << 6)
#define SASR0_TUR	(1 << 5)
#define SASR0_RFS	(1 << 4)
#define SASR0_TFS	(1 << 3)
#define SASR0_BSY	(1 << 2)
#define SASR0_RNE	(1 << 1)
#define SASR0_TNF	(1 << 0)
#define SAICR_ROR	(1 << 6)
#define SAICR_TUR	(1 << 5)
#define SAIMR_ROR	(1 << 6)
#define SAIMR_TUR	(1 << 5)
#define SAIMR_RFS	(1 << 4)
#define SAIMR_TFS	(1 << 3)
struct pxa_i2s_port ;
static struct pxa_i2s_port pxa_i2s;
static struct clk *clk_i2s;
static int clk_ena = 0;
static struct pxa2xx_pcm_dma_params pxa2xx_i2s_pcm_stereo_out = ;
static struct pxa2xx_pcm_dma_params pxa2xx_i2s_pcm_stereo_in = ;
static int pxa2xx_i2s_startup(struct snd_pcm_substream *substream,
struct snd_soc_dai *dai)
static int pxa_i2s_wait(void)
static int pxa2xx_i2s_set_dai_fmt(struct snd_soc_dai *cpu_dai,
unsigned int fmt)
static int pxa2xx_i2s_set_dai_sysclk(struct snd_soc_dai *cpu_dai,
int clk_id, unsigned int freq, int dir)
static int pxa2xx_i2s_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params,
struct snd_soc_dai *dai)
static int pxa2xx_i2s_trigger(struct snd_pcm_substream *substream, int cmd,
struct snd_soc_dai *dai)
static void pxa2xx_i2s_shutdown(struct snd_pcm_substream *substream,
struct snd_soc_dai *dai)
static int pxa2xx_i2s_suspend(struct snd_soc_dai *dai)
static int pxa2xx_i2s_resume(struct snd_soc_dai *dai)
#define pxa2xx_i2s_suspend	NULL
#define pxa2xx_i2s_resume	NULL
static int pxa2xx_i2s_probe(struct snd_soc_dai *dai)
static int  pxa2xx_i2s_remove(struct snd_soc_dai *dai)
#define PXA2XX_I2S_RATES (SNDRV_PCM_RATE_8000 | SNDRV_PCM_RATE_11025 |\
SNDRV_PCM_RATE_16000 | SNDRV_PCM_RATE_22050 | SNDRV_PCM_RATE_44100 | \
SNDRV_PCM_RATE_48000 | SNDRV_PCM_RATE_96000)
static struct snd_soc_dai_ops pxa_i2s_dai_ops = ;
static struct snd_soc_dai_driver pxa_i2s_dai = ;
static int pxa2xx_i2s_drv_probe(struct platform_device *pdev)
static int __devexit pxa2xx_i2s_drv_remove(struct platform_device *pdev)
static struct platform_driver pxa2xx_i2s_driver = ;
static int __init pxa2xx_i2s_init(void)
static void __exit pxa2xx_i2s_exit(void)
module_init(pxa2xx_i2s_init);
module_exit(pxa2xx_i2s_exit);
MODULE_AUTHOR("Liam Girdwood, lrg@slimlogic.co.uk");
MODULE_DESCRIPTION("pxa2xx I2S SoC Interface");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:pxa2xx-i2s");
