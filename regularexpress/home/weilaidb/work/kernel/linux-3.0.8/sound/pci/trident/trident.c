MODULE_AUTHOR("Jaroslav Kysela <perex@perex.cz>, <audio@tridentmicro.com>");
MODULE_DESCRIPTION("Trident 4D-WaveDX/NX & SiS SI7018");
MODULE_LICENSE("GPL");
MODULE_SUPPORTED_DEVICE("");
static int index[SNDRV_CARDS] = SNDRV_DEFAULT_IDX;
static char *id[SNDRV_CARDS] = SNDRV_DEFAULT_STR;
static int enable[SNDRV_CARDS] = SNDRV_DEFAULT_ENABLE_PNP;
static int pcm_channels[SNDRV_CARDS] = ;
static int wavetable_size[SNDRV_CARDS] = ;
module_param_array(index, int, NULL, 0444);
MODULE_PARM_DESC(index, "Index value for Trident 4DWave PCI soundcard.");
module_param_array(id, charp, NULL, 0444);
MODULE_PARM_DESC(id, "ID string for Trident 4DWave PCI soundcard.");
module_param_array(enable, bool, NULL, 0444);
MODULE_PARM_DESC(enable, "Enable Trident 4DWave PCI soundcard.");
module_param_array(pcm_channels, int, NULL, 0444);
MODULE_PARM_DESC(pcm_channels, "Number of hardware channels assigned for PCM.");
module_param_array(wavetable_size, int, NULL, 0444);
MODULE_PARM_DESC(wavetable_size, "Maximum memory size in kB for wavetable synth.");
static DEFINE_PCI_DEVICE_TABLE(snd_trident_ids) = ;
MODULE_DEVICE_TABLE(pci, snd_trident_ids);
static int __devinit snd_trident_probe(struct pci_dev *pci,
const struct pci_device_id *pci_id)
static void __devexit snd_trident_remove(struct pci_dev *pci)
static struct pci_driver driver = ;
static int __init alsa_card_trident_init(void)
static void __exit alsa_card_trident_exit(void)
module_init(alsa_card_trident_init)
module_exit(alsa_card_trident_exit)
