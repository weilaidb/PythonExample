#define CODEC_CLOCK 	12000000
static struct clk *tlv320aic23_mclk;
static int osk_startup(struct snd_pcm_substream *substream)
static void osk_shutdown(struct snd_pcm_substream *substream)
static int osk_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params)
static struct snd_soc_ops osk_ops = ;
static const struct snd_soc_dapm_widget tlv320aic23_dapm_widgets[] = ;
static const struct snd_soc_dapm_route audio_map[] = ;
static int osk_tlv320aic23_init(struct snd_soc_pcm_runtime *rtd)
static struct snd_soc_dai_link osk_dai = ;
static struct snd_soc_card snd_soc_card_osk = ;
static struct platform_device *osk_snd_device;
static int __init osk_soc_init(void)
static void __exit osk_soc_exit(void)
module_init(osk_soc_init);
module_exit(osk_soc_exit);
MODULE_AUTHOR("Arun KS <arunks@mistralsolutions.com>");
MODULE_DESCRIPTION("ALSA SoC OSK 5912");
MODULE_LICENSE("GPL");
