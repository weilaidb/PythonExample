#define STAC9766_VERSION "0.10"
static const u16 stac9766_reg[] = ;
static const char *stac9766_record_mux[] = ;
static const char *stac9766_mono_mux[] = ;
static const char *stac9766_mic_mux[] = ;
static const char *stac9766_SPDIF_mux[] = ;
static const char *stac9766_popbypass_mux[] = ;
static const char *stac9766_record_all_mux[] = ;
static const char *stac9766_boost1[] = ;
static const char *stac9766_boost2[] = ;
static const char *stac9766_stereo_mic[] = ;
static const struct soc_enum stac9766_record_enum =
SOC_ENUM_DOUBLE(AC97_REC_SEL, 8, 0, 8, stac9766_record_mux);
static const struct soc_enum stac9766_mono_enum =
SOC_ENUM_SINGLE(AC97_GENERAL_PURPOSE, 9, 2, stac9766_mono_mux);
static const struct soc_enum stac9766_mic_enum =
SOC_ENUM_SINGLE(AC97_GENERAL_PURPOSE, 8, 2, stac9766_mic_mux);
static const struct soc_enum stac9766_SPDIF_enum =
SOC_ENUM_SINGLE(AC97_STAC_DA_CONTROL, 1, 2, stac9766_SPDIF_mux);
static const struct soc_enum stac9766_popbypass_enum =
SOC_ENUM_SINGLE(AC97_GENERAL_PURPOSE, 15, 2, stac9766_popbypass_mux);
static const struct soc_enum stac9766_record_all_enum =
SOC_ENUM_SINGLE(AC97_STAC_ANALOG_SPECIAL, 12, 2,
stac9766_record_all_mux);
static const struct soc_enum stac9766_boost1_enum =
SOC_ENUM_SINGLE(AC97_MIC, 6, 2, stac9766_boost1);
static const struct soc_enum stac9766_boost2_enum =
SOC_ENUM_SINGLE(AC97_STAC_ANALOG_SPECIAL, 2, 2, stac9766_boost2);
static const struct soc_enum stac9766_stereo_mic_enum =
SOC_ENUM_SINGLE(AC97_STAC_STEREO_MIC, 2, 1, stac9766_stereo_mic);
static const DECLARE_TLV_DB_LINEAR(master_tlv, -4600, 0);
static const DECLARE_TLV_DB_LINEAR(record_tlv, 0, 2250);
static const DECLARE_TLV_DB_LINEAR(beep_tlv, -4500, 0);
static const DECLARE_TLV_DB_LINEAR(mix_tlv, -3450, 1200);
static const struct snd_kcontrol_new stac9766_snd_ac97_controls[] = ;
static int stac9766_ac97_write(struct snd_soc_codec *codec, unsigned int reg,
unsigned int val)
static unsigned int stac9766_ac97_read(struct snd_soc_codec *codec,
unsigned int reg)
static int ac97_analog_prepare(struct snd_pcm_substream *substream,
struct snd_soc_dai *dai)
static int ac97_digital_prepare(struct snd_pcm_substream *substream,
struct snd_soc_dai *dai)
static int stac9766_set_bias_level(struct snd_soc_codec *codec,
enum snd_soc_bias_level level)
static int stac9766_reset(struct snd_soc_codec *codec, int try_warm)
static int stac9766_codec_suspend(struct snd_soc_codec *codec,
pm_message_t state)
static int stac9766_codec_resume(struct snd_soc_codec *codec)
static struct snd_soc_dai_ops stac9766_dai_ops_analog = ;
static struct snd_soc_dai_ops stac9766_dai_ops_digital = ;
static struct snd_soc_dai_driver stac9766_dai[] = ;
static int stac9766_codec_probe(struct snd_soc_codec *codec)
static int stac9766_codec_remove(struct snd_soc_codec *codec)
static struct snd_soc_codec_driver soc_codec_dev_stac9766 = ;
static __devinit int stac9766_probe(struct platform_device *pdev)
static int __devexit stac9766_remove(struct platform_device *pdev)
static struct platform_driver stac9766_codec_driver = ;
static int __init stac9766_init(void)
module_init(stac9766_init);
static void __exit stac9766_exit(void)
module_exit(stac9766_exit);
MODULE_DESCRIPTION("ASoC stac9766 driver");
MODULE_AUTHOR("Jon Smirl <jonsmirl@gmail.com>");
MODULE_LICENSE("GPL");
