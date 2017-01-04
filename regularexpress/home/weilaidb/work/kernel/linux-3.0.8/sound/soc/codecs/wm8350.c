#define WM8350_OUTn_0dB 0x39
#define WM8350_RAMP_NONE	0
#define WM8350_RAMP_UP		1
#define WM8350_RAMP_DOWN	2
static const char *supply_names[] = ;
struct wm8350_output ;
struct wm8350_jack_data ;
struct wm8350_data ;
static unsigned int wm8350_codec_cache_read(struct snd_soc_codec *codec,
unsigned int reg)
static unsigned int wm8350_codec_read(struct snd_soc_codec *codec,
unsigned int reg)
static int wm8350_codec_write(struct snd_soc_codec *codec, unsigned int reg,
unsigned int value)
static inline int wm8350_out1_ramp_step(struct snd_soc_codec *codec)
static inline int wm8350_out2_ramp_step(struct snd_soc_codec *codec)
static void wm8350_pga_work(struct work_struct *work)
static int pga_event(struct snd_soc_dapm_widget *w,
struct snd_kcontrol *kcontrol, int event)
static int wm8350_put_volsw_2r_vu(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int wm8350_get_volsw_2r(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
#define SOC_WM8350_DOUBLE_R_TLV(xname, reg_left, reg_right, xshift, xmax, \
xinvert, tlv_array) \
static const char *wm8350_deemp[] = ;
static const char *wm8350_pol[] = ;
static const char *wm8350_dacmutem[] = ;
static const char *wm8350_dacmutes[] = ;
static const char *wm8350_adcfilter[] = ;
static const char *wm8350_adchp[] = ;
static const char *wm8350_lr[] = ;
static const struct soc_enum wm8350_enum[] = ;
static DECLARE_TLV_DB_SCALE(pre_amp_tlv, -1200, 3525, 0);
static DECLARE_TLV_DB_SCALE(out_pga_tlv, -5700, 600, 0);
static DECLARE_TLV_DB_SCALE(dac_pcm_tlv, -7163, 36, 1);
static DECLARE_TLV_DB_SCALE(adc_pcm_tlv, -12700, 50, 1);
static DECLARE_TLV_DB_SCALE(out_mix_tlv, -1500, 300, 1);
static const unsigned int capture_sd_tlv[] = ;
static const struct snd_kcontrol_new wm8350_snd_controls[] = ;
static const struct snd_kcontrol_new wm8350_left_play_mixer_controls[] = ;
static const struct snd_kcontrol_new wm8350_right_play_mixer_controls[] = ;
static const struct snd_kcontrol_new wm8350_out4_mixer_controls[] = ;
static const struct snd_kcontrol_new wm8350_out3_mixer_controls[] = ;
static const struct snd_kcontrol_new wm8350_left_capt_mixer_controls[] = ;
static const struct snd_kcontrol_new wm8350_right_capt_mixer_controls[] = ;
static const struct snd_kcontrol_new wm8350_left_mic_mixer_controls[] = ;
static const struct snd_kcontrol_new wm8350_right_mic_mixer_controls[] = ;
static const struct snd_kcontrol_new wm8350_beep_switch_controls =
SOC_DAPM_SINGLE("Switch", WM8350_BEEP_VOLUME, 15, 1, 1);
static const struct snd_kcontrol_new wm8350_out4_capture_controls =
SOC_DAPM_ENUM("Route", wm8350_enum[7]);
static const struct snd_soc_dapm_widget wm8350_dapm_widgets[] = ;
static const struct snd_soc_dapm_route audio_map[] = ;
static int wm8350_add_widgets(struct snd_soc_codec *codec)
static int wm8350_set_dai_sysclk(struct snd_soc_dai *codec_dai,
int clk_id, unsigned int freq, int dir)
static int wm8350_set_clkdiv(struct snd_soc_dai *codec_dai, int div_id, int div)
static int wm8350_set_dai_fmt(struct snd_soc_dai *codec_dai, unsigned int fmt)
static int wm8350_pcm_trigger(struct snd_pcm_substream *substream,
int cmd, struct snd_soc_dai *codec_dai)
static int wm8350_pcm_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params,
struct snd_soc_dai *codec_dai)
static int wm8350_mute(struct snd_soc_dai *dai, int mute)
struct _fll_div ;
#define FIXED_FLL_SIZE ((1 << 16) * 10)
static inline int fll_factors(struct _fll_div *fll_div, unsigned int input,
unsigned int output)
static int wm8350_set_fll(struct snd_soc_dai *codec_dai,
int pll_id, int source, unsigned int freq_in,
unsigned int freq_out)
static int wm8350_set_bias_level(struct snd_soc_codec *codec,
enum snd_soc_bias_level level)
static int wm8350_suspend(struct snd_soc_codec *codec, pm_message_t state)
static int wm8350_resume(struct snd_soc_codec *codec)
static void wm8350_hp_work(struct wm8350_data *priv,
struct wm8350_jack_data *jack,
u16 mask)
static void wm8350_hpl_work(struct work_struct *work)
static void wm8350_hpr_work(struct work_struct *work)
static irqreturn_t wm8350_hp_jack_handler(int irq, void *data)
int wm8350_hp_jack_detect(struct snd_soc_codec *codec, enum wm8350_jack which,
struct snd_soc_jack *jack, int report)
EXPORT_SYMBOL_GPL(wm8350_hp_jack_detect);
static irqreturn_t wm8350_mic_handler(int irq, void *data)
int wm8350_mic_jack_detect(struct snd_soc_codec *codec,
struct snd_soc_jack *jack,
int detect_report, int short_report)
EXPORT_SYMBOL_GPL(wm8350_mic_jack_detect);
#define WM8350_RATES (SNDRV_PCM_RATE_8000_96000)
#define WM8350_FORMATS (SNDRV_PCM_FMTBIT_S16_LE |\
SNDRV_PCM_FMTBIT_S20_3LE |\
SNDRV_PCM_FMTBIT_S24_LE)
static struct snd_soc_dai_ops wm8350_dai_ops = ;
static struct snd_soc_dai_driver wm8350_dai = ;
static  int wm8350_codec_probe(struct snd_soc_codec *codec)
static int  wm8350_codec_remove(struct snd_soc_codec *codec)
static struct snd_soc_codec_driver soc_codec_dev_wm8350 = ;
static int __devinit wm8350_probe(struct platform_device *pdev)
static int __devexit wm8350_remove(struct platform_device *pdev)
static struct platform_driver wm8350_codec_driver = ;
static __init int wm8350_init(void)
module_init(wm8350_init);
static __exit void wm8350_exit(void)
module_exit(wm8350_exit);
MODULE_DESCRIPTION("ASoC WM8350 driver");
MODULE_AUTHOR("Liam Girdwood");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:wm8350-codec");
