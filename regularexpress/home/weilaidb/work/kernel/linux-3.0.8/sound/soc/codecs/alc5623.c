static int caps_charge = 2000;
module_param(caps_charge, int, 0);
MODULE_PARM_DESC(caps_charge, "ALC5623 cap charge time (msecs)");
struct alc5623_priv ;
static void alc5623_fill_cache(struct snd_soc_codec *codec)
static inline int alc5623_reset(struct snd_soc_codec *codec)
static int amp_mixer_event(struct snd_soc_dapm_widget *w,
struct snd_kcontrol *kcontrol, int event)
static const DECLARE_TLV_DB_SCALE(vol_tlv, -3450, 150, 0);
static const DECLARE_TLV_DB_SCALE(hp_tlv, -4650, 150, 0);
static const DECLARE_TLV_DB_SCALE(adc_rec_tlv, -1650, 150, 0);
static const unsigned int boost_tlv[] = ;
static const DECLARE_TLV_DB_SCALE(dig_tlv, 0, 600, 0);
static const struct snd_kcontrol_new rt5621_vol_snd_controls[] = ;
static const struct snd_kcontrol_new rt5622_vol_snd_controls[] = ;
static const struct snd_kcontrol_new alc5623_vol_snd_controls[] = ;
static const struct snd_kcontrol_new alc5623_snd_controls[] = ;
static const struct snd_kcontrol_new alc5623_hp_mixer_controls[] = ;
static const struct snd_kcontrol_new alc5623_hpl_mixer_controls[] = ;
static const struct snd_kcontrol_new alc5623_hpr_mixer_controls[] = ;
static const struct snd_kcontrol_new alc5623_mono_mixer_controls[] = ;
static const struct snd_kcontrol_new alc5623_speaker_mixer_controls[] = ;
static const struct snd_kcontrol_new alc5623_captureL_mixer_controls[] = ;
static const struct snd_kcontrol_new alc5623_captureR_mixer_controls[] = ;
static const char *alc5623_spk_n_sour_sel[] = ;
static const char *alc5623_hpl_out_input_sel[] = ;
static const char *alc5623_hpr_out_input_sel[] = ;
static const char *alc5623_spkout_input_sel[] = ;
static const char *alc5623_aux_out_input_sel[] = ;
static const struct soc_enum alc5623_aux_out_input_enum =
SOC_ENUM_SINGLE(ALC5623_OUTPUT_MIXER_CTRL, 6, 4, alc5623_aux_out_input_sel);
static const struct snd_kcontrol_new alc5623_auxout_mux_controls =
SOC_DAPM_ENUM("Route", alc5623_aux_out_input_enum);
static const struct soc_enum alc5623_spkout_input_enum =
SOC_ENUM_SINGLE(ALC5623_OUTPUT_MIXER_CTRL, 10, 4, alc5623_spkout_input_sel);
static const struct snd_kcontrol_new alc5623_spkout_mux_controls =
SOC_DAPM_ENUM("Route", alc5623_spkout_input_enum);
static const struct soc_enum alc5623_hpl_out_input_enum =
SOC_ENUM_SINGLE(ALC5623_OUTPUT_MIXER_CTRL, 9, 2, alc5623_hpl_out_input_sel);
static const struct snd_kcontrol_new alc5623_hpl_out_mux_controls =
SOC_DAPM_ENUM("Route", alc5623_hpl_out_input_enum);
static const struct soc_enum alc5623_hpr_out_input_enum =
SOC_ENUM_SINGLE(ALC5623_OUTPUT_MIXER_CTRL, 8, 2, alc5623_hpr_out_input_sel);
static const struct snd_kcontrol_new alc5623_hpr_out_mux_controls =
SOC_DAPM_ENUM("Route", alc5623_hpr_out_input_enum);
static const struct soc_enum alc5623_spk_n_sour_enum =
SOC_ENUM_SINGLE(ALC5623_OUTPUT_MIXER_CTRL, 14, 4, alc5623_spk_n_sour_sel);
static const struct snd_kcontrol_new alc5623_spkoutn_mux_controls =
SOC_DAPM_ENUM("Route", alc5623_spk_n_sour_enum);
static const struct snd_soc_dapm_widget alc5623_dapm_widgets[] = ;
static const char *alc5623_amp_names[] = ;
static const struct soc_enum alc5623_amp_enum =
SOC_ENUM_SINGLE(ALC5623_OUTPUT_MIXER_CTRL, 13, 2, alc5623_amp_names);
static const struct snd_kcontrol_new alc5623_amp_mux_controls =
SOC_DAPM_ENUM("Route", alc5623_amp_enum);
static const struct snd_soc_dapm_widget alc5623_dapm_amp_widgets[] = ;
static const struct snd_soc_dapm_route intercon[] = ;
static const struct snd_soc_dapm_route intercon_spk[] = ;
static const struct snd_soc_dapm_route intercon_amp_spk[] = ;
struct _pll_div ;
static const struct _pll_div codec_master_pll_div[] = ;
static const struct _pll_div codec_slave_pll_div[] = ;
static int alc5623_set_dai_pll(struct snd_soc_dai *codec_dai, int pll_id,
int source, unsigned int freq_in, unsigned int freq_out)
struct _coeff_div ;
static const struct _coeff_div coeff_div[] = ;
static int get_coeff(struct snd_soc_codec *codec, int rate)
static int alc5623_set_dai_sysclk(struct snd_soc_dai *codec_dai,
int clk_id, unsigned int freq, int dir)
static int alc5623_set_dai_fmt(struct snd_soc_dai *codec_dai,
unsigned int fmt)
static int alc5623_pcm_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params, struct snd_soc_dai *dai)
static int alc5623_mute(struct snd_soc_dai *dai, int mute)
#define ALC5623_ADD2_POWER_EN (ALC5623_PWR_ADD2_VREF \
| ALC5623_PWR_ADD2_DAC_REF_CIR)
#define ALC5623_ADD3_POWER_EN (ALC5623_PWR_ADD3_MAIN_BIAS \
| ALC5623_PWR_ADD3_MIC1_BOOST_AD)
#define ALC5623_ADD1_POWER_EN \
(ALC5623_PWR_ADD1_SHORT_CURR_DET_EN | ALC5623_PWR_ADD1_SOFTGEN_EN \
| ALC5623_PWR_ADD1_DEPOP_BUF_HP | ALC5623_PWR_ADD1_HP_OUT_AMP \
| ALC5623_PWR_ADD1_HP_OUT_ENH_AMP)
#define ALC5623_ADD1_POWER_EN_5622 \
(ALC5623_PWR_ADD1_SHORT_CURR_DET_EN \
| ALC5623_PWR_ADD1_HP_OUT_AMP)
static void enable_power_depop(struct snd_soc_codec *codec)
static int alc5623_set_bias_level(struct snd_soc_codec *codec,
enum snd_soc_bias_level level)
#define ALC5623_FORMATS	(SNDRV_PCM_FMTBIT_S16_LE \
| SNDRV_PCM_FMTBIT_S24_LE \
| SNDRV_PCM_FMTBIT_S32_LE)
static struct snd_soc_dai_ops alc5623_dai_ops = ;
static struct snd_soc_dai_driver alc5623_dai = ;
static int alc5623_suspend(struct snd_soc_codec *codec, pm_message_t mesg)
static int alc5623_resume(struct snd_soc_codec *codec)
static int alc5623_probe(struct snd_soc_codec *codec)
static int alc5623_remove(struct snd_soc_codec *codec)
static struct snd_soc_codec_driver soc_codec_device_alc5623 = ;
static int alc5623_i2c_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int alc5623_i2c_remove(struct i2c_client *client)
static const struct i2c_device_id alc5623_i2c_table[] = ;
MODULE_DEVICE_TABLE(i2c, alc5623_i2c_table);
static struct i2c_driver alc5623_i2c_driver = ;
static int __init alc5623_modinit(void)
module_init(alc5623_modinit);
static void __exit alc5623_modexit(void)
module_exit(alc5623_modexit);
MODULE_DESCRIPTION("ASoC alc5621/2/3 driver");
MODULE_AUTHOR("Arnaud Patard <arnaud.patard@rtp-net.org>");
MODULE_LICENSE("GPL");
