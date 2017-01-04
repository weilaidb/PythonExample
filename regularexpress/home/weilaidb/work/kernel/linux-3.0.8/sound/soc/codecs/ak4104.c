#define AK4104_REG_CONTROL1		0x00
#define AK4104_REG_RESERVED		0x01
#define AK4104_REG_CONTROL2		0x02
#define AK4104_REG_TX			0x03
#define AK4104_REG_CHN_STATUS(x)	((x) + 0x04)
#define AK4104_NUM_REGS			10
#define AK4104_REG_MASK			0x1f
#define AK4104_READ			0xc0
#define AK4104_WRITE			0xe0
#define AK4104_RESERVED_VAL		0x5b
#define AK4104_CONTROL1_RSTN		(1 << 0)
#define AK4104_CONTROL1_PW		(1 << 1)
#define AK4104_CONTROL1_DIF0		(1 << 2)
#define AK4104_CONTROL1_DIF1		(1 << 3)
#define AK4104_CONTROL2_SEL0		(1 << 0)
#define AK4104_CONTROL2_SEL1		(1 << 1)
#define AK4104_CONTROL2_MODE		(1 << 2)
#define AK4104_TX_TXE			(1 << 0)
#define AK4104_TX_V			(1 << 1)
#define DRV_NAME "ak4104-codec"
struct ak4104_private ;
static int ak4104_fill_cache(struct snd_soc_codec *codec)
static unsigned int ak4104_read_reg_cache(struct snd_soc_codec *codec,
unsigned int reg)
static int ak4104_spi_write(struct snd_soc_codec *codec, unsigned int reg,
unsigned int value)
static int ak4104_set_dai_fmt(struct snd_soc_dai *codec_dai,
unsigned int format)
static int ak4104_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params,
struct snd_soc_dai *dai)
static struct snd_soc_dai_ops ak4101_dai_ops = ;
static struct snd_soc_dai_driver ak4104_dai = ;
static int ak4104_probe(struct snd_soc_codec *codec)
static int ak4104_remove(struct snd_soc_codec *codec)
static struct snd_soc_codec_driver soc_codec_device_ak4104 = ;
static int ak4104_spi_probe(struct spi_device *spi)
static int __devexit ak4104_spi_remove(struct spi_device *spi)
static struct spi_driver ak4104_spi_driver = ;
static int __init ak4104_init(void)
module_init(ak4104_init);
static void __exit ak4104_exit(void)
module_exit(ak4104_exit);
MODULE_AUTHOR("Daniel Mack <daniel@caiaq.de>");
MODULE_DESCRIPTION("Asahi Kasei AK4104 ALSA SoC driver");
MODULE_LICENSE("GPL");
