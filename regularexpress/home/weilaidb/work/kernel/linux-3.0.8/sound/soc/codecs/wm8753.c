static int caps_charge = 2000;
module_param(caps_charge, int, 0);
MODULE_PARM_DESC(caps_charge, "WM8753 cap charge time (msecs)");
static int wm8753_hifi_write_dai_fmt(struct snd_soc_codec *codec,
unsigned int fmt);
static int wm8753_voice_write_dai_fmt(struct snd_soc_codec *codec,
unsigned int fmt);
static const u16 wm8753_reg[] = ;
struct wm8753_priv ;
#define wm8753_reset(c) snd_soc_write(c, WM8753_RESET, 0)
static const char *wm8753_base[] = ;
static const char *wm8753_base_filter[] =
;
static const char *wm8753_treble[] = ;
static const char *wm8753_alc_func[] = ;
static const char *wm8753_ng_type[] = ;
static const char *wm8753_3d_func[] = ;
static const char *wm8753_3d_uc[] = ;
static const char *wm8753_3d_lc[] = ;
static const char *wm8753_deemp[] = ;
static const char *wm8753_mono_mix[] = ;
static const char *wm8753_dac_phase[] = ;
static const char *wm8753_line_mix[] = ;
static const char *wm8753_mono_mux[] = ;
static const char *wm8753_right_mux[] = ;
static const char *wm8753_left_mux[] = ;
static const char *wm8753_rxmsel[] = ;
static const char *wm8753_sidetone_mux[] = ;
static const char *wm8753_mono2_src[] = ;
static const char *wm8753_out3[] = ;
static const char *wm8753_out4[] = ;
static const char *wm8753_radcsel[] = ;
static const char *wm8753_ladcsel[] = ;
static const char *wm8753_mono_adc[] = ;
static const char *wm8753_adc_hp[] = ;
static const char *wm8753_adc_filter[] = ;
static const char *wm8753_mic_sel[] = ;
static const char *wm8753_dai_mode[] = ;
static const char *wm8753_dat_sel[] = ;
static const char *wm8753_rout2_phase[] = ;
static const struct soc_enum wm8753_enum[] = ;
static int wm8753_get_dai(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int wm8753_set_dai(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static const DECLARE_TLV_DB_SCALE(rec_mix_tlv, -1500, 300, 0);
static const DECLARE_TLV_DB_SCALE(mic_preamp_tlv, 1200, 600, 0);
static const DECLARE_TLV_DB_SCALE(adc_tlv, -9750, 50, 1);
static const DECLARE_TLV_DB_SCALE(dac_tlv, -12750, 50, 1);
static const unsigned int out_tlv[] = ;
static const DECLARE_TLV_DB_SCALE(mix_tlv, -1500, 300, 0);
static const DECLARE_TLV_DB_SCALE(voice_mix_tlv, -1200, 300, 0);
static const DECLARE_TLV_DB_SCALE(pga_tlv, -1725, 75, 0);
static const struct snd_kcontrol_new wm8753_snd_controls[] = ;
static const struct snd_kcontrol_new wm8753_left_mixer_controls[] = ;
static const struct snd_kcontrol_new wm8753_right_mixer_controls[] = ;
static const struct snd_kcontrol_new wm8753_mono_mixer_controls[] = ;
static const struct snd_kcontrol_new wm8753_mono2_controls =
SOC_DAPM_ENUM("Route", wm8753_enum[17]);
static const struct snd_kcontrol_new wm8753_out3_controls =
SOC_DAPM_ENUM("Route", wm8753_enum[18]);
static const struct snd_kcontrol_new wm8753_out4_controls =
SOC_DAPM_ENUM("Route", wm8753_enum[19]);
static const struct snd_kcontrol_new wm8753_adc_mono_controls =
SOC_DAPM_ENUM("Route", wm8753_enum[22]);
static const struct snd_kcontrol_new wm8753_record_mixer_controls[] = ;
static const struct snd_kcontrol_new wm8753_adc_left_controls =
SOC_DAPM_ENUM("Route", wm8753_enum[21]);
static const struct snd_kcontrol_new wm8753_adc_right_controls =
SOC_DAPM_ENUM("Route", wm8753_enum[20]);
static const struct snd_kcontrol_new wm8753_mic_mux_controls =
SOC_DAPM_ENUM("Route", wm8753_enum[16]);
static const struct snd_kcontrol_new wm8753_alc_mixer_controls[] = ;
static const struct snd_kcontrol_new wm8753_line_left_controls =
SOC_DAPM_ENUM("Route", wm8753_enum[14]);
static const struct snd_kcontrol_new wm8753_line_right_controls =
SOC_DAPM_ENUM("Route", wm8753_enum[13]);
static const struct snd_kcontrol_new wm8753_line_mono_controls =
SOC_DAPM_ENUM("Route", wm8753_enum[12]);
static const struct snd_kcontrol_new wm8753_line_mux_mix_controls =
SOC_DAPM_ENUM("Route", wm8753_enum[11]);
static const struct snd_kcontrol_new wm8753_rx_mux_mix_controls =
SOC_DAPM_ENUM("Route", wm8753_enum[15]);
static const struct snd_kcontrol_new wm8753_mic_sel_mux_controls =
SOC_DAPM_ENUM("Route", wm8753_enum[25]);
static const struct snd_soc_dapm_widget wm8753_dapm_widgets[] = ;
static const struct snd_soc_dapm_route audio_map[] = ;
static int wm8753_add_widgets(struct snd_soc_codec *codec)
struct _pll_div ;
#define FIXED_PLL_SIZE ((1 << 22) * 10)
static void pll_factors(struct _pll_div *pll_div, unsigned int target,
unsigned int source)
static int wm8753_set_dai_pll(struct snd_soc_dai *codec_dai, int pll_id,
int source, unsigned int freq_in, unsigned int freq_out)
struct _coeff_div ;
static const struct _coeff_div coeff_div[] = ;
static int get_coeff(int mclk, int rate)
static int wm8753_set_dai_sysclk(struct snd_soc_dai *codec_dai,
int clk_id, unsigned int freq, int dir)
static int wm8753_vdac_adc_set_dai_fmt(struct snd_soc_codec *codec,
unsigned int fmt)
static int wm8753_pcm_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params,
struct snd_soc_dai *dai)
static int wm8753_pcm_set_dai_fmt(struct snd_soc_codec *codec,
unsigned int fmt)
static int wm8753_set_dai_clkdiv(struct snd_soc_dai *codec_dai,
int div_id, int div)
static int wm8753_hdac_set_dai_fmt(struct snd_soc_codec *codec,
unsigned int fmt)
static int wm8753_i2s_set_dai_fmt(struct snd_soc_codec *codec,
unsigned int fmt)
static int wm8753_i2s_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params,
struct snd_soc_dai *dai)
static int wm8753_mode1v_set_dai_fmt(struct snd_soc_codec *codec,
unsigned int fmt)
static int wm8753_mode1h_set_dai_fmt(struct snd_soc_codec *codec,
unsigned int fmt)
static int wm8753_mode2_set_dai_fmt(struct snd_soc_codec *codec,
unsigned int fmt)
static int wm8753_mode3_4_set_dai_fmt(struct snd_soc_codec *codec,
unsigned int fmt)
static int wm8753_hifi_write_dai_fmt(struct snd_soc_codec *codec,
unsigned int fmt)
static int wm8753_hifi_set_dai_fmt(struct snd_soc_dai *codec_dai,
unsigned int fmt)
;
static int wm8753_voice_write_dai_fmt(struct snd_soc_codec *codec,
unsigned int fmt)
;
static int wm8753_voice_set_dai_fmt(struct snd_soc_dai *codec_dai,
unsigned int fmt)
;
static int wm8753_mute(struct snd_soc_dai *dai, int mute)
static int wm8753_set_bias_level(struct snd_soc_codec *codec,
enum snd_soc_bias_level level)
#define WM8753_RATES (SNDRV_PCM_RATE_8000 | SNDRV_PCM_RATE_11025 |\
SNDRV_PCM_RATE_16000 | SNDRV_PCM_RATE_22050 |\
SNDRV_PCM_RATE_44100 | SNDRV_PCM_RATE_48000 |\
SNDRV_PCM_RATE_88200 | SNDRV_PCM_RATE_96000)
#define WM8753_FORMATS (SNDRV_PCM_FMTBIT_S16_LE | SNDRV_PCM_FMTBIT_S20_3LE |\
SNDRV_PCM_FMTBIT_S24_LE)
static struct snd_soc_dai_ops wm8753_dai_ops_hifi_mode = ;
static struct snd_soc_dai_ops wm8753_dai_ops_voice_mode = ;
static struct snd_soc_dai_driver wm8753_dai[] = ;
static void wm8753_work(struct work_struct *work)
static int wm8753_suspend(struct snd_soc_codec *codec, pm_message_t state)
static int wm8753_resume(struct snd_soc_codec *codec)
static int wm8753_probe(struct snd_soc_codec *codec)
static int wm8753_remove(struct snd_soc_codec *codec)
static struct snd_soc_codec_driver soc_codec_dev_wm8753 = ;
#if defined(CONFIG_SPI_MASTER)
static int __devinit wm8753_spi_probe(struct spi_device *spi)
static int __devexit wm8753_spi_remove(struct spi_device *spi)
static struct spi_driver wm8753_spi_driver = ;
#if defined(CONFIG_I2C) || defined(CONFIG_I2C_MODULE)
static __devinit int wm8753_i2c_probe(struct i2c_client *i2c,
const struct i2c_device_id *id)
static __devexit int wm8753_i2c_remove(struct i2c_client *client)
static const struct i2c_device_id wm8753_i2c_id[] = ;
MODULE_DEVICE_TABLE(i2c, wm8753_i2c_id);
static struct i2c_driver wm8753_i2c_driver = ;
static int __init wm8753_modinit(void)
module_init(wm8753_modinit);
static void __exit wm8753_exit(void)
module_exit(wm8753_exit);
MODULE_DESCRIPTION("ASoC WM8753 driver");
MODULE_AUTHOR("Liam Girdwood");
MODULE_LICENSE("GPL");
