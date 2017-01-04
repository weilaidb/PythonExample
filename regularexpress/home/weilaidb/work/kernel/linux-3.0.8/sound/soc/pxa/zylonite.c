static int clk_pout;
module_param(clk_pout, int, 0);
MODULE_PARM_DESC(clk_pout, "Use CLK_POUT as WM9713 MCLK (SW15 on board).");
static struct clk *pout;
static struct snd_soc_card zylonite;
static const struct snd_soc_dapm_widget zylonite_dapm_widgets[] = ;
static const struct snd_soc_dapm_route audio_map[] = ;
static int zylonite_wm9713_init(struct snd_soc_pcm_runtime *rtd)
static int zylonite_voice_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params)
static struct snd_soc_ops zylonite_voice_ops = ;
static struct snd_soc_dai_link zylonite_dai[] = ;
static int zylonite_probe(struct snd_soc_card *card)
static int zylonite_remove(struct snd_soc_card *card)
static int zylonite_suspend_post(struct snd_soc_card *card)
static int zylonite_resume_pre(struct snd_soc_card *card)
static struct snd_soc_card zylonite = ;
static struct platform_device *zylonite_snd_ac97_device;
static int __init zylonite_init(void)
static void __exit zylonite_exit(void)
module_init(zylonite_init);
module_exit(zylonite_exit);
MODULE_AUTHOR("Mark Brown <broonie@opensource.wolfsonmicro.com>");
MODULE_DESCRIPTION("ALSA SoC WM9713 Zylonite");
MODULE_LICENSE("GPL");
