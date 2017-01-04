#define WM8727_RATES  (SNDRV_PCM_RATE_32000 | SNDRV_PCM_RATE_44100 |\
SNDRV_PCM_RATE_48000 | SNDRV_PCM_RATE_96000 |\
SNDRV_PCM_RATE_192000)
static struct snd_soc_dai_driver wm8727_dai = ;
static struct snd_soc_codec_driver soc_codec_dev_wm8727;
static __devinit int wm8727_probe(struct platform_device *pdev)
static int __devexit wm8727_remove(struct platform_device *pdev)
static struct platform_driver wm8727_codec_driver = ;
static int __init wm8727_init(void)
module_init(wm8727_init);
static void __exit wm8727_exit(void)
module_exit(wm8727_exit);
MODULE_DESCRIPTION("ASoC wm8727 driver");
MODULE_AUTHOR("Neil Jones");
MODULE_LICENSE("GPL");
