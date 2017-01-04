#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
#define MID_MONO 1
#define MID_STEREO 2
#define MID_MAX_CAP 5
#define MFLD_JACK_INSERT 0x04
enum soc_mic_bias_zones ;
static unsigned int	hs_switch;
static unsigned int	lo_dac;
struct mfld_mc_private ;
struct snd_soc_jack mfld_jack;
static struct snd_soc_jack_pin mfld_jack_pins[] = ;
static struct snd_soc_jack_zone mfld_zones[] = ;
static const char *headset_switch_text[] = ;
static const char *lo_text[] = ;
static const struct soc_enum headset_enum =
SOC_ENUM_SINGLE_EXT(2, headset_switch_text);
static const struct soc_enum lo_enum =
SOC_ENUM_SINGLE_EXT(4, lo_text);
static int headset_get_switch(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int headset_set_switch(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static void lo_enable_out_pins(struct snd_soc_codec *codec)
static int lo_get_switch(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int lo_set_switch(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static const struct snd_kcontrol_new mfld_snd_controls[] = ;
static const struct snd_soc_dapm_widget mfld_widgets[] = ;
static const struct snd_soc_dapm_route mfld_map[] = ;
static void mfld_jack_check(unsigned int intr_status)
static int mfld_init(struct snd_soc_pcm_runtime *runtime)
struct snd_soc_dai_link mfld_msic_dailink[] = ;
static struct snd_soc_card snd_soc_card_mfld = ;
static irqreturn_t snd_mfld_jack_intr_handler(int irq, void *dev)
static irqreturn_t snd_mfld_jack_detection(int irq, void *data)
static int __devinit snd_mfld_mc_probe(struct platform_device *pdev)
static int __devexit snd_mfld_mc_remove(struct platform_device *pdev)
static struct platform_driver snd_mfld_mc_driver = ;
static int __init snd_mfld_driver_init(void)
module_init(snd_mfld_driver_init);
static void __exit snd_mfld_driver_exit(void)
module_exit(snd_mfld_driver_exit);
MODULE_DESCRIPTION("ASoC Intel(R) MID Machine driver");
MODULE_AUTHOR("Vinod Koul <vinod.koul@intel.com>");
MODULE_AUTHOR("Harsha Priya <priya.harsha@intel.com>");
MODULE_LICENSE("GPL v2");
MODULE_ALIAS("platform:msic-audio");
