#define AIC23_VERSION "0.1"
static const u16 tlv320aic23_reg[] = ;
static inline unsigned int tlv320aic23_read_reg_cache(struct snd_soc_codec
*codec, unsigned int reg)
static inline void tlv320aic23_write_reg_cache(struct snd_soc_codec *codec,
u8 reg, u16 value)
static int tlv320aic23_write(struct snd_soc_codec *codec, unsigned int reg,
unsigned int value)
static const char *rec_src_text[] = ;
static const char *deemph_text[] = ;
static const struct soc_enum rec_src_enum =
SOC_ENUM_SINGLE(TLV320AIC23_ANLG, 2, 2, rec_src_text);
static const struct snd_kcontrol_new tlv320aic23_rec_src_mux_controls =
SOC_DAPM_ENUM("Input Select", rec_src_enum);
static const struct soc_enum tlv320aic23_rec_src =
SOC_ENUM_SINGLE(TLV320AIC23_ANLG, 2, 2, rec_src_text);
static const struct soc_enum tlv320aic23_deemph =
SOC_ENUM_SINGLE(TLV320AIC23_DIGT, 1, 4, deemph_text);
static const DECLARE_TLV_DB_SCALE(out_gain_tlv, -12100, 100, 0);
static const DECLARE_TLV_DB_SCALE(input_gain_tlv, -1725, 75, 0);
static const DECLARE_TLV_DB_SCALE(sidetone_vol_tlv, -1800, 300, 0);
static int snd_soc_tlv320aic23_put_volsw(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_soc_tlv320aic23_get_volsw(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
#define SOC_TLV320AIC23_SINGLE_TLV(xname, reg, shift, max, invert, tlv_array) \
static const struct snd_kcontrol_new tlv320aic23_snd_controls[] = ;
static const struct snd_kcontrol_new tlv320aic23_output_mixer_controls[] = ;
static const struct snd_soc_dapm_widget tlv320aic23_dapm_widgets[] = ;
static const struct snd_soc_dapm_route tlv320aic23_intercon[] = ;
struct aic23 ;
static const int bosr_usb_divisor_table[] = ;
#define LOWER_GROUP ((1<<0) | (1<<1) | (1<<2) | (1<<3) | (1<<6) | (1<<7))
#define UPPER_GROUP ((1<<8) | (1<<9) | (1<<10) | (1<<11)        | (1<<15))
static const unsigned short sr_valid_mask[] = ;
#define SR_MULT (11*12)
#define A(x) (SR_MULT/x)
static const unsigned char sr_adc_mult_table[] = ;
static const unsigned char sr_dac_mult_table[] = ;
static unsigned get_score(int adc, int adc_l, int adc_h, int need_adc,
int dac, int dac_l, int dac_h, int need_dac)
static int find_rate(int mclk, u32 need_adc, u32 need_dac)
static void get_current_sample_rates(struct snd_soc_codec *codec, int mclk,
u32 *sample_rate_adc, u32 *sample_rate_dac)
static int set_sample_rate_control(struct snd_soc_codec *codec, int mclk,
u32 sample_rate_adc, u32 sample_rate_dac)
static int tlv320aic23_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params,
struct snd_soc_dai *dai)
static int tlv320aic23_pcm_prepare(struct snd_pcm_substream *substream,
struct snd_soc_dai *dai)
static void tlv320aic23_shutdown(struct snd_pcm_substream *substream,
struct snd_soc_dai *dai)
static int tlv320aic23_mute(struct snd_soc_dai *dai, int mute)
static int tlv320aic23_set_dai_fmt(struct snd_soc_dai *codec_dai,
unsigned int fmt)
static int tlv320aic23_set_dai_sysclk(struct snd_soc_dai *codec_dai,
int clk_id, unsigned int freq, int dir)
static int tlv320aic23_set_bias_level(struct snd_soc_codec *codec,
enum snd_soc_bias_level level)
#define AIC23_RATES	SNDRV_PCM_RATE_8000_96000
#define AIC23_FORMATS	(SNDRV_PCM_FMTBIT_S16_LE | SNDRV_PCM_FMTBIT_S20_3LE | \
SNDRV_PCM_FMTBIT_S24_3LE | SNDRV_PCM_FMTBIT_S32_LE)
static struct snd_soc_dai_ops tlv320aic23_dai_ops = ;
static struct snd_soc_dai_driver tlv320aic23_dai = ;
static int tlv320aic23_suspend(struct snd_soc_codec *codec,
pm_message_t state)
static int tlv320aic23_resume(struct snd_soc_codec *codec)
static int tlv320aic23_probe(struct snd_soc_codec *codec)
static int tlv320aic23_remove(struct snd_soc_codec *codec)
static struct snd_soc_codec_driver soc_codec_dev_tlv320aic23 = ;
#if defined(CONFIG_I2C) || defined(CONFIG_I2C_MODULE)
static int tlv320aic23_codec_probe(struct i2c_client *i2c,
const struct i2c_device_id *i2c_id)
static int __exit tlv320aic23_i2c_remove(struct i2c_client *i2c)
static const struct i2c_device_id tlv320aic23_id[] = ;
MODULE_DEVICE_TABLE(i2c, tlv320aic23_id);
static struct i2c_driver tlv320aic23_i2c_driver = ;
static int __init tlv320aic23_modinit(void)
module_init(tlv320aic23_modinit);
static void __exit tlv320aic23_exit(void)
module_exit(tlv320aic23_exit);
MODULE_DESCRIPTION("ASoC TLV320AIC23 codec driver");
MODULE_AUTHOR("Arun KS <arunks@mistralsolutions.com>");
MODULE_LICENSE("GPL");
