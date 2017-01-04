static u16 wm8903_reg_defaults[] = ;
struct wm8903_priv ;
static int wm8903_volatile_register(struct snd_soc_codec *codec, unsigned int reg)
static void wm8903_reset(struct snd_soc_codec *codec)
static int wm8903_cp_event(struct snd_soc_dapm_widget *w,
struct snd_kcontrol *kcontrol, int event)
static int wm8903_dcs_event(struct snd_soc_dapm_widget *w,
struct snd_kcontrol *kcontrol, int event)
#define WM8903_DCS_MODE_WRITE_STOP 0
#define WM8903_DCS_MODE_START_STOP 2
static void wm8903_seq_notifier(struct snd_soc_dapm_context *dapm,
enum snd_soc_dapm_type event, int subseq)
static int wm8903_class_w_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
#define SOC_DAPM_SINGLE_W(xname, reg, shift, max, invert) \
static int wm8903_deemph[] = ;
static int wm8903_set_deemph(struct snd_soc_codec *codec)
static int wm8903_get_deemph(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int wm8903_put_deemph(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static const DECLARE_TLV_DB_SCALE(digital_tlv, -7200, 75, 1);
static const DECLARE_TLV_DB_SCALE(digital_sidetone_tlv, -3600, 300, 0);
static const DECLARE_TLV_DB_SCALE(out_tlv, -5700, 100, 0);
static const DECLARE_TLV_DB_SCALE(drc_tlv_thresh, 0, 75, 0);
static const DECLARE_TLV_DB_SCALE(drc_tlv_amp, -2250, 75, 0);
static const DECLARE_TLV_DB_SCALE(drc_tlv_min, 0, 600, 0);
static const DECLARE_TLV_DB_SCALE(drc_tlv_max, 1200, 600, 0);
static const DECLARE_TLV_DB_SCALE(drc_tlv_startup, -300, 50, 0);
static const char *hpf_mode_text[] = ;
static const struct soc_enum hpf_mode =
SOC_ENUM_SINGLE(WM8903_ADC_DIGITAL_0, 5, 4, hpf_mode_text);
static const char *osr_text[] = ;
static const struct soc_enum adc_osr =
SOC_ENUM_SINGLE(WM8903_ANALOGUE_ADC_0, 0, 2, osr_text);
static const struct soc_enum dac_osr =
SOC_ENUM_SINGLE(WM8903_DAC_DIGITAL_1, 0, 2, osr_text);
static const char *drc_slope_text[] = ;
static const struct soc_enum drc_slope_r0 =
SOC_ENUM_SINGLE(WM8903_DRC_2, 3, 6, drc_slope_text);
static const struct soc_enum drc_slope_r1 =
SOC_ENUM_SINGLE(WM8903_DRC_2, 0, 6, drc_slope_text);
static const char *drc_attack_text[] = ;
static const struct soc_enum drc_attack =
SOC_ENUM_SINGLE(WM8903_DRC_1, 12, 11, drc_attack_text);
static const char *drc_decay_text[] = ;
static const struct soc_enum drc_decay =
SOC_ENUM_SINGLE(WM8903_DRC_1, 8, 9, drc_decay_text);
static const char *drc_ff_delay_text[] = ;
static const struct soc_enum drc_ff_delay =
SOC_ENUM_SINGLE(WM8903_DRC_0, 5, 2, drc_ff_delay_text);
static const char *drc_qr_decay_text[] = ;
static const struct soc_enum drc_qr_decay =
SOC_ENUM_SINGLE(WM8903_DRC_1, 4, 3, drc_qr_decay_text);
static const char *drc_smoothing_text[] = ;
static const struct soc_enum drc_smoothing =
SOC_ENUM_SINGLE(WM8903_DRC_0, 11, 3, drc_smoothing_text);
static const char *soft_mute_text[] = ;
static const struct soc_enum soft_mute =
SOC_ENUM_SINGLE(WM8903_DAC_DIGITAL_1, 10, 2, soft_mute_text);
static const char *mute_mode_text[] = ;
static const struct soc_enum mute_mode =
SOC_ENUM_SINGLE(WM8903_DAC_DIGITAL_1, 9, 2, mute_mode_text);
static const char *companding_text[] = ;
static const struct soc_enum dac_companding =
SOC_ENUM_SINGLE(WM8903_AUDIO_INTERFACE_0, 0, 2, companding_text);
static const struct soc_enum adc_companding =
SOC_ENUM_SINGLE(WM8903_AUDIO_INTERFACE_0, 2, 2, companding_text);
static const char *input_mode_text[] = ;
static const struct soc_enum linput_mode_enum =
SOC_ENUM_SINGLE(WM8903_ANALOGUE_LEFT_INPUT_1, 0, 3, input_mode_text);
static const struct soc_enum rinput_mode_enum =
SOC_ENUM_SINGLE(WM8903_ANALOGUE_RIGHT_INPUT_1, 0, 3, input_mode_text);
static const char *linput_mux_text[] = ;
static const struct soc_enum linput_enum =
SOC_ENUM_SINGLE(WM8903_ANALOGUE_LEFT_INPUT_1, 2, 3, linput_mux_text);
static const struct soc_enum linput_inv_enum =
SOC_ENUM_SINGLE(WM8903_ANALOGUE_LEFT_INPUT_1, 4, 3, linput_mux_text);
static const char *rinput_mux_text[] = ;
static const struct soc_enum rinput_enum =
SOC_ENUM_SINGLE(WM8903_ANALOGUE_RIGHT_INPUT_1, 2, 3, rinput_mux_text);
static const struct soc_enum rinput_inv_enum =
SOC_ENUM_SINGLE(WM8903_ANALOGUE_RIGHT_INPUT_1, 4, 3, rinput_mux_text);
static const char *sidetone_text[] = ;
static const struct soc_enum lsidetone_enum =
SOC_ENUM_SINGLE(WM8903_DAC_DIGITAL_0, 2, 3, sidetone_text);
static const struct soc_enum rsidetone_enum =
SOC_ENUM_SINGLE(WM8903_DAC_DIGITAL_0, 0, 3, sidetone_text);
static const char *adcinput_text[] = ;
static const struct soc_enum adcinput_enum =
SOC_ENUM_SINGLE(WM8903_CLOCK_RATE_TEST_4, 9, 2, adcinput_text);
static const char *aif_text[] = ;
static const struct soc_enum lcapture_enum =
SOC_ENUM_SINGLE(WM8903_AUDIO_INTERFACE_0, 7, 2, aif_text);
static const struct soc_enum rcapture_enum =
SOC_ENUM_SINGLE(WM8903_AUDIO_INTERFACE_0, 6, 2, aif_text);
static const struct soc_enum lplay_enum =
SOC_ENUM_SINGLE(WM8903_AUDIO_INTERFACE_0, 5, 2, aif_text);
static const struct soc_enum rplay_enum =
SOC_ENUM_SINGLE(WM8903_AUDIO_INTERFACE_0, 4, 2, aif_text);
static const struct snd_kcontrol_new wm8903_snd_controls[] = ;
static const struct snd_kcontrol_new linput_mode_mux =
SOC_DAPM_ENUM("Left Input Mode Mux", linput_mode_enum);
static const struct snd_kcontrol_new rinput_mode_mux =
SOC_DAPM_ENUM("Right Input Mode Mux", rinput_mode_enum);
static const struct snd_kcontrol_new linput_mux =
SOC_DAPM_ENUM("Left Input Mux", linput_enum);
static const struct snd_kcontrol_new linput_inv_mux =
SOC_DAPM_ENUM("Left Inverting Input Mux", linput_inv_enum);
static const struct snd_kcontrol_new rinput_mux =
SOC_DAPM_ENUM("Right Input Mux", rinput_enum);
static const struct snd_kcontrol_new rinput_inv_mux =
SOC_DAPM_ENUM("Right Inverting Input Mux", rinput_inv_enum);
static const struct snd_kcontrol_new lsidetone_mux =
SOC_DAPM_ENUM("DACL Sidetone Mux", lsidetone_enum);
static const struct snd_kcontrol_new rsidetone_mux =
SOC_DAPM_ENUM("DACR Sidetone Mux", rsidetone_enum);
static const struct snd_kcontrol_new adcinput_mux =
SOC_DAPM_ENUM("ADC Input", adcinput_enum);
static const struct snd_kcontrol_new lcapture_mux =
SOC_DAPM_ENUM("Left Capture Mux", lcapture_enum);
static const struct snd_kcontrol_new rcapture_mux =
SOC_DAPM_ENUM("Right Capture Mux", rcapture_enum);
static const struct snd_kcontrol_new lplay_mux =
SOC_DAPM_ENUM("Left Playback Mux", lplay_enum);
static const struct snd_kcontrol_new rplay_mux =
SOC_DAPM_ENUM("Right Playback Mux", rplay_enum);
static const struct snd_kcontrol_new left_output_mixer[] = ;
static const struct snd_kcontrol_new right_output_mixer[] = ;
static const struct snd_kcontrol_new left_speaker_mixer[] = ;
static const struct snd_kcontrol_new right_speaker_mixer[] = ;
static const struct snd_soc_dapm_widget wm8903_dapm_widgets[] = ;
static const struct snd_soc_dapm_route wm8903_intercon[] = ;
static int wm8903_set_bias_level(struct snd_soc_codec *codec,
enum snd_soc_bias_level level)
static int wm8903_set_dai_sysclk(struct snd_soc_dai *codec_dai,
int clk_id, unsigned int freq, int dir)
static int wm8903_set_dai_fmt(struct snd_soc_dai *codec_dai,
unsigned int fmt)
static int wm8903_digital_mute(struct snd_soc_dai *codec_dai, int mute)
static struct  clk_sys_ratios[] = ;
static struct  bclk_divs[] = ;
static struct  sample_rates[] = ;
static int wm8903_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params,
struct snd_soc_dai *dai)
int wm8903_mic_detect(struct snd_soc_codec *codec, struct snd_soc_jack *jack,
int det, int shrt)
EXPORT_SYMBOL_GPL(wm8903_mic_detect);
static irqreturn_t wm8903_irq(int irq, void *data)
#define WM8903_PLAYBACK_RATES (SNDRV_PCM_RATE_8000 |\
SNDRV_PCM_RATE_11025 |	\
SNDRV_PCM_RATE_16000 |	\
SNDRV_PCM_RATE_22050 |	\
SNDRV_PCM_RATE_32000 |	\
SNDRV_PCM_RATE_44100 |	\
SNDRV_PCM_RATE_48000 |	\
SNDRV_PCM_RATE_88200 |	\
SNDRV_PCM_RATE_96000)
#define WM8903_CAPTURE_RATES (SNDRV_PCM_RATE_8000 |\
SNDRV_PCM_RATE_11025 |	\
SNDRV_PCM_RATE_16000 |	\
SNDRV_PCM_RATE_22050 |	\
SNDRV_PCM_RATE_32000 |	\
SNDRV_PCM_RATE_44100 |	\
SNDRV_PCM_RATE_48000)
#define WM8903_FORMATS (SNDRV_PCM_FMTBIT_S16_LE |\
SNDRV_PCM_FMTBIT_S20_3LE |\
SNDRV_PCM_FMTBIT_S24_LE)
static struct snd_soc_dai_ops wm8903_dai_ops = ;
static struct snd_soc_dai_driver wm8903_dai = ;
static int wm8903_suspend(struct snd_soc_codec *codec, pm_message_t state)
static int wm8903_resume(struct snd_soc_codec *codec)
static inline struct wm8903_priv *gpio_to_wm8903(struct gpio_chip *chip)
static int wm8903_gpio_request(struct gpio_chip *chip, unsigned offset)
static int wm8903_gpio_direction_in(struct gpio_chip *chip, unsigned offset)
static int wm8903_gpio_get(struct gpio_chip *chip, unsigned offset)
static int wm8903_gpio_direction_out(struct gpio_chip *chip,
unsigned offset, int value)
static void wm8903_gpio_set(struct gpio_chip *chip, unsigned offset, int value)
static struct gpio_chip wm8903_template_chip = ;
static void wm8903_init_gpio(struct snd_soc_codec *codec)
static void wm8903_free_gpio(struct snd_soc_codec *codec)
static void wm8903_init_gpio(struct snd_soc_codec *codec)
static void wm8903_free_gpio(struct snd_soc_codec *codec)
static int wm8903_probe(struct snd_soc_codec *codec)
static int wm8903_remove(struct snd_soc_codec *codec)
static struct snd_soc_codec_driver soc_codec_dev_wm8903 = ;
#if defined(CONFIG_I2C) || defined(CONFIG_I2C_MODULE)
static __devinit int wm8903_i2c_probe(struct i2c_client *i2c,
const struct i2c_device_id *id)
static __devexit int wm8903_i2c_remove(struct i2c_client *client)
static const struct i2c_device_id wm8903_i2c_id[] = ;
MODULE_DEVICE_TABLE(i2c, wm8903_i2c_id);
static struct i2c_driver wm8903_i2c_driver = ;
static int __init wm8903_modinit(void)
module_init(wm8903_modinit);
static void __exit wm8903_exit(void)
module_exit(wm8903_exit);
MODULE_DESCRIPTION("ASoC WM8903 driver");
MODULE_AUTHOR("Mark Brown <broonie@opensource.wolfsonmicro.cm>");
MODULE_LICENSE("GPL");
