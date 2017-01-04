MODULE_AUTHOR("Tim Blechmann");
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("digigram lx6464es");
MODULE_SUPPORTED_DEVICE("");
static int index[SNDRV_CARDS] = SNDRV_DEFAULT_IDX;
static char *id[SNDRV_CARDS] = SNDRV_DEFAULT_STR;
static int enable[SNDRV_CARDS] = SNDRV_DEFAULT_ENABLE_PNP;
module_param_array(index, int, NULL, 0444);
MODULE_PARM_DESC(index, "Index value for Digigram LX6464ES interface.");
module_param_array(id, charp, NULL, 0444);
MODULE_PARM_DESC(id, "ID string for  Digigram LX6464ES interface.");
module_param_array(enable, bool, NULL, 0444);
MODULE_PARM_DESC(enable, "Enable/disable specific Digigram LX6464ES soundcards.");
static const char card_name[] = "LX6464ES";
#define PCI_DEVICE_ID_PLX_LX6464ES		PCI_DEVICE_ID_PLX_9056
static DEFINE_PCI_DEVICE_TABLE(snd_lx6464es_ids) = ;
MODULE_DEVICE_TABLE(pci, snd_lx6464es_ids);
#define CHIPSC_RESET_XILINX (1L<<16)
static struct snd_pcm_hardware lx_caps = ;
static int lx_set_granularity(struct lx6464es *chip, u32 gran);
static int lx_hardware_open(struct lx6464es *chip,
struct snd_pcm_substream *substream)
static int lx_hardware_start(struct lx6464es *chip,
struct snd_pcm_substream *substream)
static int lx_hardware_stop(struct lx6464es *chip,
struct snd_pcm_substream *substream)
static int lx_hardware_close(struct lx6464es *chip,
struct snd_pcm_substream *substream)
static int lx_pcm_open(struct snd_pcm_substream *substream)
static int lx_pcm_close(struct snd_pcm_substream *substream)
static snd_pcm_uframes_t lx_pcm_stream_pointer(struct snd_pcm_substream
*substream)
static int lx_pcm_prepare(struct snd_pcm_substream *substream)
static int lx_pcm_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *hw_params, int is_capture)
static int lx_pcm_hw_params_playback(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *hw_params)
static int lx_pcm_hw_params_capture(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *hw_params)
static int lx_pcm_hw_free(struct snd_pcm_substream *substream)
static void lx_trigger_start(struct lx6464es *chip, struct lx_stream *lx_stream)
static void lx_trigger_stop(struct lx6464es *chip, struct lx_stream *lx_stream)
static void lx_trigger_tasklet_dispatch_stream(struct lx6464es *chip,
struct lx_stream *lx_stream)
static void lx_trigger_tasklet(unsigned long data)
static int lx_pcm_trigger_dispatch(struct lx6464es *chip,
struct lx_stream *lx_stream, int cmd)
static int lx_pcm_trigger(struct snd_pcm_substream *substream, int cmd)
static int snd_lx6464es_free(struct lx6464es *chip)
static int snd_lx6464es_dev_free(struct snd_device *device)
static int __devinit lx_init_xilinx_reset(struct lx6464es *chip)
static int __devinit lx_init_xilinx_test(struct lx6464es *chip)
static int __devinit lx_init_ethersound_config(struct lx6464es *chip)
static int __devinit lx_init_get_version_features(struct lx6464es *chip)
static int lx_set_granularity(struct lx6464es *chip, u32 gran)
static int __devinit lx_init_dsp(struct lx6464es *chip)
static struct snd_pcm_ops lx_ops_playback = ;
static struct snd_pcm_ops lx_ops_capture = ;
static int __devinit lx_pcm_create(struct lx6464es *chip)
static int lx_control_playback_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int lx_control_playback_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int lx_control_playback_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static struct snd_kcontrol_new lx_control_playback_switch __devinitdata = ;
static void lx_proc_levels_read(struct snd_info_entry *entry,
struct snd_info_buffer *buffer)
static int __devinit lx_proc_create(struct snd_card *card, struct lx6464es *chip)
static int __devinit snd_lx6464es_create(struct snd_card *card,
struct pci_dev *pci,
struct lx6464es **rchip)
static int __devinit snd_lx6464es_probe(struct pci_dev *pci,
const struct pci_device_id *pci_id)
static void __devexit snd_lx6464es_remove(struct pci_dev *pci)
static struct pci_driver driver = ;
static int __init mod_init(void)
static void __exit mod_exit(void)
module_init(mod_init);
module_exit(mod_exit);
