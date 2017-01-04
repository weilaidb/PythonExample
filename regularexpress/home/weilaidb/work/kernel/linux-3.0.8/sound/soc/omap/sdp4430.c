static int twl6040_power_mode;
static int sdp4430_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params)
static struct snd_soc_ops sdp4430_ops = ;
static struct snd_soc_jack hs_jack;
static struct snd_soc_jack_pin hs_jack_pins[] = ;
static int sdp4430_get_power_mode(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int sdp4430_set_power_mode(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static const char *power_texts[] = ;
static const struct soc_enum sdp4430_enum[] = ;
static const struct snd_kcontrol_new sdp4430_controls[] = ;
static const struct snd_soc_dapm_widget sdp4430_twl6040_dapm_widgets[] = ;
static const struct snd_soc_dapm_route audio_map[] = ;
static int sdp4430_twl6040_init(struct snd_soc_pcm_runtime *rtd)
static struct snd_soc_dai_link sdp4430_dai = ;
static struct snd_soc_card snd_soc_sdp4430 = ;
static struct platform_device *sdp4430_snd_device;
static int __init sdp4430_soc_init(void)
module_init(sdp4430_soc_init);
static void __exit sdp4430_soc_exit(void)
module_exit(sdp4430_soc_exit);
MODULE_AUTHOR("Misael Lopez Cruz <x0052729@ti.com>");
MODULE_DESCRIPTION("ALSA SoC SDP4430");
MODULE_LICENSE("GPL");
