#define DAVINCI_MCBSP_DRR_REG	0x00
#define DAVINCI_MCBSP_DXR_REG	0x04
#define DAVINCI_MCBSP_SPCR_REG	0x08
#define DAVINCI_MCBSP_RCR_REG	0x0c
#define DAVINCI_MCBSP_XCR_REG	0x10
#define DAVINCI_MCBSP_SRGR_REG	0x14
#define DAVINCI_MCBSP_PCR_REG	0x24
#define DAVINCI_MCBSP_SPCR_RRST		(1 << 0)
#define DAVINCI_MCBSP_SPCR_RINTM(v)	((v) << 4)
#define DAVINCI_MCBSP_SPCR_XRST		(1 << 16)
#define DAVINCI_MCBSP_SPCR_XINTM(v)	((v) << 20)
#define DAVINCI_MCBSP_SPCR_GRST		(1 << 22)
#define DAVINCI_MCBSP_SPCR_FRST		(1 << 23)
#define DAVINCI_MCBSP_SPCR_FREE		(1 << 25)
#define DAVINCI_MCBSP_RCR_RWDLEN1(v)	((v) << 5)
#define DAVINCI_MCBSP_RCR_RFRLEN1(v)	((v) << 8)
#define DAVINCI_MCBSP_RCR_RDATDLY(v)	((v) << 16)
#define DAVINCI_MCBSP_RCR_RFIG		(1 << 18)
#define DAVINCI_MCBSP_RCR_RWDLEN2(v)	((v) << 21)
#define DAVINCI_MCBSP_RCR_RFRLEN2(v)	((v) << 24)
#define DAVINCI_MCBSP_RCR_RPHASE	BIT(31)
#define DAVINCI_MCBSP_XCR_XWDLEN1(v)	((v) << 5)
#define DAVINCI_MCBSP_XCR_XFRLEN1(v)	((v) << 8)
#define DAVINCI_MCBSP_XCR_XDATDLY(v)	((v) << 16)
#define DAVINCI_MCBSP_XCR_XFIG		(1 << 18)
#define DAVINCI_MCBSP_XCR_XWDLEN2(v)	((v) << 21)
#define DAVINCI_MCBSP_XCR_XFRLEN2(v)	((v) << 24)
#define DAVINCI_MCBSP_XCR_XPHASE	BIT(31)
#define DAVINCI_MCBSP_SRGR_FWID(v)	((v) << 8)
#define DAVINCI_MCBSP_SRGR_FPER(v)	((v) << 16)
#define DAVINCI_MCBSP_SRGR_FSGM		(1 << 28)
#define DAVINCI_MCBSP_SRGR_CLKSM	BIT(29)
#define DAVINCI_MCBSP_PCR_CLKRP		(1 << 0)
#define DAVINCI_MCBSP_PCR_CLKXP		(1 << 1)
#define DAVINCI_MCBSP_PCR_FSRP		(1 << 2)
#define DAVINCI_MCBSP_PCR_FSXP		(1 << 3)
#define DAVINCI_MCBSP_PCR_SCLKME	(1 << 7)
#define DAVINCI_MCBSP_PCR_CLKRM		(1 << 8)
#define DAVINCI_MCBSP_PCR_CLKXM		(1 << 9)
#define DAVINCI_MCBSP_PCR_FSRM		(1 << 10)
#define DAVINCI_MCBSP_PCR_FSXM		(1 << 11)
enum ;
static const unsigned char data_type[SNDRV_PCM_FORMAT_S32_LE + 1] = ;
static const unsigned char asp_word_length[SNDRV_PCM_FORMAT_S32_LE + 1] = ;
static const unsigned char double_fmt[SNDRV_PCM_FORMAT_S32_LE + 1] = ;
struct davinci_mcbsp_dev ;
static inline void davinci_mcbsp_write_reg(struct davinci_mcbsp_dev *dev,
int reg, u32 val)
static inline u32 davinci_mcbsp_read_reg(struct davinci_mcbsp_dev *dev, int reg)
static void toggle_clock(struct davinci_mcbsp_dev *dev, int playback)
static void davinci_mcbsp_start(struct davinci_mcbsp_dev *dev,
struct snd_pcm_substream *substream)
static void davinci_mcbsp_stop(struct davinci_mcbsp_dev *dev, int playback)
#define DEFAULT_BITPERSAMPLE	16
static int davinci_i2s_set_dai_fmt(struct snd_soc_dai *cpu_dai,
unsigned int fmt)
static int davinci_i2s_dai_set_clkdiv(struct snd_soc_dai *cpu_dai,
int div_id, int div)
static int davinci_i2s_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params,
struct snd_soc_dai *dai)
static int davinci_i2s_prepare(struct snd_pcm_substream *substream,
struct snd_soc_dai *dai)
static int davinci_i2s_trigger(struct snd_pcm_substream *substream, int cmd,
struct snd_soc_dai *dai)
static int davinci_i2s_startup(struct snd_pcm_substream *substream,
struct snd_soc_dai *dai)
static void davinci_i2s_shutdown(struct snd_pcm_substream *substream,
struct snd_soc_dai *dai)
#define DAVINCI_I2S_RATES	SNDRV_PCM_RATE_8000_96000
static struct snd_soc_dai_ops davinci_i2s_dai_ops = ;
static struct snd_soc_dai_driver davinci_i2s_dai = ;
static int davinci_i2s_probe(struct platform_device *pdev)
static int davinci_i2s_remove(struct platform_device *pdev)
static struct platform_driver davinci_mcbsp_driver = ;
static int __init davinci_i2s_init(void)
module_init(davinci_i2s_init);
static void __exit davinci_i2s_exit(void)
module_exit(davinci_i2s_exit);
MODULE_AUTHOR("Vladimir Barinov");
MODULE_DESCRIPTION("TI DAVINCI I2S (McBSP) SoC Interface");
MODULE_LICENSE("GPL");
