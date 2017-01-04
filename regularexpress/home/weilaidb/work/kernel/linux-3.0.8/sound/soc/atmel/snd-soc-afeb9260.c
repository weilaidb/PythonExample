#define CODEC_CLOCK 	12000000
static int afeb9260_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params)
static struct snd_soc_ops afeb9260_ops = ;
static const struct snd_soc_dapm_widget tlv320aic23_dapm_widgets[] = ;
static const struct snd_soc_dapm_route audio_map[] = ;
static int afeb9260_tlv320aic23_init(struct snd_soc_pcm_runtime *rtd)
static struct snd_soc_dai_link afeb9260_dai = ;
static struct snd_soc_card snd_soc_machine_afeb9260 = ;
static struct platform_device *afeb9260_snd_device;
static int __init afeb9260_soc_init(void)
static void __exit afeb9260_soc_exit(void)
module_init(afeb9260_soc_init);
module_exit(afeb9260_soc_exit);
MODULE_AUTHOR("Sergey Lapin <slapin@ossfans.org>");
MODULE_DESCRIPTION("ALSA SoC for AFEB9260");
MODULE_LICENSE("GPL");
