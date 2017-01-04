#define IPSEL 0xFE400034
extern struct snd_soc_dai_driver sh4_hac_dai[2];
extern struct snd_soc_platform_driver sh7760_soc_platform;
static int machine_init(struct snd_soc_pcm_runtime *rtd)
static struct snd_soc_dai_link sh7760_ac97_dai = ;
static struct snd_soc_card sh7760_ac97_soc_machine  = ;
static struct platform_device *sh7760_ac97_snd_device;
static int __init sh7760_ac97_init(void)
static void __exit sh7760_ac97_exit(void)
module_init(sh7760_ac97_init);
module_exit(sh7760_ac97_exit);
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Generic SH7760 AC97 sound machine");
MODULE_AUTHOR("Manuel Lauss <mano@roarinelk.homelinux.net>");
