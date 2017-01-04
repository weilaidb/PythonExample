#define AK4642_VERSION "0.0.1"
#define PW_MGMT1	0x00
#define PW_MGMT2	0x01
#define SG_SL1		0x02
#define SG_SL2		0x03
#define MD_CTL1		0x04
#define MD_CTL2		0x05
#define TIMER		0x06
#define ALC_CTL1	0x07
#define ALC_CTL2	0x08
#define L_IVC		0x09
#define L_DVC		0x0a
#define ALC_CTL3	0x0b
#define R_IVC		0x0c
#define R_DVC		0x0d
#define MD_CTL3		0x0e
#define MD_CTL4		0x0f
#define PW_MGMT3	0x10
#define DF_S		0x11
#define FIL3_0		0x12
#define FIL3_1		0x13
#define FIL3_2		0x14
#define FIL3_3		0x15
#define EQ_0		0x16
#define EQ_1		0x17
#define EQ_2		0x18
#define EQ_3		0x19
#define EQ_4		0x1a
#define EQ_5		0x1b
#define FIL1_0		0x1c
#define FIL1_1		0x1d
#define FIL1_2		0x1e
#define FIL1_3		0x1f
#define PW_MGMT4	0x20
#define MD_CTL5		0x21
#define LO_MS		0x22
#define HP_MS		0x23
#define SPK_MS		0x24
#define AK4642_CACHEREGNUM 	0x25
#define PMVCM		(1 << 6)
#define PMMIN		(1 << 5)
#define PMDAC		(1 << 2)
#define PMADL		(1 << 0)
#define HPMTN		(1 << 6)
#define PMHPL		(1 << 5)
#define PMHPR		(1 << 4)
#define MS		(1 << 3)
#define MCKO		(1 << 1)
#define PMPLL		(1 << 0)
#define PMHP_MASK	(PMHPL | PMHPR)
#define PMHP		PMHP_MASK
#define PMADR		(1 << 0)
#define MINS		(1 << 6)
#define DACL		(1 << 4)
#define PMMP		(1 << 2)
#define MGAIN0		(1 << 0)
#define ZTM(param)	((param & 0x3) << 4)
#define WTM(param)	(((param & 0x4) << 4) | ((param & 0x3) << 2))
#define ALC		(1 << 5)
#define LMTH0		(1 << 0)
#define PLL3		(1 << 7)
#define PLL2		(1 << 6)
#define PLL1		(1 << 5)
#define PLL0		(1 << 4)
#define PLL_MASK	(PLL3 | PLL2 | PLL1 | PLL0)
#define BCKO_MASK	(1 << 3)
#define BCKO_64		BCKO_MASK
#define DIF_MASK	(3 << 0)
#define DSP		(0 << 0)
#define RIGHT_J		(1 << 0)
#define LEFT_J		(2 << 0)
#define I2S		(3 << 0)
#define FS0		(1 << 0)
#define FS1		(1 << 1)
#define FS2		(1 << 2)
#define FS3		(1 << 5)
#define FS_MASK		(FS0 | FS1 | FS2 | FS3)
#define BST1		(1 << 3)
#define DACH		(1 << 0)
static const DECLARE_TLV_DB_SCALE(out_tlv, -11500, 50, 1);
static const struct snd_kcontrol_new ak4642_snd_controls[] = ;
struct ak4642_priv ;
static const u16 ak4642_reg[AK4642_CACHEREGNUM] = ;
static inline unsigned int ak4642_read_reg_cache(struct snd_soc_codec *codec,
unsigned int reg)
static inline void ak4642_write_reg_cache(struct snd_soc_codec *codec,
u16 reg, unsigned int value)
static int ak4642_write(struct snd_soc_codec *codec, unsigned int reg,
unsigned int value)
static int ak4642_sync(struct snd_soc_codec *codec)
;
static int ak4642_dai_startup(struct snd_pcm_substream *substream,
struct snd_soc_dai *dai)
static void ak4642_dai_shutdown(struct snd_pcm_substream *substream,
struct snd_soc_dai *dai)
static int ak4642_dai_set_sysclk(struct snd_soc_dai *codec_dai,
int clk_id, unsigned int freq, int dir)
static int ak4642_dai_set_fmt(struct snd_soc_dai *dai, unsigned int fmt)
static int ak4642_dai_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params,
struct snd_soc_dai *dai)
static struct snd_soc_dai_ops ak4642_dai_ops = ;
static struct snd_soc_dai_driver ak4642_dai = ;
static int ak4642_resume(struct snd_soc_codec *codec)
static int ak4642_probe(struct snd_soc_codec *codec)
static struct snd_soc_codec_driver soc_codec_dev_ak4642 = ;
#if defined(CONFIG_I2C) || defined(CONFIG_I2C_MODULE)
static __devinit int ak4642_i2c_probe(struct i2c_client *i2c,
const struct i2c_device_id *id)
static __devexit int ak4642_i2c_remove(struct i2c_client *client)
static const struct i2c_device_id ak4642_i2c_id[] = ;
MODULE_DEVICE_TABLE(i2c, ak4642_i2c_id);
static struct i2c_driver ak4642_i2c_driver = ;
static int __init ak4642_modinit(void)
module_init(ak4642_modinit);
static void __exit ak4642_exit(void)
module_exit(ak4642_exit);
MODULE_DESCRIPTION("Soc AK4642 driver");
MODULE_AUTHOR("Kuninori Morimoto <morimoto.kuninori@renesas.com>");
MODULE_LICENSE("GPL");
