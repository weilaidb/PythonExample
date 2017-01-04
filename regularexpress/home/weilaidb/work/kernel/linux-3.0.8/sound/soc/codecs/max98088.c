enum max98088_type ;
struct max98088_cdata ;
struct max98088_priv ;
static const u8 max98088_reg[M98088_REG_CNT] = ;
static struct  max98088_access[M98088_REG_CNT] = ;
static int max98088_volatile_register(struct snd_soc_codec *codec, unsigned int reg)
static void m98088_eq_band(struct snd_soc_codec *codec, unsigned int dai,
unsigned int band, u16 *coefs)
static const char *max98088_exmode_texts[] = ;
static const unsigned int max98088_exmode_values[] = ;
static const struct soc_enum max98088_exmode_enum =
SOC_VALUE_ENUM_SINGLE(M98088_REG_41_SPKDHP, 0, 127,
ARRAY_SIZE(max98088_exmode_texts),
max98088_exmode_texts,
max98088_exmode_values);
static const char *max98088_ex_thresh[] = ;
static const struct soc_enum max98088_ex_thresh_enum[] = ;
static const char *max98088_fltr_mode[] = ;
static const struct soc_enum max98088_filter_mode_enum[] = ;
static const char *max98088_extmic_text[] = ;
static const struct soc_enum max98088_extmic_enum =
SOC_ENUM_SINGLE(M98088_REG_48_CFG_MIC, 0, 3, max98088_extmic_text);
static const struct snd_kcontrol_new max98088_extmic_mux =
SOC_DAPM_ENUM("External MIC Mux", max98088_extmic_enum);
static const char *max98088_dai1_fltr[] = ;
static const struct soc_enum max98088_dai1_dac_filter_enum[] = ;
static const struct soc_enum max98088_dai1_adc_filter_enum[] = ;
static int max98088_mic1pre_set(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int max98088_mic1pre_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int max98088_mic2pre_set(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int max98088_mic2pre_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static const unsigned int max98088_micboost_tlv[] = ;
static const struct snd_kcontrol_new max98088_snd_controls[] = ;
static const struct snd_kcontrol_new max98088_left_speaker_mixer_controls[] = ;
static const struct snd_kcontrol_new max98088_right_speaker_mixer_controls[] = ;
static const struct snd_kcontrol_new max98088_left_hp_mixer_controls[] = ;
static const struct snd_kcontrol_new max98088_right_hp_mixer_controls[] = ;
static const struct snd_kcontrol_new max98088_left_rec_mixer_controls[] = ;
static const struct snd_kcontrol_new max98088_right_rec_mixer_controls[] = ;
static const struct snd_kcontrol_new max98088_left_ADC_mixer_controls[] = ;
static const struct snd_kcontrol_new max98088_right_ADC_mixer_controls[] = ;
static int max98088_mic_event(struct snd_soc_dapm_widget *w,
struct snd_kcontrol *kcontrol, int event)
static int max98088_line_pga(struct snd_soc_dapm_widget *w,
int event, int line, u8 channel)
static int max98088_pga_ina1_event(struct snd_soc_dapm_widget *w,
struct snd_kcontrol *k, int event)
static int max98088_pga_ina2_event(struct snd_soc_dapm_widget *w,
struct snd_kcontrol *k, int event)
static int max98088_pga_inb1_event(struct snd_soc_dapm_widget *w,
struct snd_kcontrol *k, int event)
static int max98088_pga_inb2_event(struct snd_soc_dapm_widget *w,
struct snd_kcontrol *k, int event)
static const struct snd_soc_dapm_widget max98088_dapm_widgets[] = ;
static const struct snd_soc_dapm_route max98088_audio_map[] = ;
static const struct  rate_table[] = ;
static inline int rate_value(int rate, u8 *value)
static int max98088_dai1_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params,
struct snd_soc_dai *dai)
static int max98088_dai2_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params,
struct snd_soc_dai *dai)
static int max98088_dai_set_sysclk(struct snd_soc_dai *dai,
int clk_id, unsigned int freq, int dir)
static int max98088_dai1_set_fmt(struct snd_soc_dai *codec_dai,
unsigned int fmt)
static int max98088_dai2_set_fmt(struct snd_soc_dai *codec_dai,
unsigned int fmt)
static int max98088_dai1_digital_mute(struct snd_soc_dai *codec_dai, int mute)
static int max98088_dai2_digital_mute(struct snd_soc_dai *codec_dai, int mute)
static void max98088_sync_cache(struct snd_soc_codec *codec)
static int max98088_set_bias_level(struct snd_soc_codec *codec,
enum snd_soc_bias_level level)
#define MAX98088_RATES SNDRV_PCM_RATE_8000_96000
#define MAX98088_FORMATS (SNDRV_PCM_FMTBIT_S16_LE | SNDRV_PCM_FMTBIT_S24_LE)
static struct snd_soc_dai_ops max98088_dai1_ops = ;
static struct snd_soc_dai_ops max98088_dai2_ops = ;
static struct snd_soc_dai_driver max98088_dai[] = ;
static int max98088_get_channel(const char *name)
static void max98088_setup_eq1(struct snd_soc_codec *codec)
static void max98088_setup_eq2(struct snd_soc_codec *codec)
static int max98088_put_eq_enum(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int max98088_get_eq_enum(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static void max98088_handle_eq_pdata(struct snd_soc_codec *codec)
static void max98088_handle_pdata(struct snd_soc_codec *codec)
static int max98088_suspend(struct snd_soc_codec *codec, pm_message_t state)
static int max98088_resume(struct snd_soc_codec *codec)
#define max98088_suspend NULL
#define max98088_resume NULL
static int max98088_probe(struct snd_soc_codec *codec)
static int max98088_remove(struct snd_soc_codec *codec)
static struct snd_soc_codec_driver soc_codec_dev_max98088 = ;
static int max98088_i2c_probe(struct i2c_client *i2c,
const struct i2c_device_id *id)
static int __devexit max98088_i2c_remove(struct i2c_client *client)
static const struct i2c_device_id max98088_i2c_id[] = ;
MODULE_DEVICE_TABLE(i2c, max98088_i2c_id);
static struct i2c_driver max98088_i2c_driver = ;
static int __init max98088_init(void)
module_init(max98088_init);
static void __exit max98088_exit(void)
module_exit(max98088_exit);
MODULE_DESCRIPTION("ALSA SoC MAX98088 driver");
MODULE_AUTHOR("Peter Hsiang, Jesse Marroquin");
MODULE_LICENSE("GPL");
