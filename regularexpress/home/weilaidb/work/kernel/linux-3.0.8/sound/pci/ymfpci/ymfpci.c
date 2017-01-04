MODULE_AUTHOR("Jaroslav Kysela <perex@perex.cz>");
MODULE_DESCRIPTION("Yamaha DS-1 PCI");
MODULE_LICENSE("GPL");
MODULE_SUPPORTED_DEVICE("");
static int index[SNDRV_CARDS] = SNDRV_DEFAULT_IDX;
static char *id[SNDRV_CARDS] = SNDRV_DEFAULT_STR;
static int enable[SNDRV_CARDS] = SNDRV_DEFAULT_ENABLE_PNP;
static long fm_port[SNDRV_CARDS];
static long mpu_port[SNDRV_CARDS];
static long joystick_port[SNDRV_CARDS];
static int rear_switch[SNDRV_CARDS];
module_param_array(index, int, NULL, 0444);
MODULE_PARM_DESC(index, "Index value for the Yamaha DS-1 PCI soundcard.");
module_param_array(id, charp, NULL, 0444);
MODULE_PARM_DESC(id, "ID string for the Yamaha DS-1 PCI soundcard.");
module_param_array(enable, bool, NULL, 0444);
MODULE_PARM_DESC(enable, "Enable Yamaha DS-1 soundcard.");
module_param_array(mpu_port, long, NULL, 0444);
MODULE_PARM_DESC(mpu_port, "MPU-401 Port.");
module_param_array(fm_port, long, NULL, 0444);
MODULE_PARM_DESC(fm_port, "FM OPL-3 Port.");
module_param_array(joystick_port, long, NULL, 0444);
MODULE_PARM_DESC(joystick_port, "Joystick port address");
module_param_array(rear_switch, bool, NULL, 0444);
MODULE_PARM_DESC(rear_switch, "Enable shared rear/line-in switch");
static DEFINE_PCI_DEVICE_TABLE(snd_ymfpci_ids) = ;
MODULE_DEVICE_TABLE(pci, snd_ymfpci_ids);
static int __devinit snd_ymfpci_create_gameport(struct snd_ymfpci *chip, int dev,
int legacy_ctrl, int legacy_ctrl2)
void snd_ymfpci_free_gameport(struct snd_ymfpci *chip)
static inline int snd_ymfpci_create_gameport(struct snd_ymfpci *chip, int dev, int l, int l2)
void snd_ymfpci_free_gameport(struct snd_ymfpci *chip)
static int __devinit snd_card_ymfpci_probe(struct pci_dev *pci,
const struct pci_device_id *pci_id)
static void __devexit snd_card_ymfpci_remove(struct pci_dev *pci)
static struct pci_driver driver = ;
static int __init alsa_card_ymfpci_init(void)
static void __exit alsa_card_ymfpci_exit(void)
module_init(alsa_card_ymfpci_init)
module_exit(alsa_card_ymfpci_exit)
