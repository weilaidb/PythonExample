struct s6000_i2s_dev ;
#define S6_I2S_INTERRUPT_STATUS	0x00
#define   S6_I2S_INT_OVERRUN	1
#define   S6_I2S_INT_UNDERRUN	2
#define   S6_I2S_INT_ALIGNMENT	4
#define S6_I2S_INTERRUPT_ENABLE	0x04
#define S6_I2S_INTERRUPT_RAW	0x08
#define S6_I2S_INTERRUPT_CLEAR	0x0C
#define S6_I2S_INTERRUPT_SET	0x10
#define S6_I2S_MODE		0x20
#define   S6_I2S_DUAL		0
#define   S6_I2S_WIDE		1
#define S6_I2S_TX_DEFAULT	0x24
#define S6_I2S_DATA_CFG(c)	(0x40 + 0x10 * (c))
#define   S6_I2S_IN		0
#define   S6_I2S_OUT		1
#define   S6_I2S_UNUSED		2
#define S6_I2S_INTERFACE_CFG(c)	(0x44 + 0x10 * (c))
#define   S6_I2S_DIV_MASK	0x001fff
#define   S6_I2S_16BIT		0x000000
#define   S6_I2S_20BIT		0x002000
#define   S6_I2S_24BIT		0x004000
#define   S6_I2S_32BIT		0x006000
#define   S6_I2S_BITS_MASK	0x006000
#define   S6_I2S_MEM_16BIT	0x000000
#define   S6_I2S_MEM_32BIT	0x008000
#define   S6_I2S_MEM_MASK	0x008000
#define   S6_I2S_CHANNELS_SHIFT	16
#define   S6_I2S_CHANNELS_MASK	0x030000
#define   S6_I2S_SCK_IN		0x000000
#define   S6_I2S_SCK_OUT	0x040000
#define   S6_I2S_SCK_DIR	0x040000
#define   S6_I2S_WS_IN		0x000000
#define   S6_I2S_WS_OUT		0x080000
#define   S6_I2S_WS_DIR		0x080000
#define   S6_I2S_LEFT_FIRST	0x000000
#define   S6_I2S_RIGHT_FIRST	0x100000
#define   S6_I2S_FIRST		0x100000
#define   S6_I2S_CUR_SCK	0x200000
#define   S6_I2S_CUR_WS		0x400000
#define S6_I2S_ENABLE(c)	(0x48 + 0x10 * (c))
#define   S6_I2S_DISABLE_IF	0x02
#define   S6_I2S_ENABLE_IF	0x03
#define   S6_I2S_IS_BUSY	0x04
#define   S6_I2S_DMA_ACTIVE	0x08
#define   S6_I2S_IS_ENABLED	0x10
#define S6_I2S_NUM_LINES	4
#define S6_I2S_SIF_PORT0	0x0000000
#define S6_I2S_SIF_PORT1	0x0000080
static inline void s6_i2s_write_reg(struct s6000_i2s_dev *dev, int reg, u32 val)
static inline u32 s6_i2s_read_reg(struct s6000_i2s_dev *dev, int reg)
static inline void s6_i2s_mod_reg(struct s6000_i2s_dev *dev, int reg,
u32 mask, u32 val)
static void s6000_i2s_start_channel(struct s6000_i2s_dev *dev, int channel)
static void s6000_i2s_stop_channel(struct s6000_i2s_dev *dev, int channel)
static void s6000_i2s_start(struct snd_pcm_substream *substream)
static void s6000_i2s_stop(struct snd_pcm_substream *substream)
static int s6000_i2s_trigger(struct snd_pcm_substream *substream, int cmd,
int after)
static unsigned int s6000_i2s_int_sources(struct s6000_i2s_dev *dev)
static unsigned int s6000_i2s_check_xrun(struct snd_soc_dai *cpu_dai)
static void s6000_i2s_wait_disabled(struct s6000_i2s_dev *dev)
static int s6000_i2s_set_dai_fmt(struct snd_soc_dai *cpu_dai,
unsigned int fmt)
static int s6000_i2s_set_clkdiv(struct snd_soc_dai *dai, int div_id, int div)
static int s6000_i2s_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params,
struct snd_soc_dai *dai)
static int s6000_i2s_dai_probe(struct snd_soc_dai *dai)
#define S6000_I2S_RATES	(SNDRV_PCM_RATE_CONTINUOUS | SNDRV_PCM_RATE_5512 | \
SNDRV_PCM_RATE_8000_192000)
#define S6000_I2S_FORMATS (SNDRV_PCM_FMTBIT_S16_LE | SNDRV_PCM_FMTBIT_S32_LE)
static struct snd_soc_dai_ops s6000_i2s_dai_ops = ;
static struct snd_soc_dai_driver s6000_i2s_dai = ;
static int __devinit s6000_i2s_probe(struct platform_device *pdev)
static void __devexit s6000_i2s_remove(struct platform_device *pdev)
static struct platform_driver s6000_i2s_driver = ;
static int __init s6000_i2s_init(void)
module_init(s6000_i2s_init);
static void __exit s6000_i2s_exit(void)
module_exit(s6000_i2s_exit);
MODULE_AUTHOR("Daniel Gloeckner");
MODULE_DESCRIPTION("Stretch s6000 family I2S SoC Interface");
MODULE_LICENSE("GPL");
