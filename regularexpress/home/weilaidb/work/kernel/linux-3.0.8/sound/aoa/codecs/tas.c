MODULE_AUTHOR("Johannes Berg <johannes@sipsolutions.net>");
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("tas codec driver for snd-aoa");
#define PFX "snd-aoa-codec-tas: "
struct tas ;
static int tas_reset_init(struct tas *tas);
static struct tas *codec_to_tas(struct aoa_codec *codec)
static inline int tas_write_reg(struct tas *tas, u8 reg, u8 len, u8 *data)
static void tas3004_set_drc(struct tas *tas)
static void tas_set_treble(struct tas *tas)
static void tas_set_bass(struct tas *tas)
static void tas_set_volume(struct tas *tas)
static void tas_set_mixer(struct tas *tas)
static int tas_dev_register(struct snd_device *dev)
static struct snd_device_ops ops = ;
static int tas_snd_vol_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int tas_snd_vol_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int tas_snd_vol_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static struct snd_kcontrol_new volume_control = ;
#define tas_snd_mute_info	snd_ctl_boolean_stereo_info
static int tas_snd_mute_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int tas_snd_mute_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static struct snd_kcontrol_new mute_control = ;
static int tas_snd_mixer_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int tas_snd_mixer_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int tas_snd_mixer_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
#define MIXER_CONTROL(n,descr,idx)			\
static struct snd_kcontrol_new n##_control =
MIXER_CONTROL(pcm1, "PCM", 0);
MIXER_CONTROL(monitor, "Monitor", 2);
static int tas_snd_drc_range_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int tas_snd_drc_range_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int tas_snd_drc_range_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static struct snd_kcontrol_new drc_range_control = ;
#define tas_snd_drc_switch_info		snd_ctl_boolean_mono_info
static int tas_snd_drc_switch_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int tas_snd_drc_switch_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static struct snd_kcontrol_new drc_switch_control = ;
static int tas_snd_capture_source_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int tas_snd_capture_source_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int tas_snd_capture_source_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static struct snd_kcontrol_new capture_source_control = ;
static int tas_snd_treble_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int tas_snd_treble_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int tas_snd_treble_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static struct snd_kcontrol_new treble_control = ;
static int tas_snd_bass_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int tas_snd_bass_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int tas_snd_bass_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static struct snd_kcontrol_new bass_control = ;
static struct transfer_info tas_transfers[] = ;
static int tas_usable(struct codec_info_item *cii,
struct transfer_info *ti,
struct transfer_info *out)
static int tas_reset_init(struct tas *tas)
static int tas_switch_clock(struct codec_info_item *cii, enum clock_switch clock)
static int tas_suspend(struct tas *tas)
static int tas_resume(struct tas *tas)
static int _tas_suspend(struct codec_info_item *cii, pm_message_t state)
static int _tas_resume(struct codec_info_item *cii)
#define _tas_suspend	NULL
#define _tas_resume	NULL
static struct codec_info tas_codec_info = ;
static int tas_init_codec(struct aoa_codec *codec)
static void tas_exit_codec(struct aoa_codec *codec)
static int tas_create(struct i2c_adapter *adapter,
struct device_node *node,
int addr)
static int tas_i2c_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int tas_i2c_attach(struct i2c_adapter *adapter)
static int tas_i2c_remove(struct i2c_client *client)
static const struct i2c_device_id tas_i2c_id[] = ;
static struct i2c_driver tas_driver = ;
static int __init tas_init(void)
static void __exit tas_exit(void)
module_init(tas_init);
module_exit(tas_exit);
