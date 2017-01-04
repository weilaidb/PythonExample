static const u16 wm9705_reg[] = ;
static const struct snd_kcontrol_new wm9705_snd_ac97_controls[] = ;
static const char *wm9705_mic[] = ;
static const char *wm9705_rec_sel[] = ;
static const struct soc_enum wm9705_enum_mic =
SOC_ENUM_SINGLE(AC97_GENERAL_PURPOSE, 8, 2, wm9705_mic);
static const struct soc_enum wm9705_enum_rec_l =
SOC_ENUM_SINGLE(AC97_REC_SEL, 8, 8, wm9705_rec_sel);
static const struct soc_enum wm9705_enum_rec_r =
SOC_ENUM_SINGLE(AC97_REC_SEL, 0, 8, wm9705_rec_sel);
static const struct snd_kcontrol_new wm9705_hp_mixer_controls[] = ;
static const struct snd_kcontrol_new wm9705_mic_src_controls =
SOC_DAPM_ENUM("Route", wm9705_enum_mic);
static const struct snd_kcontrol_new wm9705_capture_selectl_controls =
SOC_DAPM_ENUM("Route", wm9705_enum_rec_l);
static const struct snd_kcontrol_new wm9705_capture_selectr_controls =
SOC_DAPM_ENUM("Route", wm9705_enum_rec_r);
static const struct snd_soc_dapm_widget wm9705_dapm_widgets[] = ;
static const struct snd_soc_dapm_route wm9705_audio_map[] = ;
static unsigned int ac97_read(struct snd_soc_codec *codec, unsigned int reg)
static int ac97_write(struct snd_soc_codec *codec, unsigned int reg,
unsigned int val)
static int ac97_prepare(struct snd_pcm_substream *substream,
struct snd_soc_dai *dai)
#define WM9705_AC97_RATES (SNDRV_PCM_RATE_8000 | SNDRV_PCM_RATE_11025 | \
SNDRV_PCM_RATE_16000 | SNDRV_PCM_RATE_22050 | \
SNDRV_PCM_RATE_32000 | SNDRV_PCM_RATE_44100 | \
SNDRV_PCM_RATE_48000)
static struct snd_soc_dai_ops wm9705_dai_ops = ;
static struct snd_soc_dai_driver wm9705_dai[] = ;
static int wm9705_reset(struct snd_soc_codec *codec)
static int wm9705_soc_suspend(struct snd_soc_codec *codec, pm_message_t msg)
static int wm9705_soc_resume(struct snd_soc_codec *codec)
#define wm9705_soc_suspend NULL
#define wm9705_soc_resume NULL
static int wm9705_soc_probe(struct snd_soc_codec *codec)
static int wm9705_soc_remove(struct snd_soc_codec *codec)
static struct snd_soc_codec_driver soc_codec_dev_wm9705 = ;
static __devinit int wm9705_probe(struct platform_device *pdev)
static int __devexit wm9705_remove(struct platform_device *pdev)
static struct platform_driver wm9705_codec_driver = ;
static int __init wm9705_init(void)
module_init(wm9705_init);
static void __exit wm9705_exit(void)
module_exit(wm9705_exit);
MODULE_DESCRIPTION("ASoC WM9705 driver");
MODULE_AUTHOR("Ian Molton");
MODULE_LICENSE("GPL v2");
