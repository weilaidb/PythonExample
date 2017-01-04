MODULE_AUTHOR("Cedric Bregardis <cedric.bregardis@free.fr>, "
"Jean-Christian Hassler <jhassler@free.fr>");
MODULE_DESCRIPTION("Emagic Audiowerk 2 sound driver");
MODULE_LICENSE("GPL");
#define CTL_ROUTE_ANALOG 0
#define CTL_ROUTE_DIGITAL 1
static struct snd_pcm_hardware snd_aw2_playback_hw = ;
static struct snd_pcm_hardware snd_aw2_capture_hw = ;
struct aw2_pcm_device ;
struct aw2 ;
static int __init alsa_card_aw2_init(void);
static void __exit alsa_card_aw2_exit(void);
static int snd_aw2_dev_free(struct snd_device *device);
static int __devinit snd_aw2_create(struct snd_card *card,
struct pci_dev *pci, struct aw2 **rchip);
static int __devinit snd_aw2_probe(struct pci_dev *pci,
const struct pci_device_id *pci_id);
static void __devexit snd_aw2_remove(struct pci_dev *pci);
static int snd_aw2_pcm_playback_open(struct snd_pcm_substream *substream);
static int snd_aw2_pcm_playback_close(struct snd_pcm_substream *substream);
static int snd_aw2_pcm_capture_open(struct snd_pcm_substream *substream);
static int snd_aw2_pcm_capture_close(struct snd_pcm_substream *substream);
static int snd_aw2_pcm_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *hw_params);
static int snd_aw2_pcm_hw_free(struct snd_pcm_substream *substream);
static int snd_aw2_pcm_prepare_playback(struct snd_pcm_substream *substream);
static int snd_aw2_pcm_prepare_capture(struct snd_pcm_substream *substream);
static int snd_aw2_pcm_trigger_playback(struct snd_pcm_substream *substream,
int cmd);
static int snd_aw2_pcm_trigger_capture(struct snd_pcm_substream *substream,
int cmd);
static snd_pcm_uframes_t snd_aw2_pcm_pointer_playback(struct snd_pcm_substream
*substream);
static snd_pcm_uframes_t snd_aw2_pcm_pointer_capture(struct snd_pcm_substream
*substream);
static int __devinit snd_aw2_new_pcm(struct aw2 *chip);
static int snd_aw2_control_switch_capture_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo);
static int snd_aw2_control_switch_capture_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value
*ucontrol);
static int snd_aw2_control_switch_capture_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value
*ucontrol);
static int index[SNDRV_CARDS] = SNDRV_DEFAULT_IDX;
static char *id[SNDRV_CARDS] = SNDRV_DEFAULT_STR;
static int enable[SNDRV_CARDS] = SNDRV_DEFAULT_ENABLE_PNP;
module_param_array(index, int, NULL, 0444);
MODULE_PARM_DESC(index, "Index value for Audiowerk2 soundcard.");
module_param_array(id, charp, NULL, 0444);
MODULE_PARM_DESC(id, "ID string for the Audiowerk2 soundcard.");
module_param_array(enable, bool, NULL, 0444);
MODULE_PARM_DESC(enable, "Enable Audiowerk2 soundcard.");
static DEFINE_PCI_DEVICE_TABLE(snd_aw2_ids) = ;
MODULE_DEVICE_TABLE(pci, snd_aw2_ids);
static struct pci_driver driver = ;
static struct snd_pcm_ops snd_aw2_playback_ops = ;
static struct snd_pcm_ops snd_aw2_capture_ops = ;
static struct snd_kcontrol_new aw2_control __devinitdata = ;
static int __init alsa_card_aw2_init(void)
static void __exit alsa_card_aw2_exit(void)
module_init(alsa_card_aw2_init);
module_exit(alsa_card_aw2_exit);
static int snd_aw2_dev_free(struct snd_device *device)
static int __devinit snd_aw2_create(struct snd_card *card,
struct pci_dev *pci, struct aw2 **rchip)
static int __devinit snd_aw2_probe(struct pci_dev *pci,
const struct pci_device_id *pci_id)
static void __devexit snd_aw2_remove(struct pci_dev *pci)
static int snd_aw2_pcm_playback_open(struct snd_pcm_substream *substream)
static int snd_aw2_pcm_playback_close(struct snd_pcm_substream *substream)
static int snd_aw2_pcm_capture_open(struct snd_pcm_substream *substream)
static int snd_aw2_pcm_capture_close(struct snd_pcm_substream *substream)
static int snd_aw2_pcm_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *hw_params)
static int snd_aw2_pcm_hw_free(struct snd_pcm_substream *substream)
static int snd_aw2_pcm_prepare_playback(struct snd_pcm_substream *substream)
static int snd_aw2_pcm_prepare_capture(struct snd_pcm_substream *substream)
static int snd_aw2_pcm_trigger_playback(struct snd_pcm_substream *substream,
int cmd)
static int snd_aw2_pcm_trigger_capture(struct snd_pcm_substream *substream,
int cmd)
static snd_pcm_uframes_t snd_aw2_pcm_pointer_playback(struct snd_pcm_substream
*substream)
static snd_pcm_uframes_t snd_aw2_pcm_pointer_capture(struct snd_pcm_substream
*substream)
static int __devinit snd_aw2_new_pcm(struct aw2 *chip)
static int snd_aw2_control_switch_capture_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int snd_aw2_control_switch_capture_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value
*ucontrol)
static int snd_aw2_control_switch_capture_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value
*ucontrol)
