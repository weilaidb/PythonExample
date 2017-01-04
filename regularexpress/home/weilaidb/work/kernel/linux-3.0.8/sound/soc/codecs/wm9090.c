static const u16 wm9090_reg_defaults[] = ;
struct wm9090_priv ;
static int wm9090_volatile(struct snd_soc_codec *codec, unsigned int reg)
static void wait_for_dc_servo(struct snd_soc_codec *codec)
static const unsigned int in_tlv[] = ;
static const unsigned int mix_tlv[] = ;
static const DECLARE_TLV_DB_SCALE(out_tlv, -5700, 100, 0);
static const unsigned int spkboost_tlv[] = ;
static const struct snd_kcontrol_new wm9090_controls[] = ;
static const struct snd_kcontrol_new wm9090_in1_se_controls[] = ;
static const struct snd_kcontrol_new wm9090_in2_se_controls[] = ;
static int hp_ev(struct snd_soc_dapm_widget *w,
struct snd_kcontrol *kcontrol, int event)
static const struct snd_kcontrol_new spkmix[] = ;
static const struct snd_kcontrol_new spkout[] = ;
static const struct snd_kcontrol_new mixoutl[] = ;
static const struct snd_kcontrol_new mixoutr[] = ;
static const struct snd_soc_dapm_widget wm9090_dapm_widgets[] = ;
static const struct snd_soc_dapm_route audio_map[] = ;
static const struct snd_soc_dapm_route audio_map_in1_se[] = ;
static const struct snd_soc_dapm_route audio_map_in1_diff[] = ;
static const struct snd_soc_dapm_route audio_map_in2_se[] = ;
static const struct snd_soc_dapm_route audio_map_in2_diff[] = ;
static int wm9090_add_controls(struct snd_soc_codec *codec)
static int wm9090_set_bias_level(struct snd_soc_codec *codec,
enum snd_soc_bias_level level)
static int wm9090_probe(struct snd_soc_codec *codec)
static int wm9090_suspend(struct snd_soc_codec *codec, pm_message_t state)
static int wm9090_resume(struct snd_soc_codec *codec)
#define wm9090_suspend NULL
#define wm9090_resume NULL
static int wm9090_remove(struct snd_soc_codec *codec)
static struct snd_soc_codec_driver soc_codec_dev_wm9090 = ;
static int wm9090_i2c_probe(struct i2c_client *i2c,
const struct i2c_device_id *id)
static int __devexit wm9090_i2c_remove(struct i2c_client *i2c)
static const struct i2c_device_id wm9090_id[] = ;
MODULE_DEVICE_TABLE(i2c, wm9090_id);
static struct i2c_driver wm9090_i2c_driver = ;
static int __init wm9090_init(void)
module_init(wm9090_init);
static void __exit wm9090_exit(void)
module_exit(wm9090_exit);
MODULE_AUTHOR("Mark Brown <broonie@opensource.wolfsonmicro.com>");
MODULE_DESCRIPTION("WM9090 ASoC driver");
MODULE_LICENSE("GPL");
