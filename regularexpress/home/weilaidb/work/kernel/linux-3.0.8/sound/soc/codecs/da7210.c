#define DA7210_STATUS			0x02
#define DA7210_STARTUP1			0x03
#define DA7210_MIC_L			0x07
#define DA7210_MIC_R			0x08
#define DA7210_INMIX_L			0x0D
#define DA7210_INMIX_R			0x0E
#define DA7210_ADC_HPF			0x0F
#define DA7210_ADC			0x10
#define DA7210_DAC_HPF			0x14
#define DA7210_DAC_L			0x15
#define DA7210_DAC_R			0x16
#define DA7210_DAC_SEL			0x17
#define DA7210_OUTMIX_L			0x1C
#define DA7210_OUTMIX_R			0x1D
#define DA7210_HP_L_VOL			0x21
#define DA7210_HP_R_VOL			0x22
#define DA7210_HP_CFG			0x23
#define DA7210_DAI_SRC_SEL		0x25
#define DA7210_DAI_CFG1			0x26
#define DA7210_DAI_CFG3			0x28
#define DA7210_PLL_DIV1			0x29
#define DA7210_PLL_DIV2			0x2A
#define DA7210_PLL_DIV3			0x2B
#define DA7210_PLL			0x2C
#define DA7210_A_HID_UNLOCK		0x8A
#define DA7210_A_TEST_UNLOCK		0x8B
#define DA7210_A_PLL1			0x90
#define DA7210_A_CP_MODE		0xA7
#define DA7210_SC_MST_EN		(1 << 0)
#define DA7210_MICBIAS_EN		(1 << 6)
#define DA7210_MIC_L_EN			(1 << 7)
#define DA7210_MIC_R_EN			(1 << 7)
#define DA7210_IN_L_EN			(1 << 7)
#define DA7210_IN_R_EN			(1 << 7)
#define DA7210_ADC_L_EN			(1 << 3)
#define DA7210_ADC_R_EN			(1 << 7)
#define DA7210_VOICE_F0_MASK		(0x7 << 4)
#define DA7210_VOICE_F0_25		(1 << 4)
#define DA7210_VOICE_EN			(1 << 7)
#define DA7210_DAC_L_SRC_DAI_L		(4 << 0)
#define DA7210_DAC_L_EN			(1 << 3)
#define DA7210_DAC_R_SRC_DAI_R		(5 << 4)
#define DA7210_DAC_R_EN			(1 << 7)
#define DA7210_OUT_L_EN			(1 << 7)
#define DA7210_OUT_R_EN			(1 << 7)
#define DA7210_HP_2CAP_MODE		(1 << 1)
#define DA7210_HP_SENSE_EN		(1 << 2)
#define DA7210_HP_L_EN			(1 << 3)
#define DA7210_HP_MODE			(1 << 6)
#define DA7210_HP_R_EN			(1 << 7)
#define DA7210_DAI_OUT_L_SRC		(6 << 0)
#define DA7210_DAI_OUT_R_SRC		(7 << 4)
#define DA7210_DAI_WORD_S16_LE		(0 << 0)
#define DA7210_DAI_WORD_S24_LE		(2 << 0)
#define DA7210_DAI_FLEN_64BIT		(1 << 2)
#define DA7210_DAI_MODE_MASTER		(1 << 7)
#define DA7210_DAI_FORMAT_I2SMODE	(0 << 0)
#define DA7210_DAI_OE			(1 << 3)
#define DA7210_DAI_EN			(1 << 7)
#define DA7210_MCLK_RANGE_10_20_MHZ	(1 << 4)
#define DA7210_PLL_BYP			(1 << 6)
#define DA7210_PLL_FS_MASK		(0xF << 0)
#define DA7210_PLL_FS_8000		(0x1 << 0)
#define DA7210_PLL_FS_11025		(0x2 << 0)
#define DA7210_PLL_FS_12000		(0x3 << 0)
#define DA7210_PLL_FS_16000		(0x5 << 0)
#define DA7210_PLL_FS_22050		(0x6 << 0)
#define DA7210_PLL_FS_24000		(0x7 << 0)
#define DA7210_PLL_FS_32000		(0x9 << 0)
#define DA7210_PLL_FS_44100		(0xA << 0)
#define DA7210_PLL_FS_48000		(0xB << 0)
#define DA7210_PLL_FS_88200		(0xE << 0)
#define DA7210_PLL_FS_96000		(0xF << 0)
#define DA7210_PLL_EN			(0x1 << 7)
#define DA7210_VERSION "0.0.1"
static const DECLARE_TLV_DB_SCALE(hp_out_tlv, -7950, 150, 1);
static const struct snd_kcontrol_new da7210_snd_controls[] = ;
struct da7210_priv ;
static const u8 da7210_reg[] = ;
static inline u32 da7210_read_reg_cache(struct snd_soc_codec *codec, u32 reg)
static int da7210_write(struct snd_soc_codec *codec, u32 reg, u32 value)
static inline u32 da7210_read(struct snd_soc_codec *codec, u32 reg)
static int da7210_startup(struct snd_pcm_substream *substream,
struct snd_soc_dai *dai)
static int da7210_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params,
struct snd_soc_dai *dai)
static int da7210_set_dai_fmt(struct snd_soc_dai *codec_dai, u32 fmt)
#define DA7210_FORMATS (SNDRV_PCM_FMTBIT_S16_LE | SNDRV_PCM_FMTBIT_S24_LE)
static struct snd_soc_dai_ops da7210_dai_ops = ;
static struct snd_soc_dai_driver da7210_dai = ;
static int da7210_probe(struct snd_soc_codec *codec)
static struct snd_soc_codec_driver soc_codec_dev_da7210 = ;
#if defined(CONFIG_I2C) || defined(CONFIG_I2C_MODULE)
static int __devinit da7210_i2c_probe(struct i2c_client *i2c,
const struct i2c_device_id *id)
static int __devexit da7210_i2c_remove(struct i2c_client *client)
static const struct i2c_device_id da7210_i2c_id[] = ;
MODULE_DEVICE_TABLE(i2c, da7210_i2c_id);
static struct i2c_driver da7210_i2c_driver = ;
static int __init da7210_modinit(void)
module_init(da7210_modinit);
static void __exit da7210_exit(void)
module_exit(da7210_exit);
MODULE_DESCRIPTION("ASoC DA7210 driver");
MODULE_AUTHOR("David Chen, Kuninori Morimoto");
MODULE_LICENSE("GPL");
