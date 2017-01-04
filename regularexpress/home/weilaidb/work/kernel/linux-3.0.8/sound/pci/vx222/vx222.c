#define CARD_NAME "VX222"
MODULE_AUTHOR("Takashi Iwai <tiwai@suse.de>");
MODULE_DESCRIPTION("Digigram VX222 V2/Mic");
MODULE_LICENSE("GPL");
MODULE_SUPPORTED_DEVICE("");
static int index[SNDRV_CARDS] = SNDRV_DEFAULT_IDX;
static char *id[SNDRV_CARDS] = SNDRV_DEFAULT_STR;
static int enable[SNDRV_CARDS] = SNDRV_DEFAULT_ENABLE_PNP;
static int mic[SNDRV_CARDS];
static int ibl[SNDRV_CARDS];
module_param_array(index, int, NULL, 0444);
MODULE_PARM_DESC(index, "Index value for Digigram " CARD_NAME " soundcard.");
module_param_array(id, charp, NULL, 0444);
MODULE_PARM_DESC(id, "ID string for Digigram " CARD_NAME " soundcard.");
module_param_array(enable, bool, NULL, 0444);
MODULE_PARM_DESC(enable, "Enable Digigram " CARD_NAME " soundcard.");
module_param_array(mic, bool, NULL, 0444);
MODULE_PARM_DESC(mic, "Enable Microphone.");
module_param_array(ibl, int, NULL, 0444);
MODULE_PARM_DESC(ibl, "Capture IBL size.");
enum ;
static DEFINE_PCI_DEVICE_TABLE(snd_vx222_ids) = ;
MODULE_DEVICE_TABLE(pci, snd_vx222_ids);
static const DECLARE_TLV_DB_SCALE(db_scale_old_vol, -11350, 50, 0);
static const DECLARE_TLV_DB_SCALE(db_scale_akm, -7350, 50, 0);
static struct snd_vx_hardware vx222_old_hw = ;
static struct snd_vx_hardware vx222_v2_hw = ;
static struct snd_vx_hardware vx222_mic_hw = ;
static int snd_vx222_free(struct vx_core *chip)
static int snd_vx222_dev_free(struct snd_device *device)
static int __devinit snd_vx222_create(struct snd_card *card, struct pci_dev *pci,
struct snd_vx_hardware *hw,
struct snd_vx222 **rchip)
static int __devinit snd_vx222_probe(struct pci_dev *pci,
const struct pci_device_id *pci_id)
static void __devexit snd_vx222_remove(struct pci_dev *pci)
static int snd_vx222_suspend(struct pci_dev *pci, pm_message_t state)
static int snd_vx222_resume(struct pci_dev *pci)
static struct pci_driver driver = ;
static int __init alsa_card_vx222_init(void)
static void __exit alsa_card_vx222_exit(void)
module_init(alsa_card_vx222_init)
module_exit(alsa_card_vx222_exit)
