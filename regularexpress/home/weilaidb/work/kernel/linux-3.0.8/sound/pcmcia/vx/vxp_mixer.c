#define MIC_LEVEL_MIN	0
#define MIC_LEVEL_MAX	8
static int vx_mic_level_info(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_info *uinfo)
static int vx_mic_level_get(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int vx_mic_level_put(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static const DECLARE_TLV_DB_SCALE(db_scale_mic, -21, 3, 0);
static struct snd_kcontrol_new vx_control_mic_level = ;
#define vx_mic_boost_info		snd_ctl_boolean_mono_info
static int vx_mic_boost_get(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int vx_mic_boost_put(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static struct snd_kcontrol_new vx_control_mic_boost = ;
int vxp_add_mic_controls(struct vx_core *_chip)
