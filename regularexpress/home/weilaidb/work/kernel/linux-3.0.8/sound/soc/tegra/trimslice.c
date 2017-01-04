#define DRV_NAME "tegra-snd-trimslice"
struct tegra_trimslice ;
static int trimslice_asoc_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params)
static struct snd_soc_ops trimslice_asoc_ops = ;
static const struct snd_soc_dapm_widget trimslice_dapm_widgets[] = ;
static const struct snd_soc_dapm_route trimslice_audio_map[] = ;
static int trimslice_asoc_init(struct snd_soc_pcm_runtime *rtd)
static struct snd_soc_dai_link trimslice_tlv320aic23_dai = ;
static struct snd_soc_card snd_soc_trimslice = ;
static __devinit int tegra_snd_trimslice_probe(struct platform_device *pdev)
static int __devexit tegra_snd_trimslice_remove(struct platform_device *pdev)
static struct platform_driver tegra_snd_trimslice_driver = ;
static int __init snd_tegra_trimslice_init(void)
module_init(snd_tegra_trimslice_init);
static void __exit snd_tegra_trimslice_exit(void)
module_exit(snd_tegra_trimslice_exit);
MODULE_AUTHOR("Mike Rapoport <mike@compulab.co.il>");
MODULE_DESCRIPTION("Trimslice machine ASoC driver");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:" DRV_NAME);
