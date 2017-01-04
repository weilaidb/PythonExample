struct uda1380_priv ;
static const u16 uda1380_reg[UDA1380_CACHEREGNUM] = ;
static unsigned long uda1380_cache_dirty;
static inline unsigned int uda1380_read_reg_cache(struct snd_soc_codec *codec,
unsigned int reg)
static inline void uda1380_write_reg_cache(struct snd_soc_codec *codec,
u16 reg, unsigned int value)
static int uda1380_write(struct snd_soc_codec *codec, unsigned int reg,
unsigned int value)
static void uda1380_sync_cache(struct snd_soc_codec *codec)
static int uda1380_reset(struct snd_soc_codec *codec)
static void uda1380_flush_work(struct work_struct *work)
static const char *uda1380_deemp[] = ;
static const char *uda1380_input_sel[] = ;
static const char *uda1380_output_sel[] = ;
static const char *uda1380_spf_mode[] = ;
static const char *uda1380_capture_sel[] = ;
static const char *uda1380_sel_ns[] = ;
static const char *uda1380_mix_control[] = ;
static const char *uda1380_sdet_setting[] = ;
static const char *uda1380_os_setting[] = ;
static const struct soc_enum uda1380_deemp_enum[] = ;
static const struct soc_enum uda1380_input_sel_enum =
SOC_ENUM_SINGLE(UDA1380_ADC, 2, 4, uda1380_input_sel);
static const struct soc_enum uda1380_output_sel_enum =
SOC_ENUM_SINGLE(UDA1380_PM, 7, 2, uda1380_output_sel);
static const struct soc_enum uda1380_spf_enum =
SOC_ENUM_SINGLE(UDA1380_MODE, 14, 4, uda1380_spf_mode);
static const struct soc_enum uda1380_capture_sel_enum =
SOC_ENUM_SINGLE(UDA1380_IFACE, 6, 2, uda1380_capture_sel);
static const struct soc_enum uda1380_sel_ns_enum =
SOC_ENUM_SINGLE(UDA1380_MIXER, 14, 2, uda1380_sel_ns);
static const struct soc_enum uda1380_mix_enum =
SOC_ENUM_SINGLE(UDA1380_MIXER, 12, 4, uda1380_mix_control);
static const struct soc_enum uda1380_sdet_enum =
SOC_ENUM_SINGLE(UDA1380_MIXER, 4, 4, uda1380_sdet_setting);
static const struct soc_enum uda1380_os_enum =
SOC_ENUM_SINGLE(UDA1380_MIXER, 0, 3, uda1380_os_setting);
static DECLARE_TLV_DB_SCALE(amix_tlv, -4950, 150, 1);
static const unsigned int mvol_tlv[] = ;
static const unsigned int vc_tlv[] = ;
static DECLARE_TLV_DB_SCALE(tr_tlv, 0, 200, 0);
static DECLARE_TLV_DB_SCALE(bb_tlv, 0, 200, 0);
static DECLARE_TLV_DB_SCALE(dec_tlv, -6400, 50, 1);
static DECLARE_TLV_DB_SCALE(pga_tlv, 0, 300, 0);
static DECLARE_TLV_DB_SCALE(vga_tlv, 0, 200, 0);
static const struct snd_kcontrol_new uda1380_snd_controls[] = ;
static const struct snd_kcontrol_new uda1380_input_mux_control =
SOC_DAPM_ENUM("Route", uda1380_input_sel_enum);
static const struct snd_kcontrol_new uda1380_output_mux_control =
SOC_DAPM_ENUM("Route", uda1380_output_sel_enum);
static const struct snd_kcontrol_new uda1380_capture_mux_control =
SOC_DAPM_ENUM("Route", uda1380_capture_sel_enum);
static const struct snd_soc_dapm_widget uda1380_dapm_widgets[] = ;
static const struct snd_soc_dapm_route audio_map[] = ;
static int uda1380_add_widgets(struct snd_soc_codec *codec)
static int uda1380_set_dai_fmt_both(struct snd_soc_dai *codec_dai,
unsigned int fmt)
static int uda1380_set_dai_fmt_playback(struct snd_soc_dai *codec_dai,
unsigned int fmt)
static int uda1380_set_dai_fmt_capture(struct snd_soc_dai *codec_dai,
unsigned int fmt)
static int uda1380_trigger(struct snd_pcm_substream *substream, int cmd,
struct snd_soc_dai *dai)
static int uda1380_pcm_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params,
struct snd_soc_dai *dai)
static void uda1380_pcm_shutdown(struct snd_pcm_substream *substream,
struct snd_soc_dai *dai)
static int uda1380_set_bias_level(struct snd_soc_codec *codec,
enum snd_soc_bias_level level)
#define UDA1380_RATES (SNDRV_PCM_RATE_8000 | SNDRV_PCM_RATE_11025 |\
SNDRV_PCM_RATE_16000 | SNDRV_PCM_RATE_22050 |\
SNDRV_PCM_RATE_44100 | SNDRV_PCM_RATE_48000)
static struct snd_soc_dai_ops uda1380_dai_ops = ;
static struct snd_soc_dai_ops uda1380_dai_ops_playback = ;
static struct snd_soc_dai_ops uda1380_dai_ops_capture = ;
static struct snd_soc_dai_driver uda1380_dai[] = ;
static int uda1380_suspend(struct snd_soc_codec *codec, pm_message_t state)
static int uda1380_resume(struct snd_soc_codec *codec)
static int uda1380_probe(struct snd_soc_codec *codec)
static int uda1380_remove(struct snd_soc_codec *codec)
static struct snd_soc_codec_driver soc_codec_dev_uda1380 = ;
#if defined(CONFIG_I2C) || defined(CONFIG_I2C_MODULE)
static __devinit int uda1380_i2c_probe(struct i2c_client *i2c,
const struct i2c_device_id *id)
static int __devexit uda1380_i2c_remove(struct i2c_client *i2c)
static const struct i2c_device_id uda1380_i2c_id[] = ;
MODULE_DEVICE_TABLE(i2c, uda1380_i2c_id);
static struct i2c_driver uda1380_i2c_driver = ;
static int __init uda1380_modinit(void)
module_init(uda1380_modinit);
static void __exit uda1380_exit(void)
module_exit(uda1380_exit);
MODULE_AUTHOR("Giorgio Padrin");
MODULE_DESCRIPTION("Audio support for codec Philips UDA1380");
MODULE_LICENSE("GPL");
