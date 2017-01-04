struct aic32x4_rate_divs ;
struct aic32x4_priv ;
static DECLARE_TLV_DB_SCALE(tlv_step_1, 0, 100, 0);
static DECLARE_TLV_DB_SCALE(tlv_step_0_5, 0, 50, 0);
static const struct snd_kcontrol_new aic32x4_snd_controls[] = ;
static const struct aic32x4_rate_divs aic32x4_divs[] = ;
static const struct snd_kcontrol_new hpl_output_mixer_controls[] = ;
static const struct snd_kcontrol_new hpr_output_mixer_controls[] = ;
static const struct snd_kcontrol_new lol_output_mixer_controls[] = ;
static const struct snd_kcontrol_new lor_output_mixer_controls[] = ;
static const struct snd_kcontrol_new left_input_mixer_controls[] = ;
static const struct snd_kcontrol_new right_input_mixer_controls[] = ;
static const struct snd_soc_dapm_widget aic32x4_dapm_widgets[] = ;
static const struct snd_soc_dapm_route aic32x4_dapm_routes[] = ;
static inline int aic32x4_change_page(struct snd_soc_codec *codec,
unsigned int new_page)
static int aic32x4_write(struct snd_soc_codec *codec, unsigned int reg,
unsigned int val)
static unsigned int aic32x4_read(struct snd_soc_codec *codec, unsigned int reg)
static inline int aic32x4_get_divs(int mclk, int rate)
static int aic32x4_add_widgets(struct snd_soc_codec *codec)
static int aic32x4_set_dai_sysclk(struct snd_soc_dai *codec_dai,
int clk_id, unsigned int freq, int dir)
static int aic32x4_set_dai_fmt(struct snd_soc_dai *codec_dai, unsigned int fmt)
static int aic32x4_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params,
struct snd_soc_dai *dai)
static int aic32x4_mute(struct snd_soc_dai *dai, int mute)
static int aic32x4_set_bias_level(struct snd_soc_codec *codec,
enum snd_soc_bias_level level)
#define AIC32X4_RATES	SNDRV_PCM_RATE_8000_48000
#define AIC32X4_FORMATS	(SNDRV_PCM_FMTBIT_S16_LE | SNDRV_PCM_FMTBIT_S20_3LE \
| SNDRV_PCM_FMTBIT_S24_3LE | SNDRV_PCM_FMTBIT_S32_LE)
static struct snd_soc_dai_ops aic32x4_ops = ;
static struct snd_soc_dai_driver aic32x4_dai = ;
static int aic32x4_suspend(struct snd_soc_codec *codec, pm_message_t state)
static int aic32x4_resume(struct snd_soc_codec *codec)
static int aic32x4_probe(struct snd_soc_codec *codec)
static int aic32x4_remove(struct snd_soc_codec *codec)
static struct snd_soc_codec_driver soc_codec_dev_aic32x4 = ;
static __devinit int aic32x4_i2c_probe(struct i2c_client *i2c,
const struct i2c_device_id *id)
static __devexit int aic32x4_i2c_remove(struct i2c_client *client)
static const struct i2c_device_id aic32x4_i2c_id[] = ;
MODULE_DEVICE_TABLE(i2c, aic32x4_i2c_id);
static struct i2c_driver aic32x4_i2c_driver = ;
static int __init aic32x4_modinit(void)
module_init(aic32x4_modinit);
static void __exit aic32x4_exit(void)
module_exit(aic32x4_exit);
MODULE_DESCRIPTION("ASoC tlv320aic32x4 codec driver");
MODULE_AUTHOR("Javier Martin <javier.martin@vista-silicon.com>");
MODULE_LICENSE("GPL");
