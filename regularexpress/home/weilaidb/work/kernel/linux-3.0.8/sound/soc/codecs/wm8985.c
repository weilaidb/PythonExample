#define WM8985_NUM_SUPPLIES 4
static const char *wm8985_supply_names[WM8985_NUM_SUPPLIES] = ;
static const u16 wm8985_reg_defs[] = ;
static const int volume_update_regs[] = ;
struct wm8985_priv ;
static const struct  fs_ratios[] = ;
static const int srates[] = ;
static const int bclk_divs[] = ;
static int eqmode_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol);
static int eqmode_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol);
static const DECLARE_TLV_DB_SCALE(dac_tlv, -12700, 50, 1);
static const DECLARE_TLV_DB_SCALE(adc_tlv, -12700, 50, 1);
static const DECLARE_TLV_DB_SCALE(out_tlv, -5700, 100, 0);
static const DECLARE_TLV_DB_SCALE(lim_thresh_tlv, -600, 100, 0);
static const DECLARE_TLV_DB_SCALE(lim_boost_tlv, 0, 100, 0);
static const DECLARE_TLV_DB_SCALE(alc_min_tlv, -1200, 600, 0);
static const DECLARE_TLV_DB_SCALE(alc_max_tlv, -675, 600, 0);
static const DECLARE_TLV_DB_SCALE(alc_tar_tlv, -2250, 150, 0);
static const DECLARE_TLV_DB_SCALE(pga_vol_tlv, -1200, 75, 0);
static const DECLARE_TLV_DB_SCALE(boost_tlv, -1200, 300, 1);
static const DECLARE_TLV_DB_SCALE(eq_tlv, -1200, 100, 0);
static const DECLARE_TLV_DB_SCALE(aux_tlv, -1500, 300, 0);
static const DECLARE_TLV_DB_SCALE(bypass_tlv, -1500, 300, 0);
static const DECLARE_TLV_DB_SCALE(pga_boost_tlv, 0, 2000, 0);
static const char *alc_sel_text[] = ;
static const SOC_ENUM_SINGLE_DECL(alc_sel, WM8985_ALC_CONTROL_1, 7,
alc_sel_text);
static const char *alc_mode_text[] = ;
static const SOC_ENUM_SINGLE_DECL(alc_mode, WM8985_ALC_CONTROL_3, 8,
alc_mode_text);
static const char *filter_mode_text[] = ;
static const SOC_ENUM_SINGLE_DECL(filter_mode, WM8985_ADC_CONTROL, 7,
filter_mode_text);
static const char *eq_bw_text[] = ;
static const char *eqmode_text[] = ;
static const SOC_ENUM_SINGLE_EXT_DECL(eqmode, eqmode_text);
static const char *eq1_cutoff_text[] = ;
static const SOC_ENUM_SINGLE_DECL(eq1_cutoff, WM8985_EQ1_LOW_SHELF, 5,
eq1_cutoff_text);
static const char *eq2_cutoff_text[] = ;
static const SOC_ENUM_SINGLE_DECL(eq2_bw, WM8985_EQ2_PEAK_1, 8, eq_bw_text);
static const SOC_ENUM_SINGLE_DECL(eq2_cutoff, WM8985_EQ2_PEAK_1, 5,
eq2_cutoff_text);
static const char *eq3_cutoff_text[] = ;
static const SOC_ENUM_SINGLE_DECL(eq3_bw, WM8985_EQ3_PEAK_2, 8, eq_bw_text);
static const SOC_ENUM_SINGLE_DECL(eq3_cutoff, WM8985_EQ3_PEAK_2, 5,
eq3_cutoff_text);
static const char *eq4_cutoff_text[] = ;
static const SOC_ENUM_SINGLE_DECL(eq4_bw, WM8985_EQ4_PEAK_3, 8, eq_bw_text);
static const SOC_ENUM_SINGLE_DECL(eq4_cutoff, WM8985_EQ4_PEAK_3, 5,
eq4_cutoff_text);
static const char *eq5_cutoff_text[] = ;
static const SOC_ENUM_SINGLE_DECL(eq5_cutoff, WM8985_EQ5_HIGH_SHELF, 5,
eq5_cutoff_text);
static const char *speaker_mode_text[] = ;
static const SOC_ENUM_SINGLE_DECL(speaker_mode, 0x17, 8, speaker_mode_text);
static const char *depth_3d_text[] = ;
static const SOC_ENUM_SINGLE_DECL(depth_3d, WM8985_3D_CONTROL, 0,
depth_3d_text);
static const struct snd_kcontrol_new wm8985_snd_controls[] = ;
static const struct snd_kcontrol_new left_out_mixer[] = ;
static const struct snd_kcontrol_new right_out_mixer[] = ;
static const struct snd_kcontrol_new left_input_mixer[] = ;
static const struct snd_kcontrol_new right_input_mixer[] = ;
static const struct snd_kcontrol_new left_boost_mixer[] = ;
static const struct snd_kcontrol_new right_boost_mixer[] = ;
static const struct snd_soc_dapm_widget wm8985_dapm_widgets[] = ;
static const struct snd_soc_dapm_route audio_map[] = ;
static int eqmode_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int eqmode_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int wm8985_add_widgets(struct snd_soc_codec *codec)
static int wm8985_reset(struct snd_soc_codec *codec)
static int wm8985_dac_mute(struct snd_soc_dai *dai, int mute)
static int wm8985_set_fmt(struct snd_soc_dai *dai, unsigned int fmt)
static int wm8985_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params,
struct snd_soc_dai *dai)
struct pll_div ;
#define FIXED_PLL_SIZE ((1ULL << 24) * 10)
static int pll_factors(struct pll_div *pll_div, unsigned int target,
unsigned int source)
static int wm8985_set_pll(struct snd_soc_dai *dai, int pll_id,
int source, unsigned int freq_in,
unsigned int freq_out)
static int wm8985_set_sysclk(struct snd_soc_dai *dai,
int clk_id, unsigned int freq, int dir)
static void wm8985_sync_cache(struct snd_soc_codec *codec)
static int wm8985_set_bias_level(struct snd_soc_codec *codec,
enum snd_soc_bias_level level)
static int wm8985_suspend(struct snd_soc_codec *codec, pm_message_t state)
static int wm8985_resume(struct snd_soc_codec *codec)
#define wm8985_suspend NULL
#define wm8985_resume NULL
static int wm8985_remove(struct snd_soc_codec *codec)
static int wm8985_probe(struct snd_soc_codec *codec)
static struct snd_soc_dai_ops wm8985_dai_ops = ;
#define WM8985_FORMATS (SNDRV_PCM_FMTBIT_S16_LE | SNDRV_PCM_FMTBIT_S20_3LE | \
SNDRV_PCM_FMTBIT_S24_LE | SNDRV_PCM_FMTBIT_S32_LE)
static struct snd_soc_dai_driver wm8985_dai = ;
static struct snd_soc_codec_driver soc_codec_dev_wm8985 = ;
#if defined(CONFIG_SPI_MASTER)
static int __devinit wm8985_spi_probe(struct spi_device *spi)
static int __devexit wm8985_spi_remove(struct spi_device *spi)
static struct spi_driver wm8985_spi_driver = ;
#if defined(CONFIG_I2C) || defined(CONFIG_I2C_MODULE)
static __devinit int wm8985_i2c_probe(struct i2c_client *i2c,
const struct i2c_device_id *id)
static __devexit int wm8985_i2c_remove(struct i2c_client *client)
static const struct i2c_device_id wm8985_i2c_id[] = ;
MODULE_DEVICE_TABLE(i2c, wm8985_i2c_id);
static struct i2c_driver wm8985_i2c_driver = ;
static int __init wm8985_modinit(void)
module_init(wm8985_modinit);
static void __exit wm8985_exit(void)
module_exit(wm8985_exit);
MODULE_DESCRIPTION("ASoC WM8985 driver");
MODULE_AUTHOR("Dimitris Papastamos <dp@opensource.wolfsonmicro.com>");
MODULE_LICENSE("GPL");
