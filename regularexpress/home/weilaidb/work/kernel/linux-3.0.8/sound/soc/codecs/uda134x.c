#define UDA134X_RATES SNDRV_PCM_RATE_8000_48000
#define UDA134X_FORMATS (SNDRV_PCM_FMTBIT_S8 | SNDRV_PCM_FMTBIT_S16_LE | \
SNDRV_PCM_FMTBIT_S18_3LE | SNDRV_PCM_FMTBIT_S20_3LE)
struct uda134x_priv ;
static const char uda134x_reg[UDA134X_REGS_NUM] = ;
static inline unsigned int uda134x_read_reg_cache(struct snd_soc_codec *codec,
unsigned int reg)
static inline void uda134x_write_reg_cache(struct snd_soc_codec *codec,
u8 reg, unsigned int value)
static int uda134x_write(struct snd_soc_codec *codec, unsigned int reg,
unsigned int value)
static inline void uda134x_reset(struct snd_soc_codec *codec)
static int uda134x_mute(struct snd_soc_dai *dai, int mute)
static int uda134x_startup(struct snd_pcm_substream *substream,
struct snd_soc_dai *dai)
static void uda134x_shutdown(struct snd_pcm_substream *substream,
struct snd_soc_dai *dai)
static int uda134x_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params,
struct snd_soc_dai *dai)
static int uda134x_set_dai_sysclk(struct snd_soc_dai *codec_dai,
int clk_id, unsigned int freq, int dir)
static int uda134x_set_dai_fmt(struct snd_soc_dai *codec_dai,
unsigned int fmt)
static int uda134x_set_bias_level(struct snd_soc_codec *codec,
enum snd_soc_bias_level level)
static const char *uda134x_dsp_setting[] = ;
static const char *uda134x_deemph[] = ;
static const char *uda134x_mixmode[] = ;
static const struct soc_enum uda134x_mixer_enum[] = ;
static const struct snd_kcontrol_new uda1341_snd_controls[] = ;
static const struct snd_kcontrol_new uda1340_snd_controls[] = ;
static const struct snd_kcontrol_new uda1345_snd_controls[] = ;
static struct snd_soc_dai_ops uda134x_dai_ops = ;
static struct snd_soc_dai_driver uda134x_dai = ;
static int uda134x_soc_probe(struct snd_soc_codec *codec)
static int uda134x_soc_remove(struct snd_soc_codec *codec)
#if defined(CONFIG_PM)
static int uda134x_soc_suspend(struct snd_soc_codec *codec,
pm_message_t state)
static int uda134x_soc_resume(struct snd_soc_codec *codec)
#define uda134x_soc_suspend NULL
#define uda134x_soc_resume NULL
static struct snd_soc_codec_driver soc_codec_dev_uda134x = ;
static int __devinit uda134x_codec_probe(struct platform_device *pdev)
static int __devexit uda134x_codec_remove(struct platform_device *pdev)
static struct platform_driver uda134x_codec_driver = ;
static int __init uda134x_codec_init(void)
module_init(uda134x_codec_init);
static void __exit uda134x_codec_exit(void)
module_exit(uda134x_codec_exit);
MODULE_DESCRIPTION("UDA134X ALSA soc codec driver");
MODULE_AUTHOR("Zoltan Devai, Christian Pellegrin <chripell@evolware.org>");
MODULE_LICENSE("GPL");
