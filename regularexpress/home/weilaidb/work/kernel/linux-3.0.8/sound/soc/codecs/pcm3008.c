#define PCM3008_VERSION "0.2"
#define PCM3008_RATES (SNDRV_PCM_RATE_32000 | SNDRV_PCM_RATE_44100 |	\
SNDRV_PCM_RATE_48000)
static struct snd_soc_dai_driver pcm3008_dai = ;
static void pcm3008_gpio_free(struct pcm3008_setup_data *setup)
static int pcm3008_soc_probe(struct snd_soc_codec *codec)
static int pcm3008_soc_remove(struct snd_soc_codec *codec)
static int pcm3008_soc_suspend(struct snd_soc_codec *codec, pm_message_t msg)
static int pcm3008_soc_resume(struct snd_soc_codec *codec)
#define pcm3008_soc_suspend NULL
#define pcm3008_soc_resume NULL
static struct snd_soc_codec_driver soc_codec_dev_pcm3008 = ;
static int __devinit pcm3008_codec_probe(struct platform_device *pdev)
static int __devexit pcm3008_codec_remove(struct platform_device *pdev)
MODULE_ALIAS("platform:pcm3008-codec");
static struct platform_driver pcm3008_codec_driver = ;
static int __init pcm3008_modinit(void)
module_init(pcm3008_modinit);
static void __exit pcm3008_exit(void)
module_exit(pcm3008_exit);
MODULE_DESCRIPTION("Soc PCM3008 driver");
MODULE_AUTHOR("Hugo Villeneuve");
MODULE_LICENSE("GPL");
