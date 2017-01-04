#define TWL4030_INTBR_PMBR1		0x0D
#define TWL4030_GPIO6_PWM0_MUTE(value)	(value << 2)
static struct snd_soc_card snd_soc_sdp3430;
static int sdp3430_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params)
static struct snd_soc_ops sdp3430_ops = ;
static int sdp3430_hw_voice_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params)
static struct snd_soc_ops sdp3430_voice_ops = ;
static struct snd_soc_jack hs_jack;
static struct snd_soc_jack_pin hs_jack_pins[] = ;
static struct snd_soc_jack_gpio hs_jack_gpios[] = ;
static const struct snd_soc_dapm_widget sdp3430_twl4030_dapm_widgets[] = ;
static const struct snd_soc_dapm_route audio_map[] = ;
static int sdp3430_twl4030_init(struct snd_soc_pcm_runtime *rtd)
static int sdp3430_twl4030_voice_init(struct snd_soc_pcm_runtime *rtd)
static struct snd_soc_dai_link sdp3430_dai[] = ;
static struct snd_soc_card snd_soc_sdp3430 = ;
static struct platform_device *sdp3430_snd_device;
static int __init sdp3430_soc_init(void)
module_init(sdp3430_soc_init);
static void __exit sdp3430_soc_exit(void)
module_exit(sdp3430_soc_exit);
MODULE_AUTHOR("Misael Lopez Cruz <x0052729@ti.com>");
MODULE_DESCRIPTION("ALSA SoC SDP3430");
MODULE_LICENSE("GPL");
