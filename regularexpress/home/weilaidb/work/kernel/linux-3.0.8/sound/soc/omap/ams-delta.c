static const struct snd_soc_dapm_widget ams_delta_dapm_widgets[] = ;
static const struct snd_soc_dapm_route ams_delta_audio_map[] = ;
static const char *ams_delta_audio_mode[] =
;
#define AMS_DELTA_MOUTHPIECE	0
#define AMS_DELTA_EARPIECE	1
#define AMS_DELTA_MICROPHONE	2
#define AMS_DELTA_SPEAKER	3
#define AMS_DELTA_AGC		4
#define AMS_DELTA_MIXED		((1 << AMS_DELTA_EARPIECE) | \
(1 << AMS_DELTA_MICROPHONE))
#define AMS_DELTA_HANDSET	((1 << AMS_DELTA_MOUTHPIECE) | \
(1 << AMS_DELTA_EARPIECE))
#define AMS_DELTA_HANDSFREE	((1 << AMS_DELTA_MICROPHONE) | \
(1 << AMS_DELTA_SPEAKER))
#define AMS_DELTA_SPEAKERPHONE	(AMS_DELTA_HANDSFREE | (1 << AMS_DELTA_AGC))
static const unsigned short ams_delta_audio_mode_pins[] = ;
static unsigned short ams_delta_audio_agc;
static int ams_delta_set_audio_mode(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int ams_delta_get_audio_mode(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static const struct soc_enum ams_delta_audio_enum[] = ;
static const struct snd_kcontrol_new ams_delta_audio_controls[] = ;
static struct snd_soc_jack ams_delta_hook_switch;
static struct snd_soc_jack_gpio ams_delta_hook_switch_gpios[] = ;
static struct snd_soc_jack_pin ams_delta_hook_switch_pins[] = ;
static struct timer_list cx81801_timer;
static bool cx81801_cmd_pending;
static bool ams_delta_muted;
static DEFINE_SPINLOCK(ams_delta_lock);
static void cx81801_timeout(unsigned long data)
static struct snd_soc_codec *cx20442_codec;
static int cx81801_open(struct tty_struct *tty)
static void cx81801_close(struct tty_struct *tty)
static int cx81801_hangup(struct tty_struct *tty)
static void cx81801_receive(struct tty_struct *tty,
const unsigned char *cp, char *fp, int count)
static void cx81801_wakeup(struct tty_struct *tty)
static struct tty_ldisc_ops cx81801_ops = ;
static int ams_delta_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params)
static struct snd_soc_ops ams_delta_ops = ;
static int ams_delta_set_bias_level(struct snd_soc_card *card,
enum snd_soc_bias_level level)
static bool ams_delta_muted = 1;
static int ams_delta_digital_mute(struct snd_soc_dai *dai, int mute)
static struct snd_soc_dai_ops ams_delta_dai_ops = ;
static int ams_delta_startup(struct snd_pcm_substream *substream)
static void ams_delta_shutdown(struct snd_pcm_substream *substream)
static int ams_delta_cx20442_init(struct snd_soc_pcm_runtime *rtd)
static struct snd_soc_dai_link ams_delta_dai_link = ;
static struct snd_soc_card ams_delta_audio_card = ;
static struct platform_device *ams_delta_audio_platform_device;
static struct platform_device *cx20442_platform_device;
static int __init ams_delta_module_init(void)
module_init(ams_delta_module_init);
static void __exit ams_delta_module_exit(void)
module_exit(ams_delta_module_exit);
MODULE_AUTHOR("Janusz Krzysztofik <jkrzyszt@tis.icnet.pl>");
MODULE_DESCRIPTION("ALSA SoC driver for Amstrad E3 (Delta) videophone");
MODULE_LICENSE("GPL");
