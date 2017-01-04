#define edb93xx_has_audio() (machine_is_edb9301() ||	\
machine_is_edb9302() ||	\
machine_is_edb9302a() ||	\
machine_is_edb9307a() ||	\
machine_is_edb9315a())
static int edb93xx_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params)
static struct snd_soc_ops edb93xx_ops = ;
static struct snd_soc_dai_link edb93xx_dai = ;
static struct snd_soc_card snd_soc_edb93xx = ;
static struct platform_device *edb93xx_snd_device;
static int __init edb93xx_init(void)
module_init(edb93xx_init);
static void __exit edb93xx_exit(void)
module_exit(edb93xx_exit);
MODULE_AUTHOR("Alexander Sverdlin <subaparts@yandex.ru>");
MODULE_DESCRIPTION("ALSA SoC EDB93xx");
MODULE_LICENSE("GPL");
