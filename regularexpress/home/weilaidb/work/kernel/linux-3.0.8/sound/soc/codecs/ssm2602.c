#define SSM2602_VERSION "0.1"
enum ssm2602_type ;
struct ssm2602_priv ;
static const u16 ssm2602_reg[SSM2602_CACHEREGNUM] = ;
#define ssm2602_reset(c)	snd_soc_write(c, SSM2602_RESET, 0)
static const char *ssm2602_input_select[] = ;
static const char *ssm2602_deemph[] = ;
static const struct soc_enum ssm2602_enum[] = ;
static const unsigned int ssm260x_outmix_tlv[] = ;
static const DECLARE_TLV_DB_SCALE(ssm260x_inpga_tlv, -3450, 150, 0);
static const DECLARE_TLV_DB_SCALE(ssm260x_sidetone_tlv, -1500, 300, 0);
static const struct snd_kcontrol_new ssm260x_snd_controls[] = ;
static const struct snd_kcontrol_new ssm2602_snd_controls[] = ;
static const struct snd_kcontrol_new ssm260x_output_mixer_controls[] = ;
static const struct snd_kcontrol_new ssm2602_input_mux_controls =
SOC_DAPM_ENUM("Input Select", ssm2602_enum[0]);
static const struct snd_soc_dapm_widget ssm260x_dapm_widgets[] = ;
static const struct snd_soc_dapm_widget ssm2602_dapm_widgets[] = ;
static const struct snd_soc_dapm_widget ssm2604_dapm_widgets[] = ;
static const struct snd_soc_dapm_route ssm260x_routes[] = ;
static const struct snd_soc_dapm_route ssm2602_routes[] = ;
static const struct snd_soc_dapm_route ssm2604_routes[] = ;
struct ssm2602_coeff ;
#define SSM2602_COEFF_SRATE(sr, bosr, usb) (((sr) << 2) | ((bosr) << 1) | (usb))
static const struct ssm2602_coeff ssm2602_coeff_table[] = ;
static inline int ssm2602_get_coeff(int mclk, int rate)
static int ssm2602_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params,
struct snd_soc_dai *dai)
static int ssm2602_startup(struct snd_pcm_substream *substream,
struct snd_soc_dai *dai)
static void ssm2602_shutdown(struct snd_pcm_substream *substream,
struct snd_soc_dai *dai)
static int ssm2602_mute(struct snd_soc_dai *dai, int mute)
static int ssm2602_set_dai_sysclk(struct snd_soc_dai *codec_dai,
int clk_id, unsigned int freq, int dir)
static int ssm2602_set_dai_fmt(struct snd_soc_dai *codec_dai,
unsigned int fmt)
static int ssm2602_set_bias_level(struct snd_soc_codec *codec,
enum snd_soc_bias_level level)
#define SSM2602_RATES (SNDRV_PCM_RATE_8000 | SNDRV_PCM_RATE_32000 |\
SNDRV_PCM_RATE_44100 | SNDRV_PCM_RATE_48000 |\
SNDRV_PCM_RATE_88200 | SNDRV_PCM_RATE_96000)
#define SSM2602_FORMATS (SNDRV_PCM_FMTBIT_S16_LE | SNDRV_PCM_FMTBIT_S20_3LE |\
SNDRV_PCM_FMTBIT_S24_LE | SNDRV_PCM_FMTBIT_S32_LE)
static struct snd_soc_dai_ops ssm2602_dai_ops = ;
static struct snd_soc_dai_driver ssm2602_dai = ;
static int ssm2602_suspend(struct snd_soc_codec *codec, pm_message_t state)
static int ssm2602_resume(struct snd_soc_codec *codec)
static int ssm2602_probe(struct snd_soc_codec *codec)
static int ssm2604_probe(struct snd_soc_codec *codec)
static int ssm260x_probe(struct snd_soc_codec *codec)
static int ssm2602_remove(struct snd_soc_codec *codec)
static struct snd_soc_codec_driver soc_codec_dev_ssm2602 = ;
#if defined(CONFIG_SPI_MASTER)
static int __devinit ssm2602_spi_probe(struct spi_device *spi)
static int __devexit ssm2602_spi_remove(struct spi_device *spi)
static struct spi_driver ssm2602_spi_driver = ;
#if defined(CONFIG_I2C) || defined(CONFIG_I2C_MODULE)
static int __devinit ssm2602_i2c_probe(struct i2c_client *i2c,
const struct i2c_device_id *id)
static int __devexit ssm2602_i2c_remove(struct i2c_client *client)
static const struct i2c_device_id ssm2602_i2c_id[] = ;
MODULE_DEVICE_TABLE(i2c, ssm2602_i2c_id);
static struct i2c_driver ssm2602_i2c_driver = ;
static int __init ssm2602_modinit(void)
module_init(ssm2602_modinit);
static void __exit ssm2602_exit(void)
module_exit(ssm2602_exit);
MODULE_DESCRIPTION("ASoC SSM2602/SSM2603/SSM2604 driver");
MODULE_AUTHOR("Cliff Cai");
MODULE_LICENSE("GPL");
