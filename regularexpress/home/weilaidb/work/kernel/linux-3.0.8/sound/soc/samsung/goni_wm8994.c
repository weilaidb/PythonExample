#define MACHINE_NAME	0
#define CPU_VOICE_DAI	1
static const char *aquila_str[] = ;
static struct snd_soc_card goni;
static struct platform_device *goni_snd_device;
static struct snd_soc_jack jack;
static struct snd_soc_jack_pin jack_pins[] = ;
static struct snd_soc_jack_gpio jack_gpios[] = ;
static const struct snd_soc_dapm_widget goni_dapm_widgets[] = ;
static const struct snd_soc_dapm_route goni_dapm_routes[] = ;
static int goni_wm8994_init(struct snd_soc_pcm_runtime *rtd)
static int goni_hifi_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params)
static struct snd_soc_ops goni_hifi_ops = ;
static int goni_voice_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params)
static struct snd_soc_dai_driver voice_dai = ;
static struct snd_soc_ops goni_voice_ops = ;
static struct snd_soc_dai_link goni_dai[] = ;
static struct snd_soc_card goni = ;
static int __init goni_init(void)
static void __exit goni_exit(void)
module_init(goni_init);
module_exit(goni_exit);
MODULE_DESCRIPTION("ALSA SoC WM8994 GONI(S5PV210)");
MODULE_AUTHOR("Chanwoo Choi <cw00.choi@samsung.com>");
MODULE_LICENSE("GPL");
