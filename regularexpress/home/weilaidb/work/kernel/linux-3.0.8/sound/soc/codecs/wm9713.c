struct wm9713_priv ;
static unsigned int ac97_read(struct snd_soc_codec *codec,
unsigned int reg);
static int ac97_write(struct snd_soc_codec *codec,
unsigned int reg, unsigned int val);
static const u16 wm9713_reg[] = ;
#define HPL_MIXER	0x80
#define HPR_MIXER	0x82
#define MICB_MUX	0x82
static const char *wm9713_mic_mixer[] = ;
static const char *wm9713_rec_mux[] = ;
static const char *wm9713_rec_src[] =
;
static const char *wm9713_rec_gain[] = ;
static const char *wm9713_alc_select[] = ;
static const char *wm9713_mono_pga[] = ;
static const char *wm9713_spk_pga[] =
;
static const char *wm9713_hp_pga[] = ;
static const char *wm9713_out3_pga[] = ;
static const char *wm9713_out4_pga[] = ;
static const char *wm9713_dac_inv[] =
;
static const char *wm9713_bass[] = ;
static const char *wm9713_ng_type[] = ;
static const char *wm9713_mic_select[] = ;
static const char *wm9713_micb_select[] = ;
static const struct soc_enum wm9713_enum[] = ;
static const DECLARE_TLV_DB_SCALE(out_tlv, -4650, 150, 0);
static const DECLARE_TLV_DB_SCALE(main_tlv, -3450, 150, 0);
static const DECLARE_TLV_DB_SCALE(misc_tlv, -1500, 300, 0);
static unsigned int mic_tlv[] = ;
static const struct snd_kcontrol_new wm9713_snd_ac97_controls[] = ;
static int wm9713_voice_shutdown(struct snd_soc_dapm_widget *w,
struct snd_kcontrol *kcontrol, int event)
static int mixer_event(struct snd_soc_dapm_widget *w,
struct snd_kcontrol *kcontrol, int event)
static const struct snd_kcontrol_new wm9713_hpl_mixer_controls[] = ;
static const struct snd_kcontrol_new wm9713_hpr_mixer_controls[] = ;
static const struct snd_kcontrol_new wm9713_hp_rec_mux_controls =
SOC_DAPM_ENUM("Route", wm9713_enum[1]);
static const struct snd_kcontrol_new wm9713_hp_mic_mux_controls =
SOC_DAPM_ENUM("Route", wm9713_enum[0]);
static const struct snd_kcontrol_new wm9713_speaker_mixer_controls[] = ;
static const struct snd_kcontrol_new wm9713_mono_mixer_controls[] = ;
static const struct snd_kcontrol_new wm9713_mono_mic_mux_controls =
SOC_DAPM_ENUM("Route", wm9713_enum[2]);
static const struct snd_kcontrol_new wm9713_mono_mux_controls =
SOC_DAPM_ENUM("Route", wm9713_enum[7]);
static const struct snd_kcontrol_new wm9713_hp_spkl_mux_controls =
SOC_DAPM_ENUM("Route", wm9713_enum[8]);
static const struct snd_kcontrol_new wm9713_hp_spkr_mux_controls =
SOC_DAPM_ENUM("Route", wm9713_enum[9]);
static const struct snd_kcontrol_new wm9713_hpl_out_mux_controls =
SOC_DAPM_ENUM("Route", wm9713_enum[10]);
static const struct snd_kcontrol_new wm9713_hpr_out_mux_controls =
SOC_DAPM_ENUM("Route", wm9713_enum[11]);
static const struct snd_kcontrol_new wm9713_out3_mux_controls =
SOC_DAPM_ENUM("Route", wm9713_enum[12]);
static const struct snd_kcontrol_new wm9713_out4_mux_controls =
SOC_DAPM_ENUM("Route", wm9713_enum[13]);
static const struct snd_kcontrol_new wm9713_dac_inv1_mux_controls =
SOC_DAPM_ENUM("Route", wm9713_enum[14]);
static const struct snd_kcontrol_new wm9713_dac_inv2_mux_controls =
SOC_DAPM_ENUM("Route", wm9713_enum[15]);
static const struct snd_kcontrol_new wm9713_rec_srcl_mux_controls =
SOC_DAPM_ENUM("Route", wm9713_enum[3]);
static const struct snd_kcontrol_new wm9713_rec_srcr_mux_controls =
SOC_DAPM_ENUM("Route", wm9713_enum[4]);
static const struct snd_kcontrol_new wm9713_mic_sel_mux_controls =
SOC_DAPM_ENUM("Route", wm9713_enum[18]);
static const struct snd_kcontrol_new wm9713_micb_sel_mux_controls =
SOC_DAPM_ENUM("Route", wm9713_enum[19]);
static const struct snd_soc_dapm_widget wm9713_dapm_widgets[] = ;
static const struct snd_soc_dapm_route wm9713_audio_map[] = ;
static unsigned int ac97_read(struct snd_soc_codec *codec,
unsigned int reg)
static int ac97_write(struct snd_soc_codec *codec, unsigned int reg,
unsigned int val)
struct _pll_div ;
#define FIXED_PLL_SIZE ((1 << 22) * 10)
static void pll_factors(struct _pll_div *pll_div, unsigned int source)
static int wm9713_set_pll(struct snd_soc_codec *codec,
int pll_id, unsigned int freq_in, unsigned int freq_out)
static int wm9713_set_dai_pll(struct snd_soc_dai *codec_dai, int pll_id,
int source, unsigned int freq_in, unsigned int freq_out)
static int wm9713_set_dai_tristate(struct snd_soc_dai *codec_dai,
int tristate)
static int wm9713_set_dai_clkdiv(struct snd_soc_dai *codec_dai,
int div_id, int div)
static int wm9713_set_dai_fmt(struct snd_soc_dai *codec_dai,
unsigned int fmt)
static int wm9713_pcm_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params,
struct snd_soc_dai *dai)
static int ac97_hifi_prepare(struct snd_pcm_substream *substream,
struct snd_soc_dai *dai)
static int ac97_aux_prepare(struct snd_pcm_substream *substream,
struct snd_soc_dai *dai)
#define WM9713_RATES (SNDRV_PCM_RATE_8000  |	\
SNDRV_PCM_RATE_11025 |	\
SNDRV_PCM_RATE_22050 |	\
SNDRV_PCM_RATE_44100 |	\
SNDRV_PCM_RATE_48000)
#define WM9713_PCM_RATES (SNDRV_PCM_RATE_8000  |	\
SNDRV_PCM_RATE_11025 |	\
SNDRV_PCM_RATE_16000 |	\
SNDRV_PCM_RATE_22050 |	\
SNDRV_PCM_RATE_44100 |	\
SNDRV_PCM_RATE_48000)
#define WM9713_PCM_FORMATS \
(SNDRV_PCM_FORMAT_S16_LE | SNDRV_PCM_FORMAT_S20_3LE | \
SNDRV_PCM_FORMAT_S24_LE)
static struct snd_soc_dai_ops wm9713_dai_ops_hifi = ;
static struct snd_soc_dai_ops wm9713_dai_ops_aux = ;
static struct snd_soc_dai_ops wm9713_dai_ops_voice = ;
static struct snd_soc_dai_driver wm9713_dai[] = ;
int wm9713_reset(struct snd_soc_codec *codec, int try_warm)
EXPORT_SYMBOL_GPL(wm9713_reset);
static int wm9713_set_bias_level(struct snd_soc_codec *codec,
enum snd_soc_bias_level level)
static int wm9713_soc_suspend(struct snd_soc_codec *codec,
pm_message_t state)
static int wm9713_soc_resume(struct snd_soc_codec *codec)
static int wm9713_soc_probe(struct snd_soc_codec *codec)
static int wm9713_soc_remove(struct snd_soc_codec *codec)
static struct snd_soc_codec_driver soc_codec_dev_wm9713 = ;
static __devinit int wm9713_probe(struct platform_device *pdev)
static int __devexit wm9713_remove(struct platform_device *pdev)
static struct platform_driver wm9713_codec_driver = ;
static int __init wm9713_init(void)
module_init(wm9713_init);
static void __exit wm9713_exit(void)
module_exit(wm9713_exit);
MODULE_DESCRIPTION("ASoC WM9713/WM9714 driver");
MODULE_AUTHOR("Liam Girdwood");
MODULE_LICENSE("GPL");
