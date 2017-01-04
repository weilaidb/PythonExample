MODULE_AUTHOR("Clemens Ladisch <clemens@ladisch.de>");
MODULE_DESCRIPTION("C-Media CMI8788 driver");
MODULE_LICENSE("GPL v2");
MODULE_SUPPORTED_DEVICE("");
static int index[SNDRV_CARDS] = SNDRV_DEFAULT_IDX;
static char *id[SNDRV_CARDS] = SNDRV_DEFAULT_STR;
static int enable[SNDRV_CARDS] = SNDRV_DEFAULT_ENABLE_PNP;
module_param_array(index, int, NULL, 0444);
MODULE_PARM_DESC(index, "card index");
module_param_array(id, charp, NULL, 0444);
MODULE_PARM_DESC(id, "ID string");
module_param_array(enable, bool, NULL, 0444);
MODULE_PARM_DESC(enable, "enable card");
enum ;
static DEFINE_PCI_DEVICE_TABLE(oxygen_ids) = ;
MODULE_DEVICE_TABLE(pci, oxygen_ids);
#define GPIO_AK5385_DFS_MASK	0x0003
#define GPIO_AK5385_DFS_NORMAL	0x0000
#define GPIO_AK5385_DFS_DOUBLE	0x0001
#define GPIO_AK5385_DFS_QUAD	0x0002
#define GPIO_MERIDIAN_DIG_MASK	0x0050
#define GPIO_MERIDIAN_DIG_EXT	0x0010
#define GPIO_MERIDIAN_DIG_BOARD	0x0040
#define GPIO_CLARO_DIG_COAX	0x0040
#define GPIO_CLARO_HP		0x0100
struct generic_data ;
static void ak4396_write(struct oxygen *chip, unsigned int codec,
u8 reg, u8 value)
static void ak4396_write_cached(struct oxygen *chip, unsigned int codec,
u8 reg, u8 value)
static void wm8785_write(struct oxygen *chip, u8 reg, unsigned int value)
static void ak4396_registers_init(struct oxygen *chip)
static void ak4396_init(struct oxygen *chip)
static void ak5385_init(struct oxygen *chip)
static void wm8785_registers_init(struct oxygen *chip)
static void wm8785_init(struct oxygen *chip)
static void generic_init(struct oxygen *chip)
static void meridian_init(struct oxygen *chip)
static void claro_enable_hp(struct oxygen *chip)
static void claro_init(struct oxygen *chip)
static void claro_halo_init(struct oxygen *chip)
static void fantasia_init(struct oxygen *chip)
static void stereo_output_init(struct oxygen *chip)
static void generic_cleanup(struct oxygen *chip)
static void claro_disable_hp(struct oxygen *chip)
static void claro_cleanup(struct oxygen *chip)
static void claro_suspend(struct oxygen *chip)
static void generic_resume(struct oxygen *chip)
static void meridian_resume(struct oxygen *chip)
static void claro_resume(struct oxygen *chip)
static void stereo_resume(struct oxygen *chip)
static void set_ak4396_params(struct oxygen *chip,
struct snd_pcm_hw_params *params)
static void update_ak4396_volume(struct oxygen *chip)
static void update_ak4396_mute(struct oxygen *chip)
static void set_wm8785_params(struct oxygen *chip,
struct snd_pcm_hw_params *params)
static void set_ak5385_params(struct oxygen *chip,
struct snd_pcm_hw_params *params)
static void set_no_params(struct oxygen *chip, struct snd_pcm_hw_params *params)
static int rolloff_info(struct snd_kcontrol *ctl,
struct snd_ctl_elem_info *info)
static int rolloff_get(struct snd_kcontrol *ctl,
struct snd_ctl_elem_value *value)
static int rolloff_put(struct snd_kcontrol *ctl,
struct snd_ctl_elem_value *value)
static const struct snd_kcontrol_new rolloff_control = ;
static int hpf_info(struct snd_kcontrol *ctl, struct snd_ctl_elem_info *info)
static int hpf_get(struct snd_kcontrol *ctl, struct snd_ctl_elem_value *value)
static int hpf_put(struct snd_kcontrol *ctl, struct snd_ctl_elem_value *value)
static const struct snd_kcontrol_new hpf_control = ;
static int meridian_dig_source_info(struct snd_kcontrol *ctl,
struct snd_ctl_elem_info *info)
static int claro_dig_source_info(struct snd_kcontrol *ctl,
struct snd_ctl_elem_info *info)
static int meridian_dig_source_get(struct snd_kcontrol *ctl,
struct snd_ctl_elem_value *value)
static int claro_dig_source_get(struct snd_kcontrol *ctl,
struct snd_ctl_elem_value *value)
static int meridian_dig_source_put(struct snd_kcontrol *ctl,
struct snd_ctl_elem_value *value)
static int claro_dig_source_put(struct snd_kcontrol *ctl,
struct snd_ctl_elem_value *value)
static const struct snd_kcontrol_new meridian_dig_source_control = ;
static const struct snd_kcontrol_new claro_dig_source_control = ;
static int generic_mixer_init(struct oxygen *chip)
static int generic_wm8785_mixer_init(struct oxygen *chip)
static int meridian_mixer_init(struct oxygen *chip)
static int claro_mixer_init(struct oxygen *chip)
static int claro_halo_mixer_init(struct oxygen *chip)
static void dump_ak4396_registers(struct oxygen *chip,
struct snd_info_buffer *buffer)
static void dump_wm8785_registers(struct oxygen *chip,
struct snd_info_buffer *buffer)
static void dump_oxygen_registers(struct oxygen *chip,
struct snd_info_buffer *buffer)
static const DECLARE_TLV_DB_LINEAR(ak4396_db_scale, TLV_DB_GAIN_MUTE, 0);
static const struct oxygen_model model_generic = ;
static int __devinit get_oxygen_model(struct oxygen *chip,
const struct pci_device_id *id)
static int __devinit generic_oxygen_probe(struct pci_dev *pci,
const struct pci_device_id *pci_id)
static struct pci_driver oxygen_driver = ;
static int __init alsa_card_oxygen_init(void)
static void __exit alsa_card_oxygen_exit(void)
module_init(alsa_card_oxygen_init)
module_exit(alsa_card_oxygen_exit)
