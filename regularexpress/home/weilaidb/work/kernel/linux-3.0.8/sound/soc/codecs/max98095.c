enum max98095_type ;
struct max98095_cdata ;
struct max98095_priv ;
static const u8 max98095_reg_def[M98095_REG_CNT] = ;
static struct  max98095_access[M98095_REG_CNT] = ;
static int max98095_readable(struct snd_soc_codec *codec, unsigned int reg)
static int max98095_volatile(struct snd_soc_codec *codec, unsigned int reg)
static int max98095_hw_write(struct snd_soc_codec *codec, unsigned int reg,
unsigned int value)
static void m98095_eq_band(struct snd_soc_codec *codec, unsigned int dai,
unsigned int band, u16 *coefs)
static void m98095_biquad_band(struct snd_soc_codec *codec, unsigned int dai,
unsigned int band, u16 *coefs)
static const char * const max98095_fltr_mode[] = ;
static const struct soc_enum max98095_dai1_filter_mode_enum[] = ;
static const struct soc_enum max98095_dai2_filter_mode_enum[] = ;
static const char * const max98095_extmic_text[] = ;
static const struct soc_enum max98095_extmic_enum =
SOC_ENUM_SINGLE(M98095_087_CFG_MIC, 0, 3, max98095_extmic_text);
static const struct snd_kcontrol_new max98095_extmic_mux =
SOC_DAPM_ENUM("External MIC Mux", max98095_extmic_enum);
static const char * const max98095_linein_text[] = ;
static const struct soc_enum max98095_linein_enum =
SOC_ENUM_SINGLE(M98095_086_CFG_LINE, 6, 2, max98095_linein_text);
static const struct snd_kcontrol_new max98095_linein_mux =
SOC_DAPM_ENUM("Linein Input Mux", max98095_linein_enum);
static const char * const max98095_line_mode_text[] = ;
static const struct soc_enum max98095_linein_mode_enum =
SOC_ENUM_SINGLE(M98095_086_CFG_LINE, 7, 2, max98095_line_mode_text);
static const struct soc_enum max98095_lineout_mode_enum =
SOC_ENUM_SINGLE(M98095_086_CFG_LINE, 4, 2, max98095_line_mode_text);
static const char * const max98095_dai_fltr[] = ;
static const struct soc_enum max98095_dai1_dac_filter_enum[] = ;
static const struct soc_enum max98095_dai2_dac_filter_enum[] = ;
static const struct soc_enum max98095_dai3_dac_filter_enum[] = ;
static int max98095_mic1pre_set(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int max98095_mic1pre_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int max98095_mic2pre_set(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int max98095_mic2pre_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static const unsigned int max98095_micboost_tlv[] = ;
static const DECLARE_TLV_DB_SCALE(max98095_mic_tlv, 0, 100, 0);
static const DECLARE_TLV_DB_SCALE(max98095_adc_tlv, -1200, 100, 0);
static const DECLARE_TLV_DB_SCALE(max98095_adcboost_tlv, 0, 600, 0);
static const unsigned int max98095_hp_tlv[] = ;
static const unsigned int max98095_spk_tlv[] = ;
static const unsigned int max98095_rcv_lout_tlv[] = ;
static const unsigned int max98095_lin_tlv[] = ;
static const struct snd_kcontrol_new max98095_snd_controls[] = ;
static const struct snd_kcontrol_new max98095_left_speaker_mixer_controls[] = ;
static const struct snd_kcontrol_new max98095_right_speaker_mixer_controls[] = ;
static const struct snd_kcontrol_new max98095_left_hp_mixer_controls[] = ;
static const struct snd_kcontrol_new max98095_right_hp_mixer_controls[] = ;
static const struct snd_kcontrol_new max98095_mono_rcv_mixer_controls[] = ;
static const struct snd_kcontrol_new max98095_left_lineout_mixer_controls[] = ;
static const struct snd_kcontrol_new max98095_right_lineout_mixer_controls[] = ;
static const struct snd_kcontrol_new max98095_left_ADC_mixer_controls[] = ;
static const struct snd_kcontrol_new max98095_right_ADC_mixer_controls[] = ;
static int max98095_mic_event(struct snd_soc_dapm_widget *w,
struct snd_kcontrol *kcontrol, int event)
static int max98095_line_pga(struct snd_soc_dapm_widget *w,
int event, u8 channel)
static int max98095_pga_in1_event(struct snd_soc_dapm_widget *w,
struct snd_kcontrol *k, int event)
static int max98095_pga_in2_event(struct snd_soc_dapm_widget *w,
struct snd_kcontrol *k, int event)
static int max98095_lineout_event(struct snd_soc_dapm_widget *w,
struct snd_kcontrol *kcontrol, int event)
static const struct snd_soc_dapm_widget max98095_dapm_widgets[] = ;
static const struct snd_soc_dapm_route max98095_audio_map[] = ;
static int max98095_add_widgets(struct snd_soc_codec *codec)
static const struct  rate_table[] = ;
static int rate_value(int rate, u8 *value)
static int max98095_dai1_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params,
struct snd_soc_dai *dai)
static int max98095_dai2_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params,
struct snd_soc_dai *dai)
static int max98095_dai3_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params,
struct snd_soc_dai *dai)
static int max98095_dai_set_sysclk(struct snd_soc_dai *dai,
int clk_id, unsigned int freq, int dir)
static int max98095_dai1_set_fmt(struct snd_soc_dai *codec_dai,
unsigned int fmt)
static int max98095_dai2_set_fmt(struct snd_soc_dai *codec_dai,
unsigned int fmt)
static int max98095_dai3_set_fmt(struct snd_soc_dai *codec_dai,
unsigned int fmt)
static int max98095_set_bias_level(struct snd_soc_codec *codec,
enum snd_soc_bias_level level)
#define MAX98095_RATES SNDRV_PCM_RATE_8000_96000
#define MAX98095_FORMATS (SNDRV_PCM_FMTBIT_S16_LE | SNDRV_PCM_FMTBIT_S24_LE)
static struct snd_soc_dai_ops max98095_dai1_ops = ;
static struct snd_soc_dai_ops max98095_dai2_ops = ;
static struct snd_soc_dai_ops max98095_dai3_ops = ;
static struct snd_soc_dai_driver max98095_dai[] = ;
static int max98095_get_eq_channel(const char *name)
static int max98095_put_eq_enum(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int max98095_get_eq_enum(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static void max98095_handle_eq_pdata(struct snd_soc_codec *codec)
static int max98095_get_bq_channel(const char *name)
static int max98095_put_bq_enum(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int max98095_get_bq_enum(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static void max98095_handle_bq_pdata(struct snd_soc_codec *codec)
static void max98095_handle_pdata(struct snd_soc_codec *codec)
static int max98095_suspend(struct snd_soc_codec *codec, pm_message_t state)
static int max98095_resume(struct snd_soc_codec *codec)
#define max98095_suspend NULL
#define max98095_resume NULL
static int max98095_reset(struct snd_soc_codec *codec)
static int max98095_probe(struct snd_soc_codec *codec)
static int max98095_remove(struct snd_soc_codec *codec)
static struct snd_soc_codec_driver soc_codec_dev_max98095 = ;
static int max98095_i2c_probe(struct i2c_client *i2c,
const struct i2c_device_id *id)
static int __devexit max98095_i2c_remove(struct i2c_client *client)
static const struct i2c_device_id max98095_i2c_id[] = ;
MODULE_DEVICE_TABLE(i2c, max98095_i2c_id);
static struct i2c_driver max98095_i2c_driver = ;
static int __init max98095_init(void)
module_init(max98095_init);
static void __exit max98095_exit(void)
module_exit(max98095_exit);
MODULE_DESCRIPTION("ALSA SoC MAX98095 driver");
MODULE_AUTHOR("Peter Hsiang");
MODULE_LICENSE("GPL");
