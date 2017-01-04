MODULE_DESCRIPTION("ASoC TLV320AIC26 codec driver");
MODULE_AUTHOR("Grant Likely <grant.likely@secretlab.ca>");
MODULE_LICENSE("GPL");
struct aic26 ;
static unsigned int aic26_reg_read(struct snd_soc_codec *codec,
unsigned int reg)
static unsigned int aic26_reg_read_cache(struct snd_soc_codec *codec,
unsigned int reg)
static int aic26_reg_write(struct snd_soc_codec *codec, unsigned int reg,
unsigned int value)
static int aic26_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params,
struct snd_soc_dai *dai)
static int aic26_mute(struct snd_soc_dai *dai, int mute)
static int aic26_set_sysclk(struct snd_soc_dai *codec_dai,
int clk_id, unsigned int freq, int dir)
static int aic26_set_fmt(struct snd_soc_dai *codec_dai, unsigned int fmt)
#define AIC26_RATES	(SNDRV_PCM_RATE_8000  | SNDRV_PCM_RATE_11025 |\
SNDRV_PCM_RATE_16000 | SNDRV_PCM_RATE_22050 |\
SNDRV_PCM_RATE_32000 | SNDRV_PCM_RATE_44100 |\
SNDRV_PCM_RATE_48000)
#define AIC26_FORMATS	(SNDRV_PCM_FMTBIT_S8     | SNDRV_PCM_FMTBIT_S16_BE |\
SNDRV_PCM_FMTBIT_S24_BE | SNDRV_PCM_FMTBIT_S32_BE)
static struct snd_soc_dai_ops aic26_dai_ops = ;
static struct snd_soc_dai_driver aic26_dai = ;
static const char *aic26_capture_src_text[] = ;
static const struct soc_enum aic26_capture_src_enum =
SOC_ENUM_SINGLE(AIC26_REG_AUDIO_CTRL1, 12, 2, aic26_capture_src_text);
static const struct snd_kcontrol_new aic26_snd_controls[] = ;
static ssize_t aic26_keyclick_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t aic26_keyclick_set(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(keyclick, 0644, aic26_keyclick_show, aic26_keyclick_set);
static int aic26_probe(struct snd_soc_codec *codec)
static struct snd_soc_codec_driver aic26_soc_codec_dev = ;
static int aic26_spi_probe(struct spi_device *spi)
static int aic26_spi_remove(struct spi_device *spi)
static struct spi_driver aic26_spi = ;
static int __init aic26_init(void)
module_init(aic26_init);
static void __exit aic26_exit(void)
module_exit(aic26_exit);
