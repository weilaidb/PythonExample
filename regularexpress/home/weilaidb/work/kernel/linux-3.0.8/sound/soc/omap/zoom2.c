#define ZOOM2_HEADSET_MUX_GPIO		(OMAP_MAX_GPIO_LINES + 15)
static int zoom2_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params)
static struct snd_soc_ops zoom2_ops = ;
static int zoom2_hw_voice_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params)
static struct snd_soc_ops zoom2_voice_ops = ;
static const struct snd_soc_dapm_widget zoom2_twl4030_dapm_widgets[] = ;
static const struct snd_soc_dapm_route audio_map[] = ;
static int zoom2_twl4030_init(struct snd_soc_pcm_runtime *rtd)
static int zoom2_twl4030_voice_init(struct snd_soc_pcm_runtime *rtd)
static struct snd_soc_dai_link zoom2_dai[] = ;
static struct snd_soc_card snd_soc_zoom2 = ;
static struct platform_device *zoom2_snd_device;
static int __init zoom2_soc_init(void)
module_init(zoom2_soc_init);
static void __exit zoom2_soc_exit(void)
module_exit(zoom2_soc_exit);
MODULE_AUTHOR("Misael Lopez Cruz <x0052729@ti.com>");
MODULE_DESCRIPTION("ALSA SoC Zoom2");
MODULE_LICENSE("GPL");
