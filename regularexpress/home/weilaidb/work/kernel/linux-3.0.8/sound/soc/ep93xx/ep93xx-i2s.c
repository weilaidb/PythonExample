#define EP93XX_I2S_TXCLKCFG		0x00
#define EP93XX_I2S_RXCLKCFG		0x04
#define EP93XX_I2S_GLCTRL		0x0C
#define EP93XX_I2S_TXLINCTRLDATA	0x28
#define EP93XX_I2S_TXCTRL		0x2C
#define EP93XX_I2S_TXWRDLEN		0x30
#define EP93XX_I2S_TX0EN		0x34
#define EP93XX_I2S_RXLINCTRLDATA	0x58
#define EP93XX_I2S_RXCTRL		0x5C
#define EP93XX_I2S_RXWRDLEN		0x60
#define EP93XX_I2S_RX0EN		0x64
#define EP93XX_I2S_WRDLEN_16		(0 << 0)
#define EP93XX_I2S_WRDLEN_24		(1 << 0)
#define EP93XX_I2S_WRDLEN_32		(2 << 0)
#define EP93XX_I2S_LINCTRLDATA_R_JUST	(1 << 2)
#define EP93XX_I2S_CLKCFG_LRS		(1 << 0)
#define EP93XX_I2S_CLKCFG_CKP		(1 << 1)
#define EP93XX_I2S_CLKCFG_REL		(1 << 2)
#define EP93XX_I2S_CLKCFG_MASTER	(1 << 3)
#define EP93XX_I2S_CLKCFG_NBCG		(1 << 4)
struct ep93xx_i2s_info ;
struct ep93xx_pcm_dma_params ep93xx_i2s_dma_params[] = ;
static inline void ep93xx_i2s_write_reg(struct ep93xx_i2s_info *info,
unsigned reg, unsigned val)
static inline unsigned ep93xx_i2s_read_reg(struct ep93xx_i2s_info *info,
unsigned reg)
static void ep93xx_i2s_enable(struct ep93xx_i2s_info *info, int stream)
static void ep93xx_i2s_disable(struct ep93xx_i2s_info *info, int stream)
static int ep93xx_i2s_startup(struct snd_pcm_substream *substream,
struct snd_soc_dai *dai)
static void ep93xx_i2s_shutdown(struct snd_pcm_substream *substream,
struct snd_soc_dai *dai)
static int ep93xx_i2s_set_dai_fmt(struct snd_soc_dai *cpu_dai,
unsigned int fmt)
static int ep93xx_i2s_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params,
struct snd_soc_dai *dai)
static int ep93xx_i2s_set_sysclk(struct snd_soc_dai *cpu_dai, int clk_id,
unsigned int freq, int dir)
static int ep93xx_i2s_suspend(struct snd_soc_dai *dai)
static int ep93xx_i2s_resume(struct snd_soc_dai *dai)
#define ep93xx_i2s_suspend	NULL
#define ep93xx_i2s_resume	NULL
static struct snd_soc_dai_ops ep93xx_i2s_dai_ops = ;
#define EP93XX_I2S_FORMATS (SNDRV_PCM_FMTBIT_S32_LE)
static struct snd_soc_dai_driver ep93xx_i2s_dai = ;
static int ep93xx_i2s_probe(struct platform_device *pdev)
static int __devexit ep93xx_i2s_remove(struct platform_device *pdev)
static struct platform_driver ep93xx_i2s_driver = ;
static int __init ep93xx_i2s_init(void)
static void __exit ep93xx_i2s_exit(void)
module_init(ep93xx_i2s_init);
module_exit(ep93xx_i2s_exit);
MODULE_ALIAS("platform:ep93xx-i2s");
MODULE_AUTHOR("Ryan Mallon <ryan@bluewatersys.com>");
MODULE_DESCRIPTION("EP93XX I2S driver");
MODULE_LICENSE("GPL");
