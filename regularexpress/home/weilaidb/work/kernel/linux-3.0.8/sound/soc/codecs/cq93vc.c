static inline unsigned int cq93vc_read(struct snd_soc_codec *codec,
unsigned int reg)
static inline int cq93vc_write(struct snd_soc_codec *codec, unsigned int reg,
unsigned int value)
static const struct snd_kcontrol_new cq93vc_snd_controls[] = ;
static int cq93vc_mute(struct snd_soc_dai *dai, int mute)
static int cq93vc_set_dai_sysclk(struct snd_soc_dai *codec_dai,
int clk_id, unsigned int freq, int dir)
static int cq93vc_set_bias_level(struct snd_soc_codec *codec,
enum snd_soc_bias_level level)
#define CQ93VC_RATES	(SNDRV_PCM_RATE_8000 | SNDRV_PCM_RATE_16000)
#define CQ93VC_FORMATS	(SNDRV_PCM_FMTBIT_U8 | SNDRV_PCM_FMTBIT_S16_LE)
static struct snd_soc_dai_ops cq93vc_dai_ops = ;
static struct snd_soc_dai_driver cq93vc_dai = ;
static int cq93vc_resume(struct snd_soc_codec *codec)
static int cq93vc_probe(struct snd_soc_codec *codec)
static int cq93vc_remove(struct snd_soc_codec *codec)
static struct snd_soc_codec_driver soc_codec_dev_cq93vc = ;
static int cq93vc_platform_probe(struct platform_device *pdev)
static int cq93vc_platform_remove(struct platform_device *pdev)
static struct platform_driver cq93vc_codec_driver = ;
static int __init cq93vc_init(void)
module_init(cq93vc_init);
static void __exit cq93vc_exit(void)
module_exit(cq93vc_exit);
MODULE_DESCRIPTION("Texas Instruments DaVinci ASoC CQ0093 Voice Codec Driver");
MODULE_AUTHOR("Miguel Aguilar");
MODULE_LICENSE("GPL");
