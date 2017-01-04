static void vx_write_codec_reg(struct vx_core *chip, int codec, unsigned int data)
union vx_codec_data ;
#define SET_CDC_DATA_SEL(di,s)          ((di).b.mh = (u8) (s))
#define SET_CDC_DATA_REG(di,r)          ((di).b.ml = (u8) (r))
#define SET_CDC_DATA_VAL(di,d)          ((di).b.ll = (u8) (d))
#define SET_CDC_DATA_INIT(di)           ((di).l = 0L, SET_CDC_DATA_SEL(di,XX_CODEC_SELECTOR))
static void vx_set_codec_reg(struct vx_core *chip, int codec, int reg, int val)
static void vx_set_analog_output_level(struct vx_core *chip, int codec, int left, int right)
#define DAC_ATTEN_MIN	0x08
#define DAC_ATTEN_MAX	0x38
void vx_toggle_dac_mute(struct vx_core *chip, int mute)
void vx_reset_codec(struct vx_core *chip, int cold_reset)
static void vx_change_audio_source(struct vx_core *chip, int src)
int vx_sync_audio_source(struct vx_core *chip)
struct vx_audio_level ;
static int vx_adjust_audio_level(struct vx_core *chip, int audio, int capture,
struct vx_audio_level *info)
int vx_set_monitor_level(struct vx_core *chip, int audio, int level, int active)
static int vx_set_audio_switch(struct vx_core *chip, int audio, int active)
static int vx_set_audio_gain(struct vx_core *chip, int audio, int capture, int level)
static void vx_reset_audio_levels(struct vx_core *chip)
#define VU_METER_CHANNELS	2
struct vx_vu_meter ;
static int vx_get_audio_vu_meter(struct vx_core *chip, int audio, int capture, struct vx_vu_meter *info)
static int vx_output_level_info(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_info *uinfo)
static int vx_output_level_get(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int vx_output_level_put(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static struct snd_kcontrol_new vx_control_output_level = ;
static int vx_audio_src_info(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_info *uinfo)
static int vx_audio_src_get(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int vx_audio_src_put(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static struct snd_kcontrol_new vx_control_audio_src = ;
static int vx_clock_mode_info(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_info *uinfo)
static int vx_clock_mode_get(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int vx_clock_mode_put(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static struct snd_kcontrol_new vx_control_clock_mode = ;
static int vx_audio_gain_info(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_info *uinfo)
static int vx_audio_gain_get(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int vx_audio_gain_put(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int vx_audio_monitor_get(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int vx_audio_monitor_put(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
#define vx_audio_sw_info	snd_ctl_boolean_stereo_info
static int vx_audio_sw_get(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int vx_audio_sw_put(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int vx_monitor_sw_get(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int vx_monitor_sw_put(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static const DECLARE_TLV_DB_SCALE(db_scale_audio_gain, -10975, 25, 0);
static struct snd_kcontrol_new vx_control_audio_gain = ;
static struct snd_kcontrol_new vx_control_output_switch = ;
static struct snd_kcontrol_new vx_control_monitor_gain = ;
static struct snd_kcontrol_new vx_control_monitor_switch = ;
static int vx_iec958_info(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_info *uinfo)
static int vx_iec958_get(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int vx_iec958_mask_get(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int vx_iec958_put(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static struct snd_kcontrol_new vx_control_iec958_mask = ;
static struct snd_kcontrol_new vx_control_iec958 = ;
#define METER_MAX	0xff
#define METER_SHIFT	16
static int vx_vu_meter_info(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_info *uinfo)
static int vx_vu_meter_get(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int vx_peak_meter_get(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
#define vx_saturation_info	snd_ctl_boolean_stereo_info
static int vx_saturation_get(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static struct snd_kcontrol_new vx_control_vu_meter = ;
static struct snd_kcontrol_new vx_control_peak_meter = ;
static struct snd_kcontrol_new vx_control_saturation = ;
int snd_vx_mixer_new(struct vx_core *chip)
