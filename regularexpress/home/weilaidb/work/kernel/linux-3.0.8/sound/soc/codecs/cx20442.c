struct cx20442_priv ;
#define CX20442_PM		0x0
#define CX20442_TELIN		0
#define CX20442_TELOUT		1
#define CX20442_MIC		2
#define CX20442_SPKOUT		3
#define CX20442_AGC		4
static const struct snd_soc_dapm_widget cx20442_dapm_widgets[] = ;
static const struct snd_soc_dapm_route cx20442_audio_map[] = ;
static unsigned int cx20442_read_reg_cache(struct snd_soc_codec *codec,
unsigned int reg)
enum v253_vls ;
static int cx20442_pm_to_v253_vls(u8 value)
static int cx20442_pm_to_v253_vsp(u8 value)
static int cx20442_write(struct snd_soc_codec *codec, unsigned int reg,
unsigned int value)
static const char *v253_init = "ate0m0q0+fclass=8\r";
static int v253_open(struct tty_struct *tty)
static void v253_close(struct tty_struct *tty)
static int v253_hangup(struct tty_struct *tty)
static void v253_receive(struct tty_struct *tty,
const unsigned char *cp, char *fp, int count)
static void v253_wakeup(struct tty_struct *tty)
struct tty_ldisc_ops v253_ops = ;
EXPORT_SYMBOL_GPL(v253_ops);
static struct snd_soc_dai_driver cx20442_dai = ;
static int cx20442_codec_probe(struct snd_soc_codec *codec)
static int cx20442_codec_remove(struct snd_soc_codec *codec)
static const u8 cx20442_reg;
static struct snd_soc_codec_driver cx20442_codec_dev = ;
static int cx20442_platform_probe(struct platform_device *pdev)
static int __exit cx20442_platform_remove(struct platform_device *pdev)
static struct platform_driver cx20442_platform_driver = ;
static int __init cx20442_init(void)
module_init(cx20442_init);
static void __exit cx20442_exit(void)
module_exit(cx20442_exit);
MODULE_DESCRIPTION("ASoC CX20442-11 voice modem codec driver");
MODULE_AUTHOR("Janusz Krzysztofik");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:cx20442-codec");
