MODULE_AUTHOR("Johannes Berg <johannes@sipsolutions.net>");
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("pcm3052 (onyx) codec driver for snd-aoa");
#define PFX "snd-aoa-codec-onyx: "
struct onyx ;
#define codec_to_onyx(c) container_of(c, struct onyx, codec)
static int onyx_read_register(struct onyx *onyx, u8 reg, u8 *value)
static int onyx_write_register(struct onyx *onyx, u8 reg, u8 value)
static int onyx_dev_register(struct snd_device *dev)
static struct snd_device_ops ops = ;
#define VOLUME_RANGE_SHIFT	128
static int onyx_snd_vol_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int onyx_snd_vol_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int onyx_snd_vol_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static struct snd_kcontrol_new volume_control = ;
#define INPUTGAIN_RANGE_SHIFT	(-3)
static int onyx_snd_inputgain_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int onyx_snd_inputgain_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int onyx_snd_inputgain_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static struct snd_kcontrol_new inputgain_control = ;
static int onyx_snd_capture_source_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int onyx_snd_capture_source_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static void onyx_set_capture_source(struct onyx *onyx, int mic)
static int onyx_snd_capture_source_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static struct snd_kcontrol_new capture_source_control = ;
#define onyx_snd_mute_info	snd_ctl_boolean_stereo_info
static int onyx_snd_mute_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int onyx_snd_mute_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static struct snd_kcontrol_new mute_control = ;
#define onyx_snd_single_bit_info	snd_ctl_boolean_mono_info
#define FLAG_POLARITY_INVERT	1
#define FLAG_SPDIFLOCK		2
static int onyx_snd_single_bit_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int onyx_snd_single_bit_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
#define SINGLE_BIT(n, type, description, address, mask, flags)	 	\
static struct snd_kcontrol_new n##_control =
SINGLE_BIT(spdif,
MIXER,
SNDRV_CTL_NAME_IEC958("", PLAYBACK, SWITCH),
ONYX_REG_DIG_INFO4,
ONYX_SPDIF_ENABLE,
FLAG_SPDIFLOCK);
SINGLE_BIT(ovr1,
MIXER,
"Oversampling Rate",
ONYX_REG_DAC_CONTROL,
ONYX_OVR1,
0);
SINGLE_BIT(flt0,
MIXER,
"Fast Digital Filter Rolloff",
ONYX_REG_DAC_FILTER,
ONYX_ROLLOFF_FAST,
FLAG_POLARITY_INVERT);
SINGLE_BIT(hpf,
MIXER,
"Highpass Filter",
ONYX_REG_ADC_HPF_BYPASS,
ONYX_HPF_DISABLE,
FLAG_POLARITY_INVERT);
SINGLE_BIT(dm12,
MIXER,
"Digital De-Emphasis",
ONYX_REG_DAC_DEEMPH,
ONYX_DIGDEEMPH_CTRL,
0);
static int onyx_spdif_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int onyx_spdif_mask_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static struct snd_kcontrol_new onyx_spdif_mask = ;
static int onyx_spdif_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int onyx_spdif_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static struct snd_kcontrol_new onyx_spdif_ctrl = ;
static u8 register_map[] = ;
static u8 initial_values[ARRAY_SIZE(register_map)] = ;
static int onyx_register_init(struct onyx *onyx)
static struct transfer_info onyx_transfers[] = ;
static int onyx_usable(struct codec_info_item *cii,
struct transfer_info *ti,
struct transfer_info *out)
static int onyx_prepare(struct codec_info_item *cii,
struct bus_info *bi,
struct snd_pcm_substream *substream)
static int onyx_open(struct codec_info_item *cii,
struct snd_pcm_substream *substream)
static int onyx_close(struct codec_info_item *cii,
struct snd_pcm_substream *substream)
static int onyx_switch_clock(struct codec_info_item *cii,
enum clock_switch what)
static int onyx_suspend(struct codec_info_item *cii, pm_message_t state)
static int onyx_resume(struct codec_info_item *cii)
static struct codec_info onyx_codec_info = ;
static int onyx_init_codec(struct aoa_codec *codec)
static void onyx_exit_codec(struct aoa_codec *codec)
static int onyx_create(struct i2c_adapter *adapter,
struct device_node *node,
int addr)
static int onyx_i2c_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int onyx_i2c_attach(struct i2c_adapter *adapter)
static int onyx_i2c_remove(struct i2c_client *client)
static const struct i2c_device_id onyx_i2c_id[] = ;
static struct i2c_driver onyx_driver = ;
static int __init onyx_init(void)
static void __exit onyx_exit(void)
module_init(onyx_init);
module_exit(onyx_exit);
