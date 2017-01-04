#define WM9712_VERSION "0.4"
static unsigned int ac97_read(struct snd_soc_codec *codec,
unsigned int reg);
static int ac97_write(struct snd_soc_codec *codec,
unsigned int reg, unsigned int val);
static const u16 wm9712_reg[] = ;
#define HPL_MIXER	0x80
#define HPR_MIXER	0x82
static const char *wm9712_alc_select[] = ;
static const char *wm9712_alc_mux[] = ;
static const char *wm9712_out3_src[] = ;
static const char *wm9712_spk_src[] = ;
static const char *wm9712_rec_adc[] = ;
static const char *wm9712_base[] = ;
static const char *wm9712_rec_gain[] = ;
static const char *wm9712_mic[] = ;
static const char *wm9712_rec_sel[] = ;
static const char *wm9712_ng_type[] = ;
static const char *wm9712_diff_sel[] = ;
static const struct soc_enum wm9712_enum[] = ;
static const struct snd_kcontrol_new wm9712_snd_ac97_controls[] = ;
static int mixer_event(struct snd_soc_dapm_widget *w,
struct snd_kcontrol *k, int event)
static const struct snd_kcontrol_new wm9712_hpl_mixer_controls[] = ;
static const struct snd_kcontrol_new wm9712_hpr_mixer_controls[] = ;
static const struct snd_kcontrol_new wm9712_speaker_mixer_controls[] = ;
static const struct snd_kcontrol_new wm9712_phone_mixer_controls[] = ;
static const struct snd_kcontrol_new wm9712_alc_mux_controls =
SOC_DAPM_ENUM("Route", wm9712_enum[1]);
static const struct snd_kcontrol_new wm9712_out3_mux_controls =
SOC_DAPM_ENUM("Route", wm9712_enum[2]);
static const struct snd_kcontrol_new wm9712_spk_mux_controls =
SOC_DAPM_ENUM("Route", wm9712_enum[3]);
static const struct snd_kcontrol_new wm9712_capture_phone_mux_controls =
SOC_DAPM_ENUM("Route", wm9712_enum[4]);
static const struct snd_kcontrol_new wm9712_capture_selectl_controls =
SOC_DAPM_ENUM("Route", wm9712_enum[8]);
static const struct snd_kcontrol_new wm9712_capture_selectr_controls =
SOC_DAPM_ENUM("Route", wm9712_enum[9]);
static const struct snd_kcontrol_new wm9712_mic_src_controls =
SOC_DAPM_ENUM("Route", wm9712_enum[7]);
static const struct snd_kcontrol_new wm9712_diff_sel_controls =
SOC_DAPM_ENUM("Route", wm9712_enum[11]);
static const struct snd_soc_dapm_widget wm9712_dapm_widgets[] = ;
static const struct snd_soc_dapm_route wm9712_audio_map[] = ;
static unsigned int ac97_read(struct snd_soc_codec *codec,
unsigned int reg)
static int ac97_write(struct snd_soc_codec *codec, unsigned int reg,
unsigned int val)
static int ac97_prepare(struct snd_pcm_substream *substream,
struct snd_soc_dai *dai)
static int ac97_aux_prepare(struct snd_pcm_substream *substream,
struct snd_soc_dai *dai)
#define WM9712_AC97_RATES (SNDRV_PCM_RATE_8000 | SNDRV_PCM_RATE_11025 |\
SNDRV_PCM_RATE_22050 | SNDRV_PCM_RATE_44100 |\
SNDRV_PCM_RATE_48000)
static struct snd_soc_dai_ops wm9712_dai_ops_hifi = ;
static struct snd_soc_dai_ops wm9712_dai_ops_aux = ;
static struct snd_soc_dai_driver wm9712_dai[] = ;
static int wm9712_set_bias_level(struct snd_soc_codec *codec,
enum snd_soc_bias_level level)
static int wm9712_reset(struct snd_soc_codec *codec, int try_warm)
static int wm9712_soc_suspend(struct snd_soc_codec *codec,
pm_message_t state)
static int wm9712_soc_resume(struct snd_soc_codec *codec)
static int wm9712_soc_probe(struct snd_soc_codec *codec)
static int wm9712_soc_remove(struct snd_soc_codec *codec)
static struct snd_soc_codec_driver soc_codec_dev_wm9712 = ;
static __devinit int wm9712_probe(struct platform_device *pdev)
static int __devexit wm9712_remove(struct platform_device *pdev)
static struct platform_driver wm9712_codec_driver = ;
static int __init wm9712_init(void)
module_init(wm9712_init);
static void __exit wm9712_exit(void)
module_exit(wm9712_exit);
MODULE_DESCRIPTION("ASoC WM9711/WM9712 driver");
MODULE_AUTHOR("Liam Girdwood");
MODULE_LICENSE("GPL");
