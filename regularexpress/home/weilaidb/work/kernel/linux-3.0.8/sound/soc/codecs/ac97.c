static int ac97_prepare(struct snd_pcm_substream *substream,
struct snd_soc_dai *dai)
#define STD_AC97_RATES (SNDRV_PCM_RATE_8000 | SNDRV_PCM_RATE_11025 |\
SNDRV_PCM_RATE_22050 | SNDRV_PCM_RATE_44100 |\
SNDRV_PCM_RATE_48000)
static struct snd_soc_dai_ops ac97_dai_ops = ;
static struct snd_soc_dai_driver ac97_dai = ;
static unsigned int ac97_read(struct snd_soc_codec *codec,
unsigned int reg)
static int ac97_write(struct snd_soc_codec *codec, unsigned int reg,
unsigned int val)
static int ac97_soc_probe(struct snd_soc_codec *codec)
static int ac97_soc_remove(struct snd_soc_codec *codec)
static int ac97_soc_suspend(struct snd_soc_codec *codec, pm_message_t msg)
static int ac97_soc_resume(struct snd_soc_codec *codec)
#define ac97_soc_suspend NULL
#define ac97_soc_resume NULL
static struct snd_soc_codec_driver soc_codec_dev_ac97 = ;
static __devinit int ac97_probe(struct platform_device *pdev)
static int __devexit ac97_remove(struct platform_device *pdev)
static struct platform_driver ac97_codec_driver = ;
static int __init ac97_init(void)
module_init(ac97_init);
static void __exit ac97_exit(void)
module_exit(ac97_exit);
MODULE_DESCRIPTION("Soc Generic AC97 driver");
MODULE_AUTHOR("Liam Girdwood");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:ac97-codec");
