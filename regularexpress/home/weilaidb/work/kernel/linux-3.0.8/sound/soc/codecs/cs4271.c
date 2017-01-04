#define CS4271_PCM_FORMATS (SNDRV_PCM_FMTBIT_S16_LE | \
SNDRV_PCM_FMTBIT_S24_LE | \
SNDRV_PCM_FMTBIT_S32_LE)
#define CS4271_PCM_RATES SNDRV_PCM_RATE_8000_192000
#define CS4271_MODE1	0x2001
#define CS4271_DACCTL	0x2002
#define CS4271_DACVOL	0x2003
#define CS4271_VOLA	0x2004
#define CS4271_VOLB	0x2005
#define CS4271_ADCCTL	0x2006
#define CS4271_MODE2	0x2007
#define CS4271_CHIPID	0x2008
#define CS4271_FIRSTREG	CS4271_MODE1
#define CS4271_LASTREG	CS4271_MODE2
#define CS4271_NR_REGS	((CS4271_LASTREG & 0xFF) + 1)
#define CS4271_MODE1_MODE_MASK	0xC0
#define CS4271_MODE1_MODE_1X	0x00
#define CS4271_MODE1_MODE_2X	0x80
#define CS4271_MODE1_MODE_4X	0xC0
#define CS4271_MODE1_DIV_MASK	0x30
#define CS4271_MODE1_DIV_1	0x00
#define CS4271_MODE1_DIV_15	0x10
#define CS4271_MODE1_DIV_2	0x20
#define CS4271_MODE1_DIV_3	0x30
#define CS4271_MODE1_MASTER	0x08
#define CS4271_MODE1_DAC_DIF_MASK	0x07
#define CS4271_MODE1_DAC_DIF_LJ		0x00
#define CS4271_MODE1_DAC_DIF_I2S	0x01
#define CS4271_MODE1_DAC_DIF_RJ16	0x02
#define CS4271_MODE1_DAC_DIF_RJ24	0x03
#define CS4271_MODE1_DAC_DIF_RJ20	0x04
#define CS4271_MODE1_DAC_DIF_RJ18	0x05
#define CS4271_DACCTL_AMUTE	0x80
#define CS4271_DACCTL_IF_SLOW	0x40
#define CS4271_DACCTL_DEM_MASK	0x30
#define CS4271_DACCTL_DEM_DIS	0x00
#define CS4271_DACCTL_DEM_441	0x10
#define CS4271_DACCTL_DEM_48	0x20
#define CS4271_DACCTL_DEM_32	0x30
#define CS4271_DACCTL_SVRU	0x08
#define CS4271_DACCTL_SRD	0x04
#define CS4271_DACCTL_INVA	0x02
#define CS4271_DACCTL_INVB	0x01
#define CS4271_DACVOL_BEQUA	0x40
#define CS4271_DACVOL_SOFT	0x20
#define CS4271_DACVOL_ZEROC	0x10
#define CS4271_DACVOL_ATAPI_MASK	0x0F
#define CS4271_DACVOL_ATAPI_M_M		0x00
#define CS4271_DACVOL_ATAPI_M_BR	0x01
#define CS4271_DACVOL_ATAPI_M_BL	0x02
#define CS4271_DACVOL_ATAPI_M_BLR2	0x03
#define CS4271_DACVOL_ATAPI_AR_M	0x04
#define CS4271_DACVOL_ATAPI_AR_BR	0x05
#define CS4271_DACVOL_ATAPI_AR_BL	0x06
#define CS4271_DACVOL_ATAPI_AR_BLR2	0x07
#define CS4271_DACVOL_ATAPI_AL_M	0x08
#define CS4271_DACVOL_ATAPI_AL_BR	0x09
#define CS4271_DACVOL_ATAPI_AL_BL	0x0A
#define CS4271_DACVOL_ATAPI_AL_BLR2	0x0B
#define CS4271_DACVOL_ATAPI_ALR2_M	0x0C
#define CS4271_DACVOL_ATAPI_ALR2_BR	0x0D
#define CS4271_DACVOL_ATAPI_ALR2_BL	0x0E
#define CS4271_DACVOL_ATAPI_ALR2_BLR2	0x0F
#define CS4271_VOLA_MUTE	0x80
#define CS4271_VOLA_VOL_MASK	0x7F
#define CS4271_VOLB_MUTE	0x80
#define CS4271_VOLB_VOL_MASK	0x7F
#define CS4271_ADCCTL_DITHER16	0x20
#define CS4271_ADCCTL_ADC_DIF_MASK	0x10
#define CS4271_ADCCTL_ADC_DIF_LJ	0x00
#define CS4271_ADCCTL_ADC_DIF_I2S	0x10
#define CS4271_ADCCTL_MUTEA	0x08
#define CS4271_ADCCTL_MUTEB	0x04
#define CS4271_ADCCTL_HPFDA	0x02
#define CS4271_ADCCTL_HPFDB	0x01
#define CS4271_MODE2_LOOP	0x10
#define CS4271_MODE2_MUTECAEQUB	0x08
#define CS4271_MODE2_FREEZE	0x04
#define CS4271_MODE2_CPEN	0x02
#define CS4271_MODE2_PDN	0x01
#define CS4271_CHIPID_PART_MASK	0xF0
#define CS4271_CHIPID_REV_MASK	0x0F
static const u8 cs4271_dflt_reg[CS4271_NR_REGS] = ;
struct cs4271_private ;
static int cs4271_set_dai_sysclk(struct snd_soc_dai *codec_dai,
int clk_id, unsigned int freq, int dir)
static int cs4271_set_dai_fmt(struct snd_soc_dai *codec_dai,
unsigned int format)
static int cs4271_deemph[] = ;
static int cs4271_set_deemph(struct snd_soc_codec *codec)
static int cs4271_get_deemph(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int cs4271_put_deemph(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
struct cs4271_clk_cfg ;
static struct cs4271_clk_cfg cs4271_clk_tab[] = ;
#define CS4171_NR_RATIOS ARRAY_SIZE(cs4271_clk_tab)
static int cs4271_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params,
struct snd_soc_dai *dai)
static int cs4271_digital_mute(struct snd_soc_dai *dai, int mute)
static DECLARE_TLV_DB_SCALE(cs4271_dac_tlv, -12700, 100, 0);
static const struct snd_kcontrol_new cs4271_snd_controls[] = ;
static struct snd_soc_dai_ops cs4271_dai_ops = ;
static struct snd_soc_dai_driver cs4271_dai = ;
static int cs4271_soc_suspend(struct snd_soc_codec *codec, pm_message_t mesg)
static int cs4271_soc_resume(struct snd_soc_codec *codec)
#define cs4271_soc_suspend	NULL
#define cs4271_soc_resume	NULL
static int cs4271_probe(struct snd_soc_codec *codec)
static int cs4271_remove(struct snd_soc_codec *codec)
;
static struct snd_soc_codec_driver soc_codec_dev_cs4271 = ;
#if defined(CONFIG_SPI_MASTER)
static int __devinit cs4271_spi_probe(struct spi_device *spi)
static int __devexit cs4271_spi_remove(struct spi_device *spi)
static struct spi_driver cs4271_spi_driver = ;
#if defined(CONFIG_I2C) || defined(CONFIG_I2C_MODULE)
static const struct i2c_device_id cs4271_i2c_id[] = ;
MODULE_DEVICE_TABLE(i2c, cs4271_i2c_id);
static int __devinit cs4271_i2c_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int __devexit cs4271_i2c_remove(struct i2c_client *client)
static struct i2c_driver cs4271_i2c_driver = ;
static int __init cs4271_modinit(void)
module_init(cs4271_modinit);
static void __exit cs4271_modexit(void)
module_exit(cs4271_modexit);
MODULE_AUTHOR("Alexander Sverdlin <subaparts@yandex.ru>");
MODULE_DESCRIPTION("Cirrus Logic CS4271 ALSA SoC Codec Driver");
MODULE_LICENSE("GPL");
