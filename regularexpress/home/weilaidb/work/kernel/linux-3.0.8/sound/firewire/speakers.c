#define OXFORD_FIRMWARE_ID_ADDRESS	(CSR_REGISTER_BASE + 0x50000)
#define OXFORD_HARDWARE_ID_ADDRESS	(CSR_REGISTER_BASE + 0x90020)
#define OXFORD_HARDWARE_ID_OXFW970	0x39443841
#define OXFORD_HARDWARE_ID_OXFW971	0x39373100
#define VENDOR_GRIFFIN		0x001292
#define VENDOR_LACIE		0x00d04b
#define SPECIFIER_1394TA	0x00a02d
#define VERSION_AVC		0x010001
struct device_info ;
struct fwspk ;
MODULE_DESCRIPTION("FireWire speakers driver");
MODULE_AUTHOR("Clemens Ladisch <clemens@ladisch.de>");
MODULE_LICENSE("GPL v2");
static int firewave_rate_constraint(struct snd_pcm_hw_params *params,
struct snd_pcm_hw_rule *rule)
static int firewave_channels_constraint(struct snd_pcm_hw_params *params,
struct snd_pcm_hw_rule *rule)
static int firewave_constraints(struct snd_pcm_runtime *runtime)
static int lacie_speakers_constraints(struct snd_pcm_runtime *runtime)
static int fwspk_open(struct snd_pcm_substream *substream)
static int fwspk_close(struct snd_pcm_substream *substream)
static void fwspk_stop_stream(struct fwspk *fwspk)
static int fwspk_set_rate(struct fwspk *fwspk, unsigned int sfc)
static int fwspk_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *hw_params)
static int fwspk_hw_free(struct snd_pcm_substream *substream)
static int fwspk_prepare(struct snd_pcm_substream *substream)
static int fwspk_trigger(struct snd_pcm_substream *substream, int cmd)
static snd_pcm_uframes_t fwspk_pointer(struct snd_pcm_substream *substream)
static int fwspk_create_pcm(struct fwspk *fwspk)
enum control_action ;
enum control_attribute ;
static int fwspk_mute_command(struct fwspk *fwspk, bool *value,
enum control_action action)
static int fwspk_volume_command(struct fwspk *fwspk, s16 *value,
unsigned int channel,
enum control_attribute attribute,
enum control_action action)
static int fwspk_mute_get(struct snd_kcontrol *control,
struct snd_ctl_elem_value *value)
static int fwspk_mute_put(struct snd_kcontrol *control,
struct snd_ctl_elem_value *value)
static int fwspk_volume_info(struct snd_kcontrol *control,
struct snd_ctl_elem_info *info)
static const u8 channel_map[6] = ;
static int fwspk_volume_get(struct snd_kcontrol *control,
struct snd_ctl_elem_value *value)
static int fwspk_volume_put(struct snd_kcontrol *control,
struct snd_ctl_elem_value *value)
static int fwspk_create_mixer(struct fwspk *fwspk)
static u32 fwspk_read_firmware_version(struct fw_unit *unit)
static void fwspk_card_free(struct snd_card *card)
static const struct device_info *__devinit fwspk_detect(struct fw_device *dev)
static int __devinit fwspk_probe(struct device *unit_dev)
static int __devexit fwspk_remove(struct device *dev)
static void fwspk_bus_reset(struct fw_unit *unit)
static const struct ieee1394_device_id fwspk_id_table[] = ;
MODULE_DEVICE_TABLE(ieee1394, fwspk_id_table);
static struct fw_driver fwspk_driver = ;
static int __init alsa_fwspk_init(void)
static void __exit alsa_fwspk_exit(void)
module_init(alsa_fwspk_init);
module_exit(alsa_fwspk_exit);
