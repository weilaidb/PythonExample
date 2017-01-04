struct max9850_priv ;
static const u8 max9850_reg[MAX9850_CACHEREGNUM] = ;
static int max9850_volatile_register(struct snd_soc_codec *codec,
unsigned int reg)
static const unsigned int max9850_tlv[] = ;
static const struct snd_kcontrol_new max9850_controls[] = ;
static const struct snd_kcontrol_new max9850_mixer_controls[] = ;
static const struct snd_soc_dapm_widget max9850_dapm_widgets[] = ;
static const struct snd_soc_dapm_route intercon[] = ;
static int max9850_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params,
struct snd_soc_dai *dai)
static int max9850_set_dai_sysclk(struct snd_soc_dai *codec_dai,
int clk_id, unsigned int freq, int dir)
static int max9850_set_dai_fmt(struct snd_soc_dai *codec_dai, unsigned int fmt)
static int max9850_set_bias_level(struct snd_soc_codec *codec,
enum snd_soc_bias_level level)
#define MAX9850_RATES SNDRV_PCM_RATE_8000_48000
#define MAX9850_FORMATS (SNDRV_PCM_FMTBIT_S16_LE | SNDRV_PCM_FMTBIT_S20_3LE |\
SNDRV_PCM_FMTBIT_S24_LE)
static struct snd_soc_dai_ops max9850_dai_ops = ;
static struct snd_soc_dai_driver max9850_dai = ;
static int max9850_suspend(struct snd_soc_codec *codec, pm_message_t state)
static int max9850_resume(struct snd_soc_codec *codec)
#define max9850_suspend NULL
#define max9850_resume NULL
static int max9850_probe(struct snd_soc_codec *codec)
static struct snd_soc_codec_driver soc_codec_dev_max9850 = ;
static int __devinit max9850_i2c_probe(struct i2c_client *i2c,
const struct i2c_device_id *id)
static __devexit int max9850_i2c_remove(struct i2c_client *client)
static const struct i2c_device_id max9850_i2c_id[] = ;
MODULE_DEVICE_TABLE(i2c, max9850_i2c_id);
static struct i2c_driver max9850_i2c_driver = ;
static int __init max9850_init(void)
module_init(max9850_init);
static void __exit max9850_exit(void)
module_exit(max9850_exit);
MODULE_AUTHOR("Christian Glindkamp <christian.glindkamp@taskit.de>");
MODULE_DESCRIPTION("ASoC MAX9850 codec driver");
MODULE_LICENSE("GPL");
