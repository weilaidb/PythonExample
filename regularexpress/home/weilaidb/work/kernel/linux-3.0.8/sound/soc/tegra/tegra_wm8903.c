#define DRV_NAME "tegra-snd-wm8903"
#define GPIO_SPKR_EN    BIT(0)
#define GPIO_HP_MUTE    BIT(1)
#define GPIO_INT_MIC_EN BIT(2)
#define GPIO_EXT_MIC_EN BIT(3)
#define GPIO_HP_DET     BIT(4)
struct tegra_wm8903 ;
static int tegra_wm8903_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params)
static struct snd_soc_ops tegra_wm8903_ops = ;
static struct snd_soc_jack tegra_wm8903_hp_jack;
static struct snd_soc_jack_pin tegra_wm8903_hp_jack_pins[] = ;
static struct snd_soc_jack_gpio tegra_wm8903_hp_jack_gpio = ;
static struct snd_soc_jack tegra_wm8903_mic_jack;
static struct snd_soc_jack_pin tegra_wm8903_mic_jack_pins[] = ;
static int tegra_wm8903_event_int_spk(struct snd_soc_dapm_widget *w,
struct snd_kcontrol *k, int event)
static int tegra_wm8903_event_hp(struct snd_soc_dapm_widget *w,
struct snd_kcontrol *k, int event)
static const struct snd_soc_dapm_widget tegra_wm8903_dapm_widgets[] = ;
static const struct snd_soc_dapm_route harmony_audio_map[] = ;
static const struct snd_soc_dapm_route seaboard_audio_map[] = ;
static const struct snd_soc_dapm_route kaen_audio_map[] = ;
static const struct snd_soc_dapm_route aebl_audio_map[] = ;
static const struct snd_kcontrol_new tegra_wm8903_controls[] = ;
static int tegra_wm8903_init(struct snd_soc_pcm_runtime *rtd)
static struct snd_soc_dai_link tegra_wm8903_dai = ;
static struct snd_soc_card snd_soc_tegra_wm8903 = ;
static __devinit int tegra_wm8903_driver_probe(struct platform_device *pdev)
static int __devexit tegra_wm8903_driver_remove(struct platform_device *pdev)
static struct platform_driver tegra_wm8903_driver = ;
static int __init tegra_wm8903_modinit(void)
module_init(tegra_wm8903_modinit);
static void __exit tegra_wm8903_modexit(void)
module_exit(tegra_wm8903_modexit);
MODULE_AUTHOR("Stephen Warren <swarren@nvidia.com>");
MODULE_DESCRIPTION("Tegra+WM8903 machine ASoC driver");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:" DRV_NAME);
