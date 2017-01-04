static int mx27vis_aic32x4_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params)
static struct snd_soc_ops mx27vis_aic32x4_snd_ops = ;
static struct snd_soc_dai_link mx27vis_aic32x4_dai = ;
static struct snd_soc_card mx27vis_aic32x4 = ;
static struct platform_device *mx27vis_aic32x4_snd_device;
static int __init mx27vis_aic32x4_init(void)
static void __exit mx27vis_aic32x4_exit(void)
module_init(mx27vis_aic32x4_init);
module_exit(mx27vis_aic32x4_exit);
MODULE_AUTHOR("Javier Martin <javier.martin@vista-silicon.com>");
MODULE_DESCRIPTION("ALSA SoC AIC32X4 mx27 visstrim");
MODULE_LICENSE("GPL");
