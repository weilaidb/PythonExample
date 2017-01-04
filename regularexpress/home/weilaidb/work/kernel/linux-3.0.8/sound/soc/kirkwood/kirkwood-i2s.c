#define DRV_NAME	"kirkwood-i2s"
#define KIRKWOOD_I2S_RATES \
(SNDRV_PCM_RATE_44100 | \
SNDRV_PCM_RATE_48000 | SNDRV_PCM_RATE_96000)
#define KIRKWOOD_I2S_FORMATS \
(SNDRV_PCM_FMTBIT_S16_LE | \
SNDRV_PCM_FMTBIT_S24_LE | \
SNDRV_PCM_FMTBIT_S32_LE)
static int kirkwood_i2s_set_fmt(struct snd_soc_dai *cpu_dai,
unsigned int fmt)
static inline void kirkwood_set_dco(void __iomem *io, unsigned long rate)
static int kirkwood_i2s_startup(struct snd_pcm_substream *substream,
struct snd_soc_dai *dai)
static int kirkwood_i2s_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params,
struct snd_soc_dai *dai)
static int kirkwood_i2s_play_trigger(struct snd_pcm_substream *substream,
int cmd, struct snd_soc_dai *dai)
static int kirkwood_i2s_rec_trigger(struct snd_pcm_substream *substream,
int cmd, struct snd_soc_dai *dai)
static int kirkwood_i2s_trigger(struct snd_pcm_substream *substream, int cmd,
struct snd_soc_dai *dai)
static int kirkwood_i2s_probe(struct snd_soc_dai *dai)
static int kirkwood_i2s_remove(struct snd_soc_dai *dai)
static struct snd_soc_dai_ops kirkwood_i2s_dai_ops = ;
static struct snd_soc_dai_driver kirkwood_i2s_dai = ;
static __devinit int kirkwood_i2s_dev_probe(struct platform_device *pdev)
static __devexit int kirkwood_i2s_dev_remove(struct platform_device *pdev)
static struct platform_driver kirkwood_i2s_driver = ;
static int __init kirkwood_i2s_init(void)
module_init(kirkwood_i2s_init);
static void __exit kirkwood_i2s_exit(void)
module_exit(kirkwood_i2s_exit);
MODULE_AUTHOR("Arnaud Patard, <arnaud.patard@rtp-net.org>");
MODULE_DESCRIPTION("Kirkwood I2S SoC Interface");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:kirkwood-i2s");
