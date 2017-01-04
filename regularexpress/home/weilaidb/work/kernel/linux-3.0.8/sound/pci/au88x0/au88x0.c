static int index[SNDRV_CARDS] = SNDRV_DEFAULT_IDX;
static char *id[SNDRV_CARDS] = SNDRV_DEFAULT_STR;
static int enable[SNDRV_CARDS] = SNDRV_DEFAULT_ENABLE_PNP;
static int pcifix[SNDRV_CARDS] = ;
module_param_array(index, int, NULL, 0444);
MODULE_PARM_DESC(index, "Index value for " CARD_NAME " soundcard.");
module_param_array(id, charp, NULL, 0444);
MODULE_PARM_DESC(id, "ID string for " CARD_NAME " soundcard.");
module_param_array(enable, bool, NULL, 0444);
MODULE_PARM_DESC(enable, "Enable " CARD_NAME " soundcard.");
module_param_array(pcifix, int, NULL, 0444);
MODULE_PARM_DESC(pcifix, "Enable VIA-workaround for " CARD_NAME " soundcard.");
MODULE_DESCRIPTION("Aureal vortex");
MODULE_LICENSE("GPL");
MODULE_SUPPORTED_DEVICE("");
MODULE_DEVICE_TABLE(pci, snd_vortex_ids);
static void vortex_fix_latency(struct pci_dev *vortex)
static void vortex_fix_agp_bridge(struct pci_dev *via)
static void __devinit snd_vortex_workaround(struct pci_dev *vortex, int fix)
static int snd_vortex_dev_free(struct snd_device *device)
static int __devinit
snd_vortex_create(struct snd_card *card, struct pci_dev *pci, vortex_t ** rchip)
static int __devinit
snd_vortex_probe(struct pci_dev *pci, const struct pci_device_id *pci_id)
static void __devexit snd_vortex_remove(struct pci_dev *pci)
static struct pci_driver driver = ;
static int __init alsa_card_vortex_init(void)
static void __exit alsa_card_vortex_exit(void)
module_init(alsa_card_vortex_init)
module_exit(alsa_card_vortex_exit)
