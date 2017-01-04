#define AK4535_VERSION "0.3"
struct ak4535_priv ;
static const u16 ak4535_reg[AK4535_CACHEREGNUM] = ;
static inline unsigned int ak4535_read_reg_cache(struct snd_soc_codec *codec,
unsigned int reg)
static inline void ak4535_write_reg_cache(struct snd_soc_codec *codec,
u16 reg, unsigned int value)
static int ak4535_write(struct snd_soc_codec *codec, unsigned int reg,
unsigned int value)
static int ak4535_sync(struct snd_soc_codec *codec)
;
static const char *ak4535_mono_gain[] = ;
static const char *ak4535_mono_out[] = ;
static const char *ak4535_hp_out[] = ;
static const char *ak4535_deemp[] = ;
static const char *ak4535_mic_select[] = ;
static const struct soc_enum ak4535_enum[] = ;
static const struct snd_kcontrol_new ak4535_snd_controls[] = ;
static const struct snd_kcontrol_new ak4535_mono1_mixer_controls[] = ;
static const struct snd_kcontrol_new ak4535_stereo_mixer_controls[] = ;
static const struct snd_kcontrol_new ak4535_input_mixer_controls[] = ;
static const struct snd_kcontrol_new ak4535_input_mux_control =
SOC_DAPM_ENUM("Input Select", ak4535_enum[4]);
static const struct snd_kcontrol_new ak4535_hpl_control =
SOC_DAPM_SINGLE("Switch", AK4535_SIG2, 1, 1, 1);
static const struct snd_kcontrol_new ak4535_hpr_control =
SOC_DAPM_SINGLE("Switch", AK4535_SIG2, 0, 1, 1);
static const struct snd_kcontrol_new ak4535_mono2_control =
SOC_DAPM_SINGLE("Switch", AK4535_SIG1, 0, 1, 0);
static const struct snd_kcontrol_new ak4535_line_control =
SOC_DAPM_SINGLE("Switch", AK4535_SIG2, 6, 1, 0);
static const struct snd_soc_dapm_widget ak4535_dapm_widgets[] = ;
static const struct snd_soc_dapm_route ak4535_audio_map[] = ;
static int ak4535_set_dai_sysclk(struct snd_soc_dai *codec_dai,
int clk_id, unsigned int freq, int dir)
static int ak4535_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params,
struct snd_soc_dai *dai)
static int ak4535_set_dai_fmt(struct snd_soc_dai *codec_dai,
unsigned int fmt)
static int ak4535_mute(struct snd_soc_dai *dai, int mute)
static int ak4535_set_bias_level(struct snd_soc_codec *codec,
enum snd_soc_bias_level level)
#define AK4535_RATES (SNDRV_PCM_RATE_8000 | SNDRV_PCM_RATE_11025 |\
SNDRV_PCM_RATE_16000 | SNDRV_PCM_RATE_22050 |\
SNDRV_PCM_RATE_44100 | SNDRV_PCM_RATE_48000)
static struct snd_soc_dai_ops ak4535_dai_ops = ;
static struct snd_soc_dai_driver ak4535_dai = ;
static int ak4535_suspend(struct snd_soc_codec *codec, pm_message_t state)
static int ak4535_resume(struct snd_soc_codec *codec)
static int ak4535_probe(struct snd_soc_codec *codec)
static int ak4535_remove(struct snd_soc_codec *codec)
static struct snd_soc_codec_driver soc_codec_dev_ak4535 = ;
#if defined(CONFIG_I2C) || defined(CONFIG_I2C_MODULE)
static __devinit int ak4535_i2c_probe(struct i2c_client *i2c,
const struct i2c_device_id *id)
static __devexit int ak4535_i2c_remove(struct i2c_client *client)
static const struct i2c_device_id ak4535_i2c_id[] = ;
MODULE_DEVICE_TABLE(i2c, ak4535_i2c_id);
static struct i2c_driver ak4535_i2c_driver = ;
static int __init ak4535_modinit(void)
module_init(ak4535_modinit);
static void __exit ak4535_exit(void)
module_exit(ak4535_exit);
MODULE_DESCRIPTION("Soc AK4535 driver");
MODULE_AUTHOR("Richard Purdie");
MODULE_LICENSE("GPL");
