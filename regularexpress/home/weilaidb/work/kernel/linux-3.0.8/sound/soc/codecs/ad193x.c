struct ad193x_priv ;
static const u8 ad193x_reg[AD193X_NUM_REGS] = ;
static const char *ad193x_deemp[] = ;
static const struct soc_enum ad193x_deemp_enum =
SOC_ENUM_SINGLE(AD193X_DAC_CTRL2, 1, 4, ad193x_deemp);
static const struct snd_kcontrol_new ad193x_snd_controls[] = ;
static const struct snd_soc_dapm_widget ad193x_dapm_widgets[] = ;
static const struct snd_soc_dapm_route audio_paths[] = ;
static int ad193x_mute(struct snd_soc_dai *dai, int mute)
static int ad193x_set_tdm_slot(struct snd_soc_dai *dai, unsigned int tx_mask,
unsigned int rx_mask, int slots, int width)
static int ad193x_set_dai_fmt(struct snd_soc_dai *codec_dai,
unsigned int fmt)
static int ad193x_set_dai_sysclk(struct snd_soc_dai *codec_dai,
int clk_id, unsigned int freq, int dir)
static int ad193x_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params,
struct snd_soc_dai *dai)
static struct snd_soc_dai_ops ad193x_dai_ops = ;
static struct snd_soc_dai_driver ad193x_dai = ;
static int ad193x_probe(struct snd_soc_codec *codec)
static struct snd_soc_codec_driver soc_codec_dev_ad193x = ;
#if defined(CONFIG_SPI_MASTER)
static int __devinit ad193x_spi_probe(struct spi_device *spi)
static int __devexit ad193x_spi_remove(struct spi_device *spi)
static struct spi_driver ad193x_spi_driver = ;
#if defined(CONFIG_I2C) || defined(CONFIG_I2C_MODULE)
static const struct i2c_device_id ad193x_id[] = ;
MODULE_DEVICE_TABLE(i2c, ad193x_id);
static int __devinit ad193x_i2c_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int __devexit ad193x_i2c_remove(struct i2c_client *client)
static struct i2c_driver ad193x_i2c_driver = ;
static int __init ad193x_modinit(void)
module_init(ad193x_modinit);
static void __exit ad193x_modexit(void)
module_exit(ad193x_modexit);
MODULE_DESCRIPTION("ASoC ad193x driver");
MODULE_AUTHOR("Barry Song <21cnbao@gmail.com>");
MODULE_LICENSE("GPL");
