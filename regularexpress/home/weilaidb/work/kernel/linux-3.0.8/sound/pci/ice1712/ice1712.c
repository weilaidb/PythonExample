MODULE_AUTHOR("Jaroslav Kysela <perex@perex.cz>");
MODULE_DESCRIPTION("ICEnsemble ICE1712 (Envy24)");
MODULE_LICENSE("GPL");
MODULE_SUPPORTED_DEVICE("");
static int index[SNDRV_CARDS] = SNDRV_DEFAULT_IDX;
static char *id[SNDRV_CARDS] = SNDRV_DEFAULT_STR;
static int enable[SNDRV_CARDS] = SNDRV_DEFAULT_ENABLE_PNP;
static char *model[SNDRV_CARDS];
static int omni[SNDRV_CARDS];
static int cs8427_timeout[SNDRV_CARDS] = ;
static int dxr_enable[SNDRV_CARDS];
module_param_array(index, int, NULL, 0444);
MODULE_PARM_DESC(index, "Index value for ICE1712 soundcard.");
module_param_array(id, charp, NULL, 0444);
MODULE_PARM_DESC(id, "ID string for ICE1712 soundcard.");
module_param_array(enable, bool, NULL, 0444);
MODULE_PARM_DESC(enable, "Enable ICE1712 soundcard.");
module_param_array(omni, bool, NULL, 0444);
MODULE_PARM_DESC(omni, "Enable Midiman M-Audio Delta Omni I/O support.");
module_param_array(cs8427_timeout, int, NULL, 0444);
MODULE_PARM_DESC(cs8427_timeout, "Define reset timeout for cs8427 chip in msec resolution.");
module_param_array(model, charp, NULL, 0444);
MODULE_PARM_DESC(model, "Use the given board model.");
module_param_array(dxr_enable, int, NULL, 0444);
MODULE_PARM_DESC(dxr_enable, "Enable DXR support for Terratec DMX6FIRE.");
static DEFINE_PCI_DEVICE_TABLE(snd_ice1712_ids) = ;
MODULE_DEVICE_TABLE(pci, snd_ice1712_ids);
static int snd_ice1712_build_pro_mixer(struct snd_ice1712 *ice);
static int snd_ice1712_build_controls(struct snd_ice1712 *ice);
static int PRO_RATE_LOCKED;
static int PRO_RATE_RESET = 1;
static unsigned int PRO_RATE_DEFAULT = 44100;
static inline int is_spdif_master(struct snd_ice1712 *ice)
static inline int is_pro_rate_locked(struct snd_ice1712 *ice)
static inline void snd_ice1712_ds_write(struct snd_ice1712 *ice, u8 channel, u8 addr, u32 data)
static inline u32 snd_ice1712_ds_read(struct snd_ice1712 *ice, u8 channel, u8 addr)
static void snd_ice1712_ac97_write(struct snd_ac97 *ac97,
unsigned short reg,
unsigned short val)
static unsigned short snd_ice1712_ac97_read(struct snd_ac97 *ac97,
unsigned short reg)
static void snd_ice1712_pro_ac97_write(struct snd_ac97 *ac97,
unsigned short reg,
unsigned short val)
static unsigned short snd_ice1712_pro_ac97_read(struct snd_ac97 *ac97,
unsigned short reg)
#define snd_ice1712_digmix_route_ac97_info	snd_ctl_boolean_mono_info
static int snd_ice1712_digmix_route_ac97_get(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int snd_ice1712_digmix_route_ac97_put(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static struct snd_kcontrol_new snd_ice1712_mixer_digmix_route_ac97 __devinitdata = ;
static void snd_ice1712_set_gpio_dir(struct snd_ice1712 *ice, unsigned int data)
static unsigned int snd_ice1712_get_gpio_dir(struct snd_ice1712 *ice)
static unsigned int snd_ice1712_get_gpio_mask(struct snd_ice1712 *ice)
static void snd_ice1712_set_gpio_mask(struct snd_ice1712 *ice, unsigned int data)
static unsigned int snd_ice1712_get_gpio_data(struct snd_ice1712 *ice)
static void snd_ice1712_set_gpio_data(struct snd_ice1712 *ice, unsigned int val)
static int snd_ice1712_cs8427_set_input_clock(struct snd_ice1712 *ice, int spdif_clock)
static void open_cs8427(struct snd_ice1712 *ice, struct snd_pcm_substream *substream)
static void close_cs8427(struct snd_ice1712 *ice, struct snd_pcm_substream *substream)
static void setup_cs8427(struct snd_ice1712 *ice, int rate)
int __devinit snd_ice1712_init_cs8427(struct snd_ice1712 *ice, int addr)
static void snd_ice1712_set_input_clock_source(struct snd_ice1712 *ice, int spdif_is_master)
static irqreturn_t snd_ice1712_interrupt(int irq, void *dev_id)
static int snd_ice1712_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *hw_params)
static int snd_ice1712_hw_free(struct snd_pcm_substream *substream)
static int snd_ice1712_playback_trigger(struct snd_pcm_substream *substream,
int cmd)
static int snd_ice1712_playback_ds_trigger(struct snd_pcm_substream *substream,
int cmd)
static int snd_ice1712_capture_trigger(struct snd_pcm_substream *substream,
int cmd)
static int snd_ice1712_playback_prepare(struct snd_pcm_substream *substream)
static int snd_ice1712_playback_ds_prepare(struct snd_pcm_substream *substream)
static int snd_ice1712_capture_prepare(struct snd_pcm_substream *substream)
static snd_pcm_uframes_t snd_ice1712_playback_pointer(struct snd_pcm_substream *substream)
static snd_pcm_uframes_t snd_ice1712_playback_ds_pointer(struct snd_pcm_substream *substream)
static snd_pcm_uframes_t snd_ice1712_capture_pointer(struct snd_pcm_substream *substream)
static const struct snd_pcm_hardware snd_ice1712_playback = ;
static const struct snd_pcm_hardware snd_ice1712_playback_ds = ;
static const struct snd_pcm_hardware snd_ice1712_capture = ;
static int snd_ice1712_playback_open(struct snd_pcm_substream *substream)
static int snd_ice1712_playback_ds_open(struct snd_pcm_substream *substream)
static int snd_ice1712_capture_open(struct snd_pcm_substream *substream)
static int snd_ice1712_playback_close(struct snd_pcm_substream *substream)
static int snd_ice1712_playback_ds_close(struct snd_pcm_substream *substream)
static int snd_ice1712_capture_close(struct snd_pcm_substream *substream)
static struct snd_pcm_ops snd_ice1712_playback_ops = ;
static struct snd_pcm_ops snd_ice1712_playback_ds_ops = ;
static struct snd_pcm_ops snd_ice1712_capture_ops = ;
static int __devinit snd_ice1712_pcm(struct snd_ice1712 *ice, int device, struct snd_pcm **rpcm)
static int __devinit snd_ice1712_pcm_ds(struct snd_ice1712 *ice, int device, struct snd_pcm **rpcm)
static unsigned int rates[] = ;
static struct snd_pcm_hw_constraint_list hw_constraints_rates = ;
static int snd_ice1712_pro_trigger(struct snd_pcm_substream *substream,
int cmd)
static void snd_ice1712_set_pro_rate(struct snd_ice1712 *ice, unsigned int rate, int force)
static int snd_ice1712_playback_pro_prepare(struct snd_pcm_substream *substream)
static int snd_ice1712_playback_pro_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *hw_params)
static int snd_ice1712_capture_pro_prepare(struct snd_pcm_substream *substream)
static int snd_ice1712_capture_pro_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *hw_params)
static snd_pcm_uframes_t snd_ice1712_playback_pro_pointer(struct snd_pcm_substream *substream)
static snd_pcm_uframes_t snd_ice1712_capture_pro_pointer(struct snd_pcm_substream *substream)
static const struct snd_pcm_hardware snd_ice1712_playback_pro = ;
static const struct snd_pcm_hardware snd_ice1712_capture_pro = ;
static int snd_ice1712_playback_pro_open(struct snd_pcm_substream *substream)
static int snd_ice1712_capture_pro_open(struct snd_pcm_substream *substream)
static int snd_ice1712_playback_pro_close(struct snd_pcm_substream *substream)
static int snd_ice1712_capture_pro_close(struct snd_pcm_substream *substream)
static struct snd_pcm_ops snd_ice1712_playback_pro_ops = ;
static struct snd_pcm_ops snd_ice1712_capture_pro_ops = ;
static int __devinit snd_ice1712_pcm_profi(struct snd_ice1712 *ice, int device, struct snd_pcm **rpcm)
static void snd_ice1712_update_volume(struct snd_ice1712 *ice, int index)
#define snd_ice1712_pro_mixer_switch_info	snd_ctl_boolean_stereo_info
static int snd_ice1712_pro_mixer_switch_get(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int snd_ice1712_pro_mixer_switch_put(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int snd_ice1712_pro_mixer_volume_info(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_info *uinfo)
static int snd_ice1712_pro_mixer_volume_get(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int snd_ice1712_pro_mixer_volume_put(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static const DECLARE_TLV_DB_SCALE(db_scale_playback, -14400, 150, 0);
static struct snd_kcontrol_new snd_ice1712_multi_playback_ctrls[] __devinitdata = ;
static struct snd_kcontrol_new snd_ice1712_multi_capture_analog_switch __devinitdata = ;
static struct snd_kcontrol_new snd_ice1712_multi_capture_spdif_switch __devinitdata = ;
static struct snd_kcontrol_new snd_ice1712_multi_capture_analog_volume __devinitdata = ;
static struct snd_kcontrol_new snd_ice1712_multi_capture_spdif_volume __devinitdata = ;
static int __devinit snd_ice1712_build_pro_mixer(struct snd_ice1712 *ice)
static void snd_ice1712_mixer_free_ac97(struct snd_ac97 *ac97)
static int __devinit snd_ice1712_ac97_mixer(struct snd_ice1712 *ice)
static inline unsigned int eeprom_double(struct snd_ice1712 *ice, int idx)
static void snd_ice1712_proc_read(struct snd_info_entry *entry,
struct snd_info_buffer *buffer)
static void __devinit snd_ice1712_proc_init(struct snd_ice1712 *ice)
static int snd_ice1712_eeprom_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int snd_ice1712_eeprom_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static struct snd_kcontrol_new snd_ice1712_eeprom __devinitdata = ;
static int snd_ice1712_spdif_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int snd_ice1712_spdif_default_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_ice1712_spdif_default_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static struct snd_kcontrol_new snd_ice1712_spdif_default __devinitdata =
;
static int snd_ice1712_spdif_maskc_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_ice1712_spdif_maskp_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static struct snd_kcontrol_new snd_ice1712_spdif_maskc __devinitdata =
;
static struct snd_kcontrol_new snd_ice1712_spdif_maskp __devinitdata =
;
static int snd_ice1712_spdif_stream_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_ice1712_spdif_stream_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static struct snd_kcontrol_new snd_ice1712_spdif_stream __devinitdata =
;
int snd_ice1712_gpio_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
int snd_ice1712_gpio_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_ice1712_pro_internal_clock_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int snd_ice1712_pro_internal_clock_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_ice1712_pro_internal_clock_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static struct snd_kcontrol_new snd_ice1712_pro_internal_clock __devinitdata = ;
static int snd_ice1712_pro_internal_clock_default_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int snd_ice1712_pro_internal_clock_default_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_ice1712_pro_internal_clock_default_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static struct snd_kcontrol_new snd_ice1712_pro_internal_clock_default __devinitdata = ;
#define snd_ice1712_pro_rate_locking_info	snd_ctl_boolean_mono_info
static int snd_ice1712_pro_rate_locking_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_ice1712_pro_rate_locking_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static struct snd_kcontrol_new snd_ice1712_pro_rate_locking __devinitdata = ;
#define snd_ice1712_pro_rate_reset_info		snd_ctl_boolean_mono_info
static int snd_ice1712_pro_rate_reset_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_ice1712_pro_rate_reset_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static struct snd_kcontrol_new snd_ice1712_pro_rate_reset __devinitdata = ;
static int snd_ice1712_pro_route_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int snd_ice1712_pro_route_analog_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_ice1712_pro_route_analog_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_ice1712_pro_route_spdif_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_ice1712_pro_route_spdif_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static struct snd_kcontrol_new snd_ice1712_mixer_pro_analog_route __devinitdata = ;
static struct snd_kcontrol_new snd_ice1712_mixer_pro_spdif_route __devinitdata = ;
static int snd_ice1712_pro_volume_rate_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int snd_ice1712_pro_volume_rate_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_ice1712_pro_volume_rate_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static struct snd_kcontrol_new snd_ice1712_mixer_pro_volume_rate __devinitdata = ;
static int snd_ice1712_pro_peak_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int snd_ice1712_pro_peak_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static struct snd_kcontrol_new snd_ice1712_mixer_pro_peak __devinitdata = ;
static struct snd_ice1712_card_info *card_tables[] __devinitdata = ;
static unsigned char __devinit snd_ice1712_read_i2c(struct snd_ice1712 *ice,
unsigned char dev,
unsigned char addr)
static int __devinit snd_ice1712_read_eeprom(struct snd_ice1712 *ice,
const char *modelname)
static int __devinit snd_ice1712_chip_init(struct snd_ice1712 *ice)
int __devinit snd_ice1712_spdif_build_controls(struct snd_ice1712 *ice)
static int __devinit snd_ice1712_build_controls(struct snd_ice1712 *ice)
static int snd_ice1712_free(struct snd_ice1712 *ice)
static int snd_ice1712_dev_free(struct snd_device *device)
static int __devinit snd_ice1712_create(struct snd_card *card,
struct pci_dev *pci,
const char *modelname,
int omni,
int cs8427_timeout,
int dxr_enable,
struct snd_ice1712 **r_ice1712)
static struct snd_ice1712_card_info no_matched __devinitdata;
static int __devinit snd_ice1712_probe(struct pci_dev *pci,
const struct pci_device_id *pci_id)
static void __devexit snd_ice1712_remove(struct pci_dev *pci)
static struct pci_driver driver = ;
static int __init alsa_card_ice1712_init(void)
static void __exit alsa_card_ice1712_exit(void)
module_init(alsa_card_ice1712_init)
module_exit(alsa_card_ice1712_exit)
