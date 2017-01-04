static struct snd_soc_dai_link db1200_ac97_dai = ;
static struct snd_soc_card db1200_ac97_machine = ;
static int db1200_i2s_startup(struct snd_pcm_substream *substream)
static struct snd_soc_ops db1200_i2s_wm8731_ops = ;
static struct snd_soc_dai_link db1200_i2s_dai = ;
static struct snd_soc_card db1200_i2s_machine = ;
static struct platform_device *db1200_asoc_dev;
static int __init db1200_audio_load(void)
static void __exit db1200_audio_unload(void)
module_init(db1200_audio_load);
module_exit(db1200_audio_unload);
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("DB1200 ASoC audio support");
MODULE_AUTHOR("Manuel Lauss");
