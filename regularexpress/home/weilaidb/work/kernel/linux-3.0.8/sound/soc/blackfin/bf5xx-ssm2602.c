static struct snd_soc_card bf5xx_ssm2602;
static int bf5xx_ssm2602_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params)
static struct snd_soc_ops bf5xx_ssm2602_ops = ;
static struct snd_soc_dai_link bf5xx_ssm2602_dai[] = ;
static struct snd_soc_card bf5xx_ssm2602 = ;
static struct platform_device *bf5xx_ssm2602_snd_device;
static int __init bf5xx_ssm2602_init(void)
static void __exit bf5xx_ssm2602_exit(void)
module_init(bf5xx_ssm2602_init);
module_exit(bf5xx_ssm2602_exit);
MODULE_AUTHOR("Cliff Cai");
MODULE_DESCRIPTION("ALSA SoC SSM2602 BF527-EZKIT");
MODULE_LICENSE("GPL");
