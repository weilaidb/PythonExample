#define JZ_REG_AIC_CONF		0x00
#define JZ_REG_AIC_CTRL		0x04
#define JZ_REG_AIC_I2S_FMT	0x10
#define JZ_REG_AIC_FIFO_STATUS	0x14
#define JZ_REG_AIC_I2S_STATUS	0x1c
#define JZ_REG_AIC_CLK_DIV	0x30
#define JZ_REG_AIC_FIFO		0x34
#define JZ_AIC_CONF_FIFO_RX_THRESHOLD_MASK (0xf << 12)
#define JZ_AIC_CONF_FIFO_TX_THRESHOLD_MASK (0xf <<  8)
#define JZ_AIC_CONF_OVERFLOW_PLAY_LAST BIT(6)
#define JZ_AIC_CONF_INTERNAL_CODEC BIT(5)
#define JZ_AIC_CONF_I2S BIT(4)
#define JZ_AIC_CONF_RESET BIT(3)
#define JZ_AIC_CONF_BIT_CLK_MASTER BIT(2)
#define JZ_AIC_CONF_SYNC_CLK_MASTER BIT(1)
#define JZ_AIC_CONF_ENABLE BIT(0)
#define JZ_AIC_CONF_FIFO_RX_THRESHOLD_OFFSET 12
#define JZ_AIC_CONF_FIFO_TX_THRESHOLD_OFFSET 8
#define JZ_AIC_CTRL_OUTPUT_SAMPLE_SIZE_MASK (0x7 << 19)
#define JZ_AIC_CTRL_INPUT_SAMPLE_SIZE_MASK (0x7 << 16)
#define JZ_AIC_CTRL_ENABLE_RX_DMA BIT(15)
#define JZ_AIC_CTRL_ENABLE_TX_DMA BIT(14)
#define JZ_AIC_CTRL_MONO_TO_STEREO BIT(11)
#define JZ_AIC_CTRL_SWITCH_ENDIANNESS BIT(10)
#define JZ_AIC_CTRL_SIGNED_TO_UNSIGNED BIT(9)
#define JZ_AIC_CTRL_FLUSH		BIT(8)
#define JZ_AIC_CTRL_ENABLE_ROR_INT BIT(6)
#define JZ_AIC_CTRL_ENABLE_TUR_INT BIT(5)
#define JZ_AIC_CTRL_ENABLE_RFS_INT BIT(4)
#define JZ_AIC_CTRL_ENABLE_TFS_INT BIT(3)
#define JZ_AIC_CTRL_ENABLE_LOOPBACK BIT(2)
#define JZ_AIC_CTRL_ENABLE_PLAYBACK BIT(1)
#define JZ_AIC_CTRL_ENABLE_CAPTURE BIT(0)
#define JZ_AIC_CTRL_OUTPUT_SAMPLE_SIZE_OFFSET 19
#define JZ_AIC_CTRL_INPUT_SAMPLE_SIZE_OFFSET  16
#define JZ_AIC_I2S_FMT_DISABLE_BIT_CLK BIT(12)
#define JZ_AIC_I2S_FMT_ENABLE_SYS_CLK BIT(4)
#define JZ_AIC_I2S_FMT_MSB BIT(0)
#define JZ_AIC_I2S_STATUS_BUSY BIT(2)
#define JZ_AIC_CLK_DIV_MASK 0xf
struct jz4740_i2s ;
static inline uint32_t jz4740_i2s_read(const struct jz4740_i2s *i2s,
unsigned int reg)
static inline void jz4740_i2s_write(const struct jz4740_i2s *i2s,
unsigned int reg, uint32_t value)
static int jz4740_i2s_startup(struct snd_pcm_substream *substream,
struct snd_soc_dai *dai)
static void jz4740_i2s_shutdown(struct snd_pcm_substream *substream,
struct snd_soc_dai *dai)
static int jz4740_i2s_trigger(struct snd_pcm_substream *substream, int cmd,
struct snd_soc_dai *dai)
static int jz4740_i2s_set_fmt(struct snd_soc_dai *dai, unsigned int fmt)
static int jz4740_i2s_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params, struct snd_soc_dai *dai)
static int jz4740_i2s_set_sysclk(struct snd_soc_dai *dai, int clk_id,
unsigned int freq, int dir)
static int jz4740_i2s_suspend(struct snd_soc_dai *dai)
static int jz4740_i2s_resume(struct snd_soc_dai *dai)
static void jz4740_i2c_init_pcm_config(struct jz4740_i2s *i2s)
static int jz4740_i2s_dai_probe(struct snd_soc_dai *dai)
static int jz4740_i2s_dai_remove(struct snd_soc_dai *dai)
static struct snd_soc_dai_ops jz4740_i2s_dai_ops = ;
#define JZ4740_I2S_FMTS (SNDRV_PCM_FMTBIT_S8 | \
SNDRV_PCM_FMTBIT_S16_LE)
static struct snd_soc_dai_driver jz4740_i2s_dai = ;
static int __devinit jz4740_i2s_dev_probe(struct platform_device *pdev)
static int __devexit jz4740_i2s_dev_remove(struct platform_device *pdev)
static struct platform_driver jz4740_i2s_driver = ;
static int __init jz4740_i2s_init(void)
module_init(jz4740_i2s_init);
static void __exit jz4740_i2s_exit(void)
module_exit(jz4740_i2s_exit);
MODULE_AUTHOR("Lars-Peter Clausen, <lars@metafoo.de>");
MODULE_DESCRIPTION("Ingenic JZ4740 SoC I2S driver");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:jz4740-i2s");
