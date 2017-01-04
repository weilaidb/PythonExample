static unsigned long codec_freq = 8000 * 512;
static unsigned int use_count;
static unsigned long siumckb_recalc(struct clk *clk)
static struct clk_ops siumckb_clk_ops = ;
static struct clk siumckb_clk = ;
static struct clk_lookup *siumckb_lookup;
static int migor_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params)
static int migor_hw_free(struct snd_pcm_substream *substream)
static struct snd_soc_ops migor_dai_ops = ;
static const struct snd_soc_dapm_widget migor_dapm_widgets[] = ;
static const struct snd_soc_dapm_route audio_map[] = ;
static int migor_dai_init(struct snd_soc_pcm_runtime *rtd)
static struct snd_soc_dai_link migor_dai = ;
static struct snd_soc_card snd_soc_migor = ;
static struct platform_device *migor_snd_device;
static int __init migor_init(void)
static void __exit migor_exit(void)
module_init(migor_init);
module_exit(migor_exit);
MODULE_AUTHOR("Guennadi Liakhovetski <g.liakhovetski@gmx.de>");
MODULE_DESCRIPTION("ALSA SoC Migor");
MODULE_LICENSE("GPL v2");
