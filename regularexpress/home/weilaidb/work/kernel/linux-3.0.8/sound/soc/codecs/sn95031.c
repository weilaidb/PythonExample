#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
#define SN95031_RATES (SNDRV_PCM_RATE_48000 | SNDRV_PCM_RATE_44100)
#define SN95031_FORMATS (SNDRV_PCM_FMTBIT_S24_LE | SNDRV_PCM_FMTBIT_S16_LE)
static void sn95031_enable_mic_bias(struct snd_soc_codec *codec)
static void configure_adc(struct snd_soc_codec *sn95031_codec, int val)
static int find_free_channel(struct snd_soc_codec *sn95031_codec)
static int sn95031_initialize_adc(struct snd_soc_codec *sn95031_codec)
static unsigned int sn95031_get_mic_bias(struct snd_soc_codec *codec)
EXPORT_SYMBOL_GPL(sn95031_get_mic_bias);
static inline unsigned int sn95031_read(struct snd_soc_codec *codec,
unsigned int reg)
static inline int sn95031_write(struct snd_soc_codec *codec,
unsigned int reg, unsigned int value)
static int sn95031_set_vaud_bias(struct snd_soc_codec *codec,
enum snd_soc_bias_level level)
static int sn95031_vhs_event(struct snd_soc_dapm_widget *w,
struct snd_kcontrol *kcontrol, int event)
static int sn95031_vihf_event(struct snd_soc_dapm_widget *w,
struct snd_kcontrol *kcontrol, int event)
static int sn95031_dmic12_event(struct snd_soc_dapm_widget *w,
struct snd_kcontrol *k, int event)
static int sn95031_dmic34_event(struct snd_soc_dapm_widget *w,
struct snd_kcontrol *k, int event)
static int sn95031_dmic56_event(struct snd_soc_dapm_widget *w,
struct snd_kcontrol *k, int event)
static const char *sn95031_mic_texts[] = ;
static const struct soc_enum sn95031_micl_enum =
SOC_ENUM_SINGLE(SN95031_ADCCONFIG, 1, 2, sn95031_mic_texts);
static const struct snd_kcontrol_new sn95031_micl_mux_control =
SOC_DAPM_ENUM("Route", sn95031_micl_enum);
static const struct soc_enum sn95031_micr_enum =
SOC_ENUM_SINGLE(SN95031_ADCCONFIG, 3, 2, sn95031_mic_texts);
static const struct snd_kcontrol_new sn95031_micr_mux_control =
SOC_DAPM_ENUM("Route", sn95031_micr_enum);
static const char *sn95031_input_texts[] = ;
static const struct soc_enum sn95031_input1_enum =
SOC_ENUM_SINGLE(SN95031_AUDIOMUX12, 0, 8, sn95031_input_texts);
static const struct snd_kcontrol_new sn95031_input1_mux_control =
SOC_DAPM_ENUM("Route", sn95031_input1_enum);
static const struct soc_enum sn95031_input2_enum =
SOC_ENUM_SINGLE(SN95031_AUDIOMUX12, 4, 8, sn95031_input_texts);
static const struct snd_kcontrol_new sn95031_input2_mux_control =
SOC_DAPM_ENUM("Route", sn95031_input2_enum);
static const struct soc_enum sn95031_input3_enum =
SOC_ENUM_SINGLE(SN95031_AUDIOMUX34, 0, 8, sn95031_input_texts);
static const struct snd_kcontrol_new sn95031_input3_mux_control =
SOC_DAPM_ENUM("Route", sn95031_input3_enum);
static const struct soc_enum sn95031_input4_enum =
SOC_ENUM_SINGLE(SN95031_AUDIOMUX34, 4, 8, sn95031_input_texts);
static const struct snd_kcontrol_new sn95031_input4_mux_control =
SOC_DAPM_ENUM("Route", sn95031_input4_enum);
static const char *sn95031_micmode_text[] = ;
static const DECLARE_TLV_DB_SCALE(mic_tlv, 0, 10, 0);
static const struct soc_enum sn95031_micmode1_enum =
SOC_ENUM_SINGLE(SN95031_MICAMP1, 1, 2, sn95031_micmode_text);
static const struct soc_enum sn95031_micmode2_enum =
SOC_ENUM_SINGLE(SN95031_MICAMP2, 1, 2, sn95031_micmode_text);
static const char *sn95031_dmic_cfg_text[] = ;
static const struct soc_enum sn95031_dmic12_cfg_enum =
SOC_ENUM_SINGLE(SN95031_DMICMUX, 0, 2, sn95031_dmic_cfg_text);
static const struct soc_enum sn95031_dmic34_cfg_enum =
SOC_ENUM_SINGLE(SN95031_DMICMUX, 1, 2, sn95031_dmic_cfg_text);
static const struct soc_enum sn95031_dmic56_cfg_enum =
SOC_ENUM_SINGLE(SN95031_DMICMUX, 2, 2, sn95031_dmic_cfg_text);
static const struct snd_kcontrol_new sn95031_snd_controls[] = ;
static const struct snd_soc_dapm_widget sn95031_dapm_widgets[] = ;
static const struct snd_soc_dapm_route sn95031_audio_map[] = ;
static int sn95031_pcm_hs_mute(struct snd_soc_dai *dai, int mute)
static int sn95031_pcm_spkr_mute(struct snd_soc_dai *dai, int mute)
int sn95031_pcm_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params, struct snd_soc_dai *dai)
static struct snd_soc_dai_ops sn95031_headset_dai_ops = ;
static struct snd_soc_dai_ops sn95031_speaker_dai_ops = ;
static struct snd_soc_dai_ops sn95031_vib1_dai_ops = ;
static struct snd_soc_dai_ops sn95031_vib2_dai_ops = ;
struct snd_soc_dai_driver sn95031_dais[] = ;
static inline void sn95031_disable_jack_btn(struct snd_soc_codec *codec)
static inline void sn95031_enable_jack_btn(struct snd_soc_codec *codec)
static int sn95031_get_headset_state(struct snd_soc_jack *mfld_jack)
void sn95031_jack_detection(struct mfld_jack_data *jack_data)
EXPORT_SYMBOL_GPL(sn95031_jack_detection);
static int sn95031_codec_probe(struct snd_soc_codec *codec)
static int sn95031_codec_remove(struct snd_soc_codec *codec)
struct snd_soc_codec_driver sn95031_codec = ;
static int __devinit sn95031_device_probe(struct platform_device *pdev)
static int __devexit sn95031_device_remove(struct platform_device *pdev)
static struct platform_driver sn95031_codec_driver = ;
static int __init sn95031_init(void)
module_init(sn95031_init);
static void __exit sn95031_exit(void)
module_exit(sn95031_exit);
MODULE_DESCRIPTION("ASoC TI SN95031 codec driver");
MODULE_AUTHOR("Vinod Koul <vinod.koul@intel.com>");
MODULE_AUTHOR("Harsha Priya <priya.harsha@intel.com>");
MODULE_LICENSE("GPL v2");
MODULE_ALIAS("platform:sn95031");
