#define CS4270_FORMATS (SNDRV_PCM_FMTBIT_S8      | \
SNDRV_PCM_FMTBIT_S16_LE  | SNDRV_PCM_FMTBIT_S16_BE  | \
SNDRV_PCM_FMTBIT_S18_3LE | SNDRV_PCM_FMTBIT_S18_3BE | \
SNDRV_PCM_FMTBIT_S20_3LE | SNDRV_PCM_FMTBIT_S20_3BE | \
SNDRV_PCM_FMTBIT_S24_3LE | SNDRV_PCM_FMTBIT_S24_3BE | \
SNDRV_PCM_FMTBIT_S24_LE  | SNDRV_PCM_FMTBIT_S24_BE)
#define CS4270_CHIPID	0x01
#define CS4270_PWRCTL	0x02
#define CS4270_MODE	0x03
#define CS4270_FORMAT	0x04
#define CS4270_TRANS	0x05
#define CS4270_MUTE	0x06
#define CS4270_VOLA	0x07
#define CS4270_VOLB	0x08
#define CS4270_FIRSTREG	0x01
#define CS4270_LASTREG	0x08
#define CS4270_NUMREGS	(CS4270_LASTREG - CS4270_FIRSTREG + 1)
#define CS4270_I2C_INCR	0x80
#define CS4270_CHIPID_ID	0xF0
#define CS4270_CHIPID_REV	0x0F
#define CS4270_PWRCTL_FREEZE	0x80
#define CS4270_PWRCTL_PDN_ADC	0x20
#define CS4270_PWRCTL_PDN_DAC	0x02
#define CS4270_PWRCTL_PDN	0x01
#define CS4270_PWRCTL_PDN_ALL	\
(CS4270_PWRCTL_PDN_ADC | CS4270_PWRCTL_PDN_DAC | CS4270_PWRCTL_PDN)
#define CS4270_MODE_SPEED_MASK	0x30
#define CS4270_MODE_1X		0x00
#define CS4270_MODE_2X		0x10
#define CS4270_MODE_4X		0x20
#define CS4270_MODE_SLAVE	0x30
#define CS4270_MODE_DIV_MASK	0x0E
#define CS4270_MODE_DIV1	0x00
#define CS4270_MODE_DIV15	0x02
#define CS4270_MODE_DIV2	0x04
#define CS4270_MODE_DIV3	0x06
#define CS4270_MODE_DIV4	0x08
#define CS4270_MODE_POPGUARD	0x01
#define CS4270_FORMAT_FREEZE_A	0x80
#define CS4270_FORMAT_FREEZE_B	0x40
#define CS4270_FORMAT_LOOPBACK	0x20
#define CS4270_FORMAT_DAC_MASK	0x18
#define CS4270_FORMAT_DAC_LJ	0x00
#define CS4270_FORMAT_DAC_I2S	0x08
#define CS4270_FORMAT_DAC_RJ16	0x18
#define CS4270_FORMAT_DAC_RJ24	0x10
#define CS4270_FORMAT_ADC_MASK	0x01
#define CS4270_FORMAT_ADC_LJ	0x00
#define CS4270_FORMAT_ADC_I2S	0x01
#define CS4270_TRANS_ONE_VOL	0x80
#define CS4270_TRANS_SOFT	0x40
#define CS4270_TRANS_ZERO	0x20
#define CS4270_TRANS_INV_ADC_A	0x08
#define CS4270_TRANS_INV_ADC_B	0x10
#define CS4270_TRANS_INV_DAC_A	0x02
#define CS4270_TRANS_INV_DAC_B	0x04
#define CS4270_TRANS_DEEMPH	0x01
#define CS4270_MUTE_AUTO	0x20
#define CS4270_MUTE_ADC_A	0x08
#define CS4270_MUTE_ADC_B	0x10
#define CS4270_MUTE_POLARITY	0x04
#define CS4270_MUTE_DAC_A	0x01
#define CS4270_MUTE_DAC_B	0x02
static const u8 cs4270_default_reg_cache[CS4270_LASTREG + 1] = ;
static const char *supply_names[] = ;
struct cs4270_private ;
struct cs4270_mode_ratios ;
static struct cs4270_mode_ratios cs4270_mode_ratios[] = ;
#define NUM_MCLK_RATIOS		ARRAY_SIZE(cs4270_mode_ratios)
static int cs4270_reg_is_readable(struct snd_soc_codec *codec, unsigned int reg)
static int cs4270_reg_is_volatile(struct snd_soc_codec *codec, unsigned int reg)
static int cs4270_set_dai_sysclk(struct snd_soc_dai *codec_dai,
int clk_id, unsigned int freq, int dir)
static int cs4270_set_dai_fmt(struct snd_soc_dai *codec_dai,
unsigned int format)
static int cs4270_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params,
struct snd_soc_dai *dai)
static int cs4270_dai_mute(struct snd_soc_dai *dai, int mute)
static int cs4270_soc_put_mute(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static const struct snd_kcontrol_new cs4270_snd_controls[] = ;
static struct snd_soc_dai_ops cs4270_dai_ops = ;
static struct snd_soc_dai_driver cs4270_dai = ;
static int cs4270_probe(struct snd_soc_codec *codec)
static int cs4270_remove(struct snd_soc_codec *codec)
;
static int cs4270_soc_suspend(struct snd_soc_codec *codec, pm_message_t mesg)
static int cs4270_soc_resume(struct snd_soc_codec *codec)
#define cs4270_soc_suspend	NULL
#define cs4270_soc_resume	NULL
static const struct snd_soc_codec_driver soc_codec_device_cs4270 = ;
static int cs4270_i2c_probe(struct i2c_client *i2c_client,
const struct i2c_device_id *id)
static int cs4270_i2c_remove(struct i2c_client *i2c_client)
static const struct i2c_device_id cs4270_id[] = ;
MODULE_DEVICE_TABLE(i2c, cs4270_id);
static struct i2c_driver cs4270_i2c_driver = ;
static int __init cs4270_init(void)
module_init(cs4270_init);
static void __exit cs4270_exit(void)
module_exit(cs4270_exit);
MODULE_AUTHOR("Timur Tabi <timur@freescale.com>");
MODULE_DESCRIPTION("Cirrus Logic CS4270 ALSA SoC Codec Driver");
MODULE_LICENSE("GPL");
