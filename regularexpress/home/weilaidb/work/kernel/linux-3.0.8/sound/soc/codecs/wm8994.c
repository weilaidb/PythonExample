#define WM8994_NUM_DRC 3
#define WM8994_NUM_EQ  3
static int wm8994_drc_base[] = ;
static int wm8994_retune_mobile_base[] = ;
static int wm8994_readable(struct snd_soc_codec *codec, unsigned int reg)
static int wm8994_volatile(struct snd_soc_codec *codec, unsigned int reg)
static int wm8994_write(struct snd_soc_codec *codec, unsigned int reg,
unsigned int value)
static unsigned int wm8994_read(struct snd_soc_codec *codec,
unsigned int reg)
static int configure_aif_clock(struct snd_soc_codec *codec, int aif)
static int configure_clock(struct snd_soc_codec *codec)
static int check_clk_sys(struct snd_soc_dapm_widget *source,
struct snd_soc_dapm_widget *sink)
static const char *sidetone_hpf_text[] = ;
static const struct soc_enum sidetone_hpf =
SOC_ENUM_SINGLE(WM8994_SIDETONE, 7, 7, sidetone_hpf_text);
static const char *adc_hpf_text[] = ;
static const struct soc_enum aif1adc1_hpf =
SOC_ENUM_SINGLE(WM8994_AIF1_ADC1_FILTERS, 13, 4, adc_hpf_text);
static const struct soc_enum aif1adc2_hpf =
SOC_ENUM_SINGLE(WM8994_AIF1_ADC2_FILTERS, 13, 4, adc_hpf_text);
static const struct soc_enum aif2adc_hpf =
SOC_ENUM_SINGLE(WM8994_AIF2_ADC_FILTERS, 13, 4, adc_hpf_text);
static const DECLARE_TLV_DB_SCALE(aif_tlv, 0, 600, 0);
static const DECLARE_TLV_DB_SCALE(digital_tlv, -7200, 75, 1);
static const DECLARE_TLV_DB_SCALE(st_tlv, -3600, 300, 0);
static const DECLARE_TLV_DB_SCALE(wm8994_3d_tlv, -1600, 183, 0);
static const DECLARE_TLV_DB_SCALE(eq_tlv, -1200, 100, 0);
#define WM8994_DRC_SWITCH(xname, reg, shift) \
static int wm8994_put_drc_sw(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static void wm8994_set_drc(struct snd_soc_codec *codec, int drc)
static int wm8994_get_drc(const char *name)
static int wm8994_put_drc_enum(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int wm8994_get_drc_enum(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static void wm8994_set_retune_mobile(struct snd_soc_codec *codec, int block)
static int wm8994_get_retune_mobile_block(const char *name)
static int wm8994_put_retune_mobile_enum(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int wm8994_get_retune_mobile_enum(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static const char *aif_chan_src_text[] = ;
static const struct soc_enum aif1adcl_src =
SOC_ENUM_SINGLE(WM8994_AIF1_CONTROL_1, 15, 2, aif_chan_src_text);
static const struct soc_enum aif1adcr_src =
SOC_ENUM_SINGLE(WM8994_AIF1_CONTROL_1, 14, 2, aif_chan_src_text);
static const struct soc_enum aif2adcl_src =
SOC_ENUM_SINGLE(WM8994_AIF2_CONTROL_1, 15, 2, aif_chan_src_text);
static const struct soc_enum aif2adcr_src =
SOC_ENUM_SINGLE(WM8994_AIF2_CONTROL_1, 14, 2, aif_chan_src_text);
static const struct soc_enum aif1dacl_src =
SOC_ENUM_SINGLE(WM8994_AIF1_CONTROL_2, 15, 2, aif_chan_src_text);
static const struct soc_enum aif1dacr_src =
SOC_ENUM_SINGLE(WM8994_AIF1_CONTROL_2, 14, 2, aif_chan_src_text);
static const struct soc_enum aif2dacl_src =
SOC_ENUM_SINGLE(WM8994_AIF2_CONTROL_2, 15, 2, aif_chan_src_text);
static const struct soc_enum aif2dacr_src =
SOC_ENUM_SINGLE(WM8994_AIF2_CONTROL_2, 14, 2, aif_chan_src_text);
static const char *osr_text[] = ;
static const struct soc_enum dac_osr =
SOC_ENUM_SINGLE(WM8994_OVERSAMPLING, 0, 2, osr_text);
static const struct soc_enum adc_osr =
SOC_ENUM_SINGLE(WM8994_OVERSAMPLING, 1, 2, osr_text);
static const struct snd_kcontrol_new wm8994_snd_controls[] = ;
static const struct snd_kcontrol_new wm8994_eq_controls[] = ;
static const struct snd_kcontrol_new wm8958_snd_controls[] = ;
static int clk_sys_event(struct snd_soc_dapm_widget *w,
struct snd_kcontrol *kcontrol, int event)
static void wm8994_update_class_w(struct snd_soc_codec *codec)
static int late_enable_ev(struct snd_soc_dapm_widget *w,
struct snd_kcontrol *kcontrol, int event)
static int late_disable_ev(struct snd_soc_dapm_widget *w,
struct snd_kcontrol *kcontrol, int event)
static int aif1clk_ev(struct snd_soc_dapm_widget *w,
struct snd_kcontrol *kcontrol, int event)
static int aif2clk_ev(struct snd_soc_dapm_widget *w,
struct snd_kcontrol *kcontrol, int event)
static int adc_mux_ev(struct snd_soc_dapm_widget *w,
struct snd_kcontrol *kcontrol, int event)
static int micbias_ev(struct snd_soc_dapm_widget *w,
struct snd_kcontrol *kcontrol, int event)
static int dac_ev(struct snd_soc_dapm_widget *w,
struct snd_kcontrol *kcontrol, int event)
static const char *hp_mux_text[] = ;
#define WM8994_HP_ENUM(xname, xenum) \
static int wm8994_put_hp_enum(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static const struct soc_enum hpl_enum =
SOC_ENUM_SINGLE(WM8994_OUTPUT_MIXER_1, 8, 2, hp_mux_text);
static const struct snd_kcontrol_new hpl_mux =
WM8994_HP_ENUM("Left Headphone Mux", hpl_enum);
static const struct soc_enum hpr_enum =
SOC_ENUM_SINGLE(WM8994_OUTPUT_MIXER_2, 8, 2, hp_mux_text);
static const struct snd_kcontrol_new hpr_mux =
WM8994_HP_ENUM("Right Headphone Mux", hpr_enum);
static const char *adc_mux_text[] = ;
static const struct soc_enum adc_enum =
SOC_ENUM_SINGLE(0, 0, 2, adc_mux_text);
static const struct snd_kcontrol_new adcl_mux =
SOC_DAPM_ENUM_VIRT("ADCL Mux", adc_enum);
static const struct snd_kcontrol_new adcr_mux =
SOC_DAPM_ENUM_VIRT("ADCR Mux", adc_enum);
static const struct snd_kcontrol_new left_speaker_mixer[] = ;
static const struct snd_kcontrol_new right_speaker_mixer[] = ;
static int post_ev(struct snd_soc_dapm_widget *w,
struct snd_kcontrol *kcontrol, int event)
static const struct snd_kcontrol_new aif1adc1l_mix[] = ;
static const struct snd_kcontrol_new aif1adc1r_mix[] = ;
static const struct snd_kcontrol_new aif1adc2l_mix[] = ;
static const struct snd_kcontrol_new aif1adc2r_mix[] = ;
static const struct snd_kcontrol_new aif2dac2l_mix[] = ;
static const struct snd_kcontrol_new aif2dac2r_mix[] = ;
#define WM8994_CLASS_W_SWITCH(xname, reg, shift, max, invert) \
static int wm8994_put_class_w(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static const struct snd_kcontrol_new dac1l_mix[] = ;
static const struct snd_kcontrol_new dac1r_mix[] = ;
static const char *sidetone_text[] = ;
static const struct soc_enum sidetone1_enum =
SOC_ENUM_SINGLE(WM8994_SIDETONE, 0, 2, sidetone_text);
static const struct snd_kcontrol_new sidetone1_mux =
SOC_DAPM_ENUM("Left Sidetone Mux", sidetone1_enum);
static const struct soc_enum sidetone2_enum =
SOC_ENUM_SINGLE(WM8994_SIDETONE, 1, 2, sidetone_text);
static const struct snd_kcontrol_new sidetone2_mux =
SOC_DAPM_ENUM("Right Sidetone Mux", sidetone2_enum);
static const char *aif1dac_text[] = ;
static const struct soc_enum aif1dac_enum =
SOC_ENUM_SINGLE(WM8994_POWER_MANAGEMENT_6, 0, 2, aif1dac_text);
static const struct snd_kcontrol_new aif1dac_mux =
SOC_DAPM_ENUM("AIF1DAC Mux", aif1dac_enum);
static const char *aif2dac_text[] = ;
static const struct soc_enum aif2dac_enum =
SOC_ENUM_SINGLE(WM8994_POWER_MANAGEMENT_6, 1, 2, aif2dac_text);
static const struct snd_kcontrol_new aif2dac_mux =
SOC_DAPM_ENUM("AIF2DAC Mux", aif2dac_enum);
static const char *aif2adc_text[] = ;
static const struct soc_enum aif2adc_enum =
SOC_ENUM_SINGLE(WM8994_POWER_MANAGEMENT_6, 2, 2, aif2adc_text);
static const struct snd_kcontrol_new aif2adc_mux =
SOC_DAPM_ENUM("AIF2ADC Mux", aif2adc_enum);
static const char *aif3adc_text[] = ;
static const struct soc_enum wm8994_aif3adc_enum =
SOC_ENUM_SINGLE(WM8994_POWER_MANAGEMENT_6, 3, 3, aif3adc_text);
static const struct snd_kcontrol_new wm8994_aif3adc_mux =
SOC_DAPM_ENUM("AIF3ADC Mux", wm8994_aif3adc_enum);
static const struct soc_enum wm8958_aif3adc_enum =
SOC_ENUM_SINGLE(WM8994_POWER_MANAGEMENT_6, 3, 4, aif3adc_text);
static const struct snd_kcontrol_new wm8958_aif3adc_mux =
SOC_DAPM_ENUM("AIF3ADC Mux", wm8958_aif3adc_enum);
static const char *mono_pcm_out_text[] = ;
static const struct soc_enum mono_pcm_out_enum =
SOC_ENUM_SINGLE(WM8994_POWER_MANAGEMENT_6, 9, 3, mono_pcm_out_text);
static const struct snd_kcontrol_new mono_pcm_out_mux =
SOC_DAPM_ENUM("Mono PCM Out Mux", mono_pcm_out_enum);
static const char *aif2dac_src_text[] = ;
static const struct soc_enum aif2dacl_src_enum =
SOC_ENUM_SINGLE(WM8994_POWER_MANAGEMENT_6, 7, 2, aif2dac_src_text);
static const struct snd_kcontrol_new aif2dacl_src_mux =
SOC_DAPM_ENUM("AIF2DACL Mux", aif2dacl_src_enum);
static const struct soc_enum aif2dacr_src_enum =
SOC_ENUM_SINGLE(WM8994_POWER_MANAGEMENT_6, 8, 2, aif2dac_src_text);
static const struct snd_kcontrol_new aif2dacr_src_mux =
SOC_DAPM_ENUM("AIF2DACR Mux", aif2dacr_src_enum);
static const struct snd_soc_dapm_widget wm8994_lateclk_revd_widgets[] = ;
static const struct snd_soc_dapm_widget wm8994_lateclk_widgets[] = ;
static const struct snd_soc_dapm_widget wm8994_dac_revd_widgets[] = ;
static const struct snd_soc_dapm_widget wm8994_dac_widgets[] = ;
static const struct snd_soc_dapm_widget wm8994_adc_revd_widgets[] = ;
static const struct snd_soc_dapm_widget wm8994_adc_widgets[] = ;
static const struct snd_soc_dapm_widget wm8994_dapm_widgets[] = ;
static const struct snd_soc_dapm_widget wm8994_specific_dapm_widgets[] = ;
static const struct snd_soc_dapm_widget wm8958_dapm_widgets[] = ;
static const struct snd_soc_dapm_route intercon[] = ;
static const struct snd_soc_dapm_route wm8994_lateclk_revd_intercon[] = ;
static const struct snd_soc_dapm_route wm8994_lateclk_intercon[] = ;
static const struct snd_soc_dapm_route wm8994_revd_intercon[] = ;
static const struct snd_soc_dapm_route wm8994_intercon[] = ;
static const struct snd_soc_dapm_route wm8958_intercon[] = ;
#define FIXED_FLL_SIZE ((1 << 16) * 10)
struct fll_div ;
static int wm8994_get_fll_config(struct fll_div *fll,
int freq_in, int freq_out)
static int _wm8994_set_fll(struct snd_soc_codec *codec, int id, int src,
unsigned int freq_in, unsigned int freq_out)
static int opclk_divs[] = ;
static int wm8994_set_fll(struct snd_soc_dai *dai, int id, int src,
unsigned int freq_in, unsigned int freq_out)
static int wm8994_set_dai_sysclk(struct snd_soc_dai *dai,
int clk_id, unsigned int freq, int dir)
static int wm8994_set_bias_level(struct snd_soc_codec *codec,
enum snd_soc_bias_level level)
static int wm8994_set_dai_fmt(struct snd_soc_dai *dai, unsigned int fmt)
static struct  srs[] = ;
static int fs_ratios[] = ;
static int bclk_divs[] = ;
static int wm8994_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params,
struct snd_soc_dai *dai)
static int wm8994_aif3_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params,
struct snd_soc_dai *dai)
static int wm8994_aif_mute(struct snd_soc_dai *codec_dai, int mute)
static int wm8994_set_tristate(struct snd_soc_dai *codec_dai, int tristate)
#define WM8994_RATES SNDRV_PCM_RATE_8000_96000
#define WM8994_FORMATS (SNDRV_PCM_FMTBIT_S16_LE | SNDRV_PCM_FMTBIT_S20_3LE |\
SNDRV_PCM_FMTBIT_S24_LE | SNDRV_PCM_FMTBIT_S32_LE)
static struct snd_soc_dai_ops wm8994_aif1_dai_ops = ;
static struct snd_soc_dai_ops wm8994_aif2_dai_ops = ;
static struct snd_soc_dai_ops wm8994_aif3_dai_ops = ;
static struct snd_soc_dai_driver wm8994_dai[] = ;
static int wm8994_suspend(struct snd_soc_codec *codec, pm_message_t state)
static int wm8994_resume(struct snd_soc_codec *codec)
#define wm8994_suspend NULL
#define wm8994_resume NULL
static void wm8994_handle_retune_mobile_pdata(struct wm8994_priv *wm8994)
static void wm8994_handle_pdata(struct wm8994_priv *wm8994)
int wm8994_mic_detect(struct snd_soc_codec *codec, struct snd_soc_jack *jack,
int micbias, int det, int shrt)
EXPORT_SYMBOL_GPL(wm8994_mic_detect);
static irqreturn_t wm8994_mic_irq(int irq, void *data)
static void wm8958_default_micdet(u16 status, void *data)
int wm8958_mic_detect(struct snd_soc_codec *codec, struct snd_soc_jack *jack,
wm8958_micdet_cb cb, void *cb_data)
EXPORT_SYMBOL_GPL(wm8958_mic_detect);
static irqreturn_t wm8958_mic_irq(int irq, void *data)
static int wm8994_codec_probe(struct snd_soc_codec *codec)
static int  wm8994_codec_remove(struct snd_soc_codec *codec)
static struct snd_soc_codec_driver soc_codec_dev_wm8994 = ;
static int __devinit wm8994_probe(struct platform_device *pdev)
static int __devexit wm8994_remove(struct platform_device *pdev)
static struct platform_driver wm8994_codec_driver = ;
static __init int wm8994_init(void)
module_init(wm8994_init);
static __exit void wm8994_exit(void)
module_exit(wm8994_exit);
MODULE_DESCRIPTION("ASoC WM8994 driver");
MODULE_AUTHOR("Mark Brown <broonie@opensource.wolfsonmicro.com>");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:wm8994-codec");
