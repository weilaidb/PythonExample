#undef midi_devs
MODULE_AUTHOR("Takashi Iwai <tiwai@suse.de>");
MODULE_DESCRIPTION("Dummy soundcard for virtual rawmidi devices");
MODULE_LICENSE("GPL");
MODULE_SUPPORTED_DEVICE("");
#define MAX_MIDI_DEVICES	4
static int index[SNDRV_CARDS] = SNDRV_DEFAULT_IDX;
static char *id[SNDRV_CARDS] = SNDRV_DEFAULT_STR;
static int enable[SNDRV_CARDS] = ;
static int midi_devs[SNDRV_CARDS] = ;
module_param_array(index, int, NULL, 0444);
MODULE_PARM_DESC(index, "Index value for virmidi soundcard.");
module_param_array(id, charp, NULL, 0444);
MODULE_PARM_DESC(id, "ID string for virmidi soundcard.");
module_param_array(enable, bool, NULL, 0444);
MODULE_PARM_DESC(enable, "Enable this soundcard.");
module_param_array(midi_devs, int, NULL, 0444);
MODULE_PARM_DESC(midi_devs, "MIDI devices # (1-4)");
struct snd_card_virmidi ;
static struct platform_device *devices[SNDRV_CARDS];
static int __devinit snd_virmidi_probe(struct platform_device *devptr)
static int __devexit snd_virmidi_remove(struct platform_device *devptr)
#define SND_VIRMIDI_DRIVER	"snd_virmidi"
static struct platform_driver snd_virmidi_driver = ;
static void snd_virmidi_unregister_all(void)
static int __init alsa_card_virmidi_init(void)
static void __exit alsa_card_virmidi_exit(void)
module_init(alsa_card_virmidi_init)
module_exit(alsa_card_virmidi_exit)
