struct ak4641_priv ;
static const u8 ak4641_reg[AK4641_CACHEREGNUM] = ;
static const int deemph_settings[] = ;
static int ak4641_set_deemph(struct snd_soc_codec *codec)
static int ak4641_put_deemph(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int ak4641_get_deemph(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
;
static const char *ak4641_mono_out[] = ;
static const char *ak4641_hp_out[] = ;
static const char *ak4641_mic_select[] = ;
static const char *ak4641_mic_or_dac[] = ;
static const DECLARE_TLV_DB_SCALE(mono_gain_tlv, -1700, 2300, 0);
static const DECLARE_TLV_DB_SCALE(mic_boost_tlv, 0, 2000, 0);
static const DECLARE_TLV_DB_SCALE(eq_tlv, -1050, 150, 0);
static const DECLARE_TLV_DB_SCALE(master_tlv, -12750, 50, 0);
static const DECLARE_TLV_DB_SCALE(mic_stereo_sidetone_tlv, -2700, 300, 0);
static const DECLARE_TLV_DB_SCALE(mic_mono_sidetone_tlv, -400, 400, 0);
static const DECLARE_TLV_DB_SCALE(capture_tlv, -800, 50, 0);
static const DECLARE_TLV_DB_SCALE(alc_tlv, -800, 50, 0);
static const DECLARE_TLV_DB_SCALE(aux_in_tlv, -2100, 300, 0);
static const struct soc_enum ak4641_mono_out_enum =
SOC_ENUM_SINGLE(AK4641_SIG1, 6, 2, ak4641_mono_out);
static const struct soc_enum ak4641_hp_out_enum =
SOC_ENUM_SINGLE(AK4641_MODE2, 2, 2, ak4641_hp_out);
static const struct soc_enum ak4641_mic_select_enum =
SOC_ENUM_SINGLE(AK4641_MIC, 1, 2, ak4641_mic_select);
static const struct soc_enum ak4641_mic_or_dac_enum =
SOC_ENUM_SINGLE(AK4641_BTIF, 4, 2, ak4641_mic_or_dac);
static const struct snd_kcontrol_new ak4641_snd_controls[] = ;
static const struct snd_kcontrol_new ak4641_mono1_mixer_controls[] = ;
static const struct snd_kcontrol_new ak4641_stereo_mixer_controls[] = ;
static const struct snd_kcontrol_new ak4641_input_mixer_controls[] = ;
static const struct snd_kcontrol_new ak4641_mic_mux_control =
SOC_DAPM_ENUM("Mic Select", ak4641_mic_select_enum);
static const struct snd_kcontrol_new ak4641_input_mux_control =
SOC_DAPM_ENUM("Input Select", ak4641_mic_or_dac_enum);
static const struct snd_kcontrol_new ak4641_mono2_control =
SOC_DAPM_SINGLE("Switch", AK4641_SIG1, 0, 1, 0);
static const struct snd_soc_dapm_widget ak4641_dapm_widgets[] = ;
static const struct snd_soc_dapm_route ak4641_audio_map[] = ;
static int ak4641_set_dai_sysclk(struct snd_soc_dai *codec_dai,
int clk_id, unsigned int freq, int dir)
static int ak4641_i2s_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params,
struct snd_soc_dai *dai)
static int ak4641_pcm_set_dai_fmt(struct snd_soc_dai *codec_dai,
unsigned int fmt)
static int ak4641_i2s_set_dai_fmt(struct snd_soc_dai *codec_dai,
unsigned int fmt)
static int ak4641_mute(struct snd_soc_dai *dai, int mute)
static int ak4641_set_bias_level(struct snd_soc_codec *codec,
enum snd_soc_bias_level level)
#define AK4641_RATES	(SNDRV_PCM_RATE_8000_48000)
#define AK4641_RATES_BT (SNDRV_PCM_RATE_8000 | SNDRV_PCM_RATE_11025 |\
SNDRV_PCM_RATE_16000)
#define AK4641_FORMATS	(SNDRV_PCM_FMTBIT_S16_LE)
static struct snd_soc_dai_ops ak4641_i2s_dai_ops = ;
static struct snd_soc_dai_ops ak4641_pcm_dai_ops = ;
struct snd_soc_dai_driver ak4641_dai[] = ;
static int ak4641_suspend(struct snd_soc_codec *codec, pm_message_t state)
static int ak4641_resume(struct snd_soc_codec *codec)
static int ak4641_probe(struct snd_soc_codec *codec)
static int ak4641_remove(struct snd_soc_codec *codec)
static struct snd_soc_codec_driver soc_codec_dev_ak4641 = ;
static int __devinit ak4641_i2c_probe(struct i2c_client *i2c,
const struct i2c_device_id *id)
static int __devexit ak4641_i2c_remove(struct i2c_client *i2c)
static const struct i2c_device_id ak4641_i2c_id[] = ;
MODULE_DEVICE_TABLE(i2c, ak4641_i2c_id);
static struct i2c_driver ak4641_i2c_driver = ;
static int __init ak4641_modinit(void)
module_init(ak4641_modinit);
static void __exit ak4641_exit(void)
module_exit(ak4641_exit);
MODULE_DESCRIPTION("SoC AK4641 driver");
MODULE_AUTHOR("Harald Welte <laforge@gnufiish.org>");
MODULE_LICENSE("GPL");
