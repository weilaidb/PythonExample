static const struct snd_soc_dapm_route audio_map[] = ;
static const struct snd_soc_dapm_widget wm8750_dapm_widgets[] = ;
static int jive_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params)
static struct snd_soc_ops jive_ops = ;
static int jive_wm8750_init(struct snd_soc_pcm_runtime *rtd)
static struct snd_soc_dai_link jive_dai = ;
static struct snd_soc_card snd_soc_machine_jive = ;
static struct platform_device *jive_snd_device;
static int __init jive_init(void)
static void __exit jive_exit(void)
module_init(jive_init);
module_exit(jive_exit);
MODULE_AUTHOR("Ben Dooks <ben@simtec.co.uk>");
MODULE_DESCRIPTION("ALSA SoC Jive Audio support");
MODULE_LICENSE("GPL");
