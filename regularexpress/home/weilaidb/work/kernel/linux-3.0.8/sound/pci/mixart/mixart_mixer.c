static u32 mixart_analog_level[256] = ;
#define MIXART_ANALOG_CAPTURE_LEVEL_MIN   0
#define MIXART_ANALOG_CAPTURE_LEVEL_MAX   255
#define MIXART_ANALOG_CAPTURE_ZERO_LEVEL  176
#define MIXART_ANALOG_PLAYBACK_LEVEL_MIN  0
#define MIXART_ANALOG_PLAYBACK_LEVEL_MAX  192
#define MIXART_ANALOG_PLAYBACK_ZERO_LEVEL 189
static int mixart_update_analog_audio_level(struct snd_mixart* chip, int is_capture)
static int mixart_analog_vol_info(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_info *uinfo)
static int mixart_analog_vol_get(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int mixart_analog_vol_put(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static const DECLARE_TLV_DB_SCALE(db_scale_analog, -9600, 50, 0);
static struct snd_kcontrol_new mixart_control_analog_level = ;
#define mixart_sw_info		snd_ctl_boolean_stereo_info
static int mixart_audio_sw_get(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int mixart_audio_sw_put(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static struct snd_kcontrol_new mixart_control_output_switch = ;
static u32 mixart_digital_level[256] = ;
#define MIXART_DIGITAL_LEVEL_MIN   0
#define MIXART_DIGITAL_LEVEL_MAX   255
#define MIXART_DIGITAL_ZERO_LEVEL  219
int mixart_update_playback_stream_level(struct snd_mixart* chip, int is_aes, int idx)
int mixart_update_capture_stream_level(struct snd_mixart* chip, int is_aes)
static int mixart_digital_vol_info(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_info *uinfo)
#define MIXART_VOL_REC_MASK	1
#define MIXART_VOL_AES_MASK	2
static int mixart_pcm_vol_get(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int mixart_pcm_vol_put(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static const DECLARE_TLV_DB_SCALE(db_scale_digital, -10950, 50, 0);
static struct snd_kcontrol_new snd_mixart_pcm_vol =
;
static int mixart_pcm_sw_get(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int mixart_pcm_sw_put(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static struct snd_kcontrol_new mixart_control_pcm_switch = ;
static int mixart_update_monitoring(struct snd_mixart* chip, int channel)
static int mixart_monitor_vol_get(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int mixart_monitor_vol_put(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static struct snd_kcontrol_new mixart_control_monitor_vol = ;
static int mixart_monitor_sw_get(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int mixart_monitor_sw_put(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static struct snd_kcontrol_new mixart_control_monitor_sw = ;
static void mixart_reset_audio_levels(struct snd_mixart *chip)
int snd_mixart_create_mixer(struct mixart_mgr *mgr)
