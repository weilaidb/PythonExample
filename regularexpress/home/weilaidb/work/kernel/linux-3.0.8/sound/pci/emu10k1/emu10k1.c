MODULE_AUTHOR("Jaroslav Kysela <perex@perex.cz>");
MODULE_DESCRIPTION("EMU10K1");
MODULE_LICENSE("GPL");
MODULE_SUPPORTED_DEVICE("");
#if defined(CONFIG_SND_SEQUENCER) || (defined(MODULE) && defined(CONFIG_SND_SEQUENCER_MODULE))
#define ENABLE_SYNTH
static int index[SNDRV_CARDS] = SNDRV_DEFAULT_IDX;
static char *id[SNDRV_CARDS] = SNDRV_DEFAULT_STR;
static int enable[SNDRV_CARDS] = SNDRV_DEFAULT_ENABLE_PNP;
static int extin[SNDRV_CARDS];
static int extout[SNDRV_CARDS];
static int seq_ports[SNDRV_CARDS] = ;
static int max_synth_voices[SNDRV_CARDS] = ;
static int max_buffer_size[SNDRV_CARDS] = ;
static int enable_ir[SNDRV_CARDS];
static uint subsystem[SNDRV_CARDS];
static uint delay_pcm_irq[SNDRV_CARDS] = ;
module_param_array(index, int, NULL, 0444);
MODULE_PARM_DESC(index, "Index value for the EMU10K1 soundcard.");
module_param_array(id, charp, NULL, 0444);
MODULE_PARM_DESC(id, "ID string for the EMU10K1 soundcard.");
module_param_array(enable, bool, NULL, 0444);
MODULE_PARM_DESC(enable, "Enable the EMU10K1 soundcard.");
module_param_array(extin, int, NULL, 0444);
MODULE_PARM_DESC(extin, "Available external inputs for FX8010. Zero=default.");
module_param_array(extout, int, NULL, 0444);
MODULE_PARM_DESC(extout, "Available external outputs for FX8010. Zero=default.");
module_param_array(seq_ports, int, NULL, 0444);
MODULE_PARM_DESC(seq_ports, "Allocated sequencer ports for internal synthesizer.");
module_param_array(max_synth_voices, int, NULL, 0444);
MODULE_PARM_DESC(max_synth_voices, "Maximum number of voices for WaveTable.");
module_param_array(max_buffer_size, int, NULL, 0444);
MODULE_PARM_DESC(max_buffer_size, "Maximum sample buffer size in MB.");
module_param_array(enable_ir, bool, NULL, 0444);
MODULE_PARM_DESC(enable_ir, "Enable IR.");
module_param_array(subsystem, uint, NULL, 0444);
MODULE_PARM_DESC(subsystem, "Force card subsystem model.");
module_param_array(delay_pcm_irq, uint, NULL, 0444);
MODULE_PARM_DESC(delay_pcm_irq, "Delay PCM interrupt by specified number of samples (default 0).");
static DEFINE_PCI_DEVICE_TABLE(snd_emu10k1_ids) = ;
MODULE_DEVICE_TABLE(pci, snd_emu10k1_ids);
static int __devinit snd_card_emu10k1_probe(struct pci_dev *pci,
const struct pci_device_id *pci_id)
static void __devexit snd_card_emu10k1_remove(struct pci_dev *pci)
static int snd_emu10k1_suspend(struct pci_dev *pci, pm_message_t state)
static int snd_emu10k1_resume(struct pci_dev *pci)
static struct pci_driver driver = ;
static int __init alsa_card_emu10k1_init(void)
static void __exit alsa_card_emu10k1_exit(void)
module_init(alsa_card_emu10k1_init)
module_exit(alsa_card_emu10k1_exit)
